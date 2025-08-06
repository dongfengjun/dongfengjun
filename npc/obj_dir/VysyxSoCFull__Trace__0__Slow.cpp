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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1535,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1536,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1537,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1541,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1542,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1543,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1545,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1546,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1547,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1548,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1549,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1550,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1551,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1552,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1553,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1554,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1535,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1536,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1537,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1539,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1540,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1541,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1542,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1543,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1544,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1545,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1546,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1547,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1548,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1549,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1550,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1551,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1552,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1553,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1554,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+648,"spi_sck", false,-1);
    tracep->declBus(c+649,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1232,"spi_mosi", false,-1);
    tracep->declBit(c+1555,"spi_miso", false,-1);
    tracep->declBit(c+1553,"uart_rx", false,-1);
    tracep->declBit(c+1554,"uart_tx", false,-1);
    tracep->declBit(c+1529,"psram_sck", false,-1);
    tracep->declBit(c+1530,"psram_ce_n", false,-1);
    tracep->declBus(c+1556,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1557,"sdram_clk", false,-1);
    tracep->declBit(c+650,"sdram_cke", false,-1);
    tracep->declBit(c+1233,"sdram_cs", false,-1);
    tracep->declBit(c+1234,"sdram_ras", false,-1);
    tracep->declBit(c+1235,"sdram_cas", false,-1);
    tracep->declBit(c+1236,"sdram_we", false,-1);
    tracep->declBus(c+1237,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1238,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+651,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1262,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1535,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1536,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1545,"ps2_clk", false,-1);
    tracep->declBit(c+1546,"ps2_data", false,-1);
    tracep->declBus(c+1547,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1548,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1550,"vga_hsync", false,-1);
    tracep->declBit(c+1551,"vga_vsync", false,-1);
    tracep->declBit(c+1552,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1309,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1310,"in_psel", false,-1);
    tracep->declBit(c+1053,"in_penable", false,-1);
    tracep->declBus(c+1626,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1311,"in_pwrite", false,-1);
    tracep->declBus(c+1312,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1313,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+652,"in_pready", false,-1);
    tracep->declBus(c+653,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+654,"in_pslverr", false,-1);
    tracep->declBus(c+1323,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1334,"out_psel", false,-1);
    tracep->declBit(c+1335,"out_penable", false,-1);
    tracep->declBus(c+1336,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"out_pwrite", false,-1);
    tracep->declBus(c+1338,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1340,"out_pready", false,-1);
    tracep->declBus(c+1558,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1341,"out_pslverr", false,-1);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1629,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1630,"DELAY", false,-1, 1,0);
    tracep->declBus(c+655,"state", false,-1, 1,0);
    tracep->declBus(c+656,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+657,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+658,"pslverr_reg", false,-1);
    tracep->declBus(c+1631,"r", false,-1, 10,0);
    tracep->declBus(c+1629,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1334,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1335,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1340,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1341,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1558,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1342,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1343,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+659,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1632,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1633,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1345,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1346,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+660,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1634,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+661,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1347,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1348,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+662,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1635,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+663,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1349,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1559,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1636,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1054,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1351,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1353,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1636,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1354,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1355,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1356,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1337,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1636,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1357,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1358,"sel_0", false,-1);
    tracep->declBit(c+1359,"sel_1", false,-1);
    tracep->declBit(c+1360,"sel_2", false,-1);
    tracep->declBit(c+1361,"sel_3", false,-1);
    tracep->declBit(c+1362,"sel_4", false,-1);
    tracep->declBit(c+1363,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1314,"auto_in_awready", false,-1);
    tracep->declBit(c+1091,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1314,"auto_in_wready", false,-1);
    tracep->declBit(c+1315,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1364,"auto_in_bready", false,-1);
    tracep->declBit(c+1365,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1561,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1097,"auto_in_arready", false,-1);
    tracep->declBit(c+1098,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1366,"auto_in_rready", false,-1);
    tracep->declBit(c+1367,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1310,"auto_out_psel", false,-1);
    tracep->declBit(c+1053,"auto_out_penable", false,-1);
    tracep->declBit(c+1311,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1309,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1312,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1313,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+652,"auto_out_pready", false,-1);
    tracep->declBit(c+654,"auto_out_pslverr", false,-1);
    tracep->declBus(c+653,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1053,"nodeOut_penable", false,-1);
    tracep->declBus(c+1055,"state", false,-1, 1,0);
    tracep->declBit(c+1097,"accept_read", false,-1);
    tracep->declBit(c+1314,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1311,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+664,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1561,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1367,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1365,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1276,"in_arready", false,-1);
    tracep->declBit(c+1102,"in_arvalid", false,-1);
    tracep->declBus(c+505,"in_arid", false,-1, 3,0);
    tracep->declBus(c+506,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1368,"in_rready", false,-1);
    tracep->declBit(c+665,"in_rvalid", false,-1);
    tracep->declBus(c+666,"in_rid", false,-1, 3,0);
    tracep->declBus(c+667,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+668,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+669,"in_rlast", false,-1);
    tracep->declBit(c+1277,"in_awready", false,-1);
    tracep->declBit(c+1103,"in_awvalid", false,-1);
    tracep->declBus(c+510,"in_awid", false,-1, 3,0);
    tracep->declBus(c+511,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1278,"in_wready", false,-1);
    tracep->declBit(c+1563,"in_wvalid", false,-1);
    tracep->declBus(c+1104,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"in_wlast", false,-1);
    tracep->declBit(c+1369,"in_bready", false,-1);
    tracep->declBit(c+670,"in_bvalid", false,-1);
    tracep->declBus(c+671,"in_bid", false,-1, 3,0);
    tracep->declBus(c+672,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1279,"out_arready", false,-1);
    tracep->declBit(c+1280,"out_arvalid", false,-1);
    tracep->declBus(c+1281,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1282,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1283,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1564,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1284,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1370,"out_rready", false,-1);
    tracep->declBit(c+673,"out_rvalid", false,-1);
    tracep->declBus(c+674,"out_rid", false,-1, 3,0);
    tracep->declBus(c+675,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1627,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"out_rlast", false,-1);
    tracep->declBit(c+1285,"out_awready", false,-1);
    tracep->declBit(c+1286,"out_awvalid", false,-1);
    tracep->declBus(c+1287,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1565,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1291,"out_wready", false,-1);
    tracep->declBit(c+1371,"out_wvalid", false,-1);
    tracep->declBus(c+1566,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1567,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1568,"out_wlast", false,-1);
    tracep->declBit(c+1569,"out_bready", false,-1);
    tracep->declBit(c+677,"out_bvalid", false,-1);
    tracep->declBus(c+674,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1627,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1626,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1638,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1639,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1640,"DELAY", false,-1, 2,0);
    tracep->declBus(c+678,"rstate", false,-1, 2,0);
    tracep->declBus(c+679,"wstate", false,-1, 2,0);
    tracep->declBus(c+680,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+681,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+682,"rvalid_reg", false,-1);
    tracep->declBus(c+683,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+684,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+688,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+689,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+690,"bvalid_reg", false,-1);
    tracep->declBus(c+691,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+692,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1631,"r", false,-1, 10,0);
    tracep->declBus(c+1629,"s", false,-1, 1,0);
    tracep->declBus(c+693,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1105,"auto_in_awvalid", false,-1);
    tracep->declBus(c+510,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+511,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1316,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1104,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_in_wlast", false,-1);
    tracep->declBit(c+484,"auto_in_bready", false,-1);
    tracep->declBit(c+1372,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1106,"auto_in_arvalid", false,-1);
    tracep->declBus(c+505,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+506,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1374,"auto_in_rready", false,-1);
    tracep->declBit(c+1375,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1573,"auto_in_rlast", false,-1);
    tracep->declBit(c+1377,"auto_out_awready", false,-1);
    tracep->declBit(c+1107,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1108,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1378,"auto_out_wready", false,-1);
    tracep->declBit(c+1317,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_out_wlast", false,-1);
    tracep->declBit(c+1379,"auto_out_bready", false,-1);
    tracep->declBit(c+1380,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1381,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1383,"auto_out_arready", false,-1);
    tracep->declBit(c+1110,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1111,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1374,"auto_out_rready", false,-1);
    tracep->declBit(c+1375,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1384,"auto_out_rlast", false,-1);
    tracep->declBit(c+1317,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1385,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1112,"len", false,-1, 7,0);
    tracep->declBus(c+1113,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1114,"len_1", false,-1, 7,0);
    tracep->declBus(c+1115,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1107,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1116,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1117,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1109,"w_last", false,-1);
    tracep->declBit(c+1379,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1106,"io_enq_valid", false,-1);
    tracep->declBus(c+505,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+506,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+507,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+508,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+509,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1386,"io_deq_ready", false,-1);
    tracep->declBit(c+1110,"io_deq_valid", false,-1);
    tracep->declBus(c+1099,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1118,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1119,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1101,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1120,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1110,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1387,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1105,"io_enq_valid", false,-1);
    tracep->declBus(c+510,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+511,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+512,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+513,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+514,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1388,"io_deq_ready", false,-1);
    tracep->declBit(c+1121,"io_deq_valid", false,-1);
    tracep->declBus(c+1092,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1122,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1123,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1094,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1124,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1121,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1389,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1316,"io_enq_valid", false,-1);
    tracep->declBus(c+1104,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+515,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1206,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1390,"io_deq_ready", false,-1);
    tracep->declBit(c+1318,"io_deq_valid", false,-1);
    tracep->declBus(c+1095,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1096,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1575,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1318,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1391,"do_enq", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1392,"auto_in_awready", false,-1);
    tracep->declBit(c+1125,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1162,"auto_in_wready", false,-1);
    tracep->declBit(c+1576,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1393,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1394,"auto_in_arready", false,-1);
    tracep->declBit(c+1127,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1395,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1394,"nodeIn_arready", false,-1);
    tracep->declBit(c+1392,"nodeIn_awready", false,-1);
    tracep->declBit(c+1129,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1396,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1130,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1396,"R0_en", false,-1);
    tracep->declBit(c+1533,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1131,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1397,"W0_en", false,-1);
    tracep->declBit(c+1533,"W0_clk", false,-1);
    tracep->declBus(c+1095,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1096,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1292,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+516,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+510,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+511,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1577,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1207,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1104,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+517,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1398,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1399,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1578,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1293,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+518,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+505,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+506,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1400,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1579,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1402,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1277,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1103,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+510,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+511,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1278,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1563,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1104,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1369,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+670,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+671,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+672,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1276,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+505,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+506,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+665,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+666,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+667,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+668,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+669,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1105,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+510,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+511,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1316,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1104,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+484,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1372,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1570,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+505,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+506,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1374,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1375,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1573,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1398,"in_0_bvalid", false,-1);
    tracep->declBit(c+1400,"in_0_rvalid", false,-1);
    tracep->declBit(c+1294,"in_0_wready", false,-1);
    tracep->declBit(c+1295,"in_0_awready", false,-1);
    tracep->declBit(c+1581,"in_0_arready", false,-1);
    tracep->declBit(c+1292,"anonIn_awready", false,-1);
    tracep->declBit(c+1293,"anonIn_arready", false,-1);
    tracep->declBit(c+520,"requestARIO_0_0", false,-1);
    tracep->declBit(c+521,"requestARIO_0_1", false,-1);
    tracep->declBit(c+522,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+523,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+524,"arSel", false,-1, 15,0);
    tracep->declBus(c+525,"awSel", false,-1, 15,0);
    tracep->declBus(c+1403,"rSel", false,-1, 15,0);
    tracep->declBus(c+1404,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1132,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1133,"in_0_awvalid", false,-1);
    tracep->declBit(c+1134,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1319,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1405,"anyValid", false,-1);
    tracep->declBus(c+1406,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1407,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1408,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1409,"prefixOR_1", false,-1);
    tracep->declBit(c+1410,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1411,"muxState_2_0", false,-1);
    tracep->declBit(c+1412,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1413,"anyValid_1", false,-1);
    tracep->declBus(c+1414,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1415,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1416,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1417,"winner_3_0", false,-1);
    tracep->declBit(c+1418,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1419,"muxState_3_0", false,-1);
    tracep->declBit(c+1420,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBus(c+526,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1296,"io_deq_ready", false,-1);
    tracep->declBit(c+1135,"io_deq_valid", false,-1);
    tracep->declBus(c+1136,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1135,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1297,"do_deq", false,-1);
    tracep->declBit(c+1298,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1533,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1298,"W0_en", false,-1);
    tracep->declBit(c+1533,"W0_clk", false,-1);
    tracep->declBus(c+526,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1421,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1137,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1378,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1317,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1379,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1380,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1381,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1422,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1138,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1374,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1375,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1384,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1392,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1126,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1162,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1576,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1393,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1394,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1127,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1128,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1395,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1139,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1582,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1140,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1583,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1314,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1091,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1314,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1315,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1364,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1365,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1561,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1097,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1098,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1366,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1367,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1562,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1561,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1380,"in_0_bvalid", false,-1);
    tracep->declBit(c+1375,"in_0_rvalid", false,-1);
    tracep->declBit(c+1423,"in_0_wready", false,-1);
    tracep->declBit(c+1424,"in_0_awready", false,-1);
    tracep->declBit(c+1422,"in_0_arready", false,-1);
    tracep->declBit(c+1421,"anonIn_awready", false,-1);
    tracep->declBit(c+1142,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1143,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1144,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1145,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1146,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1147,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1148,"arSel", false,-1, 15,0);
    tracep->declBus(c+1149,"awSel", false,-1, 15,0);
    tracep->declBus(c+1425,"rSel", false,-1, 15,0);
    tracep->declBus(c+1426,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1150,"in_0_awvalid", false,-1);
    tracep->declBit(c+1151,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1320,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1427,"anyValid", false,-1);
    tracep->declBus(c+1428,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1429,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1430,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1431,"prefixOR_1", false,-1);
    tracep->declBit(c+1432,"winner_3_1", false,-1);
    tracep->declBit(c+1433,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1434,"muxState_3_0", false,-1);
    tracep->declBit(c+1435,"muxState_3_1", false,-1);
    tracep->declBit(c+1436,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1437,"anyValid_1", false,-1);
    tracep->declBus(c+1438,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1439,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1440,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1441,"winner_4_0", false,-1);
    tracep->declBit(c+1442,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1443,"muxState_4_0", false,-1);
    tracep->declBit(c+1444,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBus(c+1152,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1445,"io_deq_ready", false,-1);
    tracep->declBit(c+1153,"io_deq_valid", false,-1);
    tracep->declBus(c+1154,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1153,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1446,"do_deq", false,-1);
    tracep->declBit(c+1447,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1641,"R0_en", false,-1);
    tracep->declBit(c+1533,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1447,"W0_en", false,-1);
    tracep->declBit(c+1533,"W0_clk", false,-1);
    tracep->declBus(c+1152,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1377,"auto_in_awready", false,-1);
    tracep->declBit(c+1107,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1108,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1378,"auto_in_wready", false,-1);
    tracep->declBit(c+1317,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_in_wlast", false,-1);
    tracep->declBit(c+1379,"auto_in_bready", false,-1);
    tracep->declBit(c+1380,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1381,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1383,"auto_in_arready", false,-1);
    tracep->declBit(c+1110,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1111,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1374,"auto_in_rready", false,-1);
    tracep->declBit(c+1375,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1384,"auto_in_rlast", false,-1);
    tracep->declBit(c+1421,"auto_out_awready", false,-1);
    tracep->declBit(c+1137,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1092,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1378,"auto_out_wready", false,-1);
    tracep->declBit(c+1317,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1095,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1109,"auto_out_wlast", false,-1);
    tracep->declBit(c+1379,"auto_out_bready", false,-1);
    tracep->declBit(c+1380,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1373,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1381,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1422,"auto_out_arready", false,-1);
    tracep->declBit(c+1138,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1374,"auto_out_rready", false,-1);
    tracep->declBit(c+1375,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1376,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1571,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1384,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1448,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1449,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1165,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1450,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1166,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1451,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1167,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1452,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1453,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1169,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1454,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1170,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1455,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1171,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1456,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1172,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1457,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1173,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1458,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1174,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1459,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1175,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1460,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1176,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1461,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1177,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1462,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1178,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1463,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1179,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1464,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1180,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1465,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1181,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1466,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1182,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1467,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1183,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1468,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1184,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1469,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1185,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1470,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1186,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1471,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1187,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1472,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1188,"io_enq_valid", false,-1);
    tracep->declBit(c+1108,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1473,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1189,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1474,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1190,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1475,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1191,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1476,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1192,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1477,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1193,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1478,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1194,"io_enq_valid", false,-1);
    tracep->declBit(c+1111,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1479,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1584,"reset", false,-1);
    tracep->declBit(c+1292,"auto_master_out_awready", false,-1);
    tracep->declBit(c+516,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+510,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+511,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1577,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1207,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1104,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+517,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1398,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1399,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1578,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1293,"auto_master_out_arready", false,-1);
    tracep->declBit(c+518,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+505,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+506,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1400,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1401,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1579,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1402,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1584,"reset", false,-1);
    tracep->declBit(c+1636,"io_interrupt", false,-1);
    tracep->declBit(c+1292,"io_master_awready", false,-1);
    tracep->declBit(c+516,"io_master_awvalid", false,-1);
    tracep->declBus(c+510,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+511,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1577,"io_master_wready", false,-1);
    tracep->declBit(c+1207,"io_master_wvalid", false,-1);
    tracep->declBus(c+1104,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"io_master_wlast", false,-1);
    tracep->declBit(c+517,"io_master_bready", false,-1);
    tracep->declBit(c+1398,"io_master_bvalid", false,-1);
    tracep->declBus(c+1399,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1578,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1293,"io_master_arready", false,-1);
    tracep->declBit(c+518,"io_master_arvalid", false,-1);
    tracep->declBus(c+505,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+506,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"io_master_rready", false,-1);
    tracep->declBit(c+1400,"io_master_rvalid", false,-1);
    tracep->declBus(c+1401,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1579,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1402,"io_master_rlast", false,-1);
    tracep->declBit(c+1642,"io_slave_awready", false,-1);
    tracep->declBit(c+1636,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1643,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1644,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1645,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1637,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1627,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1646,"io_slave_wready", false,-1);
    tracep->declBit(c+1636,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1644,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1643,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1636,"io_slave_wlast", false,-1);
    tracep->declBit(c+1636,"io_slave_bready", false,-1);
    tracep->declBit(c+1647,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1648,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1649,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1650,"io_slave_arready", false,-1);
    tracep->declBit(c+1636,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1643,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1644,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1645,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1637,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1627,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1636,"io_slave_rready", false,-1);
    tracep->declBit(c+1651,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1652,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1653,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1654,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1655,"io_slave_rlast", false,-1);
    tracep->declBit(c+341,"DIFFTEST", false,-1);
    tracep->declBus(c+1208,"pc", false,-1, 31,0);
    tracep->declBus(c+342,"dnpc", false,-1, 31,0);
    tracep->declBit(c+527,"pc_valid", false,-1);
    tracep->declBit(c+1656,"if_ready", false,-1);
    tracep->declBus(c+1209,"inst", false,-1, 31,0);
    tracep->declBit(c+1210,"if_valid", false,-1);
    tracep->declBit(c+1210,"id_ready", false,-1);
    tracep->declBus(c+1657,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1657,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+528,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+529,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1643,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1645,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+530,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1643,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1658,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+531,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1659,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1637,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+532,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1627,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+533,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1660,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+534,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1636,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1661,"if_axi_awready", false,-1);
    tracep->declBit(c+1636,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1662,"if_axi_wready", false,-1);
    tracep->declBit(c+1663,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1636,"if_axi_bready", false,-1);
    tracep->declBit(c+535,"if_axi_arvalid", false,-1);
    tracep->declBit(c+536,"if_axi_arready", false,-1);
    tracep->declBit(c+537,"if_axi_rvalid", false,-1);
    tracep->declBit(c+538,"if_axi_rready", false,-1);
    tracep->declBit(c+1664,"if_axi_wlast", false,-1);
    tracep->declBit(c+1665,"if_axi_rlast", false,-1);
    tracep->declBus(c+1666,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1667,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+539,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1480,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1668,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1669,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+540,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1670,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+485,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1671,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+486,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1672,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+541,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1673,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+542,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1585,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1586,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1674,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1587,"icache_axi_awready", false,-1);
    tracep->declBit(c+1675,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1588,"icache_axi_wready", false,-1);
    tracep->declBit(c+487,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1676,"icache_axi_bready", false,-1);
    tracep->declBit(c+543,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1589,"icache_axi_arready", false,-1);
    tracep->declBit(c+1590,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+544,"icache_axi_rready", false,-1);
    tracep->declBit(c+1677,"icache_axi_wlast", false,-1);
    tracep->declBit(c+488,"icache_axi_rlast", false,-1);
    tracep->declBit(c+1056,"id_valid", false,-1);
    tracep->declBit(c+1057,"ex_ready", false,-1);
    tracep->declBus(c+1058,"op", false,-1, 6,0);
    tracep->declBus(c+343,"rd", false,-1, 4,0);
    tracep->declBus(c+1059,"funct3", false,-1, 2,0);
    tracep->declBus(c+344,"rs1", false,-1, 4,0);
    tracep->declBus(c+345,"rs2", false,-1, 4,0);
    tracep->declBus(c+346,"imm", false,-1, 31,0);
    tracep->declBus(c+347,"funct7", false,-1, 6,0);
    tracep->declBus(c+348,"shamt", false,-1, 4,0);
    tracep->declBit(c+1211,"fencei", false,-1);
    tracep->declBit(c+1060,"ls_read", false,-1);
    tracep->declBit(c+1061,"ls_write", false,-1);
    tracep->declBit(c+1212,"ls_done", false,-1);
    tracep->declBit(c+349,"ex_valid", false,-1);
    tracep->declBit(c+350,"wb_ready", false,-1);
    tracep->declBus(c+351,"ex", false,-1, 31,0);
    tracep->declBit(c+1062,"ls_valid", false,-1);
    tracep->declBit(c+1063,"ls_wen", false,-1);
    tracep->declBus(c+1064,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+496,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1065,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1066,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1067,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1068,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1645,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1645,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1628,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1628,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+352,"mepc", false,-1, 31,0);
    tracep->declBus(c+353,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+354,"mstatus", false,-1, 31,0);
    tracep->declBus(c+355,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+356,"mcause", false,-1, 31,0);
    tracep->declBus(c+357,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+358,"mtvec", false,-1, 31,0);
    tracep->declBus(c+359,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+360,"gpr_wen", false,-1);
    tracep->declBit(c+361,"mepc_wen", false,-1);
    tracep->declBit(c+362,"mstatus_wen", false,-1);
    tracep->declBit(c+363,"mcause_wen", false,-1);
    tracep->declBit(c+364,"mtvec_wen", false,-1);
    tracep->declBus(c+545,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+546,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1591,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+547,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1592,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+548,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+549,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+550,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1678,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+489,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1679,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+490,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+551,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+552,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+553,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+554,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1593,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1594,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+555,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1299,"ls_axi_awready", false,-1);
    tracep->declBit(c+556,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1595,"ls_axi_wready", false,-1);
    tracep->declBit(c+1481,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+557,"ls_axi_bready", false,-1);
    tracep->declBit(c+558,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1300,"ls_axi_arready", false,-1);
    tracep->declBit(c+1596,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+559,"ls_axi_rready", false,-1);
    tracep->declBit(c+560,"ls_axi_wlast", false,-1);
    tracep->declBit(c+491,"ls_axi_rlast", false,-1);
    tracep->declBus(c+561,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1155,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+562,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+365,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+563,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+564,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+565,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+566,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+366,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+567,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+367,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+568,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+569,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+570,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+571,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+368,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+369,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+572,"c_axi_awvalid", false,-1);
    tracep->declBit(c+370,"c_axi_awready", false,-1);
    tracep->declBit(c+1213,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1069,"c_axi_wready", false,-1);
    tracep->declBit(c+371,"c_axi_bvalid", false,-1);
    tracep->declBit(c+573,"c_axi_bready", false,-1);
    tracep->declBit(c+574,"c_axi_arvalid", false,-1);
    tracep->declBit(c+372,"c_axi_arready", false,-1);
    tracep->declBit(c+373,"c_axi_rvalid", false,-1);
    tracep->declBit(c+575,"c_axi_rready", false,-1);
    tracep->declBit(c+1214,"c_axi_wlast", false,-1);
    tracep->declBit(c+374,"c_axi_rlast", false,-1);
    tracep->declBit(c+1597,"wb_done", false,-1);
    tracep->declBit(c+341,"difftest", false,-1);
    tracep->declBus(c+375,"xrd", false,-1, 31,0);
    tracep->declBus(c+376,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+377,"rf_wen", false,-1);
    tracep->declBus(c+378,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+379,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+380,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+381,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+382,"mepc_en", false,-1);
    tracep->declBit(c+383,"mstatus_en", false,-1);
    tracep->declBit(c+384,"mcause_en", false,-1);
    tracep->declBit(c+385,"mtvec_en", false,-1);
    tracep->declBus(c+386,"r1", false,-1, 31,0);
    tracep->declBus(c+387,"r2", false,-1, 31,0);
    tracep->declBus(c+388,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+389,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+370,"c_axi_awready", false,-1);
    tracep->declBit(c+572,"c_axi_awvalid", false,-1);
    tracep->declBus(c+566,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+561,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+564,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+568,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+570,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1069,"c_axi_wready", false,-1);
    tracep->declBit(c+1213,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1155,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+563,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"c_axi_wlast", false,-1);
    tracep->declBit(c+573,"c_axi_bready", false,-1);
    tracep->declBit(c+371,"c_axi_bvalid", false,-1);
    tracep->declBus(c+366,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+368,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+372,"c_axi_arready", false,-1);
    tracep->declBit(c+574,"c_axi_arvalid", false,-1);
    tracep->declBus(c+567,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+562,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+565,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+569,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+571,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+575,"c_axi_rready", false,-1);
    tracep->declBit(c+373,"c_axi_rvalid", false,-1);
    tracep->declBus(c+367,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+365,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+369,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+374,"c_axi_rlast", false,-1);
    tracep->declBit(c+370,"axi_awready", false,-1);
    tracep->declBit(c+1069,"axi_wready", false,-1);
    tracep->declBit(c+371,"axi_bvalid", false,-1);
    tracep->declBit(c+372,"axi_arready", false,-1);
    tracep->declBit(c+373,"axi_rvalid", false,-1);
    tracep->declBit(c+374,"axi_rlast", false,-1);
    tracep->declBus(c+368,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+369,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+366,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+367,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+365,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+390,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1680,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1681,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+391,"mtime", false,-1, 63,0);
    tracep->declBus(c+1598,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+351,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1056,"id_valid_i", false,-1);
    tracep->declBit(c+1057,"ex_ready_o", false,-1);
    tracep->declBit(c+349,"ex_valid_o", false,-1);
    tracep->declBit(c+350,"wb_ready_i", false,-1);
    tracep->declBus(c+1058,"op_i", false,-1, 6,0);
    tracep->declBus(c+1059,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+346,"imm_i", false,-1, 31,0);
    tracep->declBus(c+347,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+348,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+386,"r1_i", false,-1, 31,0);
    tracep->declBus(c+387,"r2_i", false,-1, 31,0);
    tracep->declBit(c+1060,"ls_read_o", false,-1);
    tracep->declBit(c+1061,"ls_write_o", false,-1);
    tracep->declBit(c+1212,"ls_done_i", false,-1);
    tracep->declBit(c+1062,"ls_valid_o", false,-1);
    tracep->declBit(c+1063,"ls_wen_o", false,-1);
    tracep->declBus(c+1064,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+496,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1065,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1066,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1067,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1068,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1645,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1645,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1628,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1628,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+545,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1208,"pc_i", false,-1, 31,0);
    tracep->declBus(c+342,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+352,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+354,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+356,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+358,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+353,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+355,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+357,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+359,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+360,"gpr_wen_o", false,-1);
    tracep->declBit(c+361,"mepc_wen_o", false,-1);
    tracep->declBit(c+362,"mstatus_wen_o", false,-1);
    tracep->declBit(c+363,"mcause_wen_o", false,-1);
    tracep->declBit(c+364,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1057,"ex_ready", false,-1);
    tracep->declBit(c+349,"ex_valid", false,-1);
    tracep->declBit(c+1070,"al_start", false,-1);
    tracep->declBit(c+1215,"al_done", false,-1);
    tracep->declBit(c+1060,"ls_read_reg", false,-1);
    tracep->declBit(c+1061,"ls_write_reg", false,-1);
    tracep->declBus(c+351,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+342,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+360,"gpr_wen_reg", false,-1);
    tracep->declBus(c+353,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+355,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+357,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+359,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+361,"mepc_wen_reg", false,-1);
    tracep->declBit(c+362,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+363,"mcause_wen_reg", false,-1);
    tracep->declBit(c+364,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+393,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1629,"READY", false,-1, 1,0);
    tracep->declBus(c+1630,"DONE", false,-1, 1,0);
    tracep->declBus(c+1071,"state", false,-1, 1,0);
    tracep->declBus(c+1599,"next_state", false,-1, 1,0);
    tracep->declBit(c+1072,"al_valid", false,-1);
    tracep->declBus(c+394,"al_res", false,-1, 31,0);
    tracep->declBus(c+1682,"a", false,-1, 31,0);
    tracep->declBus(c+1683,"b", false,-1, 31,0);
    tracep->declBus(c+1321,"ex", false,-1, 31,0);
    tracep->declBus(c+1073,"sel", false,-1, 3,0);
    tracep->declBus(c+1074,"x", false,-1, 31,0);
    tracep->declBus(c+1075,"y", false,-1, 31,0);
    tracep->declBus(c+576,"res", false,-1, 31,0);
    tracep->declBus(c+1643,"ADD", false,-1, 3,0);
    tracep->declBus(c+1684,"SUB", false,-1, 3,0);
    tracep->declBus(c+1685,"SLL", false,-1, 3,0);
    tracep->declBus(c+1686,"SRL", false,-1, 3,0);
    tracep->declBus(c+1687,"SRA", false,-1, 3,0);
    tracep->declBus(c+1688,"SLT", false,-1, 3,0);
    tracep->declBus(c+1689,"AND", false,-1, 3,0);
    tracep->declBus(c+1690,"OR", false,-1, 3,0);
    tracep->declBus(c+1691,"XOR", false,-1, 3,0);
    tracep->declBus(c+1692,"MUL", false,-1, 3,0);
    tracep->declBus(c+1693,"MULH", false,-1, 3,0);
    tracep->declBus(c+1694,"DIV", false,-1, 3,0);
    tracep->declBus(c+1695,"REM", false,-1, 3,0);
    tracep->declBus(c+1076,"csr", false,-1, 31,0);
    tracep->declBus(c+1600,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1077,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+497,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1077,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1077,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1078,"mepc_wen", false,-1);
    tracep->declBit(c+1079,"mstatus_wen", false,-1);
    tracep->declBit(c+1080,"mcause_wen", false,-1);
    tracep->declBit(c+1081,"mtvec_wen", false,-1);
    tracep->declBus(c+1156,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+346,"offset", false,-1, 31,0);
    tracep->declBit(c+1082,"jalen", false,-1);
    tracep->declBit(c+1083,"jalren", false,-1);
    tracep->declBit(c+498,"beqen", false,-1);
    tracep->declBit(c+499,"bneen", false,-1);
    tracep->declBit(c+500,"blten", false,-1);
    tracep->declBit(c+501,"bgeen", false,-1);
    tracep->declBit(c+502,"bltuen", false,-1);
    tracep->declBit(c+503,"bgeuen", false,-1);
    tracep->declBit(c+1084,"ecall_en", false,-1);
    tracep->declBit(c+504,"mret_en", false,-1);
    tracep->declBus(c+1322,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1085,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 31,0);
    tracep->declBus(c+1075,"b", false,-1, 31,0);
    tracep->declBus(c+1073,"opcode", false,-1, 3,0);
    tracep->declBit(c+1070,"start", false,-1);
    tracep->declBus(c+576,"res", false,-1, 31,0);
    tracep->declBit(c+1215,"done", false,-1);
    tracep->declBus(c+1643,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1684,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1685,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1686,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1687,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1688,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1689,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1690,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1691,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1692,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1693,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1694,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1695,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1629,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1630,"NULL", false,-1, 1,0);
    tracep->declBus(c+577,"state", false,-1, 1,0);
    tracep->declBus(c+578,"a_reg", false,-1, 31,0);
    tracep->declBus(c+579,"b_reg", false,-1, 31,0);
    tracep->declBus(c+580,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+581,"mul_result", false,-1, 63,0);
    tracep->declBus(c+583,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+584,"dividend", false,-1, 31,0);
    tracep->declBus(c+585,"divisor", false,-1, 31,0);
    tracep->declBus(c+586,"quotient", false,-1, 31,0);
    tracep->declBus(c+587,"remainder", false,-1, 31,0);
    tracep->declBus(c+588,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1696,"n", false,-1, 31,0);
    tracep->declBus(c+1696,"m", false,-1, 31,0);
    tracep->declBus(c+1697,"w", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1211,"fencei_i", false,-1);
    tracep->declBit(c+1661,"m_axi_awready", false,-1);
    tracep->declBit(c+1636,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1643,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1645,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1637,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1627,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1662,"m_axi_wready", false,-1);
    tracep->declBit(c+1636,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1657,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1643,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1664,"m_axi_wlast", false,-1);
    tracep->declBit(c+1636,"m_axi_bready", false,-1);
    tracep->declBit(c+1663,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1658,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+536,"m_axi_arready", false,-1);
    tracep->declBit(c+535,"m_axi_arvalid", false,-1);
    tracep->declBus(c+531,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+528,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+530,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+532,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+533,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+538,"m_axi_rready", false,-1);
    tracep->declBit(c+537,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1659,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+529,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+534,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1665,"m_axi_rlast", false,-1);
    tracep->declBit(c+1587,"s_axi_awready", false,-1);
    tracep->declBit(c+1674,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1670,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1666,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1669,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1672,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1673,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1588,"s_axi_wready", false,-1);
    tracep->declBit(c+1675,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1667,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1668,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1677,"s_axi_wlast", false,-1);
    tracep->declBit(c+1676,"s_axi_bready", false,-1);
    tracep->declBit(c+487,"s_axi_bvalid", false,-1);
    tracep->declBus(c+485,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1585,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1589,"s_axi_arready", false,-1);
    tracep->declBit(c+543,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1671,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+539,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+540,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+541,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+542,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+544,"s_axi_rready", false,-1);
    tracep->declBit(c+1590,"s_axi_rvalid", false,-1);
    tracep->declBus(c+486,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1480,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1586,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+488,"s_axi_rlast", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+589+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+593,"tag", false,-1, 26,0);
    tracep->declBus(c+594,"index", false,-1, 0,0);
    tracep->declBus(c+595,"offset", false,-1, 1,0);
    tracep->declBus(c+596,"access", false,-1, 7,0);
    tracep->declBus(c+597,"access_raw", false,-1, 7,0);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1629,"RETURN", false,-1, 1,0);
    tracep->declBus(c+598,"state", false,-1, 1,0);
    tracep->declBus(c+599,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+600,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+601,"j", false,-1, 31,0);
    tracep->declBus(c+602,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+603,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+604,"a", false,-1, 31,0);
    tracep->declBus(c+605,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1209,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1210,"if_valid_i", false,-1);
    tracep->declBit(c+1210,"id_ready_o", false,-1);
    tracep->declBit(c+1056,"id_valid_o", false,-1);
    tracep->declBit(c+1057,"ex_ready_i", false,-1);
    tracep->declBus(c+1058,"op_o", false,-1, 6,0);
    tracep->declBus(c+343,"rd_o", false,-1, 4,0);
    tracep->declBus(c+1059,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+344,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+345,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+346,"imm_o", false,-1, 31,0);
    tracep->declBus(c+347,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+348,"shamt_o", false,-1, 4,0);
    tracep->declBit(c+1211,"fencei_o", false,-1);
    tracep->declBus(c+1216,"op", false,-1, 6,0);
    tracep->declBus(c+1217,"rd", false,-1, 4,0);
    tracep->declBus(c+1218,"funct3", false,-1, 2,0);
    tracep->declBus(c+1219,"rs1", false,-1, 4,0);
    tracep->declBus(c+1220,"rs2", false,-1, 4,0);
    tracep->declBus(c+1221,"immI", false,-1, 31,0);
    tracep->declBus(c+1222,"immU", false,-1, 31,0);
    tracep->declBus(c+1223,"immS", false,-1, 31,0);
    tracep->declBus(c+1224,"immB", false,-1, 31,0);
    tracep->declBus(c+1225,"immJ", false,-1, 31,0);
    tracep->declBus(c+1226,"imm", false,-1, 31,0);
    tracep->declBus(c+1227,"funct7", false,-1, 6,0);
    tracep->declBus(c+1228,"shamt", false,-1, 4,0);
    tracep->declBit(c+395,"id_ready_reg", false,-1);
    tracep->declBit(c+1056,"id_valid_reg", false,-1);
    tracep->declBus(c+1058,"op_reg", false,-1, 6,0);
    tracep->declBus(c+343,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+1059,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+344,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+345,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+346,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+347,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+348,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1086,"state", false,-1);
    tracep->declBit(c+1601,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1208,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1209,"pc_o", false,-1, 31,0);
    tracep->declBus(c+606,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1656,"pc_valid_i", false,-1);
    tracep->declBit(c+1210,"if_ready_o", false,-1);
    tracep->declBit(c+1210,"if_valid_o", false,-1);
    tracep->declBit(c+1597,"id_ready_i", false,-1);
    tracep->declBit(c+1661,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1636,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1643,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1657,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1645,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1637,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1627,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1662,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1636,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1657,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1643,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1664,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1636,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1663,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1658,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1660,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+536,"if_axi_arready_i", false,-1);
    tracep->declBit(c+535,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+531,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+528,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+530,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+532,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+533,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+538,"if_axi_rready_o", false,-1);
    tracep->declBit(c+537,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1659,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+529,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+534,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1665,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"FETCH", false,-1, 0,0);
    tracep->declBit(c+1229,"state", false,-1);
    tracep->declBus(c+607,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1060,"ls_read_i", false,-1);
    tracep->declBit(c+1061,"ls_write_i", false,-1);
    tracep->declBit(c+1212,"ls_done_o", false,-1);
    tracep->declBus(c+545,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1062,"valid_i", false,-1);
    tracep->declBit(c+1063,"wen_i", false,-1);
    tracep->declBus(c+1064,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+496,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+1065,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+1066,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+1067,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+1068,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1645,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1645,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1628,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1628,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1299,"ls_axi_awready", false,-1);
    tracep->declBit(c+555,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1678,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+546,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+549,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+551,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+553,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1595,"ls_axi_wready", false,-1);
    tracep->declBit(c+556,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1591,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+548,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+560,"ls_axi_wlast", false,-1);
    tracep->declBit(c+557,"ls_axi_bready", false,-1);
    tracep->declBit(c+1481,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+489,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1593,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1300,"ls_axi_arready", false,-1);
    tracep->declBit(c+558,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1679,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+547,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+550,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+552,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+554,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+559,"ls_axi_rready", false,-1);
    tracep->declBit(c+1596,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+490,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1592,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1594,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+491,"ls_axi_rlast", false,-1);
    tracep->declBit(c+1212,"ls_done_reg", false,-1);
    tracep->declBus(c+545,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1626,"READ", false,-1, 2,0);
    tracep->declBus(c+1638,"WRITE1", false,-1, 2,0);
    tracep->declBus(c+1639,"WRITE2", false,-1, 2,0);
    tracep->declBus(c+1640,"DONE", false,-1, 2,0);
    tracep->declBus(c+608,"state", false,-1, 2,0);
    tracep->declBit(c+555,"axi_awvalid", false,-1);
    tracep->declBit(c+556,"axi_wvalid", false,-1);
    tracep->declBus(c+1678,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+546,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+609,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+549,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+551,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+553,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+548,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+557,"axi_bready", false,-1);
    tracep->declBit(c+560,"axi_wlast", false,-1);
    tracep->declBit(c+558,"axi_arvalid", false,-1);
    tracep->declBit(c+559,"axi_rready", false,-1);
    tracep->declBus(c+1679,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+547,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+550,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+552,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+554,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1208,"pc_o", false,-1, 31,0);
    tracep->declBus(c+342,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+527,"pc_valid_o", false,-1);
    tracep->declBit(c+1656,"if_ready_i", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+610,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1700,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1701,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBus(c+375,"wdata", false,-1, 31,0);
    tracep->declBus(c+376,"waddr", false,-1, 4,0);
    tracep->declBit(c+377,"wen", false,-1);
    tracep->declBus(c+344,"raddr1", false,-1, 4,0);
    tracep->declBus(c+386,"r1", false,-1, 31,0);
    tracep->declBus(c+345,"raddr2", false,-1, 4,0);
    tracep->declBus(c+387,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+396+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+349,"ex_valid_i", false,-1);
    tracep->declBit(c+350,"wb_ready_o", false,-1);
    tracep->declBit(c+1597,"wb_done_o", false,-1);
    tracep->declBit(c+341,"difftest", false,-1);
    tracep->declBus(c+375,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+351,"ex_i", false,-1, 31,0);
    tracep->declBus(c+376,"rd_o", false,-1, 4,0);
    tracep->declBus(c+343,"rd_i", false,-1, 4,0);
    tracep->declBit(c+377,"gpr_wen_o", false,-1);
    tracep->declBit(c+360,"gpr_wen_i", false,-1);
    tracep->declBus(c+353,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+355,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+357,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+359,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+378,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+379,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+380,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+381,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+361,"mepc_wen_i", false,-1);
    tracep->declBit(c+362,"mstatus_wen_i", false,-1);
    tracep->declBit(c+363,"mcause_wen_i", false,-1);
    tracep->declBit(c+364,"mtvec_wen_i", false,-1);
    tracep->declBit(c+382,"mepc_wen_o", false,-1);
    tracep->declBit(c+383,"mstatus_wen_o", false,-1);
    tracep->declBit(c+384,"mcause_wen_o", false,-1);
    tracep->declBit(c+385,"mtvec_wen_o", false,-1);
    tracep->declBit(c+350,"wb_ready_reg", false,-1);
    tracep->declBit(c+1597,"wb_done_reg", false,-1);
    tracep->declBit(c+341,"difftest_reg", false,-1);
    tracep->declBus(c+375,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+376,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+377,"gpr_wen_reg", false,-1);
    tracep->declBus(c+378,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+379,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+380,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+381,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+382,"mepc_wen_reg", false,-1);
    tracep->declBit(c+383,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+384,"mcause_wen_reg", false,-1);
    tracep->declBit(c+385,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1629,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1630,"NULL", false,-1, 1,0);
    tracep->declBus(c+1602,"state", false,-1, 1,0);
    tracep->declBus(c+1603,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBit(c+1587,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1674,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1670,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1666,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1669,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1672,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1673,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1588,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1675,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1667,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1668,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1677,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1676,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+487,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+485,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1585,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1589,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+543,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1671,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+539,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+540,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+541,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+542,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+544,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1590,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+486,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1480,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1586,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+488,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1299,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+555,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1678,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+546,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+549,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+551,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+553,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1595,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+556,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1591,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+548,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+560,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+557,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1481,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+489,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1593,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1300,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+558,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1679,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+547,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+550,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+552,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+554,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+559,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1596,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+490,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1592,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1594,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+491,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1292,"io_master_awready", false,-1);
    tracep->declBit(c+516,"io_master_awvalid", false,-1);
    tracep->declBus(c+510,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+511,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+512,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+513,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+514,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1577,"io_master_wready", false,-1);
    tracep->declBit(c+1207,"io_master_wvalid", false,-1);
    tracep->declBus(c+1104,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"io_master_wlast", false,-1);
    tracep->declBit(c+517,"io_master_bready", false,-1);
    tracep->declBit(c+1398,"io_master_bvalid", false,-1);
    tracep->declBus(c+1399,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1578,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1293,"io_master_arready", false,-1);
    tracep->declBit(c+518,"io_master_arvalid", false,-1);
    tracep->declBus(c+505,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+506,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+507,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+508,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+509,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"io_master_rready", false,-1);
    tracep->declBit(c+1400,"io_master_rvalid", false,-1);
    tracep->declBus(c+1401,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1579,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1580,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1402,"io_master_rlast", false,-1);
    tracep->declBit(c+370,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+572,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+566,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+561,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+564,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+568,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+570,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1069,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1213,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1155,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+563,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1214,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+573,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+371,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+366,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+368,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+372,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+574,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+567,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+562,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+565,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+569,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+571,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+575,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+373,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+367,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+365,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+369,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+374,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+388,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+389,"marchid", false,-1, 31,0);
    tracep->declBus(c+611,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1157,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+612,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1482,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+613,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+614,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+615,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+616,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+492,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+617,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+493,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+618,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+619,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+620,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+621,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1604,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1605,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+622,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1606,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+623,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1607,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+494,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+624,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+625,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1301,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1483,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+626,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+627,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+495,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+628,"state", false,-1, 1,0);
    tracep->declBus(c+1627,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1628,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1629,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1630,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+1680,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1681,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+629,"sel_clint", false,-1);
    tracep->declBus(c+1702,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1703,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+630,"sel_mvendorid", false,-1);
    tracep->declBit(c+631,"sel_marchid", false,-1);
    tracep->declBit(c+632,"sel_id", false,-1);
    tracep->declBus(c+633,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1158,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+634,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1608,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+635,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+636,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+637,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+638,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1704,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+639,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1705,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+640,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+641,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+642,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+643,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1706,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1707,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1708,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+644,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1230,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1709,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1710,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+645,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+646,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1641,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1641,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+647,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1231,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1711,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1712,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1644,"din", false,-1, 31,0);
    tracep->declBus(c+389,"dout", false,-1, 31,0);
    tracep->declBit(c+1636,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1644,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+380,"din", false,-1, 31,0);
    tracep->declBus(c+356,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1644,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+378,"din", false,-1, 31,0);
    tracep->declBus(c+352,"dout", false,-1, 31,0);
    tracep->declBit(c+382,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1713,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+379,"din", false,-1, 31,0);
    tracep->declBus(c+354,"dout", false,-1, 31,0);
    tracep->declBit(c+383,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1644,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+381,"din", false,-1, 31,0);
    tracep->declBus(c+358,"dout", false,-1, 31,0);
    tracep->declBit(c+385,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1714,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1584,"rst", false,-1);
    tracep->declBus(c+1644,"din", false,-1, 31,0);
    tracep->declBus(c+388,"dout", false,-1, 31,0);
    tracep->declBit(c+1636,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"io_d", false,-1);
    tracep->declBit(c+428,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"io_d", false,-1);
    tracep->declBit(c+428,"io_q", false,-1);
    tracep->declBit(c+428,"sync_0", false,-1);
    tracep->declBit(c+429,"sync_1", false,-1);
    tracep->declBit(c+430,"sync_2", false,-1);
    tracep->declBit(c+431,"sync_3", false,-1);
    tracep->declBit(c+432,"sync_4", false,-1);
    tracep->declBit(c+433,"sync_5", false,-1);
    tracep->declBit(c+434,"sync_6", false,-1);
    tracep->declBit(c+435,"sync_7", false,-1);
    tracep->declBit(c+436,"sync_8", false,-1);
    tracep->declBit(c+437,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1347,"auto_in_psel", false,-1);
    tracep->declBit(c+1348,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+662,"auto_in_pready", false,-1);
    tracep->declBit(c+1635,"auto_in_pslverr", false,-1);
    tracep->declBus(c+663,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1535,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1536,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1325,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1347,"in_psel", false,-1);
    tracep->declBit(c+1348,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+662,"in_pready", false,-1);
    tracep->declBus(c+663,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1635,"in_pslverr", false,-1);
    tracep->declBus(c+1535,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1536,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1537,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1538,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1539,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1540,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1541,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1542,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1543,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1544,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1645,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1715,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1716,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1717,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1718,"ONE", false,-1, 7,0);
    tracep->declBus(c+1719,"TWO", false,-1, 7,0);
    tracep->declBus(c+1720,"THREE", false,-1, 7,0);
    tracep->declBus(c+1721,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1722,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1723,"SIX", false,-1, 7,0);
    tracep->declBus(c+1724,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1725,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1726,"NINE", false,-1, 7,0);
    tracep->declBus(c+1727,"A", false,-1, 7,0);
    tracep->declBus(c+1728,"B", false,-1, 7,0);
    tracep->declBus(c+1729,"C", false,-1, 7,0);
    tracep->declBus(c+1730,"D", false,-1, 7,0);
    tracep->declBus(c+1731,"E", false,-1, 7,0);
    tracep->declBus(c+1732,"F", false,-1, 7,0);
    tracep->declBus(c+694,"led_reg", false,-1, 15,0);
    tracep->declBus(c+695,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+696+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1484,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1485,"write_en", false,-1);
    tracep->declBit(c+1486,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1345,"auto_in_psel", false,-1);
    tracep->declBit(c+1346,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+660,"auto_in_pready", false,-1);
    tracep->declBit(c+1634,"auto_in_pslverr", false,-1);
    tracep->declBus(c+661,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1545,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1546,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1325,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1345,"in_psel", false,-1);
    tracep->declBit(c+1346,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+660,"in_pready", false,-1);
    tracep->declBus(c+661,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1634,"in_pslverr", false,-1);
    tracep->declBit(c+1545,"ps2_clk", false,-1);
    tracep->declBit(c+1546,"ps2_data", false,-1);
    tracep->declBus(c+1733,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1734,"EXP", false,-1, 7,0);
    tracep->declBus(c+1329,"state", false,-1, 1,0);
    tracep->declBus(c+1330,"counter", false,-1, 3,0);
    tracep->declBus(c+1331,"buffer", false,-1, 7,0);
    tracep->declBus(c+1332,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1333,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1609,"ready", false,-1);
    tracep->declBus(c+1610,"rdata", false,-1, 31,0);
    tracep->declBit(c+1487,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1139,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1582,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1140,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1099,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1583,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1159,"raddr", false,-1, 31,0);
    tracep->declBit(c+1160,"ren", false,-1);
    tracep->declBus(c+1161,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1349,"auto_in_psel", false,-1);
    tracep->declBit(c+1350,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1323,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1559,"auto_in_pready", false,-1);
    tracep->declBit(c+1636,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1054,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1529,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1530,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1556,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1323,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1349,"in_psel", false,-1);
    tracep->declBit(c+1350,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1559,"in_pready", false,-1);
    tracep->declBus(c+1054,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1636,"in_pslverr", false,-1);
    tracep->declBit(c+1529,"qspi_sck", false,-1);
    tracep->declBit(c+1530,"qspi_ce_n", false,-1);
    tracep->declBus(c+1556,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1556,"din", false,-1, 3,0);
    tracep->declBus(c+1531,"dout", false,-1, 3,0);
    tracep->declBus(c+1532,"douten", false,-1, 3,0);
    tracep->declBit(c+1611,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBus(c+1323,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1338,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1054,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1339,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1349,"cyc_i", false,-1);
    tracep->declBit(c+1349,"stb_i", false,-1);
    tracep->declBit(c+1611,"ack_o", false,-1);
    tracep->declBit(c+1337,"we_i", false,-1);
    tracep->declBit(c+1529,"sck", false,-1);
    tracep->declBit(c+1530,"ce_n", false,-1);
    tracep->declBus(c+1556,"din", false,-1, 3,0);
    tracep->declBus(c+1531,"dout", false,-1, 3,0);
    tracep->declBus(c+1532,"douten", false,-1, 3,0);
    tracep->declBus(c+1698,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+704,"mr_sck", false,-1);
    tracep->declBit(c+705,"mr_ce_n", false,-1);
    tracep->declBus(c+1556,"mr_din", false,-1, 3,0);
    tracep->declBus(c+706,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+707,"mr_doe", false,-1);
    tracep->declBit(c+708,"mw_sck", false,-1);
    tracep->declBit(c+709,"mw_ce_n", false,-1);
    tracep->declBus(c+1556,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1488,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+710,"mw_doe", false,-1);
    tracep->declBit(c+1489,"mr_rd", false,-1);
    tracep->declBit(c+711,"mr_done", false,-1);
    tracep->declBit(c+1490,"mw_wr", false,-1);
    tracep->declBit(c+1491,"mw_done", false,-1);
    tracep->declBit(c+1349,"wb_valid", false,-1);
    tracep->declBit(c+1492,"wb_we", false,-1);
    tracep->declBit(c+1493,"wb_re", false,-1);
    tracep->declBit(c+712,"state", false,-1);
    tracep->declBit(c+1494,"nstate", false,-1);
    tracep->declBus(c+1495,"size", false,-1, 2,0);
    tracep->declBus(c+1496,"byte0", false,-1, 7,0);
    tracep->declBus(c+1497,"byte1", false,-1, 7,0);
    tracep->declBus(c+1498,"byte2", false,-1, 7,0);
    tracep->declBus(c+1499,"byte3", false,-1, 7,0);
    tracep->declBus(c+1326,"wdata", false,-1, 31,0);
    tracep->declBit(c+963,"qpi_flag", false,-1);
    tracep->declBit(c+964,"qpi_sck", false,-1);
    tracep->declBit(c+965,"qpi_ce_n", false,-1);
    tracep->declBus(c+966,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+967,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+968,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1327,"addr", false,-1, 23,0);
    tracep->declBit(c+1489,"rd", false,-1);
    tracep->declBus(c+1640,"size", false,-1, 2,0);
    tracep->declBit(c+711,"done", false,-1);
    tracep->declBus(c+1054,"line", false,-1, 31,0);
    tracep->declBit(c+704,"sck", false,-1);
    tracep->declBit(c+705,"ce_n", false,-1);
    tracep->declBus(c+1556,"din", false,-1, 3,0);
    tracep->declBus(c+706,"dout", false,-1, 3,0);
    tracep->declBit(c+707,"douten", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"READ", false,-1, 0,0);
    tracep->declBus(c+1735,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+713,"state", false,-1);
    tracep->declBit(c+1500,"nstate", false,-1);
    tracep->declBus(c+714,"counter", false,-1, 7,0);
    tracep->declBus(c+715,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1087+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1736,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+716,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1612,"rst_n", false,-1);
    tracep->declBus(c+1328,"addr", false,-1, 23,0);
    tracep->declBus(c+1326,"line", false,-1, 31,0);
    tracep->declBus(c+1495,"size", false,-1, 2,0);
    tracep->declBit(c+1490,"wr", false,-1);
    tracep->declBit(c+1491,"done", false,-1);
    tracep->declBit(c+708,"sck", false,-1);
    tracep->declBit(c+709,"ce_n", false,-1);
    tracep->declBus(c+1556,"din", false,-1, 3,0);
    tracep->declBus(c+1488,"dout", false,-1, 3,0);
    tracep->declBit(c+710,"douten", false,-1);
    tracep->declBus(c+1698,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1699,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1501,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+717,"state", false,-1);
    tracep->declBit(c+1502,"nstate", false,-1);
    tracep->declBus(c+718,"counter", false,-1, 7,0);
    tracep->declBus(c+719,"saddr", false,-1, 23,0);
    tracep->declBus(c+1737,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1285,"auto_in_awready", false,-1);
    tracep->declBit(c+1286,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1287,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1288,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1565,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1291,"auto_in_wready", false,-1);
    tracep->declBit(c+1371,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1566,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1567,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1568,"auto_in_wlast", false,-1);
    tracep->declBit(c+1569,"auto_in_bready", false,-1);
    tracep->declBit(c+677,"auto_in_bvalid", false,-1);
    tracep->declBus(c+674,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1627,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1279,"auto_in_arready", false,-1);
    tracep->declBit(c+1280,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1281,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1282,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1283,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1564,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1284,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1370,"auto_in_rready", false,-1);
    tracep->declBit(c+673,"auto_in_rvalid", false,-1);
    tracep->declBus(c+674,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+675,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1627,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"auto_in_rlast", false,-1);
    tracep->declBit(c+1557,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+650,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1233,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1234,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1235,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1236,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1237,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1238,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+651,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1262,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1285,"in_awready", false,-1);
    tracep->declBit(c+1286,"in_awvalid", false,-1);
    tracep->declBus(c+1288,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1287,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1565,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1291,"in_wready", false,-1);
    tracep->declBit(c+1371,"in_wvalid", false,-1);
    tracep->declBus(c+1566,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1567,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1568,"in_wlast", false,-1);
    tracep->declBit(c+1569,"in_bready", false,-1);
    tracep->declBit(c+677,"in_bvalid", false,-1);
    tracep->declBus(c+1627,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+674,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1279,"in_arready", false,-1);
    tracep->declBit(c+1280,"in_arvalid", false,-1);
    tracep->declBus(c+1282,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1281,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1283,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1564,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1284,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1370,"in_rready", false,-1);
    tracep->declBit(c+673,"in_rvalid", false,-1);
    tracep->declBus(c+1627,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+675,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+676,"in_rlast", false,-1);
    tracep->declBus(c+674,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1557,"sdram_clk", false,-1);
    tracep->declBit(c+650,"sdram_cke", false,-1);
    tracep->declBit(c+1233,"sdram_cs", false,-1);
    tracep->declBit(c+1234,"sdram_ras", false,-1);
    tracep->declBit(c+1235,"sdram_cas", false,-1);
    tracep->declBit(c+1236,"sdram_we", false,-1);
    tracep->declBus(c+1237,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1238,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+651,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1262,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+720,"sdram_dout_en", false,-1);
    tracep->declBus(c+721,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBit(c+1286,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1288,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1287,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1289,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1290,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1371,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1566,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1567,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1568,"inport_wlast_i", false,-1);
    tracep->declBit(c+1569,"inport_bready_i", false,-1);
    tracep->declBit(c+1280,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1282,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1281,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1283,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1284,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1370,"inport_rready_i", false,-1);
    tracep->declBus(c+1262,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1285,"inport_awready_o", false,-1);
    tracep->declBit(c+1291,"inport_wready_o", false,-1);
    tracep->declBit(c+677,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1627,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+674,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1279,"inport_arready_o", false,-1);
    tracep->declBit(c+673,"inport_rvalid_o", false,-1);
    tracep->declBus(c+675,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1627,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+674,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+676,"inport_rlast_o", false,-1);
    tracep->declBit(c+1557,"sdram_clk_o", false,-1);
    tracep->declBit(c+650,"sdram_cke_o", false,-1);
    tracep->declBit(c+1233,"sdram_cs_o", false,-1);
    tracep->declBit(c+1234,"sdram_ras_o", false,-1);
    tracep->declBit(c+1235,"sdram_cas_o", false,-1);
    tracep->declBit(c+1236,"sdram_we_o", false,-1);
    tracep->declBus(c+651,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1237,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1238,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+721,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+720,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1738,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1739,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1740,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1741,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1302,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1503,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1303,"ram_rd_w", false,-1);
    tracep->declBit(c+1239,"ram_accept_w", false,-1);
    tracep->declBus(c+1566,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+722,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1304,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+723,"ram_ack_w", false,-1);
    tracep->declBit(c+1636,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBit(c+1286,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1288,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1287,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1289,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1290,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1371,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1566,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1567,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1568,"axi_wlast_i", false,-1);
    tracep->declBit(c+1569,"axi_bready_i", false,-1);
    tracep->declBit(c+1280,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1282,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1281,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1283,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1284,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1370,"axi_rready_i", false,-1);
    tracep->declBit(c+1239,"ram_accept_i", false,-1);
    tracep->declBit(c+723,"ram_ack_i", false,-1);
    tracep->declBit(c+1636,"ram_error_i", false,-1);
    tracep->declBus(c+722,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1285,"axi_awready_o", false,-1);
    tracep->declBit(c+1291,"axi_wready_o", false,-1);
    tracep->declBit(c+677,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1627,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+674,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1279,"axi_arready_o", false,-1);
    tracep->declBit(c+673,"axi_rvalid_o", false,-1);
    tracep->declBus(c+675,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1627,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+674,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+676,"axi_rlast_o", false,-1);
    tracep->declBus(c+1503,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1303,"ram_rd_o", false,-1);
    tracep->declBus(c+1304,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1302,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1566,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+724,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+725,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+726,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+727,"req_rd_q", false,-1);
    tracep->declBit(c+728,"req_wr_q", false,-1);
    tracep->declBus(c+729,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+730,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+731,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+732,"req_prio_q", false,-1);
    tracep->declBit(c+733,"req_hold_rd_q", false,-1);
    tracep->declBit(c+734,"req_hold_wr_q", false,-1);
    tracep->declBit(c+735,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1504,"req_push_w", false,-1);
    tracep->declBus(c+1613,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+736,"req_out_valid_w", false,-1);
    tracep->declBus(c+737,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1505,"resp_accept_w", false,-1);
    tracep->declBit(c+738,"resp_is_write_w", false,-1);
    tracep->declBit(c+739,"resp_is_read_w", false,-1);
    tracep->declBit(c+676,"resp_is_last_w", false,-1);
    tracep->declBus(c+674,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+740,"resp_valid_w", false,-1);
    tracep->declBit(c+741,"write_prio_w", false,-1);
    tracep->declBit(c+742,"read_prio_w", false,-1);
    tracep->declBit(c+1305,"write_active_w", false,-1);
    tracep->declBit(c+1303,"read_active_w", false,-1);
    tracep->declBus(c+1302,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1614,"wr_w", false,-1);
    tracep->declBit(c+1303,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1742,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1696,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1741,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBus(c+1613,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1504,"push_i", false,-1);
    tracep->declBit(c+1505,"pop_i", false,-1);
    tracep->declBus(c+737,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+735,"accept_o", false,-1);
    tracep->declBit(c+736,"valid_o", false,-1);
    tracep->declBus(c+1697,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+743+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+747,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+748,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+749,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1701,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1696,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1741,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBus(c+722,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+723,"push_i", false,-1);
    tracep->declBit(c+1505,"pop_i", false,-1);
    tracep->declBus(c+675,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+750,"accept_o", false,-1);
    tracep->declBit(c+740,"valid_o", false,-1);
    tracep->declBus(c+1697,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+751+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+755,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+756,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+757,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBus(c+1503,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1303,"inport_rd_i", false,-1);
    tracep->declBus(c+1304,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1302,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1566,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1262,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1239,"inport_accept_o", false,-1);
    tracep->declBit(c+723,"inport_ack_o", false,-1);
    tracep->declBit(c+1636,"inport_error_o", false,-1);
    tracep->declBus(c+722,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1557,"sdram_clk_o", false,-1);
    tracep->declBit(c+650,"sdram_cke_o", false,-1);
    tracep->declBit(c+1233,"sdram_cs_o", false,-1);
    tracep->declBit(c+1234,"sdram_ras_o", false,-1);
    tracep->declBit(c+1235,"sdram_cas_o", false,-1);
    tracep->declBit(c+1236,"sdram_we_o", false,-1);
    tracep->declBus(c+651,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1237,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1238,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+721,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+720,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1738,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1739,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1740,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1741,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1697,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1696,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1743,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1744,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1745,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1746,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1747,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1696,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1690,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1686,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1688,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1687,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1689,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1685,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1684,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1643,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1748,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1696,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1643,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1684,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1685,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1686,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1687,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1688,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1689,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1690,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1691,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1692,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1749,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1749,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1701,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1749,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1741,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1741,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1742,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1302,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1503,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1303,"ram_rd_w", false,-1);
    tracep->declBit(c+1239,"ram_accept_w", false,-1);
    tracep->declBus(c+1566,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+722,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+723,"ram_ack_w", false,-1);
    tracep->declBit(c+1506,"ram_req_w", false,-1);
    tracep->declBus(c+1240,"command_q", false,-1, 3,0);
    tracep->declBus(c+1237,"addr_q", false,-1, 12,0);
    tracep->declBus(c+721,"data_q", false,-1, 31,0);
    tracep->declBit(c+758,"data_rd_en_q", false,-1);
    tracep->declBus(c+651,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+650,"cke_q", false,-1);
    tracep->declBus(c+1238,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1750,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+759,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1262,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+760,"refresh_q", false,-1);
    tracep->declBus(c+1241,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+761+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1242,"state_q", false,-1, 3,0);
    tracep->declBus(c+1507,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1508,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+769,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+770,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1306,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1307,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1308,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1696,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+771,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1509,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1751,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1243,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+772,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+722,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+773,"idx", false,-1, 31,0);
    tracep->declBus(c+774,"rd_q", false,-1, 3,0);
    tracep->declBit(c+723,"ack_q", false,-1);
    tracep->declArray(c+1244,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1355,"auto_in_psel", false,-1);
    tracep->declBit(c+1356,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"auto_in_pready", false,-1);
    tracep->declBit(c+1636,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1357,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+648,"spi_bundle_sck", false,-1);
    tracep->declBus(c+649,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1232,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1555,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1752,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1753,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1743,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1510,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1355,"in_psel", false,-1);
    tracep->declBit(c+1356,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1560,"in_pready", false,-1);
    tracep->declBus(c+1357,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1636,"in_pslverr", false,-1);
    tracep->declBit(c+648,"spi_sck", false,-1);
    tracep->declBus(c+649,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1232,"spi_mosi", false,-1);
    tracep->declBit(c+1555,"spi_miso", false,-1);
    tracep->declBit(c+775,"spi_irq_out", false,-1);
    tracep->declBus(c+1511,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1512,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1513,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1514,"wb_we_i", false,-1);
    tracep->declBit(c+1515,"wb_stb_i", false,-1);
    tracep->declBit(c+1516,"wb_cyc_i", false,-1);
    tracep->declBit(c+776,"wb_ack_o", false,-1);
    tracep->declBus(c+777,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1626,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1638,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1639,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1640,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1754,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1755,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1756,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+438,"state", false,-1, 2,0);
    tracep->declBus(c+439,"next_state", false,-1, 2,0);
    tracep->declBus(c+440,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+441,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+442,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+443,"flash_pwrite", false,-1);
    tracep->declBit(c+444,"flash_psel", false,-1);
    tracep->declBit(c+445,"flash_penable", false,-1);
    tracep->declBit(c+446,"flash_pready", false,-1);
    tracep->declBus(c+447,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1757,"Tp", false,-1, 31,0);
    tracep->declBit(c+1533,"wb_clk_i", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBus(c+1511,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1512,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+777,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1513,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1514,"wb_we_i", false,-1);
    tracep->declBit(c+1515,"wb_stb_i", false,-1);
    tracep->declBit(c+1516,"wb_cyc_i", false,-1);
    tracep->declBit(c+776,"wb_ack_o", false,-1);
    tracep->declBit(c+1636,"wb_err_o", false,-1);
    tracep->declBit(c+775,"wb_int_o", false,-1);
    tracep->declBus(c+649,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+648,"sclk_pad_o", false,-1);
    tracep->declBit(c+1232,"mosi_pad_o", false,-1);
    tracep->declBit(c+1555,"miso_pad_i", false,-1);
    tracep->declBus(c+778,"divider", false,-1, 15,0);
    tracep->declBus(c+779,"ctrl", false,-1, 13,0);
    tracep->declBus(c+780,"ss", false,-1, 7,0);
    tracep->declBus(c+1517,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+781,"rx", false,-1, 127,0);
    tracep->declBit(c+785,"rx_negedge", false,-1);
    tracep->declBit(c+786,"tx_negedge", false,-1);
    tracep->declBus(c+787,"char_len", false,-1, 6,0);
    tracep->declBit(c+788,"go", false,-1);
    tracep->declBit(c+789,"lsb", false,-1);
    tracep->declBit(c+790,"ie", false,-1);
    tracep->declBit(c+791,"ass", false,-1);
    tracep->declBit(c+1518,"spi_divider_sel", false,-1);
    tracep->declBit(c+1519,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1520,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1521,"spi_ss_sel", false,-1);
    tracep->declBit(c+792,"tip", false,-1);
    tracep->declBit(c+793,"pos_edge", false,-1);
    tracep->declBit(c+794,"neg_edge", false,-1);
    tracep->declBit(c+795,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1757,"Tp", false,-1, 31,0);
    tracep->declBit(c+1533,"clk_in", false,-1);
    tracep->declBit(c+1534,"rst", false,-1);
    tracep->declBit(c+792,"enable", false,-1);
    tracep->declBit(c+788,"go", false,-1);
    tracep->declBit(c+795,"last_clk", false,-1);
    tracep->declBus(c+778,"divider", false,-1, 15,0);
    tracep->declBit(c+648,"clk_out", false,-1);
    tracep->declBit(c+793,"pos_edge", false,-1);
    tracep->declBit(c+794,"neg_edge", false,-1);
    tracep->declBus(c+796,"cnt", false,-1, 15,0);
    tracep->declBit(c+797,"cnt_zero", false,-1);
    tracep->declBit(c+798,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1757,"Tp", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"rst", false,-1);
    tracep->declBus(c+1522,"latch", false,-1, 3,0);
    tracep->declBus(c+1513,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+787,"len", false,-1, 6,0);
    tracep->declBit(c+789,"lsb", false,-1);
    tracep->declBit(c+788,"go", false,-1);
    tracep->declBit(c+793,"pos_edge", false,-1);
    tracep->declBit(c+794,"neg_edge", false,-1);
    tracep->declBit(c+785,"rx_negedge", false,-1);
    tracep->declBit(c+786,"tx_negedge", false,-1);
    tracep->declBit(c+792,"tip", false,-1);
    tracep->declBit(c+795,"last", false,-1);
    tracep->declBus(c+1512,"p_in", false,-1, 31,0);
    tracep->declArray(c+781,"p_out", false,-1, 127,0);
    tracep->declBit(c+648,"s_clk", false,-1);
    tracep->declBit(c+1555,"s_in", false,-1);
    tracep->declBit(c+1232,"s_out", false,-1);
    tracep->declBus(c+799,"cnt", false,-1, 7,0);
    tracep->declArray(c+781,"data", false,-1, 127,0);
    tracep->declBus(c+800,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+801,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+802,"rx_clk", false,-1);
    tracep->declBit(c+803,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1351,"auto_in_psel", false,-1);
    tracep->declBit(c+1352,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1324,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1353,"auto_in_pready", false,-1);
    tracep->declBit(c+1636,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1354,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1553,"uart_rx", false,-1);
    tracep->declBit(c+1554,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1351,"in_psel", false,-1);
    tracep->declBit(c+1352,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1353,"in_pready", false,-1);
    tracep->declBit(c+1636,"in_pslverr", false,-1);
    tracep->declBus(c+1325,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1354,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1553,"uart_rx", false,-1);
    tracep->declBit(c+1554,"uart_tx", false,-1);
    tracep->declBit(c+804,"rtsn", false,-1);
    tracep->declBit(c+1636,"ctsn", false,-1);
    tracep->declBit(c+805,"dtr_pad_o", false,-1);
    tracep->declBit(c+1636,"dsr_pad_i", false,-1);
    tracep->declBit(c+1636,"ri_pad_i", false,-1);
    tracep->declBit(c+1636,"dcd_pad_i", false,-1);
    tracep->declBit(c+806,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1523,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1524,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+448,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1525,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+807,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBus(c+1523,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1526,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1525,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1554,"stx_pad_o", false,-1);
    tracep->declBit(c+1553,"srx_pad_i", false,-1);
    tracep->declBus(c+1691,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+807,"rts_pad_o", false,-1);
    tracep->declBit(c+805,"dtr_pad_o", false,-1);
    tracep->declBit(c+806,"int_o", false,-1);
    tracep->declBit(c+808,"enable", false,-1);
    tracep->declBit(c+809,"srx_pad", false,-1);
    tracep->declBus(c+810,"ier", false,-1, 3,0);
    tracep->declBus(c+811,"iir", false,-1, 3,0);
    tracep->declBus(c+812,"fcr", false,-1, 1,0);
    tracep->declBus(c+813,"mcr", false,-1, 4,0);
    tracep->declBus(c+814,"lcr", false,-1, 7,0);
    tracep->declBus(c+815,"msr", false,-1, 7,0);
    tracep->declBus(c+816,"dl", false,-1, 15,0);
    tracep->declBus(c+817,"scratch", false,-1, 7,0);
    tracep->declBit(c+818,"start_dlc", false,-1);
    tracep->declBit(c+819,"lsr_mask_d", false,-1);
    tracep->declBit(c+820,"msi_reset", false,-1);
    tracep->declBus(c+821,"dlc", false,-1, 15,0);
    tracep->declBus(c+822,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+823,"rx_reset", false,-1);
    tracep->declBit(c+824,"tx_reset", false,-1);
    tracep->declBit(c+825,"dlab", false,-1);
    tracep->declBit(c+1641,"cts_pad_i", false,-1);
    tracep->declBit(c+1636,"dsr_pad_i", false,-1);
    tracep->declBit(c+1636,"ri_pad_i", false,-1);
    tracep->declBit(c+1636,"dcd_pad_i", false,-1);
    tracep->declBit(c+826,"loopback", false,-1);
    tracep->declBit(c+1636,"cts", false,-1);
    tracep->declBit(c+1641,"dsr", false,-1);
    tracep->declBit(c+1641,"ri", false,-1);
    tracep->declBit(c+1641,"dcd", false,-1);
    tracep->declBit(c+827,"cts_c", false,-1);
    tracep->declBit(c+828,"dsr_c", false,-1);
    tracep->declBit(c+829,"ri_c", false,-1);
    tracep->declBit(c+830,"dcd_c", false,-1);
    tracep->declBus(c+831,"lsr", false,-1, 7,0);
    tracep->declBit(c+832,"lsr0", false,-1);
    tracep->declBit(c+833,"lsr1", false,-1);
    tracep->declBit(c+834,"lsr2", false,-1);
    tracep->declBit(c+835,"lsr3", false,-1);
    tracep->declBit(c+836,"lsr4", false,-1);
    tracep->declBit(c+837,"lsr5", false,-1);
    tracep->declBit(c+838,"lsr6", false,-1);
    tracep->declBit(c+839,"lsr7", false,-1);
    tracep->declBit(c+840,"lsr0r", false,-1);
    tracep->declBit(c+841,"lsr1r", false,-1);
    tracep->declBit(c+842,"lsr2r", false,-1);
    tracep->declBit(c+843,"lsr3r", false,-1);
    tracep->declBit(c+844,"lsr4r", false,-1);
    tracep->declBit(c+845,"lsr5r", false,-1);
    tracep->declBit(c+846,"lsr6r", false,-1);
    tracep->declBit(c+847,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+848,"rls_int", false,-1);
    tracep->declBit(c+849,"rda_int", false,-1);
    tracep->declBit(c+850,"ti_int", false,-1);
    tracep->declBit(c+851,"thre_int", false,-1);
    tracep->declBit(c+852,"ms_int", false,-1);
    tracep->declBit(c+853,"tf_push", false,-1);
    tracep->declBit(c+854,"rf_pop", false,-1);
    tracep->declBus(c+1615,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+855,"rf_error_bit", false,-1);
    tracep->declBit(c+833,"rf_overrun", false,-1);
    tracep->declBit(c+856,"rf_push_pulse", false,-1);
    tracep->declBus(c+857,"rf_count", false,-1, 4,0);
    tracep->declBus(c+858,"tf_count", false,-1, 4,0);
    tracep->declBus(c+859,"tstate", false,-1, 2,0);
    tracep->declBus(c+860,"rstate", false,-1, 3,0);
    tracep->declBus(c+861,"counter_t", false,-1, 9,0);
    tracep->declBit(c+862,"thre_set_en", false,-1);
    tracep->declBus(c+863,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+864,"block_value", false,-1, 7,0);
    tracep->declBit(c+865,"serial_out", false,-1);
    tracep->declBit(c+866,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+867,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+868,"lsr0_d", false,-1);
    tracep->declBit(c+869,"lsr1_d", false,-1);
    tracep->declBit(c+870,"lsr2_d", false,-1);
    tracep->declBit(c+871,"lsr3_d", false,-1);
    tracep->declBit(c+872,"lsr4_d", false,-1);
    tracep->declBit(c+873,"lsr5_d", false,-1);
    tracep->declBit(c+874,"lsr6_d", false,-1);
    tracep->declBit(c+875,"lsr7_d", false,-1);
    tracep->declBit(c+876,"rls_int_d", false,-1);
    tracep->declBit(c+877,"thre_int_d", false,-1);
    tracep->declBit(c+878,"ms_int_d", false,-1);
    tracep->declBit(c+879,"ti_int_d", false,-1);
    tracep->declBit(c+880,"rda_int_d", false,-1);
    tracep->declBit(c+881,"rls_int_rise", false,-1);
    tracep->declBit(c+882,"thre_int_rise", false,-1);
    tracep->declBit(c+883,"ms_int_rise", false,-1);
    tracep->declBit(c+884,"ti_int_rise", false,-1);
    tracep->declBit(c+885,"rda_int_rise", false,-1);
    tracep->declBit(c+886,"rls_int_pnd", false,-1);
    tracep->declBit(c+887,"rda_int_pnd", false,-1);
    tracep->declBit(c+888,"thre_int_pnd", false,-1);
    tracep->declBit(c+889,"ms_int_pnd", false,-1);
    tracep->declBit(c+890,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1757,"Tp", false,-1, 31,0);
    tracep->declBus(c+1757,"width", false,-1, 31,0);
    tracep->declBus(c+1699,"init_value", false,-1, 0,0);
    tracep->declBit(c+1534,"rst_i", false,-1);
    tracep->declBit(c+1533,"clk_i", false,-1);
    tracep->declBit(c+1636,"stage1_rst_i", false,-1);
    tracep->declBit(c+1641,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1553,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+809,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+891,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBus(c+814,"lcr", false,-1, 7,0);
    tracep->declBit(c+854,"rf_pop", false,-1);
    tracep->declBit(c+866,"srx_pad_i", false,-1);
    tracep->declBit(c+808,"enable", false,-1);
    tracep->declBit(c+823,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+861,"counter_t", false,-1, 9,0);
    tracep->declBus(c+857,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1615,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+833,"rf_overrun", false,-1);
    tracep->declBit(c+855,"rf_error_bit", false,-1);
    tracep->declBus(c+860,"rstate", false,-1, 3,0);
    tracep->declBit(c+856,"rf_push_pulse", false,-1);
    tracep->declBus(c+892,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+893,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+894,"rshift", false,-1, 7,0);
    tracep->declBit(c+895,"rparity", false,-1);
    tracep->declBit(c+896,"rparity_error", false,-1);
    tracep->declBit(c+897,"rframing_error", false,-1);
    tracep->declBit(c+898,"rbit_in", false,-1);
    tracep->declBit(c+899,"rparity_xor", false,-1);
    tracep->declBus(c+900,"counter_b", false,-1, 7,0);
    tracep->declBit(c+901,"rf_push_q", false,-1);
    tracep->declBus(c+902,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+903,"rf_push", false,-1);
    tracep->declBit(c+904,"break_error", false,-1);
    tracep->declBit(c+905,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+906,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+907,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+908,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1643,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1684,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1685,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1686,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1687,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1688,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1689,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1690,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1691,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1692,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1693,"sr_push", false,-1, 3,0);
    tracep->declBus(c+909,"toc_value", false,-1, 9,0);
    tracep->declBus(c+910,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1758,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1759,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1696,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1700,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBit(c+856,"push", false,-1);
    tracep->declBit(c+854,"pop", false,-1);
    tracep->declBus(c+902,"data_in", false,-1, 10,0);
    tracep->declBit(c+823,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1615,"data_out", false,-1, 10,0);
    tracep->declBit(c+833,"overrun", false,-1);
    tracep->declBus(c+857,"count", false,-1, 4,0);
    tracep->declBit(c+855,"error_bit", false,-1);
    tracep->declBus(c+1616,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+911+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+927,"top", false,-1, 3,0);
    tracep->declBus(c+928,"bottom", false,-1, 3,0);
    tracep->declBus(c+929,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+930,"word0", false,-1, 2,0);
    tracep->declBus(c+931,"word1", false,-1, 2,0);
    tracep->declBus(c+932,"word2", false,-1, 2,0);
    tracep->declBus(c+933,"word3", false,-1, 2,0);
    tracep->declBus(c+934,"word4", false,-1, 2,0);
    tracep->declBus(c+935,"word5", false,-1, 2,0);
    tracep->declBus(c+936,"word6", false,-1, 2,0);
    tracep->declBus(c+937,"word7", false,-1, 2,0);
    tracep->declBus(c+938,"word8", false,-1, 2,0);
    tracep->declBus(c+939,"word9", false,-1, 2,0);
    tracep->declBus(c+940,"word10", false,-1, 2,0);
    tracep->declBus(c+941,"word11", false,-1, 2,0);
    tracep->declBus(c+942,"word12", false,-1, 2,0);
    tracep->declBus(c+943,"word13", false,-1, 2,0);
    tracep->declBus(c+944,"word14", false,-1, 2,0);
    tracep->declBus(c+945,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1696,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1743,"data_width", false,-1, 31,0);
    tracep->declBus(c+1759,"depth", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+856,"we", false,-1);
    tracep->declBus(c+927,"a", false,-1, 3,0);
    tracep->declBus(c+928,"dpra", false,-1, 3,0);
    tracep->declBus(c+946,"di", false,-1, 7,0);
    tracep->declBus(c+1616,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+449+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBus(c+814,"lcr", false,-1, 7,0);
    tracep->declBit(c+853,"tf_push", false,-1);
    tracep->declBus(c+1526,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+808,"enable", false,-1);
    tracep->declBit(c+824,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+865,"stx_pad_o", false,-1);
    tracep->declBus(c+859,"tstate", false,-1, 2,0);
    tracep->declBus(c+858,"tf_count", false,-1, 4,0);
    tracep->declBus(c+947,"counter", false,-1, 4,0);
    tracep->declBus(c+948,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+949,"shift_out", false,-1, 6,0);
    tracep->declBit(c+950,"stx_o_tmp", false,-1);
    tracep->declBit(c+951,"parity_xor", false,-1);
    tracep->declBit(c+952,"tf_pop", false,-1);
    tracep->declBit(c+953,"bit_out", false,-1);
    tracep->declBus(c+1526,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1617,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+954,"tf_overrun", false,-1);
    tracep->declBus(c+1637,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1626,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1638,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1639,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1640,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1754,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1743,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1759,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1696,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1700,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+1534,"wb_rst_i", false,-1);
    tracep->declBit(c+853,"push", false,-1);
    tracep->declBit(c+952,"pop", false,-1);
    tracep->declBus(c+1526,"data_in", false,-1, 7,0);
    tracep->declBit(c+824,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1617,"data_out", false,-1, 7,0);
    tracep->declBit(c+954,"overrun", false,-1);
    tracep->declBus(c+858,"count", false,-1, 4,0);
    tracep->declBus(c+955,"top", false,-1, 3,0);
    tracep->declBus(c+956,"bottom", false,-1, 3,0);
    tracep->declBus(c+957,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1696,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1743,"data_width", false,-1, 31,0);
    tracep->declBus(c+1759,"depth", false,-1, 31,0);
    tracep->declBit(c+1533,"clk", false,-1);
    tracep->declBit(c+853,"we", false,-1);
    tracep->declBus(c+955,"a", false,-1, 3,0);
    tracep->declBus(c+956,"dpra", false,-1, 3,0);
    tracep->declBus(c+1526,"di", false,-1, 7,0);
    tracep->declBus(c+1617,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+465+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBit(c+1342,"auto_in_psel", false,-1);
    tracep->declBit(c+1343,"auto_in_penable", false,-1);
    tracep->declBit(c+1337,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1344,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1336,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1338,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+659,"auto_in_pready", false,-1);
    tracep->declBit(c+1632,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1633,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1547,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1548,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1550,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1551,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1552,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1533,"clock", false,-1);
    tracep->declBit(c+1534,"reset", false,-1);
    tracep->declBus(c+1510,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1342,"in_psel", false,-1);
    tracep->declBit(c+1343,"in_penable", false,-1);
    tracep->declBus(c+1336,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1337,"in_pwrite", false,-1);
    tracep->declBus(c+1338,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1339,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+659,"in_pready", false,-1);
    tracep->declBus(c+1633,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1632,"in_pslverr", false,-1);
    tracep->declBus(c+1547,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1548,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1549,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1550,"vga_hsync", false,-1);
    tracep->declBit(c+1551,"vga_vsync", false,-1);
    tracep->declBit(c+1552,"vga_valid", false,-1);
    tracep->declBit(c+1527,"is_write", false,-1);
    tracep->declBus(c+1528,"addr", false,-1, 31,0);
    tracep->declBit(c+659,"ready", false,-1);
    tracep->declBus(c+958,"i", false,-1, 31,0);
    tracep->declBus(c+1760,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1761,"h_active", false,-1, 31,0);
    tracep->declBus(c+1762,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1763,"h_total", false,-1, 31,0);
    tracep->declBus(c+1741,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1764,"v_active", false,-1, 31,0);
    tracep->declBus(c+1765,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1766,"v_total", false,-1, 31,0);
    tracep->declBus(c+959,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+481,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+960,"h_valid", false,-1);
    tracep->declBit(c+482,"v_valid", false,-1);
    tracep->declBus(c+961,"h_addr", false,-1, 9,0);
    tracep->declBus(c+483,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1618,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+648,"sck", false,-1);
    tracep->declBit(c+1247,"ss", false,-1);
    tracep->declBit(c+1232,"mosi", false,-1);
    tracep->declBit(c+1201,"miso", false,-1);
    tracep->declBus(c+1202,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+1203,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+1204,"counter", false,-1, 2,0);
    tracep->declBit(c+1205,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+648,"sck", false,-1);
    tracep->declBit(c+962,"ss", false,-1);
    tracep->declBit(c+1232,"mosi", false,-1);
    tracep->declBit(c+1619,"miso", false,-1);
    tracep->declBit(c+962,"reset", false,-1);
    tracep->declBus(c+1195,"state", false,-1, 2,0);
    tracep->declBus(c+1196,"counter", false,-1, 7,0);
    tracep->declBus(c+1197,"cmd", false,-1, 7,0);
    tracep->declBus(c+1198,"addr", false,-1, 23,0);
    tracep->declBus(c+1199,"data", false,-1, 31,0);
    tracep->declBit(c+1200,"ren", false,-1);
    tracep->declBus(c+1620,"rdata", false,-1, 31,0);
    tracep->declBus(c+1621,"raddr", false,-1, 31,0);
    tracep->declBus(c+1622,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+648,"clock", false,-1);
    tracep->declBit(c+1200,"valid", false,-1);
    tracep->declBus(c+1197,"cmd", false,-1, 7,0);
    tracep->declBus(c+1621,"addr", false,-1, 31,0);
    tracep->declBus(c+1620,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1529,"sck", false,-1);
    tracep->declBit(c+1530,"ce_n", false,-1);
    tracep->declBus(c+1556,"dio", false,-1, 3,0);
    tracep->declBit(c+1530,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1265,"cmd", false,-1, 7,0);
    tracep->declBus(c+1266,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1267+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1623,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1624,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1271,"ren", false,-1);
    tracep->declBit(c+1272,"wen", false,-1);
    tracep->declBus(c+1273,"len", false,-1, 7,0);
    tracep->declBus(c+1625,"rdata", false,-1, 31,0);
    tracep->declBus(c+1274,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1529,"clock", false,-1);
    tracep->declBit(c+1271,"ren", false,-1);
    tracep->declBit(c+1272,"wen", false,-1);
    tracep->declBus(c+1265,"cmd", false,-1, 7,0);
    tracep->declBus(c+1274,"saddr", false,-1, 31,0);
    tracep->declBus(c+1625,"rdata", false,-1, 31,0);
    tracep->declBus(c+1275,"wdata", false,-1, 31,0);
    tracep->declBus(c+1273,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1557,"clk", false,-1);
    tracep->declBit(c+650,"cke", false,-1);
    tracep->declBit(c+1233,"cs", false,-1);
    tracep->declBit(c+1234,"ras", false,-1);
    tracep->declBit(c+1235,"cas", false,-1);
    tracep->declBit(c+1236,"we", false,-1);
    tracep->declBus(c+1237,"a", false,-1, 12,0);
    tracep->declBus(c+1248,"ba", false,-1, 1,0);
    tracep->declBus(c+1249,"dqm", false,-1, 1,0);
    tracep->declBus(c+1263,"dq", false,-1, 15,0);
    tracep->declBit(c+1250,"reset", false,-1);
    tracep->declBus(c+969,"state", false,-1, 2,0);
    tracep->declBus(c+970,"counter", false,-1, 7,0);
    tracep->declBus(c+971,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1767,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+972,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+973,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1251,"nop", false,-1);
    tracep->declBit(c+1252,"active", false,-1);
    tracep->declBit(c+1253,"precharge", false,-1);
    tracep->declBit(c+1254,"read", false,-1);
    tracep->declBit(c+1255,"write", false,-1);
    tracep->declBit(c+1256,"burstterm", false,-1);
    tracep->declBit(c+1257,"autorefresh", false,-1);
    tracep->declBit(c+1258,"mode", false,-1);
    tracep->declBus(c+974,"test", false,-1, 15,0);
    tracep->declBus(c+975,"test1", false,-1, 15,0);
    tracep->declBus(c+976,"sense", false,-1, 31,0);
    tracep->declBit(c+977,"write_burst_mode", false,-1);
    tracep->declBus(c+978,"op_mode", false,-1, 1,0);
    tracep->declBus(c+979,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+980,"burst_type", false,-1);
    tracep->declBus(c+981,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+982,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+983,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+984,"bank", false,-1, 1,0);
    tracep->declBus(c+985,"row", false,-1, 12,0);
    tracep->declBus(c+986,"column", false,-1, 8,0);
    tracep->declBus(c+987,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+988,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+989,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1557,"clk", false,-1);
    tracep->declBit(c+650,"cke", false,-1);
    tracep->declBit(c+1233,"cs", false,-1);
    tracep->declBit(c+1234,"ras", false,-1);
    tracep->declBit(c+1235,"cas", false,-1);
    tracep->declBit(c+1236,"we", false,-1);
    tracep->declBus(c+1237,"a", false,-1, 12,0);
    tracep->declBus(c+1248,"ba", false,-1, 1,0);
    tracep->declBus(c+1259,"dqm", false,-1, 1,0);
    tracep->declBus(c+1264,"dq", false,-1, 15,0);
    tracep->declBit(c+1250,"reset", false,-1);
    tracep->declBus(c+990,"state", false,-1, 2,0);
    tracep->declBus(c+991,"counter", false,-1, 7,0);
    tracep->declBus(c+992,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1768,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+993,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+994,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1251,"nop", false,-1);
    tracep->declBit(c+1252,"active", false,-1);
    tracep->declBit(c+1253,"precharge", false,-1);
    tracep->declBit(c+1254,"read", false,-1);
    tracep->declBit(c+1255,"write", false,-1);
    tracep->declBit(c+1256,"burstterm", false,-1);
    tracep->declBit(c+1257,"autorefresh", false,-1);
    tracep->declBit(c+1258,"mode", false,-1);
    tracep->declBus(c+995,"test", false,-1, 15,0);
    tracep->declBus(c+996,"test1", false,-1, 15,0);
    tracep->declBus(c+997,"sense", false,-1, 31,0);
    tracep->declBit(c+998,"write_burst_mode", false,-1);
    tracep->declBus(c+999,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1000,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1001,"burst_type", false,-1);
    tracep->declBus(c+1002,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1003,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1004,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1005,"bank", false,-1, 1,0);
    tracep->declBus(c+1006,"row", false,-1, 12,0);
    tracep->declBus(c+1007,"column", false,-1, 8,0);
    tracep->declBus(c+1008,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1009,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1010,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1557,"clk", false,-1);
    tracep->declBit(c+650,"cke", false,-1);
    tracep->declBit(c+1233,"cs", false,-1);
    tracep->declBit(c+1234,"ras", false,-1);
    tracep->declBit(c+1235,"cas", false,-1);
    tracep->declBit(c+1236,"we", false,-1);
    tracep->declBus(c+1237,"a", false,-1, 12,0);
    tracep->declBus(c+1248,"ba", false,-1, 1,0);
    tracep->declBus(c+1260,"dqm", false,-1, 1,0);
    tracep->declBus(c+1263,"dq", false,-1, 15,0);
    tracep->declBit(c+1250,"reset", false,-1);
    tracep->declBus(c+1011,"state", false,-1, 2,0);
    tracep->declBus(c+1012,"counter", false,-1, 7,0);
    tracep->declBus(c+1013,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1769,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+1014,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+1015,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1251,"nop", false,-1);
    tracep->declBit(c+1252,"active", false,-1);
    tracep->declBit(c+1253,"precharge", false,-1);
    tracep->declBit(c+1254,"read", false,-1);
    tracep->declBit(c+1255,"write", false,-1);
    tracep->declBit(c+1256,"burstterm", false,-1);
    tracep->declBit(c+1257,"autorefresh", false,-1);
    tracep->declBit(c+1258,"mode", false,-1);
    tracep->declBus(c+1016,"test", false,-1, 15,0);
    tracep->declBus(c+1017,"test1", false,-1, 15,0);
    tracep->declBus(c+1018,"sense", false,-1, 31,0);
    tracep->declBit(c+1019,"write_burst_mode", false,-1);
    tracep->declBus(c+1020,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1021,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1022,"burst_type", false,-1);
    tracep->declBus(c+1023,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1024,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1025,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1026,"bank", false,-1, 1,0);
    tracep->declBus(c+1027,"row", false,-1, 12,0);
    tracep->declBus(c+1028,"column", false,-1, 8,0);
    tracep->declBus(c+1029,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1030,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1031,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1557,"clk", false,-1);
    tracep->declBit(c+650,"cke", false,-1);
    tracep->declBit(c+1233,"cs", false,-1);
    tracep->declBit(c+1234,"ras", false,-1);
    tracep->declBit(c+1235,"cas", false,-1);
    tracep->declBit(c+1236,"we", false,-1);
    tracep->declBus(c+1237,"a", false,-1, 12,0);
    tracep->declBus(c+1248,"ba", false,-1, 1,0);
    tracep->declBus(c+1261,"dqm", false,-1, 1,0);
    tracep->declBus(c+1264,"dq", false,-1, 15,0);
    tracep->declBit(c+1250,"reset", false,-1);
    tracep->declBus(c+1032,"state", false,-1, 2,0);
    tracep->declBus(c+1033,"counter", false,-1, 7,0);
    tracep->declBus(c+1034,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1770,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+1035,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+1036,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1251,"nop", false,-1);
    tracep->declBit(c+1252,"active", false,-1);
    tracep->declBit(c+1253,"precharge", false,-1);
    tracep->declBit(c+1254,"read", false,-1);
    tracep->declBit(c+1255,"write", false,-1);
    tracep->declBit(c+1256,"burstterm", false,-1);
    tracep->declBit(c+1257,"autorefresh", false,-1);
    tracep->declBit(c+1258,"mode", false,-1);
    tracep->declBus(c+1037,"test", false,-1, 15,0);
    tracep->declBus(c+1038,"test1", false,-1, 15,0);
    tracep->declBus(c+1039,"sense", false,-1, 31,0);
    tracep->declBit(c+1040,"write_burst_mode", false,-1);
    tracep->declBus(c+1041,"op_mode", false,-1, 1,0);
    tracep->declBus(c+1042,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+1043,"burst_type", false,-1);
    tracep->declBus(c+1044,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+1045,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+1046,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+1047,"bank", false,-1, 1,0);
    tracep->declBus(c+1048,"row", false,-1, 12,0);
    tracep->declBus(c+1049,"column", false,-1, 8,0);
    tracep->declBus(c+1050,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+1051,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+1052,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+484,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h233f6508__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullCData(oldp+485,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                        ? 1U : 2U))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+486,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                        ? 1U : 2U))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+487,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                      ? 1U : 2U)) & 
                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+488,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                      ? 1U : 2U)) & 
                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+489,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                        ? 1U : 2U))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+490,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                        ? 1U : 2U))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+491,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                      ? 1U : 2U)) & 
                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullIData(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+498,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+499,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+500,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+501,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+502,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+503,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+504,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+505,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hef2cc7ed__0))),4);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h26817d71__0[0U]),32);
    bufp->fullCData(oldp+507,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h230a5b4a__0)),8);
    bufp->fullCData(oldp+508,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h32e326eb__0))),3);
    bufp->fullCData(oldp+509,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h75bb98b6__0))),2);
    bufp->fullCData(oldp+510,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c57fcd7__0))),4);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hde96173d__0[0U]),32);
    bufp->fullCData(oldp+512,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4db03a77__0)),8);
    bufp->fullCData(oldp+513,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h703da4be__0))),3);
    bufp->fullCData(oldp+514,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h58ca9621__0))),2);
    bufp->fullCData(oldp+515,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_heeeb6d2b__0))),4);
    bufp->fullBit(oldp+516,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc11ab545__0))));
    bufp->fullBit(oldp+517,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h233f6508__0))));
    bufp->fullBit(oldp+518,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ca6870c__0))));
    bufp->fullBit(oldp+519,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hfe437970__0))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+524,((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hef2cc7ed__0))))),16);
    bufp->fullSData(oldp+525,((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c57fcd7__0))))),16);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_valid));
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hde96173d__0[2U]),32);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h26817d71__0[2U]),32);
    bufp->fullCData(oldp+563,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_heeeb6d2b__0) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+564,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4db03a77__0 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+565,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h230a5b4a__0 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+566,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c57fcd7__0) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+567,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hef2cc7ed__0) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+568,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h703da4be__0) 
                                     >> 6U))),3);
    bufp->fullCData(oldp+569,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h32e326eb__0) 
                                     >> 6U))),3);
    bufp->fullCData(oldp+570,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h58ca9621__0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+571,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h75bb98b6__0) 
                                     >> 4U))),2);
    bufp->fullBit(oldp+572,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc11ab545__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+573,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h233f6508__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+574,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ca6870c__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hfe437970__0) 
                                   >> 2U))));
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullSData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+593,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+594,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+595,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                     >> 2U))),2);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access_raw),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__IFU____pinNumber5),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),3);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+628,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                ? 1U : 2U)),2);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+630,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+631,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hde96173d__0[1U]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h26817d71__0[1U]),32);
    bufp->fullCData(oldp+635,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_heeeb6d2b__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+636,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h4db03a77__0 
                                        >> 8U))),8);
    bufp->fullCData(oldp+637,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h230a5b4a__0 
                                        >> 8U))),8);
    bufp->fullCData(oldp+638,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c57fcd7__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+639,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hef2cc7ed__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+640,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h703da4be__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+641,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h32e326eb__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+642,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h58ca9621__0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+643,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h75bb98b6__0) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc11ab545__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h233f6508__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+646,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ca6870c__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+647,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hfe437970__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+664,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+674,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+676,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+706,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+707,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+711,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+716,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+720,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+735,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+736,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+738,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+739,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+740,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+741,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+742,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+750,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+785,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+786,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+787,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+788,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+789,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+795,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+797,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+798,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+800,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+804,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+805,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+807,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+827,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+828,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+829,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+830,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+831,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+834,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+835,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+836,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+855,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+862,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+881,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+882,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+883,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+884,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+885,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+904,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+905,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+906,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+907,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+908,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+910,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+929,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+946,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+957,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+976,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+977,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+978,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+979,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+980,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+981,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+982,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+983,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+985,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+986,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+992,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+997,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+998,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+999,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+1000,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1001,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1002,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1003,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1004,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                               [0U][0U][0U]),16);
    bufp->fullSData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                               [0U][0U][1U]),16);
    bufp->fullIData(oldp+1018,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                 [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [1U])),32);
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                    >> 9U))));
    bufp->fullCData(oldp+1020,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1021,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1022,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1023,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1024,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1025,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][0U]),16);
    bufp->fullSData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                               [0U][0U][1U]),16);
    bufp->fullIData(oldp+1039,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                 [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [1U])),32);
    bufp->fullBit(oldp+1040,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 9U))));
    bufp->fullCData(oldp+1041,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1042,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1043,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                    >> 3U))));
    bufp->fullCData(oldp+1044,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+1045,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                      >> 4U))),8);
    bufp->fullCData(oldp+1046,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+1053,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+1054,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+1063,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+1066,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+1067,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1068,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1082,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+1083,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+1085,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb344e6d7__0[0U]),32);
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1108,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1109,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1111,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1126,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1128,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1129,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1130,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1131,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1141,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1146,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1148,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1149,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb344e6d7__0[2U]),32);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb344e6d7__0[1U]),32);
    bufp->fullIData(oldp+1159,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1164,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1165,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1166,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1167,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1168,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1169,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1171,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1172,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1173,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1174,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1175,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1176,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1177,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1178,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1179,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1180,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1181,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1182,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1183,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1184,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1185,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1186,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1187,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1188,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1189,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1190,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1191,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1192,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1193,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1194,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1200,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+1206,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5e572438__0))));
    bufp->fullBit(oldp+1207,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha2da3fb4__0))));
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+1210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullBit(oldp+1211,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+1213,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha2da3fb4__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1214,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5e572438__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+1216,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+1217,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                    | ((0x67U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                       | ((3U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                          | ((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                             | ((0xfU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                | ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                   | (0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))))))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullCData(oldp+1218,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1219,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0xfU))
                                 : 0U)),5);
    bufp->fullCData(oldp+1220,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x14U)
                                          : ((IData)(
                                                     ((0x73U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                      & (0U 
                                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                              ? 0xfU
                                              : 0U)))),5);
    bufp->fullIData(oldp+1221,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1222,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+1223,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1224,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xdU) | ((0x1000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                         >> 7U))))))),32);
    bufp->fullIData(oldp+1225,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0x15U) | ((0x100000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                          >> 0x14U))))))),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1227,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                    >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+1228,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1230,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha2da3fb4__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1231,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5e572438__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1233,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1234,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1235,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1236,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1248,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1253,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1262,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1264,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1275,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullBit(oldp+1276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullSData(oldp+1306,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1307,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1308,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h9f03a8d3__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1326,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1327,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1341,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1342,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1343,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1345,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1347,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1350,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1360,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1363,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1403,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1404,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1425,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1426,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1449,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1450,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1451,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1452,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1453,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1454,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1455,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1457,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1458,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1459,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1460,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1461,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1462,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1463,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1464,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1465,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1466,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1467,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1468,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1469,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1470,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1471,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1472,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1474,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1475,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1476,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1477,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1478,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1479,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1501,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1528,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1533,(vlSelf->clock));
    bufp->fullBit(oldp+1534,(vlSelf->reset));
    bufp->fullSData(oldp+1535,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1536,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1537,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1538,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1539,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1540,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1541,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1542,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1543,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1544,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1545,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1546,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1547,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1548,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1549,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1550,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1551,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1552,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1553,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1554,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1555,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1557,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1558,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1559,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
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
    bufp->fullCData(oldp+1564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h32e326eb__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h703da4be__0))
                                 : 0U)),3);
    bufp->fullIData(oldp+1566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb344e6d7__0[0U]
                                 : 0U)),32);
    bufp->fullCData(oldp+1567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_heeeb6d2b__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5e572438__0))));
    bufp->fullBit(oldp+1569,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1570,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1571,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1572,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1573,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1574,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1575,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5e572438__0)))));
    bufp->fullBit(oldp+1576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1578,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1579,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1580,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1581,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1585,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                         ? 1U : 2U))
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
    bufp->fullCData(oldp+1586,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                         ? 1U : 2U))
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
    bufp->fullBit(oldp+1587,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc11ab545__0) 
                                         >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1588,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1589,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1590,(((2U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
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
    bufp->fullIData(oldp+1592,((((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                          ? 1U : 2U)) 
                                 | ((0U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                             ? 1U : 2U)) 
                                    | (3U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                               ? 1U
                                               : 2U))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1593,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                         ? 1U : 2U))
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
    bufp->fullCData(oldp+1594,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                         ? 1U : 2U))
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
    bufp->fullBit(oldp+1595,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1596,(((1U == ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr)
                                       ? 1U : 2U)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullIData(oldp+1598,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ca6870c__0) 
                                                >> 2U)))) 
                                 & ((- (IData)((0x2000000U 
                                                == 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h26817d71__0[2U]))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                                | ((- (IData)((0x2000004U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h26817d71__0[2U]))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1604,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1606,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc11ab545__0) 
                                            >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1608,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1612,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1613,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullSData(oldp+1615,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1618,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1619,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1621,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1624,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1626,(1U),3);
    bufp->fullCData(oldp+1627,(0U),2);
    bufp->fullCData(oldp+1628,(1U),2);
    bufp->fullCData(oldp+1629,(2U),2);
    bufp->fullCData(oldp+1630,(3U),2);
    bufp->fullSData(oldp+1631,(0xaU),11);
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1636,(0U));
    bufp->fullCData(oldp+1637,(0U),3);
    bufp->fullCData(oldp+1638,(2U),3);
    bufp->fullCData(oldp+1639,(3U),3);
    bufp->fullCData(oldp+1640,(4U),3);
    bufp->fullBit(oldp+1641,(1U));
    bufp->fullBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1643,(0U),4);
    bufp->fullIData(oldp+1644,(0U),32);
    bufp->fullCData(oldp+1645,(0U),8);
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready));
    bufp->fullIData(oldp+1657,(0U),32);
    bufp->fullCData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullBit(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1680,(0x2000000U),32);
    bufp->fullIData(oldp+1681,(0x2000004U),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullCData(oldp+1684,(1U),4);
    bufp->fullCData(oldp+1685,(2U),4);
    bufp->fullCData(oldp+1686,(3U),4);
    bufp->fullCData(oldp+1687,(4U),4);
    bufp->fullCData(oldp+1688,(5U),4);
    bufp->fullCData(oldp+1689,(6U),4);
    bufp->fullCData(oldp+1690,(7U),4);
    bufp->fullCData(oldp+1691,(8U),4);
    bufp->fullCData(oldp+1692,(9U),4);
    bufp->fullCData(oldp+1693,(0xaU),4);
    bufp->fullCData(oldp+1694,(0xbU),4);
    bufp->fullCData(oldp+1695,(0xcU),4);
    bufp->fullIData(oldp+1696,(4U),32);
    bufp->fullIData(oldp+1697,(3U),32);
    bufp->fullBit(oldp+1698,(0U));
    bufp->fullBit(oldp+1699,(1U));
    bufp->fullIData(oldp+1700,(5U),32);
    bufp->fullIData(oldp+1701,(0x20U),32);
    bufp->fullIData(oldp+1702,(0x1000000U),32);
    bufp->fullIData(oldp+1703,(0x1000004U),32);
    bufp->fullCData(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1712,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1713,(0x1800U),32);
    bufp->fullIData(oldp+1714,(0x79737978U),32);
    bufp->fullCData(oldp+1715,(4U),8);
    bufp->fullCData(oldp+1716,(8U),8);
    bufp->fullCData(oldp+1717,(3U),8);
    bufp->fullCData(oldp+1718,(0x9fU),8);
    bufp->fullCData(oldp+1719,(0x25U),8);
    bufp->fullCData(oldp+1720,(0xdU),8);
    bufp->fullCData(oldp+1721,(0x99U),8);
    bufp->fullCData(oldp+1722,(0x49U),8);
    bufp->fullCData(oldp+1723,(0x41U),8);
    bufp->fullCData(oldp+1724,(0x1fU),8);
    bufp->fullCData(oldp+1725,(1U),8);
    bufp->fullCData(oldp+1726,(9U),8);
    bufp->fullCData(oldp+1727,(0x11U),8);
    bufp->fullCData(oldp+1728,(0xc1U),8);
    bufp->fullCData(oldp+1729,(0x63U),8);
    bufp->fullCData(oldp+1730,(0x85U),8);
    bufp->fullCData(oldp+1731,(0x61U),8);
    bufp->fullCData(oldp+1732,(0x71U),8);
    bufp->fullCData(oldp+1733,(0xf0U),8);
    bufp->fullCData(oldp+1734,(0xe0U),8);
    bufp->fullCData(oldp+1735,(0x15U),8);
    bufp->fullCData(oldp+1736,(0xebU),8);
    bufp->fullCData(oldp+1737,(0x38U),8);
    bufp->fullIData(oldp+1738,(0x64U),32);
    bufp->fullIData(oldp+1739,(0x18U),32);
    bufp->fullIData(oldp+1740,(9U),32);
    bufp->fullIData(oldp+1741,(2U),32);
    bufp->fullIData(oldp+1742,(6U),32);
    bufp->fullIData(oldp+1743,(8U),32);
    bufp->fullIData(oldp+1744,(0xdU),32);
    bufp->fullIData(oldp+1745,(0x2000U),32);
    bufp->fullIData(oldp+1746,(0x2710U),32);
    bufp->fullIData(oldp+1747,(0x30cU),32);
    bufp->fullSData(oldp+1748,(0x20U),13);
    bufp->fullIData(oldp+1749,(0xaU),32);
    bufp->fullIData(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1751,(0x11U),32);
    bufp->fullIData(oldp+1752,(0x30000000U),32);
    bufp->fullIData(oldp+1753,(0x3fffffffU),32);
    bufp->fullCData(oldp+1754,(5U),3);
    bufp->fullCData(oldp+1755,(6U),3);
    bufp->fullCData(oldp+1756,(7U),3);
    bufp->fullIData(oldp+1757,(1U),32);
    bufp->fullIData(oldp+1758,(0xbU),32);
    bufp->fullIData(oldp+1759,(0x10U),32);
    bufp->fullIData(oldp+1760,(0x60U),32);
    bufp->fullIData(oldp+1761,(0x90U),32);
    bufp->fullIData(oldp+1762,(0x310U),32);
    bufp->fullIData(oldp+1763,(0x320U),32);
    bufp->fullIData(oldp+1764,(0x23U),32);
    bufp->fullIData(oldp+1765,(0x203U),32);
    bufp->fullIData(oldp+1766,(0x20dU),32);
    bufp->fullSData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
