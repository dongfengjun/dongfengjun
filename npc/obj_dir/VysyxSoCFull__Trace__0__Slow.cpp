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
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1491,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1492,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1493,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1494,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1495,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1496,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1497,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1498,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1499,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1500,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1501,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1502,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1503,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1504,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1505,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1506,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1507,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1508,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1509,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1510,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1491,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1492,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1493,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1494,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1495,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1496,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1497,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1498,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1499,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1500,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1501,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1502,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1503,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1504,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1505,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1506,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1507,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1508,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1509,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1510,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+594,"spi_sck", false,-1);
    tracep->declBus(c+595,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1191,"spi_mosi", false,-1);
    tracep->declBit(c+1511,"spi_miso", false,-1);
    tracep->declBit(c+1509,"uart_rx", false,-1);
    tracep->declBit(c+1510,"uart_tx", false,-1);
    tracep->declBit(c+1485,"psram_sck", false,-1);
    tracep->declBit(c+1486,"psram_ce_n", false,-1);
    tracep->declBus(c+1512,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1513,"sdram_clk", false,-1);
    tracep->declBit(c+596,"sdram_cke", false,-1);
    tracep->declBit(c+1192,"sdram_cs", false,-1);
    tracep->declBit(c+1193,"sdram_ras", false,-1);
    tracep->declBit(c+1194,"sdram_cas", false,-1);
    tracep->declBit(c+1195,"sdram_we", false,-1);
    tracep->declBus(c+1196,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1197,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+597,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1221,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1491,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1492,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1493,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1496,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1497,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1498,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1499,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1500,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1501,"ps2_clk", false,-1);
    tracep->declBit(c+1502,"ps2_data", false,-1);
    tracep->declBus(c+1503,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1504,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1505,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1506,"vga_hsync", false,-1);
    tracep->declBit(c+1507,"vga_vsync", false,-1);
    tracep->declBit(c+1508,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1275,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1276,"in_psel", false,-1);
    tracep->declBit(c+1184,"in_penable", false,-1);
    tracep->declBus(c+1556,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1277,"in_pwrite", false,-1);
    tracep->declBus(c+1278,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1279,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+598,"in_pready", false,-1);
    tracep->declBus(c+599,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+600,"in_pslverr", false,-1);
    tracep->declBus(c+1282,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1293,"out_psel", false,-1);
    tracep->declBit(c+1294,"out_penable", false,-1);
    tracep->declBus(c+1295,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"out_pwrite", false,-1);
    tracep->declBus(c+1297,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"out_pready", false,-1);
    tracep->declBus(c+1514,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1300,"out_pslverr", false,-1);
    tracep->declBus(c+1557,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1558,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1559,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1560,"DELAY", false,-1, 1,0);
    tracep->declBus(c+601,"state", false,-1, 1,0);
    tracep->declBus(c+602,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+603,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+604,"pslverr_reg", false,-1);
    tracep->declBus(c+1561,"r", false,-1, 10,0);
    tracep->declBus(c+1559,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1293,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1294,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1295,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1300,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1514,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1301,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1295,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1562,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1563,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+606,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1564,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+607,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1306,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1307,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+608,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1565,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+609,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1309,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1295,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1515,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1566,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1185,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1310,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1311,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1312,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1566,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1313,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1314,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1315,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1295,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1516,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1566,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1316,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1317,"sel_0", false,-1);
    tracep->declBit(c+1318,"sel_1", false,-1);
    tracep->declBit(c+1319,"sel_2", false,-1);
    tracep->declBit(c+1320,"sel_3", false,-1);
    tracep->declBit(c+1321,"sel_4", false,-1);
    tracep->declBit(c+1322,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1280,"auto_in_awready", false,-1);
    tracep->declBit(c+1005,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1280,"auto_in_wready", false,-1);
    tracep->declBit(c+1009,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1323,"auto_in_bready", false,-1);
    tracep->declBit(c+1324,"auto_in_bvalid", false,-1);
    tracep->declBus(c+55,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1281,"auto_in_arready", false,-1);
    tracep->declBit(c+1012,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1325,"auto_in_rready", false,-1);
    tracep->declBit(c+1326,"auto_in_rvalid", false,-1);
    tracep->declBus(c+56,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1518,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1517,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1276,"auto_out_psel", false,-1);
    tracep->declBit(c+1184,"auto_out_penable", false,-1);
    tracep->declBit(c+1277,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1275,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1278,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1279,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+598,"auto_out_pready", false,-1);
    tracep->declBit(c+600,"auto_out_pslverr", false,-1);
    tracep->declBus(c+599,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+1184,"nodeOut_penable", false,-1);
    tracep->declBus(c+1186,"state", false,-1, 1,0);
    tracep->declBit(c+1281,"accept_read", false,-1);
    tracep->declBit(c+1280,"accept_write", false,-1);
    tracep->declBit(c+57,"is_write_r", false,-1);
    tracep->declBit(c+1277,"is_write", false,-1);
    tracep->declBus(c+56,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+55,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+58,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+59,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+60,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+61,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+610,"resp", false,-1, 1,0);
    tracep->declBus(c+62,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1517,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1326,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+63,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1324,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1235,"in_arready", false,-1);
    tracep->declBit(c+1016,"in_arvalid", false,-1);
    tracep->declBus(c+1017,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1327,"in_rready", false,-1);
    tracep->declBit(c+611,"in_rvalid", false,-1);
    tracep->declBus(c+612,"in_rid", false,-1, 3,0);
    tracep->declBus(c+613,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+614,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+615,"in_rlast", false,-1);
    tracep->declBit(c+1236,"in_awready", false,-1);
    tracep->declBit(c+1022,"in_awvalid", false,-1);
    tracep->declBus(c+1023,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1237,"in_wready", false,-1);
    tracep->declBit(c+1028,"in_wvalid", false,-1);
    tracep->declBus(c+1029,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"in_wlast", false,-1);
    tracep->declBit(c+1328,"in_bready", false,-1);
    tracep->declBit(c+616,"in_bvalid", false,-1);
    tracep->declBus(c+617,"in_bid", false,-1, 3,0);
    tracep->declBus(c+618,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1238,"out_arready", false,-1);
    tracep->declBit(c+1239,"out_arvalid", false,-1);
    tracep->declBus(c+1240,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1123,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1329,"out_rready", false,-1);
    tracep->declBit(c+619,"out_rvalid", false,-1);
    tracep->declBus(c+620,"out_rid", false,-1, 3,0);
    tracep->declBus(c+621,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1557,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+622,"out_rlast", false,-1);
    tracep->declBit(c+1244,"out_awready", false,-1);
    tracep->declBit(c+1245,"out_awvalid", false,-1);
    tracep->declBus(c+1246,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1247,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1248,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1124,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1249,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1250,"out_wready", false,-1);
    tracep->declBit(c+1251,"out_wvalid", false,-1);
    tracep->declBus(c+1125,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1126,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"out_wlast", false,-1);
    tracep->declBit(c+1519,"out_bready", false,-1);
    tracep->declBit(c+623,"out_bvalid", false,-1);
    tracep->declBus(c+620,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1557,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1567,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1556,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1568,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1569,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1570,"DELAY", false,-1, 2,0);
    tracep->declBus(c+624,"rstate", false,-1, 2,0);
    tracep->declBus(c+625,"wstate", false,-1, 2,0);
    tracep->declBus(c+626,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+627,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+628,"rvalid_reg", false,-1);
    tracep->declBus(c+629,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+630,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+634,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+635,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+636,"bvalid_reg", false,-1);
    tracep->declBus(c+637,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+638,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1561,"r", false,-1, 10,0);
    tracep->declBus(c+1559,"s", false,-1, 1,0);
    tracep->declBus(c+639,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+64,"auto_in_awready", false,-1);
    tracep->declBit(c+1032,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+65,"auto_in_wready", false,-1);
    tracep->declBit(c+1033,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1029,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"auto_in_wlast", false,-1);
    tracep->declBit(c+1520,"auto_in_bready", false,-1);
    tracep->declBit(c+1330,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+587,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_in_arready", false,-1);
    tracep->declBit(c+1034,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1017,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1332,"auto_in_rready", false,-1);
    tracep->declBit(c+1333,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+588,"auto_in_rlast", false,-1);
    tracep->declBit(c+1335,"auto_out_awready", false,-1);
    tracep->declBit(c+1035,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1036,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1336,"auto_out_wready", false,-1);
    tracep->declBit(c+1037,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_out_wlast", false,-1);
    tracep->declBit(c+1337,"auto_out_bready", false,-1);
    tracep->declBit(c+1338,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1339,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1341,"auto_out_arready", false,-1);
    tracep->declBit(c+1039,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1040,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1332,"auto_out_rready", false,-1);
    tracep->declBit(c+1333,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+589,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1342,"auto_out_rlast", false,-1);
    tracep->declBit(c+1037,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+67,"w_idle", false,-1);
    tracep->declBit(c+1343,"in_awready", false,-1);
    tracep->declBit(c+68,"busy", false,-1);
    tracep->declBus(c+69,"r_addr", false,-1, 31,0);
    tracep->declBus(c+70,"r_len", false,-1, 7,0);
    tracep->declBus(c+1041,"len", false,-1, 7,0);
    tracep->declBus(c+1042,"addr", false,-1, 31,0);
    tracep->declBit(c+71,"busy_1", false,-1);
    tracep->declBus(c+72,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+73,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1043,"len_1", false,-1, 7,0);
    tracep->declBus(c+1044,"addr_1", false,-1, 31,0);
    tracep->declBit(c+74,"wbeats_latched", false,-1);
    tracep->declBit(c+1035,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1045,"wbeats_valid", false,-1);
    tracep->declBus(c+75,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1046,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1038,"w_last", false,-1);
    tracep->declBit(c+1337,"nodeOut_bready", false,-1);
    tracep->declBus(c+76,"error_0", false,-1, 1,0);
    tracep->declBus(c+77,"error_1", false,-1, 1,0);
    tracep->declBus(c+78,"error_2", false,-1, 1,0);
    tracep->declBus(c+79,"error_3", false,-1, 1,0);
    tracep->declBus(c+80,"error_4", false,-1, 1,0);
    tracep->declBus(c+81,"error_5", false,-1, 1,0);
    tracep->declBus(c+82,"error_6", false,-1, 1,0);
    tracep->declBus(c+83,"error_7", false,-1, 1,0);
    tracep->declBus(c+84,"error_8", false,-1, 1,0);
    tracep->declBus(c+85,"error_9", false,-1, 1,0);
    tracep->declBus(c+86,"error_10", false,-1, 1,0);
    tracep->declBus(c+87,"error_11", false,-1, 1,0);
    tracep->declBus(c+88,"error_12", false,-1, 1,0);
    tracep->declBus(c+89,"error_13", false,-1, 1,0);
    tracep->declBus(c+90,"error_14", false,-1, 1,0);
    tracep->declBus(c+91,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+66,"io_enq_ready", false,-1);
    tracep->declBit(c+1034,"io_enq_valid", false,-1);
    tracep->declBus(c+1017,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1018,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1020,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1021,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1344,"io_deq_ready", false,-1);
    tracep->declBit(c+1039,"io_deq_valid", false,-1);
    tracep->declBus(c+1013,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1047,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1048,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1015,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1049,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+92,"ram", false,-1, 48,0);
    tracep->declBit(c+94,"full", false,-1);
    tracep->declBit(c+1039,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1345,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+64,"io_enq_ready", false,-1);
    tracep->declBit(c+1032,"io_enq_valid", false,-1);
    tracep->declBus(c+1023,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1024,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1025,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1026,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1027,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1346,"io_deq_ready", false,-1);
    tracep->declBit(c+1050,"io_deq_valid", false,-1);
    tracep->declBus(c+1006,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1051,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1052,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1008,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1053,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+95,"ram", false,-1, 48,0);
    tracep->declBit(c+97,"full", false,-1);
    tracep->declBit(c+1050,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1347,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+65,"io_enq_ready", false,-1);
    tracep->declBit(c+1033,"io_enq_valid", false,-1);
    tracep->declBus(c+1029,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1030,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1031,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1348,"io_deq_ready", false,-1);
    tracep->declBit(c+1054,"io_deq_valid", false,-1);
    tracep->declBus(c+1010,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1011,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1523,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+98,"ram", false,-1, 36,0);
    tracep->declBit(c+100,"full", false,-1);
    tracep->declBit(c+1054,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1349,"do_enq", false,-1);
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
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1350,"auto_in_awready", false,-1);
    tracep->declBit(c+1055,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1056,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1132,"auto_in_wready", false,-1);
    tracep->declBit(c+1057,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_in_bready", false,-1);
    tracep->declBit(c+101,"auto_in_bvalid", false,-1);
    tracep->declBus(c+102,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+103,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1352,"auto_in_arready", false,-1);
    tracep->declBit(c+1058,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1353,"auto_in_rready", false,-1);
    tracep->declBit(c+104,"auto_in_rvalid", false,-1);
    tracep->declBus(c+105,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+107,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1352,"nodeIn_arready", false,-1);
    tracep->declBit(c+1350,"nodeIn_awready", false,-1);
    tracep->declBit(c+1060,"w_sel0", false,-1);
    tracep->declBit(c+101,"w_full", false,-1);
    tracep->declBus(c+102,"w_id", false,-1, 3,0);
    tracep->declBit(c+108,"r_sel1", false,-1);
    tracep->declBit(c+109,"w_sel1", false,-1);
    tracep->declBit(c+104,"r_full", false,-1);
    tracep->declBus(c+105,"r_id", false,-1, 3,0);
    tracep->declBit(c+1354,"ren", false,-1);
    tracep->declBit(c+110,"rdata_REG", false,-1);
    tracep->declBus(c+111,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+112,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+113,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+114,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1061,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1354,"R0_en", false,-1);
    tracep->declBit(c+1489,"R0_clk", false,-1);
    tracep->declBus(c+115,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1062,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1355,"W0_en", false,-1);
    tracep->declBit(c+1489,"W0_clk", false,-1);
    tracep->declBus(c+1010,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1011,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1252,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1063,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1128,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1031,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1029,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1064,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1356,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1524,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1253,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1065,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1017,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1066,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1358,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1525,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1526,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1360,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1236,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1237,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1028,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1029,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1328,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+616,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+617,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+618,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1235,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1016,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1017,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1327,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+611,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+612,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+613,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+614,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+615,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+64,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+65,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1033,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1029,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1520,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1330,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+587,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1034,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1017,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1332,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+588,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1356,"in_0_bvalid", false,-1);
    tracep->declBit(c+1358,"in_0_rvalid", false,-1);
    tracep->declBit(c+1254,"in_0_wready", false,-1);
    tracep->declBit(c+1255,"in_0_awready", false,-1);
    tracep->declBit(c+1527,"in_0_arready", false,-1);
    tracep->declBit(c+1252,"anonIn_awready", false,-1);
    tracep->declBit(c+1253,"anonIn_arready", false,-1);
    tracep->declBit(c+1067,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1068,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1069,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1070,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1071,"arSel", false,-1, 15,0);
    tracep->declBus(c+1072,"awSel", false,-1, 15,0);
    tracep->declBus(c+1361,"rSel", false,-1, 15,0);
    tracep->declBus(c+1362,"bSel", false,-1, 15,0);
    tracep->declBus(c+116,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+117,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+118,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+119,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+120,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+121,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+122,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+123,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+124,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+125,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+126,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+127,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+128,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+129,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+130,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+131,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+132,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+133,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+134,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+135,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+136,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+137,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+138,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+139,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+140,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+141,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+142,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+143,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+144,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+145,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+146,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+147,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+148,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+149,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+150,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+151,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+152,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+153,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+154,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+155,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+156,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+157,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+158,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+159,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+160,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+161,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+162,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+163,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+164,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+165,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+166,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+167,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+168,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+169,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+170,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+171,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+172,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+173,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+174,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+175,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+176,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+177,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+178,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+179,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1073,"in_0_arvalid", false,-1);
    tracep->declBit(c+180,"latched", false,-1);
    tracep->declBit(c+1074,"in_0_awvalid", false,-1);
    tracep->declBit(c+1075,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1076,"in_0_wvalid", false,-1);
    tracep->declBit(c+181,"idle_2", false,-1);
    tracep->declBit(c+1363,"anyValid", false,-1);
    tracep->declBus(c+1364,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+182,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1365,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1366,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1367,"prefixOR_1", false,-1);
    tracep->declBit(c+1368,"winner_2_1", false,-1);
    tracep->declBit(c+183,"state_2_0", false,-1);
    tracep->declBit(c+184,"state_2_1", false,-1);
    tracep->declBit(c+1369,"muxState_2_0", false,-1);
    tracep->declBit(c+1370,"muxState_2_1", false,-1);
    tracep->declBit(c+185,"idle_3", false,-1);
    tracep->declBit(c+1371,"anyValid_1", false,-1);
    tracep->declBus(c+1372,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+186,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1373,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1374,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1375,"winner_3_0", false,-1);
    tracep->declBit(c+1376,"winner_3_1", false,-1);
    tracep->declBit(c+187,"state_3_0", false,-1);
    tracep->declBit(c+188,"state_3_1", false,-1);
    tracep->declBit(c+590,"muxState_3_0", false,-1);
    tracep->declBit(c+591,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+189,"io_enq_ready", false,-1);
    tracep->declBit(c+1075,"io_enq_valid", false,-1);
    tracep->declBus(c+1077,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+1078,"io_deq_valid", false,-1);
    tracep->declBus(c+1079,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+190,"wrap", false,-1);
    tracep->declBit(c+191,"wrap_1", false,-1);
    tracep->declBit(c+192,"maybe_full", false,-1);
    tracep->declBit(c+193,"ptr_match", false,-1);
    tracep->declBit(c+194,"empty", false,-1);
    tracep->declBit(c+195,"full", false,-1);
    tracep->declBit(c+1078,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1257,"do_deq", false,-1);
    tracep->declBit(c+1258,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+191,"R0_addr", false,-1);
    tracep->declBit(c+1571,"R0_en", false,-1);
    tracep->declBit(c+1489,"R0_clk", false,-1);
    tracep->declBus(c+196,"R0_data", false,-1, 1,0);
    tracep->declBit(c+190,"W0_addr", false,-1);
    tracep->declBit(c+1258,"W0_en", false,-1);
    tracep->declBit(c+1489,"W0_clk", false,-1);
    tracep->declBus(c+1077,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+197+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1377,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1080,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1336,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1037,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1337,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1338,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1339,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1378,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1081,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1332,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1333,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1342,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1055,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1056,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1132,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1057,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1351,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+101,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+102,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+103,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1352,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1353,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+104,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+105,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+107,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1083,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+199,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1084,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1085,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+592,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+200,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+201,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1280,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1005,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1280,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1009,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1323,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1324,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+55,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1281,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1012,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1325,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1326,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1518,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1517,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1338,"in_0_bvalid", false,-1);
    tracep->declBit(c+1333,"in_0_rvalid", false,-1);
    tracep->declBit(c+1379,"in_0_wready", false,-1);
    tracep->declBit(c+1380,"in_0_awready", false,-1);
    tracep->declBit(c+1378,"in_0_arready", false,-1);
    tracep->declBit(c+1377,"anonIn_awready", false,-1);
    tracep->declBit(c+1086,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1087,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1088,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1089,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1090,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1091,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1092,"arSel", false,-1, 15,0);
    tracep->declBus(c+1093,"awSel", false,-1, 15,0);
    tracep->declBus(c+1381,"rSel", false,-1, 15,0);
    tracep->declBus(c+1382,"bSel", false,-1, 15,0);
    tracep->declBit(c+203,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+204,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+205,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+206,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+207,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+208,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+209,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+210,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+211,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+212,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+213,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+214,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+215,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+216,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+217,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+218,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+219,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+220,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+221,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+222,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+223,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+224,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+225,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+226,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+227,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+228,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+229,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+230,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+231,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+232,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+233,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+234,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+235,"latched", false,-1);
    tracep->declBit(c+1094,"in_0_awvalid", false,-1);
    tracep->declBit(c+1095,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1096,"in_0_wvalid", false,-1);
    tracep->declBit(c+236,"idle_3", false,-1);
    tracep->declBit(c+1383,"anyValid", false,-1);
    tracep->declBus(c+1384,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+237,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1385,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1386,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1387,"prefixOR_1", false,-1);
    tracep->declBit(c+1388,"winner_3_1", false,-1);
    tracep->declBit(c+1389,"winner_3_2", false,-1);
    tracep->declBit(c+238,"state_3_0", false,-1);
    tracep->declBit(c+239,"state_3_1", false,-1);
    tracep->declBit(c+240,"state_3_2", false,-1);
    tracep->declBit(c+1390,"muxState_3_0", false,-1);
    tracep->declBit(c+1391,"muxState_3_1", false,-1);
    tracep->declBit(c+1392,"muxState_3_2", false,-1);
    tracep->declBit(c+241,"idle_4", false,-1);
    tracep->declBit(c+1393,"anyValid_1", false,-1);
    tracep->declBus(c+1394,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+242,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1395,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1396,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1397,"winner_4_0", false,-1);
    tracep->declBit(c+1398,"winner_4_2", false,-1);
    tracep->declBit(c+243,"state_4_0", false,-1);
    tracep->declBit(c+244,"state_4_2", false,-1);
    tracep->declBit(c+1399,"muxState_4_0", false,-1);
    tracep->declBit(c+1400,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1095,"io_enq_valid", false,-1);
    tracep->declBus(c+1097,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1401,"io_deq_ready", false,-1);
    tracep->declBit(c+1098,"io_deq_valid", false,-1);
    tracep->declBus(c+1099,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+246,"wrap", false,-1);
    tracep->declBit(c+247,"wrap_1", false,-1);
    tracep->declBit(c+248,"maybe_full", false,-1);
    tracep->declBit(c+249,"ptr_match", false,-1);
    tracep->declBit(c+250,"empty", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+1098,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1402,"do_deq", false,-1);
    tracep->declBit(c+1403,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+247,"R0_addr", false,-1);
    tracep->declBit(c+1571,"R0_en", false,-1);
    tracep->declBit(c+1489,"R0_clk", false,-1);
    tracep->declBus(c+252,"R0_data", false,-1, 2,0);
    tracep->declBit(c+246,"W0_addr", false,-1);
    tracep->declBit(c+1403,"W0_en", false,-1);
    tracep->declBit(c+1489,"W0_clk", false,-1);
    tracep->declBus(c+1097,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+253+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1335,"auto_in_awready", false,-1);
    tracep->declBit(c+1035,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1036,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1336,"auto_in_wready", false,-1);
    tracep->declBit(c+1037,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_in_wlast", false,-1);
    tracep->declBit(c+1337,"auto_in_bready", false,-1);
    tracep->declBit(c+1338,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1339,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1341,"auto_in_arready", false,-1);
    tracep->declBit(c+1039,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1040,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1332,"auto_in_rready", false,-1);
    tracep->declBit(c+1333,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+589,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1342,"auto_in_rlast", false,-1);
    tracep->declBit(c+1377,"auto_out_awready", false,-1);
    tracep->declBit(c+1080,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1006,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1007,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1336,"auto_out_wready", false,-1);
    tracep->declBit(c+1037,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1010,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1011,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_out_wlast", false,-1);
    tracep->declBit(c+1337,"auto_out_bready", false,-1);
    tracep->declBit(c+1338,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1331,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1339,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1378,"auto_out_arready", false,-1);
    tracep->declBit(c+1081,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1015,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1332,"auto_out_rready", false,-1);
    tracep->declBit(c+1333,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1334,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1522,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1342,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1404,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1405,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1406,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1407,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1408,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1409,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1410,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1411,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1412,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1413,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1414,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1415,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1416,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+1146,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1417,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1418,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+1148,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1419,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+1149,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1420,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1421,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1422,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1423,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+1153,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1424,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+1154,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1426,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+1156,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+1158,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+1159,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1431,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+1161,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1432,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+1162,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1433,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1434,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+1040,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1435,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1528,"reset", false,-1);
    tracep->declBit(c+1252,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1063,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1128,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1031,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1029,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1064,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1356,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1357,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1524,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1253,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1065,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1017,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1066,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1358,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1359,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1525,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1526,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1360,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1528,"reset", false,-1);
    tracep->declBit(c+1566,"io_interrupt", false,-1);
    tracep->declBit(c+1252,"io_master_awready", false,-1);
    tracep->declBit(c+1063,"io_master_awvalid", false,-1);
    tracep->declBus(c+1023,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1128,"io_master_wready", false,-1);
    tracep->declBit(c+1031,"io_master_wvalid", false,-1);
    tracep->declBus(c+1029,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"io_master_wlast", false,-1);
    tracep->declBit(c+1064,"io_master_bready", false,-1);
    tracep->declBit(c+1356,"io_master_bvalid", false,-1);
    tracep->declBus(c+1357,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1524,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1253,"io_master_arready", false,-1);
    tracep->declBit(c+1065,"io_master_arvalid", false,-1);
    tracep->declBus(c+1017,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1066,"io_master_rready", false,-1);
    tracep->declBit(c+1358,"io_master_rvalid", false,-1);
    tracep->declBus(c+1359,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1525,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1526,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1360,"io_master_rlast", false,-1);
    tracep->declBit(c+1572,"io_slave_awready", false,-1);
    tracep->declBit(c+1566,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1573,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1574,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1575,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1567,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1557,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1576,"io_slave_wready", false,-1);
    tracep->declBit(c+1566,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1574,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1573,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1566,"io_slave_wlast", false,-1);
    tracep->declBit(c+1566,"io_slave_bready", false,-1);
    tracep->declBit(c+1577,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1578,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1579,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1580,"io_slave_arready", false,-1);
    tracep->declBit(c+1566,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1573,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1574,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1575,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1567,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1557,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1566,"io_slave_rready", false,-1);
    tracep->declBit(c+1581,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1582,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1583,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1584,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1585,"io_slave_rlast", false,-1);
    tracep->declBus(c+383,"pc", false,-1, 31,0);
    tracep->declBit(c+384,"pc_valid", false,-1);
    tracep->declBus(c+385,"snpc", false,-1, 31,0);
    tracep->declBus(c+386,"inst_if", false,-1, 31,0);
    tracep->declBus(c+387,"pc_if", false,-1, 31,0);
    tracep->declBit(c+388,"if_valid", false,-1);
    tracep->declBit(c+389,"if_ready", false,-1);
    tracep->declBus(c+390,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+999,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1575,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1573,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1586,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1567,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1557,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1587,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+391,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1000,"if_axi_arready", false,-1);
    tracep->declBit(c+1436,"if_axi_rvalid", false,-1);
    tracep->declBit(c+392,"if_axi_rready", false,-1);
    tracep->declBit(c+1588,"if_axi_rlast", false,-1);
    tracep->declBus(c+13,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1165,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+14,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1589,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1166,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+15,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1529,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1001,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1129,"icache_axi_arready", false,-1);
    tracep->declBit(c+1167,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+17,"icache_axi_rready", false,-1);
    tracep->declBit(c+1437,"icache_axi_rlast", false,-1);
    tracep->declBit(c+393,"id_valid", false,-1);
    tracep->declBit(c+394,"id_ready", false,-1);
    tracep->declBus(c+395,"prepc", false,-1, 20,0);
    tracep->declBus(c+396,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+397,"rs1", false,-1, 3,0);
    tracep->declBus(c+398,"rs2", false,-1, 3,0);
    tracep->declBus(c+399,"pc_id", false,-1, 31,0);
    tracep->declBus(c+400,"imm_id", false,-1, 31,0);
    tracep->declBus(c+401,"op_id", false,-1, 4,0);
    tracep->declBus(c+402,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+403,"r1_id", false,-1, 31,0);
    tracep->declBus(c+404,"r2_id", false,-1, 31,0);
    tracep->declBus(c+405,"rd_id", false,-1, 3,0);
    tracep->declBit(c+406,"gpr_wen_id", false,-1);
    tracep->declBit(c+407,"ls_valid_id", false,-1);
    tracep->declBit(c+408,"fencei_id", false,-1);
    tracep->declBit(c+409,"ex_ready", false,-1);
    tracep->declBit(c+593,"ex_valid", false,-1);
    tracep->declBus(c+410,"xrd_ex", false,-1, 31,0);
    tracep->declBus(c+411,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+412,"gpr_wen_ex", false,-1);
    tracep->declBus(c+413,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+414,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+415,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+416,"ls_addr", false,-1, 31,0);
    tracep->declBus(c+417,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+418,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+419,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+1530,"ls_done", false,-1);
    tracep->declBus(c+18,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1438,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1531,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1590,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1591,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1592,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1168,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1593,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1169,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1532,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1533,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1594,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1595,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1534,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1535,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1002,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1259,"ls_axi_awready", false,-1);
    tracep->declBit(c+21,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1130,"ls_axi_wready", false,-1);
    tracep->declBit(c+1439,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+22,"ls_axi_bready", false,-1);
    tracep->declBit(c+1003,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1131,"ls_axi_arready", false,-1);
    tracep->declBit(c+1440,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1004,"ls_axi_rready", false,-1);
    tracep->declBit(c+21,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1170,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1596,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1597,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1100,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1536,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1598,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1599,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1101,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1600,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1601,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1102,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1602,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1603,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1103,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1604,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1104,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1605,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1606,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1607,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1608,"c_axi_awready", false,-1);
    tracep->declBit(c+1609,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1610,"c_axi_wready", false,-1);
    tracep->declBit(c+1611,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1612,"c_axi_bready", false,-1);
    tracep->declBit(c+1105,"c_axi_arvalid", false,-1);
    tracep->declBit(c+420,"c_axi_arready", false,-1);
    tracep->declBit(c+421,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1106,"c_axi_rready", false,-1);
    tracep->declBit(c+1613,"c_axi_wlast", false,-1);
    tracep->declBit(c+1614,"c_axi_rlast", false,-1);
    tracep->declBus(c+422,"r1", false,-1, 31,0);
    tracep->declBus(c+423,"r2", false,-1, 31,0);
    tracep->declBus(c+424,"mepc", false,-1, 31,0);
    tracep->declBus(c+425,"mstatus", false,-1, 31,0);
    tracep->declBus(c+426,"mcause", false,-1, 31,0);
    tracep->declBus(c+427,"mtvec", false,-1, 31,0);
    tracep->declBus(c+428,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+429,"marchid", false,-1, 31,0);
    tracep->declBit(c+1566,"isRAW", false,-1);
    tracep->declBit(c+430,"CHazarden", false,-1);
    tracep->declBit(c+431,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1615,"n", false,-1, 31,0);
    tracep->declBus(c+1616,"w", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+383,"pc_i", false,-1, 31,0);
    tracep->declBus(c+385,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+395,"prepc_i", false,-1, 20,0);
    tracep->declBus(c+387,"prepc_tag_i", false,-1, 31,0);
    tracep->declBus(c+396,"prepc_en_i", false,-1, 1,0);
    tracep->declBus(c+432,"jsnpc_reg", false,-1, 20,0);
    tracep->declBus(c+433,"jtag_reg", false,-1, 29,0);
    tracep->declBus(c+434,"jtag", false,-1, 29,0);
    tracep->declBit(c+435,"jhit", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+436+i*1,"snpc_reg", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+438+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+440,"tag", false,-1, 28,0);
    tracep->declBus(c+441,"index", false,-1, 0,0);
    tracep->declBus(c+442,"prepc_tag", false,-1, 28,0);
    tracep->declBus(c+443,"prepc_index", false,-1, 0,0);
    tracep->declBus(c+1617,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+444,"hit", false,-1, 0,0);
    tracep->declBus(c+445,"already", false,-1, 0,0);
    tracep->declBus(c+446,"enable", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+447,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+420,"c_axi_arready", false,-1);
    tracep->declBit(c+1105,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1102,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1100,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1101,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1103,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1104,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1106,"c_axi_rready", false,-1);
    tracep->declBit(c+421,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1602,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1536,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1606,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1614,"c_axi_rlast", false,-1);
    tracep->declBus(c+1618,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1619,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBus(c+1537,"c_rdata", false,-1, 31,0);
    tracep->declQuad(c+448,"mtime", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+431,"flush_i", false,-1);
    tracep->declBit(c+393,"id_valid_i", false,-1);
    tracep->declBit(c+409,"ex_ready_o", false,-1);
    tracep->declBit(c+593,"ex_valid_o", false,-1);
    tracep->declBus(c+399,"pc_i", false,-1, 31,0);
    tracep->declBus(c+400,"imm_i", false,-1, 31,0);
    tracep->declBus(c+401,"op_i", false,-1, 4,0);
    tracep->declBus(c+402,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+403,"r1_i", false,-1, 31,0);
    tracep->declBus(c+404,"r2_i", false,-1, 31,0);
    tracep->declBus(c+405,"rd_i", false,-1, 3,0);
    tracep->declBit(c+406,"gpr_wen_i", false,-1);
    tracep->declBus(c+424,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+425,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+426,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+427,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+410,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+411,"rd_o", false,-1, 3,0);
    tracep->declBit(c+412,"gpr_wen_o", false,-1);
    tracep->declBus(c+413,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+414,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+415,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+416,"ls_addr_o", false,-1, 31,0);
    tracep->declBus(c+417,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+419,"ls_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1530,"ls_done_i", false,-1);
    tracep->declBus(c+418,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"WAIT", false,-1, 0,0);
    tracep->declBit(c+450,"state", false,-1);
    tracep->declBit(c+1441,"updata", false,-1);
    tracep->declBus(c+451,"xrd", false,-1, 31,0);
    tracep->declBus(c+452,"csr", false,-1, 31,0);
    tracep->declBus(c+453,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+454,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+455,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+456,"funct7_i", false,-1);
    tracep->declBus(c+457,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+458,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+459,"alu_res", false,-1, 31,0);
    tracep->declBus(c+460,"a", false,-1, 31,0);
    tracep->declBus(c+461,"b", false,-1, 31,0);
    tracep->declBit(c+462,"a_use_r1", false,-1);
    tracep->declBit(c+463,"b_use_imm", false,-1);
    tracep->declBit(c+464,"b_use_shamt", false,-1);
    tracep->declBit(c+465,"b_use_r2", false,-1);
    tracep->declBit(c+466,"ab_use_signed", false,-1);
    tracep->declBus(c+1573,"ADD", false,-1, 3,0);
    tracep->declBus(c+1622,"SUB", false,-1, 3,0);
    tracep->declBus(c+1623,"SLL", false,-1, 3,0);
    tracep->declBus(c+1624,"SRL", false,-1, 3,0);
    tracep->declBus(c+1625,"SRA", false,-1, 3,0);
    tracep->declBus(c+1626,"SLT", false,-1, 3,0);
    tracep->declBus(c+1627,"AND", false,-1, 3,0);
    tracep->declBus(c+1628,"OR", false,-1, 3,0);
    tracep->declBus(c+1629,"XOR", false,-1, 3,0);
    tracep->declBit(c+467,"ls_valid", false,-1);
    tracep->declBus(c+400,"offset", false,-1, 31,0);
    tracep->declBit(c+468,"jalen", false,-1);
    tracep->declBit(c+469,"jalren", false,-1);
    tracep->declBit(c+470,"beqen", false,-1);
    tracep->declBit(c+471,"bneen", false,-1);
    tracep->declBit(c+472,"blten", false,-1);
    tracep->declBit(c+473,"bgeen", false,-1);
    tracep->declBit(c+474,"bltuen", false,-1);
    tracep->declBit(c+475,"bgeuen", false,-1);
    tracep->declBit(c+476,"ecall_en", false,-1);
    tracep->declBit(c+477,"mret_en", false,-1);
    tracep->declBus(c+478,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1615,"n", false,-1, 31,0);
    tracep->declBus(c+1630,"m", false,-1, 31,0);
    tracep->declBus(c+1616,"w", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+408,"fencei_i", false,-1);
    tracep->declBit(c+1000,"m_axi_arready", false,-1);
    tracep->declBit(c+391,"m_axi_arvalid", false,-1);
    tracep->declBus(c+1573,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+390,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1575,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1567,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1557,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+392,"m_axi_rready", false,-1);
    tracep->declBit(c+1436,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1586,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+999,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1587,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1588,"m_axi_rlast", false,-1);
    tracep->declBit(c+1129,"s_axi_arready", false,-1);
    tracep->declBit(c+1001,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1589,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+13,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+14,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+15,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+16,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+17,"s_axi_rready", false,-1);
    tracep->declBit(c+1167,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1166,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1165,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1529,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1437,"s_axi_rlast", false,-1);
    tracep->declBus(c+1630,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1631,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1615,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+23,"[0]", false,-1, 31,0);
    tracep->declBus(c+24,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+25,"[0]", false,-1, 31,0);
    tracep->declBus(c+26,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+27,"[0]", false,-1, 31,0);
    tracep->declBus(c+28,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+29,"[0]", false,-1, 31,0);
    tracep->declBus(c+30,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+31,"[0]", false,-1, 26,0);
    tracep->declBus(c+32,"[1]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+33,"[0]", false,-1, 26,0);
    tracep->declBus(c+34,"[1]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+35,"[0]", false,-1, 26,0);
    tracep->declBus(c+36,"[1]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+37,"[0]", false,-1, 26,0);
    tracep->declBus(c+38,"[1]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"valid_reg", true,(i+0), 1,0);
    }
    tracep->declBus(c+479,"tag", false,-1, 26,0);
    tracep->declBus(c+480,"index", false,-1, 0,0);
    tracep->declBus(c+481,"offset", false,-1, 1,0);
    tracep->declBus(c+43,"s_tag", false,-1, 26,0);
    tracep->declBus(c+44,"s_index", false,-1, 0,0);
    tracep->declBus(c+45,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1107,"access", false,-1, 0,0);
    tracep->declBus(c+46,"hit", false,-1, 0,0);
    tracep->declBus(c+1617,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1442,"axi_rvalid", false,-1);
    tracep->declBit(c+482,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"TRANS", false,-1, 0,0);
    tracep->declBit(c+47,"state", false,-1);
    tracep->declBus(c+48,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+49,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+50,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+51,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+52,"a", false,-1, 31,0);
    tracep->declBus(c+53,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+1566,"isRAW_i", false,-1);
    tracep->declBit(c+431,"flush_i", false,-1);
    tracep->declBus(c+395,"prepc_o", false,-1, 20,0);
    tracep->declBus(c+396,"prepc_en_o", false,-1, 1,0);
    tracep->declBus(c+397,"rs1", false,-1, 3,0);
    tracep->declBus(c+398,"rs2", false,-1, 3,0);
    tracep->declBus(c+422,"r1", false,-1, 31,0);
    tracep->declBus(c+423,"r2", false,-1, 31,0);
    tracep->declBit(c+388,"if_valid_i", false,-1);
    tracep->declBit(c+394,"id_ready_o", false,-1);
    tracep->declBit(c+393,"id_valid_o", false,-1);
    tracep->declBit(c+409,"ex_ready_i", false,-1);
    tracep->declBus(c+387,"pc_i", false,-1, 31,0);
    tracep->declBus(c+386,"inst_i", false,-1, 31,0);
    tracep->declBus(c+399,"pc_o", false,-1, 31,0);
    tracep->declBus(c+400,"imm_o", false,-1, 31,0);
    tracep->declBus(c+401,"op_o", false,-1, 4,0);
    tracep->declBus(c+402,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+403,"r1_o", false,-1, 31,0);
    tracep->declBus(c+404,"r2_o", false,-1, 31,0);
    tracep->declBus(c+405,"rd_o", false,-1, 3,0);
    tracep->declBit(c+406,"gpr_wen_o", false,-1);
    tracep->declBit(c+407,"ls_valid_o", false,-1);
    tracep->declBit(c+408,"fencei_o", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"WAIT", false,-1, 0,0);
    tracep->declBit(c+483,"state", false,-1);
    tracep->declBit(c+484,"updata", false,-1);
    tracep->declBus(c+485,"op", false,-1, 4,0);
    tracep->declBus(c+486,"rd", false,-1, 3,0);
    tracep->declBus(c+487,"funct3", false,-1, 2,0);
    tracep->declBus(c+488,"immI", false,-1, 31,0);
    tracep->declBus(c+489,"immU", false,-1, 31,0);
    tracep->declBus(c+490,"immS", false,-1, 31,0);
    tracep->declBus(c+491,"immB", false,-1, 31,0);
    tracep->declBus(c+492,"immJ", false,-1, 31,0);
    tracep->declBus(c+493,"imm", false,-1, 31,0);
    tracep->declBus(c+494,"funct7", false,-1, 6,0);
    tracep->declBus(c+495,"prepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+431,"flush", false,-1);
    tracep->declBit(c+384,"pc_valid_i", false,-1);
    tracep->declBit(c+389,"if_ready_o", false,-1);
    tracep->declBit(c+388,"if_valid_o", false,-1);
    tracep->declBit(c+394,"id_ready_i", false,-1);
    tracep->declBus(c+383,"pc_i", false,-1, 31,0);
    tracep->declBus(c+387,"pc_o", false,-1, 31,0);
    tracep->declBus(c+386,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1000,"if_axi_arready_i", false,-1);
    tracep->declBit(c+391,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+1573,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+390,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1575,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1567,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1557,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+392,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1436,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1586,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+999,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1587,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1588,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"WAIT", false,-1, 0,0);
    tracep->declBit(c+496,"state", false,-1);
    tracep->declBit(c+497,"ifaddr_valid", false,-1);
    tracep->declBit(c+498,"updata", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+401,"op_i", false,-1, 4,0);
    tracep->declBus(c+402,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+499,"ls_valid_i", false,-1);
    tracep->declBus(c+416,"ls_addr_i", false,-1, 31,0);
    tracep->declBus(c+417,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+419,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+1530,"ls_done_o", false,-1);
    tracep->declBit(c+1259,"ls_axi_awready", false,-1);
    tracep->declBit(c+1002,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1592,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+18,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1590,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1532,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1594,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1130,"ls_axi_wready", false,-1);
    tracep->declBit(c+21,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+19,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1531,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+21,"ls_axi_wlast", false,-1);
    tracep->declBit(c+22,"ls_axi_bready", false,-1);
    tracep->declBit(c+1439,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1168,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1534,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1131,"ls_axi_arready", false,-1);
    tracep->declBit(c+1003,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1593,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+20,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1591,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1533,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1595,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1004,"ls_axi_rready", false,-1);
    tracep->declBit(c+1440,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1169,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1438,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1535,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1170,"ls_axi_rlast", false,-1);
    tracep->declBit(c+500,"ls_wen_i", false,-1);
    tracep->declBit(c+501,"ls_ren_i", false,-1);
    tracep->declBus(c+502,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1443,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+503,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+504,"ls_arsize_i", false,-1, 2,0);
    tracep->declBit(c+505,"ls_read_done", false,-1);
    tracep->declBus(c+1557,"AXI_IDLE", false,-1, 1,0);
    tracep->declBus(c+1558,"AXI_READ", false,-1, 1,0);
    tracep->declBus(c+1559,"AXI_WRITE", false,-1, 1,0);
    tracep->declBus(c+54,"axi_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+431,"flush", false,-1);
    tracep->declBus(c+383,"pc_o", false,-1, 31,0);
    tracep->declBus(c+418,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+385,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+384,"pc_valid_o", false,-1);
    tracep->declBit(c+389,"if_ready_i", false,-1);
    tracep->declBus(c+1632,"RESET_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1630,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1633,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBus(c+410,"wdata", false,-1, 31,0);
    tracep->declBus(c+411,"waddr", false,-1, 3,0);
    tracep->declBit(c+412,"wen", false,-1);
    tracep->declBus(c+397,"raddr1", false,-1, 3,0);
    tracep->declBus(c+422,"r1", false,-1, 31,0);
    tracep->declBus(c+398,"raddr2", false,-1, 3,0);
    tracep->declBus(c+423,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+506+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+522,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+523,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+524,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+525,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBit(c+1129,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1001,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1589,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+13,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+14,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+15,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+16,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+17,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1167,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1166,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1165,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1529,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1437,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1259,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1002,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1592,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+18,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1590,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1532,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1594,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1130,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+21,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+19,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1531,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+21,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+22,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1439,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1168,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1534,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1131,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1003,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1593,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+20,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1591,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1533,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1595,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1004,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1440,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1169,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1438,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1535,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1170,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1252,"io_master_awready", false,-1);
    tracep->declBit(c+1063,"io_master_awvalid", false,-1);
    tracep->declBus(c+1023,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1025,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1026,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1027,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1128,"io_master_wready", false,-1);
    tracep->declBit(c+1031,"io_master_wvalid", false,-1);
    tracep->declBus(c+1029,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1030,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1031,"io_master_wlast", false,-1);
    tracep->declBit(c+1064,"io_master_bready", false,-1);
    tracep->declBit(c+1356,"io_master_bvalid", false,-1);
    tracep->declBus(c+1357,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1524,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1253,"io_master_arready", false,-1);
    tracep->declBit(c+1065,"io_master_arvalid", false,-1);
    tracep->declBus(c+1017,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1018,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1020,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1066,"io_master_rready", false,-1);
    tracep->declBit(c+1358,"io_master_rvalid", false,-1);
    tracep->declBus(c+1359,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1525,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1526,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1360,"io_master_rlast", false,-1);
    tracep->declBit(c+420,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1105,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1102,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1100,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1101,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1103,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1104,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1106,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+421,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1602,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1536,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1606,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1614,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+428,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+429,"marchid", false,-1, 31,0);
    tracep->declBus(c+1024,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1029,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1108,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1444,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1030,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1025,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1109,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1023,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1357,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1110,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1171,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1026,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1111,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1027,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1112,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1524,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1538,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1063,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1252,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1031,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1128,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1356,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1064,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1031,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1113,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1260,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1445,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1114,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1172,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1620,"SEL_IFU", false,-1, 0,0);
    tracep->declBus(c+1621,"SEL_LSU", false,-1, 0,0);
    tracep->declBit(c+1115,"sel_m", false,-1);
    tracep->declBus(c+1557,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1558,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1559,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+526,"state", false,-1, 1,0);
    tracep->declBus(c+1618,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1619,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1116,"sel_clint", false,-1);
    tracep->declBus(c+1634,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1635,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1117,"sel_mvendorid", false,-1);
    tracep->declBit(c+1118,"sel_marchid", false,-1);
    tracep->declBit(c+1119,"sel_id", false,-1);
    tracep->declBus(c+1539,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1571,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1571,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1636,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+1574,"din", false,-1, 31,0);
    tracep->declBus(c+429,"dout", false,-1, 31,0);
    tracep->declBit(c+1566,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1574,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+413,"din", false,-1, 31,0);
    tracep->declBus(c+426,"dout", false,-1, 31,0);
    tracep->declBit(c+527,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1574,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+414,"din", false,-1, 31,0);
    tracep->declBus(c+424,"dout", false,-1, 31,0);
    tracep->declBit(c+528,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1637,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+414,"din", false,-1, 31,0);
    tracep->declBus(c+425,"dout", false,-1, 31,0);
    tracep->declBit(c+529,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1574,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+414,"din", false,-1, 31,0);
    tracep->declBus(c+427,"dout", false,-1, 31,0);
    tracep->declBit(c+530,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1638,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1528,"rst", false,-1);
    tracep->declBus(c+1574,"din", false,-1, 31,0);
    tracep->declBus(c+428,"dout", false,-1, 31,0);
    tracep->declBit(c+1566,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"io_d", false,-1);
    tracep->declBit(c+531,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"io_d", false,-1);
    tracep->declBit(c+531,"io_q", false,-1);
    tracep->declBit(c+531,"sync_0", false,-1);
    tracep->declBit(c+532,"sync_1", false,-1);
    tracep->declBit(c+533,"sync_2", false,-1);
    tracep->declBit(c+534,"sync_3", false,-1);
    tracep->declBit(c+535,"sync_4", false,-1);
    tracep->declBit(c+536,"sync_5", false,-1);
    tracep->declBit(c+537,"sync_6", false,-1);
    tracep->declBit(c+538,"sync_7", false,-1);
    tracep->declBit(c+539,"sync_8", false,-1);
    tracep->declBit(c+540,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1306,"auto_in_psel", false,-1);
    tracep->declBit(c+1307,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+608,"auto_in_pready", false,-1);
    tracep->declBit(c+1565,"auto_in_pslverr", false,-1);
    tracep->declBus(c+609,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1491,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1492,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1493,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1496,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1497,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1498,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1499,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1500,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1284,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1306,"in_psel", false,-1);
    tracep->declBit(c+1307,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+608,"in_pready", false,-1);
    tracep->declBus(c+609,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1565,"in_pslverr", false,-1);
    tracep->declBus(c+1491,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1492,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1493,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1494,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1495,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1496,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1497,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1498,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1499,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1500,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1575,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1639,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1640,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1641,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1642,"ONE", false,-1, 7,0);
    tracep->declBus(c+1643,"TWO", false,-1, 7,0);
    tracep->declBus(c+1644,"THREE", false,-1, 7,0);
    tracep->declBus(c+1645,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1646,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1647,"SIX", false,-1, 7,0);
    tracep->declBus(c+1648,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1649,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1650,"NINE", false,-1, 7,0);
    tracep->declBus(c+1651,"A", false,-1, 7,0);
    tracep->declBus(c+1652,"B", false,-1, 7,0);
    tracep->declBus(c+1653,"C", false,-1, 7,0);
    tracep->declBus(c+1654,"D", false,-1, 7,0);
    tracep->declBus(c+1655,"E", false,-1, 7,0);
    tracep->declBus(c+1656,"F", false,-1, 7,0);
    tracep->declBus(c+640,"led_reg", false,-1, 15,0);
    tracep->declBus(c+641,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+642+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1446,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1447,"write_en", false,-1);
    tracep->declBit(c+1448,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1304,"auto_in_psel", false,-1);
    tracep->declBit(c+1305,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+606,"auto_in_pready", false,-1);
    tracep->declBit(c+1564,"auto_in_pslverr", false,-1);
    tracep->declBus(c+607,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1501,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1502,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1284,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1304,"in_psel", false,-1);
    tracep->declBit(c+1305,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+606,"in_pready", false,-1);
    tracep->declBus(c+607,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1564,"in_pslverr", false,-1);
    tracep->declBit(c+1501,"ps2_clk", false,-1);
    tracep->declBit(c+1502,"ps2_data", false,-1);
    tracep->declBus(c+1657,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1658,"EXP", false,-1, 7,0);
    tracep->declBus(c+1288,"state", false,-1, 1,0);
    tracep->declBus(c+1289,"counter", false,-1, 3,0);
    tracep->declBus(c+1290,"buffer", false,-1, 7,0);
    tracep->declBus(c+1291,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1292,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1540,"ready", false,-1);
    tracep->declBus(c+1541,"rdata", false,-1, 31,0);
    tracep->declBit(c+1449,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1082,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1083,"auto_in_wvalid", false,-1);
    tracep->declBit(c+199,"auto_in_arready", false,-1);
    tracep->declBit(c+1084,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1013,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1085,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+592,"auto_in_rready", false,-1);
    tracep->declBit(c+200,"auto_in_rvalid", false,-1);
    tracep->declBus(c+201,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+200,"state", false,-1);
    tracep->declBus(c+202,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+201,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1120,"raddr", false,-1, 31,0);
    tracep->declBit(c+1121,"ren", false,-1);
    tracep->declBus(c+1122,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1308,"auto_in_psel", false,-1);
    tracep->declBit(c+1309,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1282,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1515,"auto_in_pready", false,-1);
    tracep->declBit(c+1566,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1185,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1485,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1486,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1512,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1282,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1308,"in_psel", false,-1);
    tracep->declBit(c+1309,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1515,"in_pready", false,-1);
    tracep->declBus(c+1185,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1566,"in_pslverr", false,-1);
    tracep->declBit(c+1485,"qspi_sck", false,-1);
    tracep->declBit(c+1486,"qspi_ce_n", false,-1);
    tracep->declBus(c+1512,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1512,"din", false,-1, 3,0);
    tracep->declBus(c+1487,"dout", false,-1, 3,0);
    tracep->declBus(c+1488,"douten", false,-1, 3,0);
    tracep->declBit(c+1542,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBus(c+1282,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1297,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1185,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1298,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1308,"cyc_i", false,-1);
    tracep->declBit(c+1308,"stb_i", false,-1);
    tracep->declBit(c+1542,"ack_o", false,-1);
    tracep->declBit(c+1296,"we_i", false,-1);
    tracep->declBit(c+1485,"sck", false,-1);
    tracep->declBit(c+1486,"ce_n", false,-1);
    tracep->declBus(c+1512,"din", false,-1, 3,0);
    tracep->declBus(c+1487,"dout", false,-1, 3,0);
    tracep->declBus(c+1488,"douten", false,-1, 3,0);
    tracep->declBus(c+1620,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+650,"mr_sck", false,-1);
    tracep->declBit(c+651,"mr_ce_n", false,-1);
    tracep->declBus(c+1512,"mr_din", false,-1, 3,0);
    tracep->declBus(c+652,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+653,"mr_doe", false,-1);
    tracep->declBit(c+654,"mw_sck", false,-1);
    tracep->declBit(c+655,"mw_ce_n", false,-1);
    tracep->declBus(c+1512,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1450,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+656,"mw_doe", false,-1);
    tracep->declBit(c+1451,"mr_rd", false,-1);
    tracep->declBit(c+657,"mr_done", false,-1);
    tracep->declBit(c+1452,"mw_wr", false,-1);
    tracep->declBit(c+1453,"mw_done", false,-1);
    tracep->declBit(c+1308,"wb_valid", false,-1);
    tracep->declBit(c+1454,"wb_we", false,-1);
    tracep->declBit(c+1455,"wb_re", false,-1);
    tracep->declBit(c+658,"state", false,-1);
    tracep->declBit(c+1456,"nstate", false,-1);
    tracep->declBus(c+1457,"size", false,-1, 2,0);
    tracep->declBus(c+1458,"byte0", false,-1, 7,0);
    tracep->declBus(c+1459,"byte1", false,-1, 7,0);
    tracep->declBus(c+1460,"byte2", false,-1, 7,0);
    tracep->declBus(c+1461,"byte3", false,-1, 7,0);
    tracep->declBus(c+1285,"wdata", false,-1, 31,0);
    tracep->declBit(c+909,"qpi_flag", false,-1);
    tracep->declBit(c+910,"qpi_sck", false,-1);
    tracep->declBit(c+911,"qpi_ce_n", false,-1);
    tracep->declBus(c+912,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+913,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+914,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1543,"rst_n", false,-1);
    tracep->declBus(c+1286,"addr", false,-1, 23,0);
    tracep->declBit(c+1451,"rd", false,-1);
    tracep->declBus(c+1570,"size", false,-1, 2,0);
    tracep->declBit(c+657,"done", false,-1);
    tracep->declBus(c+1185,"line", false,-1, 31,0);
    tracep->declBit(c+650,"sck", false,-1);
    tracep->declBit(c+651,"ce_n", false,-1);
    tracep->declBus(c+1512,"din", false,-1, 3,0);
    tracep->declBus(c+652,"dout", false,-1, 3,0);
    tracep->declBit(c+653,"douten", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"READ", false,-1, 0,0);
    tracep->declBus(c+1659,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+659,"state", false,-1);
    tracep->declBit(c+1462,"nstate", false,-1);
    tracep->declBus(c+660,"counter", false,-1, 7,0);
    tracep->declBus(c+661,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1187+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1660,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+662,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1543,"rst_n", false,-1);
    tracep->declBus(c+1287,"addr", false,-1, 23,0);
    tracep->declBus(c+1285,"line", false,-1, 31,0);
    tracep->declBus(c+1457,"size", false,-1, 2,0);
    tracep->declBit(c+1452,"wr", false,-1);
    tracep->declBit(c+1453,"done", false,-1);
    tracep->declBit(c+654,"sck", false,-1);
    tracep->declBit(c+655,"ce_n", false,-1);
    tracep->declBus(c+1512,"din", false,-1, 3,0);
    tracep->declBus(c+1450,"dout", false,-1, 3,0);
    tracep->declBit(c+656,"douten", false,-1);
    tracep->declBus(c+1620,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1621,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1463,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+663,"state", false,-1);
    tracep->declBit(c+1464,"nstate", false,-1);
    tracep->declBus(c+664,"counter", false,-1, 7,0);
    tracep->declBus(c+665,"saddr", false,-1, 23,0);
    tracep->declBus(c+1661,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1244,"auto_in_awready", false,-1);
    tracep->declBit(c+1245,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1246,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1247,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1248,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1124,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1249,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1250,"auto_in_wready", false,-1);
    tracep->declBit(c+1251,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1125,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1126,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"auto_in_wlast", false,-1);
    tracep->declBit(c+1519,"auto_in_bready", false,-1);
    tracep->declBit(c+623,"auto_in_bvalid", false,-1);
    tracep->declBus(c+620,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1557,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1238,"auto_in_arready", false,-1);
    tracep->declBit(c+1239,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1240,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1123,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1329,"auto_in_rready", false,-1);
    tracep->declBit(c+619,"auto_in_rvalid", false,-1);
    tracep->declBus(c+620,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+621,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1557,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+622,"auto_in_rlast", false,-1);
    tracep->declBit(c+1513,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+596,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1192,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1193,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1194,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1195,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1196,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1197,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+597,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1221,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1244,"in_awready", false,-1);
    tracep->declBit(c+1245,"in_awvalid", false,-1);
    tracep->declBus(c+1247,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1246,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1248,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1124,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1249,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1250,"in_wready", false,-1);
    tracep->declBit(c+1251,"in_wvalid", false,-1);
    tracep->declBus(c+1125,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1126,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"in_wlast", false,-1);
    tracep->declBit(c+1519,"in_bready", false,-1);
    tracep->declBit(c+623,"in_bvalid", false,-1);
    tracep->declBus(c+1557,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+620,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1238,"in_arready", false,-1);
    tracep->declBit(c+1239,"in_arvalid", false,-1);
    tracep->declBus(c+1241,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1240,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1242,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1123,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1329,"in_rready", false,-1);
    tracep->declBit(c+619,"in_rvalid", false,-1);
    tracep->declBus(c+1557,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+621,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+622,"in_rlast", false,-1);
    tracep->declBus(c+620,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1513,"sdram_clk", false,-1);
    tracep->declBit(c+596,"sdram_cke", false,-1);
    tracep->declBit(c+1192,"sdram_cs", false,-1);
    tracep->declBit(c+1193,"sdram_ras", false,-1);
    tracep->declBit(c+1194,"sdram_cas", false,-1);
    tracep->declBit(c+1195,"sdram_we", false,-1);
    tracep->declBus(c+1196,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1197,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+597,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1221,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+666,"sdram_dout_en", false,-1);
    tracep->declBus(c+667,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBit(c+1245,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1247,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1246,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1248,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1249,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1251,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1125,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1126,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1127,"inport_wlast_i", false,-1);
    tracep->declBit(c+1519,"inport_bready_i", false,-1);
    tracep->declBit(c+1239,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1241,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1240,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1242,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1243,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1329,"inport_rready_i", false,-1);
    tracep->declBus(c+1221,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1244,"inport_awready_o", false,-1);
    tracep->declBit(c+1250,"inport_wready_o", false,-1);
    tracep->declBit(c+623,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1557,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+620,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1238,"inport_arready_o", false,-1);
    tracep->declBit(c+619,"inport_rvalid_o", false,-1);
    tracep->declBus(c+621,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1557,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+620,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+622,"inport_rlast_o", false,-1);
    tracep->declBit(c+1513,"sdram_clk_o", false,-1);
    tracep->declBit(c+596,"sdram_cke_o", false,-1);
    tracep->declBit(c+1192,"sdram_cs_o", false,-1);
    tracep->declBit(c+1193,"sdram_ras_o", false,-1);
    tracep->declBit(c+1194,"sdram_cas_o", false,-1);
    tracep->declBit(c+1195,"sdram_we_o", false,-1);
    tracep->declBus(c+597,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1196,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1197,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+667,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+666,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1662,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1631,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1261,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1262,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1263,"ram_rd_w", false,-1);
    tracep->declBit(c+1198,"ram_accept_w", false,-1);
    tracep->declBus(c+1125,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+668,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1264,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+669,"ram_ack_w", false,-1);
    tracep->declBit(c+1566,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBit(c+1245,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1247,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1246,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1248,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1249,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1251,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1125,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1126,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1127,"axi_wlast_i", false,-1);
    tracep->declBit(c+1519,"axi_bready_i", false,-1);
    tracep->declBit(c+1239,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1241,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1240,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1242,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1243,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1329,"axi_rready_i", false,-1);
    tracep->declBit(c+1198,"ram_accept_i", false,-1);
    tracep->declBit(c+669,"ram_ack_i", false,-1);
    tracep->declBit(c+1566,"ram_error_i", false,-1);
    tracep->declBus(c+668,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1244,"axi_awready_o", false,-1);
    tracep->declBit(c+1250,"axi_wready_o", false,-1);
    tracep->declBit(c+623,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1557,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+620,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1238,"axi_arready_o", false,-1);
    tracep->declBit(c+619,"axi_rvalid_o", false,-1);
    tracep->declBus(c+621,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1557,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+620,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+622,"axi_rlast_o", false,-1);
    tracep->declBus(c+1262,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1263,"ram_rd_o", false,-1);
    tracep->declBus(c+1264,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1261,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1125,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+670,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+671,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+672,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+673,"req_rd_q", false,-1);
    tracep->declBit(c+674,"req_wr_q", false,-1);
    tracep->declBus(c+675,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+676,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+677,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+678,"req_prio_q", false,-1);
    tracep->declBit(c+679,"req_hold_rd_q", false,-1);
    tracep->declBit(c+680,"req_hold_wr_q", false,-1);
    tracep->declBit(c+681,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1265,"req_push_w", false,-1);
    tracep->declBus(c+1544,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+682,"req_out_valid_w", false,-1);
    tracep->declBus(c+683,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1465,"resp_accept_w", false,-1);
    tracep->declBit(c+684,"resp_is_write_w", false,-1);
    tracep->declBit(c+685,"resp_is_read_w", false,-1);
    tracep->declBit(c+622,"resp_is_last_w", false,-1);
    tracep->declBus(c+620,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+686,"resp_valid_w", false,-1);
    tracep->declBit(c+687,"write_prio_w", false,-1);
    tracep->declBit(c+688,"read_prio_w", false,-1);
    tracep->declBit(c+1266,"write_active_w", false,-1);
    tracep->declBit(c+1263,"read_active_w", false,-1);
    tracep->declBus(c+1261,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1267,"wr_w", false,-1);
    tracep->declBit(c+1263,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1665,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1630,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1631,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBus(c+1544,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1265,"push_i", false,-1);
    tracep->declBit(c+1465,"pop_i", false,-1);
    tracep->declBus(c+683,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+681,"accept_o", false,-1);
    tracep->declBit(c+682,"valid_o", false,-1);
    tracep->declBus(c+1666,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+689+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+693,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+694,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+695,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1633,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1630,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1631,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBus(c+668,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+669,"push_i", false,-1);
    tracep->declBit(c+1465,"pop_i", false,-1);
    tracep->declBus(c+621,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+696,"accept_o", false,-1);
    tracep->declBit(c+686,"valid_o", false,-1);
    tracep->declBus(c+1666,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+697+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+701,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+702,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+703,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBus(c+1262,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1263,"inport_rd_i", false,-1);
    tracep->declBus(c+1264,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1261,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1125,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1221,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1198,"inport_accept_o", false,-1);
    tracep->declBit(c+669,"inport_ack_o", false,-1);
    tracep->declBit(c+1566,"inport_error_o", false,-1);
    tracep->declBus(c+668,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1513,"sdram_clk_o", false,-1);
    tracep->declBit(c+596,"sdram_cke_o", false,-1);
    tracep->declBit(c+1192,"sdram_cs_o", false,-1);
    tracep->declBit(c+1193,"sdram_ras_o", false,-1);
    tracep->declBit(c+1194,"sdram_cas_o", false,-1);
    tracep->declBit(c+1195,"sdram_we_o", false,-1);
    tracep->declBus(c+597,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1196,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1197,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+667,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+666,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1662,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1663,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1664,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1631,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1666,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1630,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1667,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1668,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1669,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1670,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1671,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1630,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1628,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1624,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1626,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1625,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1627,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1623,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1622,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1573,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1672,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1630,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1573,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1622,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1623,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1624,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1625,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1626,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1627,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1628,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1629,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1673,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1674,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1674,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1633,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1674,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1631,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1631,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1665,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1261,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1262,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1263,"ram_rd_w", false,-1);
    tracep->declBit(c+1198,"ram_accept_w", false,-1);
    tracep->declBus(c+1125,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+668,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+669,"ram_ack_w", false,-1);
    tracep->declBit(c+1268,"ram_req_w", false,-1);
    tracep->declBus(c+1199,"command_q", false,-1, 3,0);
    tracep->declBus(c+1196,"addr_q", false,-1, 12,0);
    tracep->declBus(c+667,"data_q", false,-1, 31,0);
    tracep->declBit(c+704,"data_rd_en_q", false,-1);
    tracep->declBus(c+597,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+596,"cke_q", false,-1);
    tracep->declBus(c+1197,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1675,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+705,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1221,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+706,"refresh_q", false,-1);
    tracep->declBus(c+1200,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+707+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1201,"state_q", false,-1, 3,0);
    tracep->declBus(c+1269,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1270,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+715,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+716,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1271,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1272,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1273,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1630,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+717,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1274,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1676,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1202,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+718,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+668,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+719,"idx", false,-1, 31,0);
    tracep->declBus(c+720,"rd_q", false,-1, 3,0);
    tracep->declBit(c+669,"ack_q", false,-1);
    tracep->declArray(c+1203,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1314,"auto_in_psel", false,-1);
    tracep->declBit(c+1315,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1516,"auto_in_pready", false,-1);
    tracep->declBit(c+1566,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1316,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+594,"spi_bundle_sck", false,-1);
    tracep->declBus(c+595,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1191,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1511,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1632,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1677,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1667,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1466,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1314,"in_psel", false,-1);
    tracep->declBit(c+1315,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1516,"in_pready", false,-1);
    tracep->declBus(c+1316,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1566,"in_pslverr", false,-1);
    tracep->declBit(c+594,"spi_sck", false,-1);
    tracep->declBus(c+595,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1191,"spi_mosi", false,-1);
    tracep->declBit(c+1511,"spi_miso", false,-1);
    tracep->declBit(c+721,"spi_irq_out", false,-1);
    tracep->declBus(c+1467,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1468,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1469,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1470,"wb_we_i", false,-1);
    tracep->declBit(c+1471,"wb_stb_i", false,-1);
    tracep->declBit(c+1472,"wb_cyc_i", false,-1);
    tracep->declBit(c+722,"wb_ack_o", false,-1);
    tracep->declBus(c+723,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1567,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1556,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1568,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1569,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1570,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1678,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1679,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1680,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+541,"state", false,-1, 2,0);
    tracep->declBus(c+542,"next_state", false,-1, 2,0);
    tracep->declBus(c+543,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+544,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+545,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+546,"flash_pwrite", false,-1);
    tracep->declBit(c+547,"flash_psel", false,-1);
    tracep->declBit(c+548,"flash_penable", false,-1);
    tracep->declBit(c+549,"flash_pready", false,-1);
    tracep->declBus(c+550,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1615,"Tp", false,-1, 31,0);
    tracep->declBit(c+1489,"wb_clk_i", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBus(c+1467,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1468,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+723,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1469,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1470,"wb_we_i", false,-1);
    tracep->declBit(c+1471,"wb_stb_i", false,-1);
    tracep->declBit(c+1472,"wb_cyc_i", false,-1);
    tracep->declBit(c+722,"wb_ack_o", false,-1);
    tracep->declBit(c+1566,"wb_err_o", false,-1);
    tracep->declBit(c+721,"wb_int_o", false,-1);
    tracep->declBus(c+595,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+594,"sclk_pad_o", false,-1);
    tracep->declBit(c+1191,"mosi_pad_o", false,-1);
    tracep->declBit(c+1511,"miso_pad_i", false,-1);
    tracep->declBus(c+724,"divider", false,-1, 15,0);
    tracep->declBus(c+725,"ctrl", false,-1, 13,0);
    tracep->declBus(c+726,"ss", false,-1, 7,0);
    tracep->declBus(c+1473,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+727,"rx", false,-1, 127,0);
    tracep->declBit(c+731,"rx_negedge", false,-1);
    tracep->declBit(c+732,"tx_negedge", false,-1);
    tracep->declBus(c+733,"char_len", false,-1, 6,0);
    tracep->declBit(c+734,"go", false,-1);
    tracep->declBit(c+735,"lsb", false,-1);
    tracep->declBit(c+736,"ie", false,-1);
    tracep->declBit(c+737,"ass", false,-1);
    tracep->declBit(c+1474,"spi_divider_sel", false,-1);
    tracep->declBit(c+1475,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1476,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1477,"spi_ss_sel", false,-1);
    tracep->declBit(c+738,"tip", false,-1);
    tracep->declBit(c+739,"pos_edge", false,-1);
    tracep->declBit(c+740,"neg_edge", false,-1);
    tracep->declBit(c+741,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1615,"Tp", false,-1, 31,0);
    tracep->declBit(c+1489,"clk_in", false,-1);
    tracep->declBit(c+1490,"rst", false,-1);
    tracep->declBit(c+738,"enable", false,-1);
    tracep->declBit(c+734,"go", false,-1);
    tracep->declBit(c+741,"last_clk", false,-1);
    tracep->declBus(c+724,"divider", false,-1, 15,0);
    tracep->declBit(c+594,"clk_out", false,-1);
    tracep->declBit(c+739,"pos_edge", false,-1);
    tracep->declBit(c+740,"neg_edge", false,-1);
    tracep->declBus(c+742,"cnt", false,-1, 15,0);
    tracep->declBit(c+743,"cnt_zero", false,-1);
    tracep->declBit(c+744,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1615,"Tp", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"rst", false,-1);
    tracep->declBus(c+1478,"latch", false,-1, 3,0);
    tracep->declBus(c+1469,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+733,"len", false,-1, 6,0);
    tracep->declBit(c+735,"lsb", false,-1);
    tracep->declBit(c+734,"go", false,-1);
    tracep->declBit(c+739,"pos_edge", false,-1);
    tracep->declBit(c+740,"neg_edge", false,-1);
    tracep->declBit(c+731,"rx_negedge", false,-1);
    tracep->declBit(c+732,"tx_negedge", false,-1);
    tracep->declBit(c+738,"tip", false,-1);
    tracep->declBit(c+741,"last", false,-1);
    tracep->declBus(c+1468,"p_in", false,-1, 31,0);
    tracep->declArray(c+727,"p_out", false,-1, 127,0);
    tracep->declBit(c+594,"s_clk", false,-1);
    tracep->declBit(c+1511,"s_in", false,-1);
    tracep->declBit(c+1191,"s_out", false,-1);
    tracep->declBus(c+745,"cnt", false,-1, 7,0);
    tracep->declArray(c+727,"data", false,-1, 127,0);
    tracep->declBus(c+746,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+747,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+748,"rx_clk", false,-1);
    tracep->declBit(c+749,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1310,"auto_in_psel", false,-1);
    tracep->declBit(c+1311,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1283,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1312,"auto_in_pready", false,-1);
    tracep->declBit(c+1566,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1313,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1509,"uart_rx", false,-1);
    tracep->declBit(c+1510,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1310,"in_psel", false,-1);
    tracep->declBit(c+1311,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1312,"in_pready", false,-1);
    tracep->declBit(c+1566,"in_pslverr", false,-1);
    tracep->declBus(c+1284,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1313,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1509,"uart_rx", false,-1);
    tracep->declBit(c+1510,"uart_tx", false,-1);
    tracep->declBit(c+750,"rtsn", false,-1);
    tracep->declBit(c+1566,"ctsn", false,-1);
    tracep->declBit(c+751,"dtr_pad_o", false,-1);
    tracep->declBit(c+1566,"dsr_pad_i", false,-1);
    tracep->declBit(c+1566,"ri_pad_i", false,-1);
    tracep->declBit(c+1566,"dcd_pad_i", false,-1);
    tracep->declBit(c+752,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1479,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1480,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+551,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1481,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+753,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBus(c+1479,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1482,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1481,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1510,"stx_pad_o", false,-1);
    tracep->declBit(c+1509,"srx_pad_i", false,-1);
    tracep->declBus(c+1629,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+753,"rts_pad_o", false,-1);
    tracep->declBit(c+751,"dtr_pad_o", false,-1);
    tracep->declBit(c+752,"int_o", false,-1);
    tracep->declBit(c+754,"enable", false,-1);
    tracep->declBit(c+755,"srx_pad", false,-1);
    tracep->declBus(c+756,"ier", false,-1, 3,0);
    tracep->declBus(c+757,"iir", false,-1, 3,0);
    tracep->declBus(c+758,"fcr", false,-1, 1,0);
    tracep->declBus(c+759,"mcr", false,-1, 4,0);
    tracep->declBus(c+760,"lcr", false,-1, 7,0);
    tracep->declBus(c+761,"msr", false,-1, 7,0);
    tracep->declBus(c+762,"dl", false,-1, 15,0);
    tracep->declBus(c+763,"scratch", false,-1, 7,0);
    tracep->declBit(c+764,"start_dlc", false,-1);
    tracep->declBit(c+765,"lsr_mask_d", false,-1);
    tracep->declBit(c+766,"msi_reset", false,-1);
    tracep->declBus(c+767,"dlc", false,-1, 15,0);
    tracep->declBus(c+768,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+769,"rx_reset", false,-1);
    tracep->declBit(c+770,"tx_reset", false,-1);
    tracep->declBit(c+771,"dlab", false,-1);
    tracep->declBit(c+1571,"cts_pad_i", false,-1);
    tracep->declBit(c+1566,"dsr_pad_i", false,-1);
    tracep->declBit(c+1566,"ri_pad_i", false,-1);
    tracep->declBit(c+1566,"dcd_pad_i", false,-1);
    tracep->declBit(c+772,"loopback", false,-1);
    tracep->declBit(c+1566,"cts", false,-1);
    tracep->declBit(c+1571,"dsr", false,-1);
    tracep->declBit(c+1571,"ri", false,-1);
    tracep->declBit(c+1571,"dcd", false,-1);
    tracep->declBit(c+773,"cts_c", false,-1);
    tracep->declBit(c+774,"dsr_c", false,-1);
    tracep->declBit(c+775,"ri_c", false,-1);
    tracep->declBit(c+776,"dcd_c", false,-1);
    tracep->declBus(c+777,"lsr", false,-1, 7,0);
    tracep->declBit(c+778,"lsr0", false,-1);
    tracep->declBit(c+779,"lsr1", false,-1);
    tracep->declBit(c+780,"lsr2", false,-1);
    tracep->declBit(c+781,"lsr3", false,-1);
    tracep->declBit(c+782,"lsr4", false,-1);
    tracep->declBit(c+783,"lsr5", false,-1);
    tracep->declBit(c+784,"lsr6", false,-1);
    tracep->declBit(c+785,"lsr7", false,-1);
    tracep->declBit(c+786,"lsr0r", false,-1);
    tracep->declBit(c+787,"lsr1r", false,-1);
    tracep->declBit(c+788,"lsr2r", false,-1);
    tracep->declBit(c+789,"lsr3r", false,-1);
    tracep->declBit(c+790,"lsr4r", false,-1);
    tracep->declBit(c+791,"lsr5r", false,-1);
    tracep->declBit(c+792,"lsr6r", false,-1);
    tracep->declBit(c+793,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+794,"rls_int", false,-1);
    tracep->declBit(c+795,"rda_int", false,-1);
    tracep->declBit(c+796,"ti_int", false,-1);
    tracep->declBit(c+797,"thre_int", false,-1);
    tracep->declBit(c+798,"ms_int", false,-1);
    tracep->declBit(c+799,"tf_push", false,-1);
    tracep->declBit(c+800,"rf_pop", false,-1);
    tracep->declBus(c+1545,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+801,"rf_error_bit", false,-1);
    tracep->declBit(c+779,"rf_overrun", false,-1);
    tracep->declBit(c+802,"rf_push_pulse", false,-1);
    tracep->declBus(c+803,"rf_count", false,-1, 4,0);
    tracep->declBus(c+804,"tf_count", false,-1, 4,0);
    tracep->declBus(c+805,"tstate", false,-1, 2,0);
    tracep->declBus(c+806,"rstate", false,-1, 3,0);
    tracep->declBus(c+807,"counter_t", false,-1, 9,0);
    tracep->declBit(c+808,"thre_set_en", false,-1);
    tracep->declBus(c+809,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+810,"block_value", false,-1, 7,0);
    tracep->declBit(c+811,"serial_out", false,-1);
    tracep->declBit(c+812,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+813,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+814,"lsr0_d", false,-1);
    tracep->declBit(c+815,"lsr1_d", false,-1);
    tracep->declBit(c+816,"lsr2_d", false,-1);
    tracep->declBit(c+817,"lsr3_d", false,-1);
    tracep->declBit(c+818,"lsr4_d", false,-1);
    tracep->declBit(c+819,"lsr5_d", false,-1);
    tracep->declBit(c+820,"lsr6_d", false,-1);
    tracep->declBit(c+821,"lsr7_d", false,-1);
    tracep->declBit(c+822,"rls_int_d", false,-1);
    tracep->declBit(c+823,"thre_int_d", false,-1);
    tracep->declBit(c+824,"ms_int_d", false,-1);
    tracep->declBit(c+825,"ti_int_d", false,-1);
    tracep->declBit(c+826,"rda_int_d", false,-1);
    tracep->declBit(c+827,"rls_int_rise", false,-1);
    tracep->declBit(c+828,"thre_int_rise", false,-1);
    tracep->declBit(c+829,"ms_int_rise", false,-1);
    tracep->declBit(c+830,"ti_int_rise", false,-1);
    tracep->declBit(c+831,"rda_int_rise", false,-1);
    tracep->declBit(c+832,"rls_int_pnd", false,-1);
    tracep->declBit(c+833,"rda_int_pnd", false,-1);
    tracep->declBit(c+834,"thre_int_pnd", false,-1);
    tracep->declBit(c+835,"ms_int_pnd", false,-1);
    tracep->declBit(c+836,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1615,"Tp", false,-1, 31,0);
    tracep->declBus(c+1615,"width", false,-1, 31,0);
    tracep->declBus(c+1621,"init_value", false,-1, 0,0);
    tracep->declBit(c+1490,"rst_i", false,-1);
    tracep->declBit(c+1489,"clk_i", false,-1);
    tracep->declBit(c+1566,"stage1_rst_i", false,-1);
    tracep->declBit(c+1571,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1509,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+755,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+837,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBus(c+760,"lcr", false,-1, 7,0);
    tracep->declBit(c+800,"rf_pop", false,-1);
    tracep->declBit(c+812,"srx_pad_i", false,-1);
    tracep->declBit(c+754,"enable", false,-1);
    tracep->declBit(c+769,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+807,"counter_t", false,-1, 9,0);
    tracep->declBus(c+803,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1545,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+779,"rf_overrun", false,-1);
    tracep->declBit(c+801,"rf_error_bit", false,-1);
    tracep->declBus(c+806,"rstate", false,-1, 3,0);
    tracep->declBit(c+802,"rf_push_pulse", false,-1);
    tracep->declBus(c+838,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+839,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+840,"rshift", false,-1, 7,0);
    tracep->declBit(c+841,"rparity", false,-1);
    tracep->declBit(c+842,"rparity_error", false,-1);
    tracep->declBit(c+843,"rframing_error", false,-1);
    tracep->declBit(c+844,"rbit_in", false,-1);
    tracep->declBit(c+845,"rparity_xor", false,-1);
    tracep->declBus(c+846,"counter_b", false,-1, 7,0);
    tracep->declBit(c+847,"rf_push_q", false,-1);
    tracep->declBus(c+848,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+849,"rf_push", false,-1);
    tracep->declBit(c+850,"break_error", false,-1);
    tracep->declBit(c+851,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+852,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+853,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+854,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1573,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1622,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1623,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1624,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1625,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1626,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1627,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1628,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1629,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1673,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1681,"sr_push", false,-1, 3,0);
    tracep->declBus(c+855,"toc_value", false,-1, 9,0);
    tracep->declBus(c+856,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1682,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1683,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1630,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1684,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBit(c+802,"push", false,-1);
    tracep->declBit(c+800,"pop", false,-1);
    tracep->declBus(c+848,"data_in", false,-1, 10,0);
    tracep->declBit(c+769,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1545,"data_out", false,-1, 10,0);
    tracep->declBit(c+779,"overrun", false,-1);
    tracep->declBus(c+803,"count", false,-1, 4,0);
    tracep->declBit(c+801,"error_bit", false,-1);
    tracep->declBus(c+1546,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+857+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+873,"top", false,-1, 3,0);
    tracep->declBus(c+874,"bottom", false,-1, 3,0);
    tracep->declBus(c+875,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+876,"word0", false,-1, 2,0);
    tracep->declBus(c+877,"word1", false,-1, 2,0);
    tracep->declBus(c+878,"word2", false,-1, 2,0);
    tracep->declBus(c+879,"word3", false,-1, 2,0);
    tracep->declBus(c+880,"word4", false,-1, 2,0);
    tracep->declBus(c+881,"word5", false,-1, 2,0);
    tracep->declBus(c+882,"word6", false,-1, 2,0);
    tracep->declBus(c+883,"word7", false,-1, 2,0);
    tracep->declBus(c+884,"word8", false,-1, 2,0);
    tracep->declBus(c+885,"word9", false,-1, 2,0);
    tracep->declBus(c+886,"word10", false,-1, 2,0);
    tracep->declBus(c+887,"word11", false,-1, 2,0);
    tracep->declBus(c+888,"word12", false,-1, 2,0);
    tracep->declBus(c+889,"word13", false,-1, 2,0);
    tracep->declBus(c+890,"word14", false,-1, 2,0);
    tracep->declBus(c+891,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1630,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1667,"data_width", false,-1, 31,0);
    tracep->declBus(c+1683,"depth", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+873,"a", false,-1, 3,0);
    tracep->declBus(c+874,"dpra", false,-1, 3,0);
    tracep->declBus(c+892,"di", false,-1, 7,0);
    tracep->declBus(c+1546,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+552+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBus(c+760,"lcr", false,-1, 7,0);
    tracep->declBit(c+799,"tf_push", false,-1);
    tracep->declBus(c+1482,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+754,"enable", false,-1);
    tracep->declBit(c+770,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+811,"stx_pad_o", false,-1);
    tracep->declBus(c+805,"tstate", false,-1, 2,0);
    tracep->declBus(c+804,"tf_count", false,-1, 4,0);
    tracep->declBus(c+893,"counter", false,-1, 4,0);
    tracep->declBus(c+894,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+895,"shift_out", false,-1, 6,0);
    tracep->declBit(c+896,"stx_o_tmp", false,-1);
    tracep->declBit(c+897,"parity_xor", false,-1);
    tracep->declBit(c+898,"tf_pop", false,-1);
    tracep->declBit(c+899,"bit_out", false,-1);
    tracep->declBus(c+1482,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1547,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+900,"tf_overrun", false,-1);
    tracep->declBus(c+1567,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1556,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1568,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1569,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1570,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1678,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1667,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1683,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1630,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1684,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+1490,"wb_rst_i", false,-1);
    tracep->declBit(c+799,"push", false,-1);
    tracep->declBit(c+898,"pop", false,-1);
    tracep->declBus(c+1482,"data_in", false,-1, 7,0);
    tracep->declBit(c+770,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1547,"data_out", false,-1, 7,0);
    tracep->declBit(c+900,"overrun", false,-1);
    tracep->declBus(c+804,"count", false,-1, 4,0);
    tracep->declBus(c+901,"top", false,-1, 3,0);
    tracep->declBus(c+902,"bottom", false,-1, 3,0);
    tracep->declBus(c+903,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1630,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1667,"data_width", false,-1, 31,0);
    tracep->declBus(c+1683,"depth", false,-1, 31,0);
    tracep->declBit(c+1489,"clk", false,-1);
    tracep->declBit(c+799,"we", false,-1);
    tracep->declBus(c+901,"a", false,-1, 3,0);
    tracep->declBus(c+902,"dpra", false,-1, 3,0);
    tracep->declBus(c+1482,"di", false,-1, 7,0);
    tracep->declBus(c+1547,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+568+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBit(c+1301,"auto_in_psel", false,-1);
    tracep->declBit(c+1302,"auto_in_penable", false,-1);
    tracep->declBit(c+1296,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1295,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1297,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"auto_in_pready", false,-1);
    tracep->declBit(c+1562,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1563,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1503,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1504,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1505,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1506,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1507,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1508,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1489,"clock", false,-1);
    tracep->declBit(c+1490,"reset", false,-1);
    tracep->declBus(c+1466,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1301,"in_psel", false,-1);
    tracep->declBit(c+1302,"in_penable", false,-1);
    tracep->declBus(c+1295,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1296,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"in_pready", false,-1);
    tracep->declBus(c+1563,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1562,"in_pslverr", false,-1);
    tracep->declBus(c+1503,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1504,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1505,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1506,"vga_hsync", false,-1);
    tracep->declBit(c+1507,"vga_vsync", false,-1);
    tracep->declBit(c+1508,"vga_valid", false,-1);
    tracep->declBit(c+1483,"is_write", false,-1);
    tracep->declBus(c+1484,"addr", false,-1, 31,0);
    tracep->declBit(c+605,"ready", false,-1);
    tracep->declBus(c+904,"i", false,-1, 31,0);
    tracep->declBus(c+1685,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1686,"h_active", false,-1, 31,0);
    tracep->declBus(c+1687,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1688,"h_total", false,-1, 31,0);
    tracep->declBus(c+1631,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1689,"v_active", false,-1, 31,0);
    tracep->declBus(c+1690,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1691,"v_total", false,-1, 31,0);
    tracep->declBus(c+905,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+584,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+906,"h_valid", false,-1);
    tracep->declBit(c+585,"v_valid", false,-1);
    tracep->declBus(c+907,"h_addr", false,-1, 9,0);
    tracep->declBus(c+586,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1548,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+594,"sck", false,-1);
    tracep->declBit(c+1206,"ss", false,-1);
    tracep->declBit(c+1191,"mosi", false,-1);
    tracep->declBit(c+1179,"miso", false,-1);
    tracep->declBus(c+1180,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+1181,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+1182,"counter", false,-1, 2,0);
    tracep->declBit(c+1183,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+594,"sck", false,-1);
    tracep->declBit(c+908,"ss", false,-1);
    tracep->declBit(c+1191,"mosi", false,-1);
    tracep->declBit(c+1549,"miso", false,-1);
    tracep->declBit(c+908,"reset", false,-1);
    tracep->declBus(c+1173,"state", false,-1, 2,0);
    tracep->declBus(c+1174,"counter", false,-1, 7,0);
    tracep->declBus(c+1175,"cmd", false,-1, 7,0);
    tracep->declBus(c+1176,"addr", false,-1, 23,0);
    tracep->declBus(c+1177,"data", false,-1, 31,0);
    tracep->declBit(c+1178,"ren", false,-1);
    tracep->declBus(c+1550,"rdata", false,-1, 31,0);
    tracep->declBus(c+1551,"raddr", false,-1, 31,0);
    tracep->declBus(c+1552,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+594,"clock", false,-1);
    tracep->declBit(c+1178,"valid", false,-1);
    tracep->declBus(c+1175,"cmd", false,-1, 7,0);
    tracep->declBus(c+1551,"addr", false,-1, 31,0);
    tracep->declBus(c+1550,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1485,"sck", false,-1);
    tracep->declBit(c+1486,"ce_n", false,-1);
    tracep->declBus(c+1512,"dio", false,-1, 3,0);
    tracep->declBit(c+1486,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1224,"cmd", false,-1, 7,0);
    tracep->declBus(c+1225,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1226+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1553,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1554,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1230,"ren", false,-1);
    tracep->declBit(c+1231,"wen", false,-1);
    tracep->declBus(c+1232,"len", false,-1, 7,0);
    tracep->declBus(c+1555,"rdata", false,-1, 31,0);
    tracep->declBus(c+1233,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1485,"clock", false,-1);
    tracep->declBit(c+1230,"ren", false,-1);
    tracep->declBit(c+1231,"wen", false,-1);
    tracep->declBus(c+1224,"cmd", false,-1, 7,0);
    tracep->declBus(c+1233,"saddr", false,-1, 31,0);
    tracep->declBus(c+1555,"rdata", false,-1, 31,0);
    tracep->declBus(c+1234,"wdata", false,-1, 31,0);
    tracep->declBus(c+1232,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1513,"clk", false,-1);
    tracep->declBit(c+596,"cke", false,-1);
    tracep->declBit(c+1192,"cs", false,-1);
    tracep->declBit(c+1193,"ras", false,-1);
    tracep->declBit(c+1194,"cas", false,-1);
    tracep->declBit(c+1195,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1207,"ba", false,-1, 1,0);
    tracep->declBus(c+1208,"dqm", false,-1, 1,0);
    tracep->declBus(c+1222,"dq", false,-1, 15,0);
    tracep->declBit(c+1209,"reset", false,-1);
    tracep->declBus(c+915,"state", false,-1, 2,0);
    tracep->declBus(c+916,"counter", false,-1, 7,0);
    tracep->declBus(c+917,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1692,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+918,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+919,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1210,"nop", false,-1);
    tracep->declBit(c+1211,"active", false,-1);
    tracep->declBit(c+1212,"precharge", false,-1);
    tracep->declBit(c+1213,"read", false,-1);
    tracep->declBit(c+1214,"write", false,-1);
    tracep->declBit(c+1215,"burstterm", false,-1);
    tracep->declBit(c+1216,"autorefresh", false,-1);
    tracep->declBit(c+1217,"mode", false,-1);
    tracep->declBus(c+920,"test", false,-1, 15,0);
    tracep->declBus(c+921,"test1", false,-1, 15,0);
    tracep->declBus(c+922,"sense", false,-1, 31,0);
    tracep->declBit(c+923,"write_burst_mode", false,-1);
    tracep->declBus(c+924,"op_mode", false,-1, 1,0);
    tracep->declBus(c+925,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+926,"burst_type", false,-1);
    tracep->declBus(c+927,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+928,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+929,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+930,"bank", false,-1, 1,0);
    tracep->declBus(c+931,"row", false,-1, 12,0);
    tracep->declBus(c+932,"column", false,-1, 8,0);
    tracep->declBus(c+933,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+934,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+935,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1513,"clk", false,-1);
    tracep->declBit(c+596,"cke", false,-1);
    tracep->declBit(c+1192,"cs", false,-1);
    tracep->declBit(c+1193,"ras", false,-1);
    tracep->declBit(c+1194,"cas", false,-1);
    tracep->declBit(c+1195,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1207,"ba", false,-1, 1,0);
    tracep->declBus(c+1218,"dqm", false,-1, 1,0);
    tracep->declBus(c+1223,"dq", false,-1, 15,0);
    tracep->declBit(c+1209,"reset", false,-1);
    tracep->declBus(c+936,"state", false,-1, 2,0);
    tracep->declBus(c+937,"counter", false,-1, 7,0);
    tracep->declBus(c+938,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1693,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+939,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+940,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1210,"nop", false,-1);
    tracep->declBit(c+1211,"active", false,-1);
    tracep->declBit(c+1212,"precharge", false,-1);
    tracep->declBit(c+1213,"read", false,-1);
    tracep->declBit(c+1214,"write", false,-1);
    tracep->declBit(c+1215,"burstterm", false,-1);
    tracep->declBit(c+1216,"autorefresh", false,-1);
    tracep->declBit(c+1217,"mode", false,-1);
    tracep->declBus(c+941,"test", false,-1, 15,0);
    tracep->declBus(c+942,"test1", false,-1, 15,0);
    tracep->declBus(c+943,"sense", false,-1, 31,0);
    tracep->declBit(c+944,"write_burst_mode", false,-1);
    tracep->declBus(c+945,"op_mode", false,-1, 1,0);
    tracep->declBus(c+946,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+947,"burst_type", false,-1);
    tracep->declBus(c+948,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+949,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+950,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+951,"bank", false,-1, 1,0);
    tracep->declBus(c+952,"row", false,-1, 12,0);
    tracep->declBus(c+953,"column", false,-1, 8,0);
    tracep->declBus(c+954,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+955,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+956,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1513,"clk", false,-1);
    tracep->declBit(c+596,"cke", false,-1);
    tracep->declBit(c+1192,"cs", false,-1);
    tracep->declBit(c+1193,"ras", false,-1);
    tracep->declBit(c+1194,"cas", false,-1);
    tracep->declBit(c+1195,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1207,"ba", false,-1, 1,0);
    tracep->declBus(c+1219,"dqm", false,-1, 1,0);
    tracep->declBus(c+1222,"dq", false,-1, 15,0);
    tracep->declBit(c+1209,"reset", false,-1);
    tracep->declBus(c+957,"state", false,-1, 2,0);
    tracep->declBus(c+958,"counter", false,-1, 7,0);
    tracep->declBus(c+959,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1694,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+960,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+961,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1210,"nop", false,-1);
    tracep->declBit(c+1211,"active", false,-1);
    tracep->declBit(c+1212,"precharge", false,-1);
    tracep->declBit(c+1213,"read", false,-1);
    tracep->declBit(c+1214,"write", false,-1);
    tracep->declBit(c+1215,"burstterm", false,-1);
    tracep->declBit(c+1216,"autorefresh", false,-1);
    tracep->declBit(c+1217,"mode", false,-1);
    tracep->declBus(c+962,"test", false,-1, 15,0);
    tracep->declBus(c+963,"test1", false,-1, 15,0);
    tracep->declBus(c+964,"sense", false,-1, 31,0);
    tracep->declBit(c+965,"write_burst_mode", false,-1);
    tracep->declBus(c+966,"op_mode", false,-1, 1,0);
    tracep->declBus(c+967,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+968,"burst_type", false,-1);
    tracep->declBus(c+969,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+970,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+971,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+972,"bank", false,-1, 1,0);
    tracep->declBus(c+973,"row", false,-1, 12,0);
    tracep->declBus(c+974,"column", false,-1, 8,0);
    tracep->declBus(c+975,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+976,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+977,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1513,"clk", false,-1);
    tracep->declBit(c+596,"cke", false,-1);
    tracep->declBit(c+1192,"cs", false,-1);
    tracep->declBit(c+1193,"ras", false,-1);
    tracep->declBit(c+1194,"cas", false,-1);
    tracep->declBit(c+1195,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1207,"ba", false,-1, 1,0);
    tracep->declBus(c+1220,"dqm", false,-1, 1,0);
    tracep->declBus(c+1223,"dq", false,-1, 15,0);
    tracep->declBit(c+1209,"reset", false,-1);
    tracep->declBus(c+978,"state", false,-1, 2,0);
    tracep->declBus(c+979,"counter", false,-1, 7,0);
    tracep->declBus(c+980,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1695,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+981,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+982,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1210,"nop", false,-1);
    tracep->declBit(c+1211,"active", false,-1);
    tracep->declBit(c+1212,"precharge", false,-1);
    tracep->declBit(c+1213,"read", false,-1);
    tracep->declBit(c+1214,"write", false,-1);
    tracep->declBit(c+1215,"burstterm", false,-1);
    tracep->declBit(c+1216,"autorefresh", false,-1);
    tracep->declBit(c+1217,"mode", false,-1);
    tracep->declBus(c+983,"test", false,-1, 15,0);
    tracep->declBus(c+984,"test1", false,-1, 15,0);
    tracep->declBus(c+985,"sense", false,-1, 31,0);
    tracep->declBit(c+986,"write_burst_mode", false,-1);
    tracep->declBus(c+987,"op_mode", false,-1, 1,0);
    tracep->declBus(c+988,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+989,"burst_type", false,-1);
    tracep->declBus(c+990,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+991,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+992,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+993,"bank", false,-1, 1,0);
    tracep->declBus(c+994,"row", false,-1, 12,0);
    tracep->declBus(c+995,"column", false,-1, 8,0);
    tracep->declBus(c+996,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+997,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+998,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][0U]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [0U][1U]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][0U]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [1U][1U]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][0U]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [2U][1U]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][0U]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                             [3U][1U]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][0U]),27);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [0U][1U]),27);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][0U]),27);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [1U][1U]),27);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][0U]),27);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [2U][1U]),27);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][0U]),27);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                             [3U][1U]),27);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),2);
    bufp->fullIData(oldp+43,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                              >> 5U)),27);
    bufp->fullBit(oldp+44,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                  >> 4U))));
    bufp->fullCData(oldp+45,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 2U))),2);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+65,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+66,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+67,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+106,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)))));
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__snpc),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)))));
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc),21);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),4);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),4);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),5);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+406,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_id));
    bufp->fullBit(oldp+408,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ex),32);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr),32);
    bufp->fullIData(oldp+417,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                           << 8U) : 
                                       ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                            << 0x10U)
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id 
                                                << 0x18U)
                                             : 0U))))
                                : 0U)),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+422,((((IData)(vlSelf->__VdfgTmp_h8b8a6165__0) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                   >> 0x12U)) ? (((- (IData)(
                                                             (8U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                  [8U]) 
                                                 | (((- (IData)(
                                                                (9U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                     [9U]) 
                                                    | (((- (IData)(
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
                                                                      [0xfU]))))))))
                                : (((- (IData)((1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [1U]) | (((- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [2U]) 
                                             | (((- (IData)(
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
                                                            [7U]))))))))),32);
    bufp->fullIData(oldp+423,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))
                                ? (((- (IData)((8U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [8U]) | (((- (IData)(
                                                         (9U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [9U]) 
                                             | (((- (IData)(
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
                                                               [0xfU]))))))))
                                : (((- (IData)((1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [1U]) | (((- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [2U]) 
                                             | (((- (IData)(
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
                                                            [7U]))))))))),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CHazarden));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg),21);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg),30);
    bufp->fullIData(oldp+434,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 2U)),30);
    bufp->fullBit(oldp+435,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 2U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg)));
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),8);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+440,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 3U)),29);
    bufp->fullBit(oldp+441,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                   >> 2U))));
    bufp->fullIData(oldp+442,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               >> 3U)),29);
    bufp->fullBit(oldp+443,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                   >> 2U))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already));
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable),2);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__a),32);
    bufp->fullQData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+451,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
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
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+453,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w)),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w),32);
    bufp->fullCData(oldp+455,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h715ceb05__0) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha484f06e__0) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h116218f2__0) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h127f690d__0) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)))))),4);
    bufp->fullBit(oldp+456,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                   >> 0xaU))));
    bufp->fullCData(oldp+457,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),5);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_use_r1));
    bufp->fullBit(oldp+463,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt));
    bufp->fullBit(oldp+465,((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+466,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+468,((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+469,((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+470,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+471,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+472,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+473,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+474,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+475,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+477,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0d08be77__0)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+479,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+480,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+481,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                     >> 2U))),2);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata));
    bufp->fullCData(oldp+485,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                        >> 2U))),5);
    bufp->fullCData(oldp+486,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0) 
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
    bufp->fullCData(oldp+487,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+488,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+489,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+490,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+491,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+492,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+494,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+495,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)),32);
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+497,(((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
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
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5));
    bufp->fullBit(oldp+500,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullBit(oldp+501,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5))));
    bufp->fullCData(oldp+502,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
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
    bufp->fullCData(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+504,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_read_done));
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+522,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
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
    bufp->fullIData(oldp+523,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1)))) 
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
    bufp->fullIData(oldp+524,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
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
    bufp->fullIData(oldp+525,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
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
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+527,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 2U))));
    bufp->fullBit(oldp+528,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex))));
    bufp->fullBit(oldp+529,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 1U))));
    bufp->fullBit(oldp+530,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+586,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullCData(oldp+587,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+588,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+589,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+590,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+620,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+652,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+653,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+656,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+657,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+662,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+666,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+681,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+682,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+684,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+685,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+686,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+687,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+688,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+696,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+733,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+734,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+735,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+736,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+741,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+743,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+744,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+746,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+750,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+751,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+753,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+771,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+773,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+774,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+775,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+776,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+777,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+781,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+801,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+808,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+827,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+828,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+829,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+830,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+831,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+850,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+851,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+852,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+853,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+854,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+856,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+875,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+892,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+903,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+921,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+922,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+923,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+924,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+925,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+927,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+928,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+929,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+943,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+944,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+945,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+946,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+947,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+948,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+949,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+950,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+959,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+962,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+964,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+965,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+966,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+967,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+968,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+969,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+970,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+971,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+973,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+980,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+982,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+983,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+985,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+986,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+987,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+988,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+989,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+990,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+991,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+992,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+994,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+995,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1017,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))),4);
    bufp->fullIData(oldp+1018,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0)),32);
    bufp->fullCData(oldp+1019,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0))),8);
    bufp->fullCData(oldp+1020,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0))),3);
    bufp->fullCData(oldp+1021,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0))),2);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1028,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1036,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1038,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1040,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1056,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1058,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1059,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1060,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1061,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1062,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1065,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0))));
    bufp->fullBit(oldp+1066,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0))));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1071,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))))),16);
    bufp->fullSData(oldp+1072,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1082,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1083,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1085,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1090,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1092,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1093,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1100,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1101,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1102,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1103,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1104,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1105,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1106,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access));
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1117,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1118,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1120,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid))));
    bufp->fullBit(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1129,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1134,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1135,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1136,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1137,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1138,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1139,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1142,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1143,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1144,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1145,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1146,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1147,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1148,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1149,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1150,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1151,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1152,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1153,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1154,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1155,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1156,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1157,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1159,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1160,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1161,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1162,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1163,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1164,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA)),32);
    bufp->fullCData(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+1167,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullCData(oldp+1168,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1171,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1178,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+1184,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+1185,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1192,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1193,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1194,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1195,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1207,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1212,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1221,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1222,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1223,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1234,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1271,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1272,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1273,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h08a676b4__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullIData(oldp+1282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1285,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1286,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1300,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1301,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1302,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1309,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1319,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1322,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1361,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1362,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1381,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1382,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1405,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1406,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1407,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1408,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1409,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1410,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1411,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1412,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1413,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1414,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1415,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1416,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1417,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1418,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1419,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1420,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1421,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1422,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1423,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1424,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1425,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1426,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1427,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1428,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1430,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1431,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1432,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1433,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1434,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1435,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullIData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata),32);
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1463,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullIData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1484,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1489,(vlSelf->clock));
    bufp->fullBit(oldp+1490,(vlSelf->reset));
    bufp->fullSData(oldp+1491,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1492,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1493,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1494,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1495,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1496,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1497,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1498,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1499,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1500,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1501,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1502,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1503,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1504,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1505,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1506,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1507,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1508,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1509,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1510,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1511,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1513,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1514,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1515,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1518,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1519,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1521,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1522,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1523,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)))));
    bufp->fullCData(oldp+1524,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1525,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1526,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1527,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullBit(oldp+1530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_read_done) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid)))));
    bufp->fullCData(oldp+1531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
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
    bufp->fullCData(oldp+1532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                     ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid)
                                 ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                     & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                        | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                     ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                              ? 1U : 2U))
                                 : 0U)),3);
    bufp->fullCData(oldp+1534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullCData(oldp+1535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullIData(oldp+1536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                 ? (((- (IData)((0x2000000U 
                                                 == (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                             >> 0x20U))))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                    | ((- (IData)((0x2000004U 
                                                   == (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                               >> 0x20U))))) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                  >> 0x20U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1537,((((- (IData)((0x2000000U 
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
    bufp->fullCData(oldp+1538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1539,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1543,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1544,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1545,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1548,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1549,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1551,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1554,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1556,(1U),3);
    bufp->fullCData(oldp+1557,(0U),2);
    bufp->fullCData(oldp+1558,(1U),2);
    bufp->fullCData(oldp+1559,(2U),2);
    bufp->fullCData(oldp+1560,(3U),2);
    bufp->fullSData(oldp+1561,(0xaU),11);
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1566,(0U));
    bufp->fullCData(oldp+1567,(0U),3);
    bufp->fullCData(oldp+1568,(2U),3);
    bufp->fullCData(oldp+1569,(3U),3);
    bufp->fullCData(oldp+1570,(4U),3);
    bufp->fullBit(oldp+1571,(1U));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1573,(0U),4);
    bufp->fullIData(oldp+1574,(0U),32);
    bufp->fullCData(oldp+1575,(0U),8);
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen),8);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen),8);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid),4);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid),4);
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst),2);
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst),2);
    bufp->fullIData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1615,(1U),32);
    bufp->fullIData(oldp+1616,(0U),32);
    bufp->fullIData(oldp+1617,(1U),32);
    bufp->fullIData(oldp+1618,(0x2000000U),32);
    bufp->fullIData(oldp+1619,(0x2000004U),32);
    bufp->fullBit(oldp+1620,(0U));
    bufp->fullBit(oldp+1621,(1U));
    bufp->fullCData(oldp+1622,(1U),4);
    bufp->fullCData(oldp+1623,(2U),4);
    bufp->fullCData(oldp+1624,(3U),4);
    bufp->fullCData(oldp+1625,(4U),4);
    bufp->fullCData(oldp+1626,(5U),4);
    bufp->fullCData(oldp+1627,(6U),4);
    bufp->fullCData(oldp+1628,(7U),4);
    bufp->fullCData(oldp+1629,(8U),4);
    bufp->fullIData(oldp+1630,(4U),32);
    bufp->fullIData(oldp+1631,(2U),32);
    bufp->fullIData(oldp+1632,(0x30000000U),32);
    bufp->fullIData(oldp+1633,(0x20U),32);
    bufp->fullIData(oldp+1634,(0x1000000U),32);
    bufp->fullIData(oldp+1635,(0x1000004U),32);
    bufp->fullIData(oldp+1636,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1637,(0x1800U),32);
    bufp->fullIData(oldp+1638,(0x79737978U),32);
    bufp->fullCData(oldp+1639,(4U),8);
    bufp->fullCData(oldp+1640,(8U),8);
    bufp->fullCData(oldp+1641,(3U),8);
    bufp->fullCData(oldp+1642,(0x9fU),8);
    bufp->fullCData(oldp+1643,(0x25U),8);
    bufp->fullCData(oldp+1644,(0xdU),8);
    bufp->fullCData(oldp+1645,(0x99U),8);
    bufp->fullCData(oldp+1646,(0x49U),8);
    bufp->fullCData(oldp+1647,(0x41U),8);
    bufp->fullCData(oldp+1648,(0x1fU),8);
    bufp->fullCData(oldp+1649,(1U),8);
    bufp->fullCData(oldp+1650,(9U),8);
    bufp->fullCData(oldp+1651,(0x11U),8);
    bufp->fullCData(oldp+1652,(0xc1U),8);
    bufp->fullCData(oldp+1653,(0x63U),8);
    bufp->fullCData(oldp+1654,(0x85U),8);
    bufp->fullCData(oldp+1655,(0x61U),8);
    bufp->fullCData(oldp+1656,(0x71U),8);
    bufp->fullCData(oldp+1657,(0xf0U),8);
    bufp->fullCData(oldp+1658,(0xe0U),8);
    bufp->fullCData(oldp+1659,(0x15U),8);
    bufp->fullCData(oldp+1660,(0xebU),8);
    bufp->fullCData(oldp+1661,(0x38U),8);
    bufp->fullIData(oldp+1662,(0x64U),32);
    bufp->fullIData(oldp+1663,(0x18U),32);
    bufp->fullIData(oldp+1664,(9U),32);
    bufp->fullIData(oldp+1665,(6U),32);
    bufp->fullIData(oldp+1666,(3U),32);
    bufp->fullIData(oldp+1667,(8U),32);
    bufp->fullIData(oldp+1668,(0xdU),32);
    bufp->fullIData(oldp+1669,(0x2000U),32);
    bufp->fullIData(oldp+1670,(0x2710U),32);
    bufp->fullIData(oldp+1671,(0x30cU),32);
    bufp->fullSData(oldp+1672,(0x20U),13);
    bufp->fullCData(oldp+1673,(9U),4);
    bufp->fullIData(oldp+1674,(0xaU),32);
    bufp->fullIData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1676,(0x11U),32);
    bufp->fullIData(oldp+1677,(0x3fffffffU),32);
    bufp->fullCData(oldp+1678,(5U),3);
    bufp->fullCData(oldp+1679,(6U),3);
    bufp->fullCData(oldp+1680,(7U),3);
    bufp->fullCData(oldp+1681,(0xaU),4);
    bufp->fullIData(oldp+1682,(0xbU),32);
    bufp->fullIData(oldp+1683,(0x10U),32);
    bufp->fullIData(oldp+1684,(5U),32);
    bufp->fullIData(oldp+1685,(0x60U),32);
    bufp->fullIData(oldp+1686,(0x90U),32);
    bufp->fullIData(oldp+1687,(0x310U),32);
    bufp->fullIData(oldp+1688,(0x320U),32);
    bufp->fullIData(oldp+1689,(0x23U),32);
    bufp->fullIData(oldp+1690,(0x203U),32);
    bufp->fullIData(oldp+1691,(0x20dU),32);
    bufp->fullSData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
