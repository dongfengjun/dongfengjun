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
    tracep->declBit(c+551,"spi_sck", false,-1);
    tracep->declBus(c+552,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+982,"spi_mosi", false,-1);
    tracep->declBit(c+1649,"spi_miso", false,-1);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->declBit(c+1623,"psram_sck", false,-1);
    tracep->declBit(c+1624,"psram_ce_n", false,-1);
    tracep->declBus(c+1650,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1651,"sdram_clk", false,-1);
    tracep->declBit(c+553,"sdram_cke", false,-1);
    tracep->declBit(c+983,"sdram_cs", false,-1);
    tracep->declBit(c+984,"sdram_ras", false,-1);
    tracep->declBit(c+985,"sdram_cas", false,-1);
    tracep->declBit(c+986,"sdram_we", false,-1);
    tracep->declBus(c+987,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+988,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+554,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1012,"sdram_dq", false,-1, 31,0);
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
    tracep->declBus(c+1398,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1399,"in_psel", false,-1);
    tracep->declBit(c+956,"in_penable", false,-1);
    tracep->declBus(c+1715,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1400,"in_pwrite", false,-1);
    tracep->declBus(c+1401,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1402,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+555,"in_pready", false,-1);
    tracep->declBus(c+556,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+557,"in_pslverr", false,-1);
    tracep->declBus(c+1417,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1423,"out_psel", false,-1);
    tracep->declBit(c+1424,"out_penable", false,-1);
    tracep->declBus(c+1425,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"out_pwrite", false,-1);
    tracep->declBus(c+1427,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1429,"out_pready", false,-1);
    tracep->declBus(c+1652,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1430,"out_pslverr", false,-1);
    tracep->declBus(c+1716,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1717,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1718,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1719,"DELAY", false,-1, 1,0);
    tracep->declBus(c+558,"state", false,-1, 1,0);
    tracep->declBus(c+559,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+560,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+561,"pslverr_reg", false,-1);
    tracep->declBus(c+1720,"r", false,-1, 10,0);
    tracep->declBus(c+1718,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1423,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1424,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1417,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1425,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1429,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1430,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1652,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1431,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1432,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1425,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+562,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1721,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1722,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1434,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1435,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1723,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+564,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1436,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1437,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1724,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+566,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1438,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1439,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1417,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1425,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1725,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+957,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1440,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1441,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1442,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1725,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1443,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1444,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1445,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1426,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1425,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1725,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1446,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1447,"sel_0", false,-1);
    tracep->declBit(c+1448,"sel_1", false,-1);
    tracep->declBit(c+1449,"sel_2", false,-1);
    tracep->declBit(c+1450,"sel_3", false,-1);
    tracep->declBit(c+1451,"sel_4", false,-1);
    tracep->declBit(c+1452,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1403,"auto_in_awready", false,-1);
    tracep->declBit(c+1188,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1403,"auto_in_wready", false,-1);
    tracep->declBit(c+1404,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1453,"auto_in_bready", false,-1);
    tracep->declBit(c+1454,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1194,"auto_in_arready", false,-1);
    tracep->declBit(c+1195,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1455,"auto_in_rready", false,-1);
    tracep->declBit(c+1456,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1399,"auto_out_psel", false,-1);
    tracep->declBit(c+956,"auto_out_penable", false,-1);
    tracep->declBit(c+1400,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1398,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1401,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1402,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+555,"auto_out_pready", false,-1);
    tracep->declBit(c+557,"auto_out_pslverr", false,-1);
    tracep->declBus(c+556,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+956,"nodeOut_penable", false,-1);
    tracep->declBus(c+958,"state", false,-1, 1,0);
    tracep->declBit(c+1194,"accept_read", false,-1);
    tracep->declBit(c+1403,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1400,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+567,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1655,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1456,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1454,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1365,"in_arready", false,-1);
    tracep->declBit(c+1199,"in_arvalid", false,-1);
    tracep->declBus(c+1058,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1457,"in_rready", false,-1);
    tracep->declBit(c+568,"in_rvalid", false,-1);
    tracep->declBus(c+569,"in_rid", false,-1, 3,0);
    tracep->declBus(c+570,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+571,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+572,"in_rlast", false,-1);
    tracep->declBit(c+1366,"in_awready", false,-1);
    tracep->declBit(c+1200,"in_awvalid", false,-1);
    tracep->declBus(c+1063,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1367,"in_wready", false,-1);
    tracep->declBit(c+1657,"in_wvalid", false,-1);
    tracep->declBus(c+1201,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"in_wlast", false,-1);
    tracep->declBit(c+1458,"in_bready", false,-1);
    tracep->declBit(c+573,"in_bvalid", false,-1);
    tracep->declBus(c+574,"in_bid", false,-1, 3,0);
    tracep->declBus(c+575,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1368,"out_arready", false,-1);
    tracep->declBit(c+1369,"out_arvalid", false,-1);
    tracep->declBus(c+1370,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1371,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1372,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1162,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1373,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1459,"out_rready", false,-1);
    tracep->declBit(c+576,"out_rvalid", false,-1);
    tracep->declBus(c+577,"out_rid", false,-1, 3,0);
    tracep->declBus(c+578,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1716,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+579,"out_rlast", false,-1);
    tracep->declBit(c+1374,"out_awready", false,-1);
    tracep->declBit(c+1375,"out_awvalid", false,-1);
    tracep->declBus(c+1376,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1377,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1378,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1163,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1379,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1380,"out_wready", false,-1);
    tracep->declBit(c+1460,"out_wvalid", false,-1);
    tracep->declBus(c+1658,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"out_wlast", false,-1);
    tracep->declBit(c+1659,"out_bready", false,-1);
    tracep->declBit(c+580,"out_bvalid", false,-1);
    tracep->declBus(c+577,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1716,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1726,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1715,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1727,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1728,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1729,"DELAY", false,-1, 2,0);
    tracep->declBus(c+581,"rstate", false,-1, 2,0);
    tracep->declBus(c+582,"wstate", false,-1, 2,0);
    tracep->declBus(c+583,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+584,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+585,"rvalid_reg", false,-1);
    tracep->declBus(c+586,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+587,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+591,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+592,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+593,"bvalid_reg", false,-1);
    tracep->declBus(c+594,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+595,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1720,"r", false,-1, 10,0);
    tracep->declBus(c+1718,"s", false,-1, 1,0);
    tracep->declBus(c+596,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1202,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1063,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1405,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1201,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_in_wlast", false,-1);
    tracep->declBit(c+450,"auto_in_bready", false,-1);
    tracep->declBit(c+1461,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1203,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1058,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1463,"auto_in_rready", false,-1);
    tracep->declBit(c+1464,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1663,"auto_in_rlast", false,-1);
    tracep->declBit(c+1466,"auto_out_awready", false,-1);
    tracep->declBit(c+1204,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1205,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1467,"auto_out_wready", false,-1);
    tracep->declBit(c+1406,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_out_wlast", false,-1);
    tracep->declBit(c+1468,"auto_out_bready", false,-1);
    tracep->declBit(c+1469,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1470,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1471,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1472,"auto_out_arready", false,-1);
    tracep->declBit(c+1207,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1208,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1463,"auto_out_rready", false,-1);
    tracep->declBit(c+1464,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1664,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1473,"auto_out_rlast", false,-1);
    tracep->declBit(c+1406,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1474,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1209,"len", false,-1, 7,0);
    tracep->declBus(c+1210,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1211,"len_1", false,-1, 7,0);
    tracep->declBus(c+1212,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1204,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1213,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1214,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1206,"w_last", false,-1);
    tracep->declBit(c+1468,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1203,"io_enq_valid", false,-1);
    tracep->declBus(c+1058,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1059,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1060,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1061,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1062,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1475,"io_deq_ready", false,-1);
    tracep->declBit(c+1207,"io_deq_valid", false,-1);
    tracep->declBus(c+1196,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1215,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1216,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1198,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1217,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1207,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1476,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1202,"io_enq_valid", false,-1);
    tracep->declBus(c+1063,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1064,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1065,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1066,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1067,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1477,"io_deq_ready", false,-1);
    tracep->declBit(c+1218,"io_deq_valid", false,-1);
    tracep->declBus(c+1189,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1219,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1220,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1191,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1221,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1218,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1478,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1405,"io_enq_valid", false,-1);
    tracep->declBus(c+1201,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1068,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1069,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1479,"io_deq_ready", false,-1);
    tracep->declBit(c+1407,"io_deq_valid", false,-1);
    tracep->declBus(c+1192,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1193,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1665,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1407,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1480,"do_enq", false,-1);
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
    tracep->declBit(c+1481,"auto_in_awready", false,-1);
    tracep->declBit(c+1222,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1259,"auto_in_wready", false,-1);
    tracep->declBit(c+1666,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1482,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1483,"auto_in_arready", false,-1);
    tracep->declBit(c+1224,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1225,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1484,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1483,"nodeIn_arready", false,-1);
    tracep->declBit(c+1481,"nodeIn_awready", false,-1);
    tracep->declBit(c+1226,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1485,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1227,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1485,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1228,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1486,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1192,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1193,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1381,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1070,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1063,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1667,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1292,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1201,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1071,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1487,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1488,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1668,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1072,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1058,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1073,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1489,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1490,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1669,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1491,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1200,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1063,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1657,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1201,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1458,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+573,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+574,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+575,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1365,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1058,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1457,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+568,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+569,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+570,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+571,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+572,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1202,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1063,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1405,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1201,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+450,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1461,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1660,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1203,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1058,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1463,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1464,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1663,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1487,"in_0_bvalid", false,-1);
    tracep->declBit(c+1489,"in_0_rvalid", false,-1);
    tracep->declBit(c+1383,"in_0_wready", false,-1);
    tracep->declBit(c+1384,"in_0_awready", false,-1);
    tracep->declBit(c+1671,"in_0_arready", false,-1);
    tracep->declBit(c+1381,"anonIn_awready", false,-1);
    tracep->declBit(c+1382,"anonIn_arready", false,-1);
    tracep->declBit(c+1074,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1075,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1076,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1077,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1078,"arSel", false,-1, 15,0);
    tracep->declBus(c+1079,"awSel", false,-1, 15,0);
    tracep->declBus(c+1492,"rSel", false,-1, 15,0);
    tracep->declBus(c+1493,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1229,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1230,"in_0_awvalid", false,-1);
    tracep->declBit(c+1231,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1408,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1494,"anyValid", false,-1);
    tracep->declBus(c+1495,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1496,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1497,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1498,"prefixOR_1", false,-1);
    tracep->declBit(c+1499,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1500,"muxState_2_0", false,-1);
    tracep->declBit(c+1501,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1502,"anyValid_1", false,-1);
    tracep->declBus(c+1503,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1504,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1505,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1506,"winner_3_0", false,-1);
    tracep->declBit(c+1507,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1508,"muxState_3_0", false,-1);
    tracep->declBit(c+1509,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1231,"io_enq_valid", false,-1);
    tracep->declBus(c+1080,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1385,"io_deq_ready", false,-1);
    tracep->declBit(c+1232,"io_deq_valid", false,-1);
    tracep->declBus(c+1233,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1232,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1386,"do_deq", false,-1);
    tracep->declBit(c+1387,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1387,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1080,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1510,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1234,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1467,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1406,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1468,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1469,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1470,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1511,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1235,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1463,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1464,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1473,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1481,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1222,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1223,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1259,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1666,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1482,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1483,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1224,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1225,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1484,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1236,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1672,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1237,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1238,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1673,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1403,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1188,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1403,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1404,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1453,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1454,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1655,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1194,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1195,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1455,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1456,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1656,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1655,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1469,"in_0_bvalid", false,-1);
    tracep->declBit(c+1464,"in_0_rvalid", false,-1);
    tracep->declBit(c+1512,"in_0_wready", false,-1);
    tracep->declBit(c+1513,"in_0_awready", false,-1);
    tracep->declBit(c+1511,"in_0_arready", false,-1);
    tracep->declBit(c+1510,"anonIn_awready", false,-1);
    tracep->declBit(c+1239,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1240,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1241,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1242,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1243,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1244,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1245,"arSel", false,-1, 15,0);
    tracep->declBus(c+1246,"awSel", false,-1, 15,0);
    tracep->declBus(c+1514,"rSel", false,-1, 15,0);
    tracep->declBus(c+1515,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1247,"in_0_awvalid", false,-1);
    tracep->declBit(c+1248,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1409,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1516,"anyValid", false,-1);
    tracep->declBus(c+1517,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1518,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1519,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1520,"prefixOR_1", false,-1);
    tracep->declBit(c+1521,"winner_3_1", false,-1);
    tracep->declBit(c+1522,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1523,"muxState_3_0", false,-1);
    tracep->declBit(c+1524,"muxState_3_1", false,-1);
    tracep->declBit(c+1525,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1526,"anyValid_1", false,-1);
    tracep->declBus(c+1527,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1528,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1529,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1530,"winner_4_0", false,-1);
    tracep->declBit(c+1531,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1532,"muxState_4_0", false,-1);
    tracep->declBit(c+1533,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1248,"io_enq_valid", false,-1);
    tracep->declBus(c+1249,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1534,"io_deq_ready", false,-1);
    tracep->declBit(c+1250,"io_deq_valid", false,-1);
    tracep->declBus(c+1251,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1250,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1535,"do_deq", false,-1);
    tracep->declBit(c+1536,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1730,"R0_en", false,-1);
    tracep->declBit(c+1627,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1536,"W0_en", false,-1);
    tracep->declBit(c+1627,"W0_clk", false,-1);
    tracep->declBus(c+1249,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1466,"auto_in_awready", false,-1);
    tracep->declBit(c+1204,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1205,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1467,"auto_in_wready", false,-1);
    tracep->declBit(c+1406,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_in_wlast", false,-1);
    tracep->declBit(c+1468,"auto_in_bready", false,-1);
    tracep->declBit(c+1469,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1470,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1471,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1472,"auto_in_arready", false,-1);
    tracep->declBit(c+1207,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1208,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1463,"auto_in_rready", false,-1);
    tracep->declBit(c+1464,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1664,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1473,"auto_in_rlast", false,-1);
    tracep->declBit(c+1510,"auto_out_awready", false,-1);
    tracep->declBit(c+1234,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1189,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1467,"auto_out_wready", false,-1);
    tracep->declBit(c+1406,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1192,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1193,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_out_wlast", false,-1);
    tracep->declBit(c+1468,"auto_out_bready", false,-1);
    tracep->declBit(c+1469,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1470,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1511,"auto_out_arready", false,-1);
    tracep->declBit(c+1235,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1463,"auto_out_rready", false,-1);
    tracep->declBit(c+1464,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1465,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1662,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1473,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1260,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1537,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1261,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1538,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1262,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1539,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1263,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1540,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1541,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1265,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1542,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1266,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1543,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1267,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1544,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1268,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1545,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1269,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1546,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1270,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1547,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1271,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1548,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1272,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1549,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1273,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1550,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1551,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1275,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1552,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1276,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1553,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1277,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1554,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1278,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1555,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1279,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1556,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1280,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1557,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1281,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1558,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1282,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1559,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1283,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1560,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1284,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1561,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1285,"io_enq_valid", false,-1);
    tracep->declBit(c+1205,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1562,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1286,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1563,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1287,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1564,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1288,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1565,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1289,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1566,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1290,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1567,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1291,"io_enq_valid", false,-1);
    tracep->declBit(c+1208,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1568,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1674,"reset", false,-1);
    tracep->declBit(c+1381,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1070,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1063,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1667,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1292,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1201,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1071,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1487,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1488,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1668,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1072,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1058,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1073,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1489,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1490,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1669,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1491,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1674,"reset", false,-1);
    tracep->declBit(c+1725,"io_interrupt", false,-1);
    tracep->declBit(c+1381,"io_master_awready", false,-1);
    tracep->declBit(c+1070,"io_master_awvalid", false,-1);
    tracep->declBus(c+1063,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1667,"io_master_wready", false,-1);
    tracep->declBit(c+1292,"io_master_wvalid", false,-1);
    tracep->declBus(c+1201,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"io_master_wlast", false,-1);
    tracep->declBit(c+1071,"io_master_bready", false,-1);
    tracep->declBit(c+1487,"io_master_bvalid", false,-1);
    tracep->declBus(c+1488,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1668,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"io_master_arready", false,-1);
    tracep->declBit(c+1072,"io_master_arvalid", false,-1);
    tracep->declBus(c+1058,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1073,"io_master_rready", false,-1);
    tracep->declBit(c+1489,"io_master_rvalid", false,-1);
    tracep->declBus(c+1490,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1669,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1491,"io_master_rlast", false,-1);
    tracep->declBit(c+1731,"io_slave_awready", false,-1);
    tracep->declBit(c+1725,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1732,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1733,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1734,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1726,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1716,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1735,"io_slave_wready", false,-1);
    tracep->declBit(c+1725,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1733,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1732,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1725,"io_slave_wlast", false,-1);
    tracep->declBit(c+1725,"io_slave_bready", false,-1);
    tracep->declBit(c+1736,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1737,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1738,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1739,"io_slave_arready", false,-1);
    tracep->declBit(c+1725,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1732,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1733,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1734,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1726,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1716,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1725,"io_slave_rready", false,-1);
    tracep->declBit(c+1740,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1741,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1742,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1743,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1744,"io_slave_rlast", false,-1);
    tracep->declBus(c+1293,"pc", false,-1, 31,0);
    tracep->declBit(c+1730,"pc_valid", false,-1);
    tracep->declBus(c+1675,"snpc", false,-1, 31,0);
    tracep->declBus(c+1026,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1294,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1295,"if_valid", false,-1);
    tracep->declBit(c+1296,"if_ready", false,-1);
    tracep->declBus(c+1745,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1745,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1297,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1732,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1734,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+461,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1732,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1746,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+462,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1747,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1726,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+463,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1716,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+464,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1748,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+465,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1725,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1749,"if_axi_awready", false,-1);
    tracep->declBit(c+1725,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1750,"if_axi_wready", false,-1);
    tracep->declBit(c+1751,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1725,"if_axi_bready", false,-1);
    tracep->declBit(c+1028,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1029,"if_axi_arready", false,-1);
    tracep->declBit(c+1030,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1031,"if_axi_rready", false,-1);
    tracep->declBit(c+1752,"if_axi_wlast", false,-1);
    tracep->declBit(c+1753,"if_axi_rlast", false,-1);
    tracep->declBus(c+1754,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1755,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+466,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1569,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1756,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1757,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+467,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1758,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+451,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1759,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+452,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1760,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+468,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1761,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+469,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1676,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1677,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1762,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1678,"icache_axi_awready", false,-1);
    tracep->declBit(c+1763,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1679,"icache_axi_wready", false,-1);
    tracep->declBit(c+453,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1764,"icache_axi_bready", false,-1);
    tracep->declBit(c+470,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1166,"icache_axi_arready", false,-1);
    tracep->declBit(c+1680,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+471,"icache_axi_rready", false,-1);
    tracep->declBit(c+1765,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1570,"icache_axi_rlast", false,-1);
    tracep->declBus(c+1032,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1410,"id_valid", false,-1);
    tracep->declBit(c+1411,"id_ready", false,-1);
    tracep->declBus(c+1298,"prepc", false,-1, 31,0);
    tracep->declBit(c+1299,"prepc_en", false,-1);
    tracep->declBus(c+1300,"rs1", false,-1, 4,0);
    tracep->declBus(c+1301,"rs2", false,-1, 4,0);
    tracep->declBus(c+1302,"pc_id", false,-1, 31,0);
    tracep->declBus(c+1033,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1303,"op_id", false,-1, 6,0);
    tracep->declBus(c+1304,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+1034,"rd_id", false,-1, 4,0);
    tracep->declBit(c+1035,"gpr_wen_id", false,-1);
    tracep->declBus(c+472,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+473,"a_id", false,-1, 31,0);
    tracep->declBus(c+474,"b_id", false,-1, 31,0);
    tracep->declBus(c+475,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1305,"r2_id", false,-1, 31,0);
    tracep->declBus(c+1036,"csr_id", false,-1, 31,0);
    tracep->declBus(c+476,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+477,"mtvec_id", false,-1, 31,0);
    tracep->declBit(c+1306,"mepc_wen_id", false,-1);
    tracep->declBit(c+1307,"mstatus_wen_id", false,-1);
    tracep->declBit(c+1308,"mcause_wen_id", false,-1);
    tracep->declBit(c+1309,"mtvec_wen_id", false,-1);
    tracep->declBit(c+478,"fencei_id", false,-1);
    tracep->declBus(c+959,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+960,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1681,"ex_ready", false,-1);
    tracep->declBit(c+1620,"ex_valid", false,-1);
    tracep->declBus(c+341,"op_ex", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+961,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+962,"gpr_wen_ex", false,-1);
    tracep->declBus(c+1167,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+1168,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1169,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1170,"mtvec_ex", false,-1, 31,0);
    tracep->declBit(c+1171,"mepc_wen_ex", false,-1);
    tracep->declBit(c+1172,"mstatus_wen_ex", false,-1);
    tracep->declBit(c+1173,"mcause_wen_ex", false,-1);
    tracep->declBit(c+1174,"mtvec_wen_ex", false,-1);
    tracep->declBus(c+963,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1175,"ls_valid_ex", false,-1);
    tracep->declBit(c+343,"ls_wen_ex", false,-1);
    tracep->declBit(c+1176,"ls_read_ex", false,-1);
    tracep->declBit(c+1177,"ls_write_ex", false,-1);
    tracep->declBus(c+1178,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1179,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1180,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1181,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1182,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1183,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1184,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1185,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1186,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+964,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+479,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+480,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1310,"ls_ready", false,-1);
    tracep->declBit(c+1311,"ls_valid", false,-1);
    tracep->declBit(c+1312,"difftest", false,-1);
    tracep->declBus(c+482,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+483,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_ls", false,-1);
    tracep->declBus(c+1081,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+1082,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+1083,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+1084,"mtvec_ls", false,-1, 31,0);
    tracep->declBit(c+1085,"mepc_wen_ls", false,-1);
    tracep->declBit(c+1086,"mstatus_wen_ls", false,-1);
    tracep->declBit(c+1087,"mcause_wen_ls", false,-1);
    tracep->declBit(c+1088,"mtvec_wen_ls", false,-1);
    tracep->declBus(c+1089,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1682,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1090,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1683,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1091,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1092,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1093,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1766,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+454,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1767,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+455,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1094,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1095,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1096,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1097,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1684,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1685,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1098,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1388,"ls_axi_awready", false,-1);
    tracep->declBit(c+1099,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1686,"ls_axi_wready", false,-1);
    tracep->declBit(c+1571,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+1100,"ls_axi_bready", false,-1);
    tracep->declBit(c+1101,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1389,"ls_axi_arready", false,-1);
    tracep->declBit(c+1572,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+1102,"ls_axi_rready", false,-1);
    tracep->declBit(c+1103,"ls_axi_wlast", false,-1);
    tracep->declBit(c+456,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1104,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1252,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1105,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+345,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1106,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1107,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1108,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1109,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+346,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1110,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+347,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1111,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1112,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1113,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1114,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+348,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+349,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1115,"c_axi_awvalid", false,-1);
    tracep->declBit(c+350,"c_axi_awready", false,-1);
    tracep->declBit(c+1313,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1187,"c_axi_wready", false,-1);
    tracep->declBit(c+351,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1116,"c_axi_bready", false,-1);
    tracep->declBit(c+1117,"c_axi_arvalid", false,-1);
    tracep->declBit(c+965,"c_axi_arready", false,-1);
    tracep->declBit(c+966,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1118,"c_axi_rready", false,-1);
    tracep->declBit(c+1119,"c_axi_wlast", false,-1);
    tracep->declBit(c+352,"c_axi_rlast", false,-1);
    tracep->declBus(c+1412,"r1", false,-1, 31,0);
    tracep->declBus(c+1413,"r2", false,-1, 31,0);
    tracep->declBus(c+1054,"mepc", false,-1, 31,0);
    tracep->declBus(c+1055,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1056,"mcause", false,-1, 31,0);
    tracep->declBus(c+1057,"mtvec", false,-1, 31,0);
    tracep->declBus(c+353,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+354,"marchid", false,-1, 31,0);
    tracep->declBit(c+1414,"isRAW", false,-1);
    tracep->declBit(c+1621,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1768,"n", false,-1, 31,0);
    tracep->declBus(c+1769,"w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1293,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1675,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1298,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1294,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1299,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+355+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+363+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1314,"tag", false,-1, 28,0);
    tracep->declBus(c+1315,"index", false,-1, 0,0);
    tracep->declBus(c+1316,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1317,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1415,"hit", false,-1, 3,0);
    tracep->declBus(c+1416,"already", false,-1, 3,0);
    tracep->declBit(c+371,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+372,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+373,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+350,"c_axi_awready", false,-1);
    tracep->declBit(c+1115,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1109,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1104,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1107,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1111,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1113,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1187,"c_axi_wready", false,-1);
    tracep->declBit(c+1313,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1252,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1106,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1119,"c_axi_wlast", false,-1);
    tracep->declBit(c+1116,"c_axi_bready", false,-1);
    tracep->declBit(c+351,"c_axi_bvalid", false,-1);
    tracep->declBus(c+346,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+348,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+965,"c_axi_arready", false,-1);
    tracep->declBit(c+1117,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1110,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1105,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1108,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1114,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1118,"c_axi_rready", false,-1);
    tracep->declBit(c+966,"c_axi_rvalid", false,-1);
    tracep->declBus(c+347,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+345,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"c_axi_rlast", false,-1);
    tracep->declBit(c+350,"axi_awready", false,-1);
    tracep->declBit(c+1187,"axi_wready", false,-1);
    tracep->declBit(c+351,"axi_bvalid", false,-1);
    tracep->declBit(c+965,"axi_arready", false,-1);
    tracep->declBit(c+966,"axi_rvalid", false,-1);
    tracep->declBit(c+352,"axi_rlast", false,-1);
    tracep->declBus(c+348,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+349,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+346,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+347,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+345,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+374,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1770,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1771,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+375,"mtime", false,-1, 63,0);
    tracep->declBus(c+1687,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+1621,"isCHazard", false,-1);
    tracep->declBus(c+1032,"inst_i", false,-1, 31,0);
    tracep->declBus(c+959,"pc_o", false,-1, 31,0);
    tracep->declBus(c+960,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1410,"id_valid_i", false,-1);
    tracep->declBit(c+1681,"ex_ready_o", false,-1);
    tracep->declBit(c+1620,"ex_valid_o", false,-1);
    tracep->declBit(c+1310,"ls_ready_i", false,-1);
    tracep->declBus(c+1302,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1033,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1303,"op_i", false,-1, 6,0);
    tracep->declBus(c+1304,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+1034,"rd_i", false,-1, 4,0);
    tracep->declBit(c+1035,"gpr_wen_i", false,-1);
    tracep->declBus(c+472,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+473,"a_i", false,-1, 31,0);
    tracep->declBus(c+474,"b_i", false,-1, 31,0);
    tracep->declBus(c+475,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1305,"r2_i", false,-1, 31,0);
    tracep->declBus(c+1036,"csr_i", false,-1, 31,0);
    tracep->declBus(c+476,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+477,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1306,"mepc_wen_i", false,-1);
    tracep->declBit(c+1307,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1308,"mcause_wen_i", false,-1);
    tracep->declBit(c+1309,"mtvec_wen_i", false,-1);
    tracep->declBus(c+341,"op_o", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+961,"rd_o", false,-1, 4,0);
    tracep->declBit(c+962,"gpr_wen_o", false,-1);
    tracep->declBus(c+1167,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1168,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1169,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1170,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1171,"mepc_wen_o", false,-1);
    tracep->declBit(c+1172,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1173,"mcause_wen_o", false,-1);
    tracep->declBit(c+1174,"mtvec_wen_o", false,-1);
    tracep->declBus(c+963,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1175,"ls_valid_o", false,-1);
    tracep->declBit(c+343,"ls_wen_o", false,-1);
    tracep->declBit(c+1176,"ls_read_o", false,-1);
    tracep->declBit(c+1177,"ls_write_o", false,-1);
    tracep->declBus(c+1178,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1179,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1180,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1181,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1182,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1183,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1184,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1185,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1186,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+964,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+377,"ex_valid_reg", false,-1);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1688,"state", false,-1);
    tracep->declBus(c+1037,"al_res", false,-1, 31,0);
    tracep->declBit(c+485,"al_done", false,-1);
    tracep->declBus(c+1040,"ex", false,-1, 31,0);
    tracep->declBus(c+1318,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1319,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1320,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1319,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1319,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1321,"ls_valid", false,-1);
    tracep->declBit(c+1322,"ls_wen", false,-1);
    tracep->declBus(c+1323,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1324,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1325,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1326,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1327,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1328,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1734,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1734,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1717,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1717,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+1033,"offset", false,-1, 31,0);
    tracep->declBit(c+1329,"jalen", false,-1);
    tracep->declBit(c+1330,"jalren", false,-1);
    tracep->declBit(c+545,"beqen", false,-1);
    tracep->declBit(c+546,"bneen", false,-1);
    tracep->declBit(c+547,"blten", false,-1);
    tracep->declBit(c+548,"bgeen", false,-1);
    tracep->declBit(c+549,"bltuen", false,-1);
    tracep->declBit(c+550,"bgeuen", false,-1);
    tracep->declBit(c+1331,"ecall_en", false,-1);
    tracep->declBit(c+1041,"mret_en", false,-1);
    tracep->declBus(c+1332,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+473,"a", false,-1, 31,0);
    tracep->declBus(c+474,"b", false,-1, 31,0);
    tracep->declBus(c+472,"opcode", false,-1, 3,0);
    tracep->declBus(c+1037,"res", false,-1, 31,0);
    tracep->declBit(c+485,"done", false,-1);
    tracep->declBus(c+1732,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1774,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1775,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1776,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1777,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1778,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1779,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1780,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1781,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1782,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1783,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1784,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1785,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+486,"state", false,-1);
    tracep->declQuad(c+487,"mul_result", false,-1, 63,0);
    tracep->declBus(c+489,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+490,"dividend", false,-1, 31,0);
    tracep->declBus(c+491,"divisor", false,-1, 31,0);
    tracep->declBus(c+492,"quotient", false,-1, 31,0);
    tracep->declBus(c+493,"remainder", false,-1, 31,0);
    tracep->declBus(c+494,"div_counter", false,-1, 5,0);
    tracep->declBit(c+495,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1769,"n", false,-1, 31,0);
    tracep->declBus(c+1786,"m", false,-1, 31,0);
    tracep->declBus(c+1787,"w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+478,"fencei_i", false,-1);
    tracep->declBit(c+1749,"m_axi_awready", false,-1);
    tracep->declBit(c+1725,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1732,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1745,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1734,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1726,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1716,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1750,"m_axi_wready", false,-1);
    tracep->declBit(c+1725,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1745,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1732,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1752,"m_axi_wlast", false,-1);
    tracep->declBit(c+1725,"m_axi_bready", false,-1);
    tracep->declBit(c+1751,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1746,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1748,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1029,"m_axi_arready", false,-1);
    tracep->declBit(c+1028,"m_axi_arvalid", false,-1);
    tracep->declBus(c+462,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+461,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+463,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+464,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1031,"m_axi_rready", false,-1);
    tracep->declBit(c+1030,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1747,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1027,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+465,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1753,"m_axi_rlast", false,-1);
    tracep->declBit(c+1678,"s_axi_awready", false,-1);
    tracep->declBit(c+1762,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1758,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1754,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1757,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1760,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1761,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1679,"s_axi_wready", false,-1);
    tracep->declBit(c+1763,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1755,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1756,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1765,"s_axi_wlast", false,-1);
    tracep->declBit(c+1764,"s_axi_bready", false,-1);
    tracep->declBit(c+453,"s_axi_bvalid", false,-1);
    tracep->declBus(c+451,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1676,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1166,"s_axi_arready", false,-1);
    tracep->declBit(c+470,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1759,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+466,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+467,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+468,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+469,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+471,"s_axi_rready", false,-1);
    tracep->declBit(c+1680,"s_axi_rvalid", false,-1);
    tracep->declBus(c+452,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1569,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1677,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1570,"s_axi_rlast", false,-1);
    tracep->declBus(c+1786,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1786,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1769,"CACHE_WAY", false,-1, 31,0);
    tracep->pushNamePrefix("cache_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+496,"[0]", false,-1, 31,0);
    tracep->declBus(c+497,"[1]", false,-1, 31,0);
    tracep->declBus(c+498,"[2]", false,-1, 31,0);
    tracep->declBus(c+499,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+500,"[0]", false,-1, 31,0);
    tracep->declBus(c+501,"[1]", false,-1, 31,0);
    tracep->declBus(c+502,"[2]", false,-1, 31,0);
    tracep->declBus(c+503,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+504,"[0]", false,-1, 31,0);
    tracep->declBus(c+505,"[1]", false,-1, 31,0);
    tracep->declBus(c+506,"[2]", false,-1, 31,0);
    tracep->declBus(c+507,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+508,"[0]", false,-1, 31,0);
    tracep->declBus(c+509,"[1]", false,-1, 31,0);
    tracep->declBus(c+510,"[2]", false,-1, 31,0);
    tracep->declBus(c+511,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+512,"[0]", false,-1, 26,0);
    tracep->declBus(c+513,"[1]", false,-1, 26,0);
    tracep->declBus(c+514,"[2]", false,-1, 26,0);
    tracep->declBus(c+515,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+516,"[0]", false,-1, 26,0);
    tracep->declBus(c+517,"[1]", false,-1, 26,0);
    tracep->declBus(c+518,"[2]", false,-1, 26,0);
    tracep->declBus(c+519,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+520,"[0]", false,-1, 26,0);
    tracep->declBus(c+521,"[1]", false,-1, 26,0);
    tracep->declBus(c+522,"[2]", false,-1, 26,0);
    tracep->declBus(c+523,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+524,"[0]", false,-1, 26,0);
    tracep->declBus(c+525,"[1]", false,-1, 26,0);
    tracep->declBus(c+526,"[2]", false,-1, 26,0);
    tracep->declBus(c+527,"[3]", false,-1, 26,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+528+i*1,"valid_reg", true,(i+0), 3,0);
    }
    tracep->declBus(c+1333,"tag", false,-1, 26,0);
    tracep->declBus(c+1334,"index", false,-1, 0,0);
    tracep->declBus(c+1335,"offset", false,-1, 1,0);
    tracep->declBus(c+532,"s_tag", false,-1, 26,0);
    tracep->declBus(c+533,"s_index", false,-1, 0,0);
    tracep->declBus(c+534,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1336,"access", false,-1, 1,0);
    tracep->declBus(c+1788,"hit", false,-1, 1,0);
    tracep->declBus(c+1716,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1717,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1718,"RETURN", false,-1, 1,0);
    tracep->declBus(c+535,"state", false,-1, 1,0);
    tracep->declBus(c+536,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+537,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+538,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+539,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+540,"a", false,-1, 31,0);
    tracep->declBus(c+541,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+1414,"isRAW", false,-1);
    tracep->declBit(c+1621,"isCHazard", false,-1);
    tracep->declBus(c+1032,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1298,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1299,"prepc_en_o", false,-1);
    tracep->declBus(c+1300,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1301,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1412,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1413,"r2_i", false,-1, 31,0);
    tracep->declBus(c+1054,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1055,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1056,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1057,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1295,"if_valid_i", false,-1);
    tracep->declBit(c+1411,"id_ready_o", false,-1);
    tracep->declBit(c+1410,"id_valid_o", false,-1);
    tracep->declBit(c+1681,"ex_ready_i", false,-1);
    tracep->declBus(c+1294,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1026,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1302,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1033,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1303,"op_o", false,-1, 6,0);
    tracep->declBus(c+1304,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+1034,"rd_o", false,-1, 4,0);
    tracep->declBit(c+1035,"gpr_wen_o", false,-1);
    tracep->declBus(c+472,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+473,"a_o", false,-1, 31,0);
    tracep->declBus(c+474,"b_o", false,-1, 31,0);
    tracep->declBus(c+475,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1305,"r2_o", false,-1, 31,0);
    tracep->declBus(c+1036,"csr_o", false,-1, 31,0);
    tracep->declBus(c+476,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+477,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1306,"mepc_wen_o", false,-1);
    tracep->declBit(c+1307,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1308,"mcause_wen_o", false,-1);
    tracep->declBit(c+1309,"mtvec_wen_o", false,-1);
    tracep->declBit(c+478,"fencei_o", false,-1);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1337,"state", false,-1);
    tracep->declBus(c+1338,"op", false,-1, 6,0);
    tracep->declBus(c+1042,"rd", false,-1, 4,0);
    tracep->declBus(c+1339,"funct3", false,-1, 2,0);
    tracep->declBus(c+1043,"immI", false,-1, 31,0);
    tracep->declBus(c+1044,"immU", false,-1, 31,0);
    tracep->declBus(c+1045,"immS", false,-1, 31,0);
    tracep->declBus(c+1046,"immB", false,-1, 31,0);
    tracep->declBus(c+1047,"immJ", false,-1, 31,0);
    tracep->declBus(c+1340,"imm", false,-1, 31,0);
    tracep->declBus(c+1341,"funct7", false,-1, 6,0);
    tracep->declBus(c+1048,"shamt", false,-1, 4,0);
    tracep->declBit(c+1342,"ALUR", false,-1);
    tracep->declBit(c+1343,"ALUI", false,-1);
    tracep->declBit(c+1344,"LOAD", false,-1);
    tracep->declBit(c+1345,"STORE", false,-1);
    tracep->declBit(c+1346,"BRANCH", false,-1);
    tracep->declBit(c+1347,"JAL", false,-1);
    tracep->declBit(c+1348,"JALR", false,-1);
    tracep->declBit(c+1349,"LUI", false,-1);
    tracep->declBit(c+1350,"AUIPC", false,-1);
    tracep->declBit(c+1351,"FENCE", false,-1);
    tracep->declBit(c+1352,"SYSTEM", false,-1);
    tracep->declBit(c+1353,"gpr_wen", false,-1);
    tracep->declBus(c+1354,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1689,"a", false,-1, 31,0);
    tracep->declBus(c+1690,"b", false,-1, 31,0);
    tracep->declBus(c+1732,"ADD", false,-1, 3,0);
    tracep->declBus(c+1774,"SUB", false,-1, 3,0);
    tracep->declBus(c+1775,"SLL", false,-1, 3,0);
    tracep->declBus(c+1776,"SRL", false,-1, 3,0);
    tracep->declBus(c+1777,"SRA", false,-1, 3,0);
    tracep->declBus(c+1778,"SLT", false,-1, 3,0);
    tracep->declBus(c+1779,"AND", false,-1, 3,0);
    tracep->declBus(c+1780,"OR", false,-1, 3,0);
    tracep->declBus(c+1781,"XOR", false,-1, 3,0);
    tracep->declBus(c+1782,"MUL", false,-1, 3,0);
    tracep->declBus(c+1783,"MULH", false,-1, 3,0);
    tracep->declBus(c+1784,"DIV", false,-1, 3,0);
    tracep->declBus(c+1785,"REM", false,-1, 3,0);
    tracep->declBus(c+1691,"csr", false,-1, 31,0);
    tracep->declBit(c+1355,"mepc_wen", false,-1);
    tracep->declBit(c+1356,"mstatus_wen", false,-1);
    tracep->declBit(c+1357,"mcause_wen", false,-1);
    tracep->declBit(c+1358,"mtvec_wen", false,-1);
    tracep->declBit(c+1038,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+1621,"isCHazard", false,-1);
    tracep->declBit(c+1730,"pc_valid_i", false,-1);
    tracep->declBit(c+1296,"if_ready_o", false,-1);
    tracep->declBit(c+1295,"if_valid_o", false,-1);
    tracep->declBit(c+1411,"id_ready_i", false,-1);
    tracep->declBus(c+1293,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1294,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1026,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1749,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1725,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1732,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1745,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1734,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1726,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1716,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1750,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1725,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1745,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1732,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1752,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1725,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1751,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1746,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1748,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1029,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1028,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+462,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1297,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+461,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+463,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+464,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1031,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1030,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1747,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1027,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+465,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1753,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1359,"state", false,-1);
    tracep->declBit(c+542,"isCHazard_reg", false,-1);
    tracep->declBus(c+1772,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1360,"axi_state", false,-1);
    tracep->declBus(c+1039,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+959,"pc_i", false,-1, 31,0);
    tracep->declBus(c+960,"inst_i", false,-1, 31,0);
    tracep->declBus(c+964,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+479,"pc_o", false,-1, 31,0);
    tracep->declBus(c+480,"inst_o", false,-1, 31,0);
    tracep->declBus(c+481,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1622,"ex_valid_i", false,-1);
    tracep->declBit(c+1310,"ls_ready_o", false,-1);
    tracep->declBit(c+1311,"ls_valid_o", false,-1);
    tracep->declBit(c+1312,"difftest_o", false,-1);
    tracep->declBus(c+341,"op_i", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+961,"rd_i", false,-1, 4,0);
    tracep->declBit(c+962,"gpr_wen_i", false,-1);
    tracep->declBus(c+1167,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+1168,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1169,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1170,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1171,"mepc_wen_i", false,-1);
    tracep->declBit(c+1172,"mstatus_wen_i", false,-1);
    tracep->declBit(c+1173,"mcause_wen_i", false,-1);
    tracep->declBit(c+1174,"mtvec_wen_i", false,-1);
    tracep->declBus(c+963,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1175,"ls_valid_i", false,-1);
    tracep->declBit(c+343,"ls_wen_i", false,-1);
    tracep->declBit(c+1176,"ls_read_i", false,-1);
    tracep->declBit(c+1177,"ls_write_i", false,-1);
    tracep->declBus(c+1178,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1179,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1180,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1181,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1182,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1183,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1184,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1185,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1186,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+482,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+483,"rd_o", false,-1, 4,0);
    tracep->declBit(c+484,"gpr_wen_o", false,-1);
    tracep->declBus(c+1081,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+1082,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1083,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1084,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+1085,"mepc_wen_o", false,-1);
    tracep->declBit(c+1086,"mstatus_wen_o", false,-1);
    tracep->declBit(c+1087,"mcause_wen_o", false,-1);
    tracep->declBit(c+1088,"mtvec_wen_o", false,-1);
    tracep->declBit(c+1388,"ls_axi_awready", false,-1);
    tracep->declBit(c+1098,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1766,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1092,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1094,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1096,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1686,"ls_axi_wready", false,-1);
    tracep->declBit(c+1099,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1682,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1091,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1103,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1100,"ls_axi_bready", false,-1);
    tracep->declBit(c+1571,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+454,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1684,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1389,"ls_axi_arready", false,-1);
    tracep->declBit(c+1101,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1767,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1090,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1095,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1097,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1102,"ls_axi_rready", false,-1);
    tracep->declBit(c+1572,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+455,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1683,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1685,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+456,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1716,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1717,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1718,"DONE", false,-1, 1,0);
    tracep->declBus(c+1719,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1361,"state", false,-1, 1,0);
    tracep->declBus(c+1692,"xrd", false,-1, 31,0);
    tracep->declBit(c+1120,"ls_done_reg", false,-1);
    tracep->declBit(c+1120,"ls_done_o", false,-1);
    tracep->declBus(c+1121,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1253,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1726,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1715,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1727,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1728,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1729,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+1122,"axi_state", false,-1, 2,0);
    tracep->declBit(c+1098,"axi_awvalid", false,-1);
    tracep->declBit(c+1099,"axi_wvalid", false,-1);
    tracep->declBus(c+1766,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+1089,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1123,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1092,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1094,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1096,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1091,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"axi_bready", false,-1);
    tracep->declBit(c+1103,"axi_wlast", false,-1);
    tracep->declBit(c+1101,"axi_arvalid", false,-1);
    tracep->declBit(c+1102,"axi_rready", false,-1);
    tracep->declBus(c+1767,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+1090,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1093,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1095,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1097,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+1621,"isCHazard", false,-1);
    tracep->declBus(c+1293,"pc_o", false,-1, 31,0);
    tracep->declBus(c+964,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1675,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1730,"pc_valid_o", false,-1);
    tracep->declBit(c+1296,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1786,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1789,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBus(c+482,"wdata", false,-1, 31,0);
    tracep->declBus(c+543,"waddr", false,-1, 3,0);
    tracep->declBit(c+484,"wen", false,-1);
    tracep->declBus(c+1362,"raddr1", false,-1, 3,0);
    tracep->declBus(c+1412,"r1", false,-1, 31,0);
    tracep->declBus(c+1363,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1413,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+378+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBit(c+1678,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1762,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1758,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1754,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1757,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1760,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1761,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1679,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1763,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1755,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1756,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1765,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1764,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+453,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+451,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1676,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1166,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+470,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1759,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+466,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+467,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+468,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+469,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+471,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1680,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+452,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1569,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1677,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1570,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1388,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1098,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1766,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1089,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1092,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1094,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1096,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1686,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1099,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1682,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1091,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1103,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+1100,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1571,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+454,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1684,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1389,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1101,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1767,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1090,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1093,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1095,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1097,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1102,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1572,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+455,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1683,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1685,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+456,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1381,"io_master_awready", false,-1);
    tracep->declBit(c+1070,"io_master_awvalid", false,-1);
    tracep->declBus(c+1063,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1064,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1065,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1066,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1067,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1667,"io_master_wready", false,-1);
    tracep->declBit(c+1292,"io_master_wvalid", false,-1);
    tracep->declBus(c+1201,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1068,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"io_master_wlast", false,-1);
    tracep->declBit(c+1071,"io_master_bready", false,-1);
    tracep->declBit(c+1487,"io_master_bvalid", false,-1);
    tracep->declBus(c+1488,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1668,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1382,"io_master_arready", false,-1);
    tracep->declBit(c+1072,"io_master_arvalid", false,-1);
    tracep->declBus(c+1058,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1059,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1060,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1061,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1062,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1073,"io_master_rready", false,-1);
    tracep->declBit(c+1489,"io_master_rvalid", false,-1);
    tracep->declBus(c+1490,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1669,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1670,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1491,"io_master_rlast", false,-1);
    tracep->declBit(c+350,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1115,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1109,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1104,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1107,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1111,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1113,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1187,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1313,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1252,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1106,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1119,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1116,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+351,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+346,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+348,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+965,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1117,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1110,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1105,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1108,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1112,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1114,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1118,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+966,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+347,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+345,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+349,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+352,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+353,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+354,"marchid", false,-1, 31,0);
    tracep->declBus(c+1124,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1254,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1125,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1573,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1126,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1127,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1128,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1129,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+457,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1130,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+458,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1131,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1132,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1133,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1134,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1693,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1694,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1135,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1695,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1136,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1696,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+459,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1137,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1138,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1390,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1574,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1139,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1140,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+460,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+544,"state", false,-1, 1,0);
    tracep->declBus(c+1141,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1716,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1717,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1718,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1770,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1771,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1142,"sel_clint", false,-1);
    tracep->declBus(c+1790,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1791,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1143,"sel_mvendorid", false,-1);
    tracep->declBit(c+1144,"sel_marchid", false,-1);
    tracep->declBit(c+1145,"sel_id", false,-1);
    tracep->declBus(c+1146,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1255,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1147,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1697,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1148,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1149,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1150,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1151,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1792,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1152,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1793,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1153,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1154,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1155,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1156,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1794,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1795,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1796,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1157,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1364,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1797,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1798,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1158,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1159,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1730,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1730,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1160,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1161,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1799,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1800,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1733,"din", false,-1, 31,0);
    tracep->declBus(c+354,"dout", false,-1, 31,0);
    tracep->declBit(c+1725,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1733,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1083,"din", false,-1, 31,0);
    tracep->declBus(c+1056,"dout", false,-1, 31,0);
    tracep->declBit(c+1087,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1733,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1081,"din", false,-1, 31,0);
    tracep->declBus(c+1054,"dout", false,-1, 31,0);
    tracep->declBit(c+1085,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1801,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1082,"din", false,-1, 31,0);
    tracep->declBus(c+1055,"dout", false,-1, 31,0);
    tracep->declBit(c+1086,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1733,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1084,"din", false,-1, 31,0);
    tracep->declBus(c+1057,"dout", false,-1, 31,0);
    tracep->declBit(c+1088,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1802,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1674,"rst", false,-1);
    tracep->declBus(c+1733,"din", false,-1, 31,0);
    tracep->declBus(c+353,"dout", false,-1, 31,0);
    tracep->declBit(c+1725,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"io_d", false,-1);
    tracep->declBit(c+394,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"io_d", false,-1);
    tracep->declBit(c+394,"io_q", false,-1);
    tracep->declBit(c+394,"sync_0", false,-1);
    tracep->declBit(c+395,"sync_1", false,-1);
    tracep->declBit(c+396,"sync_2", false,-1);
    tracep->declBit(c+397,"sync_3", false,-1);
    tracep->declBit(c+398,"sync_4", false,-1);
    tracep->declBit(c+399,"sync_5", false,-1);
    tracep->declBit(c+400,"sync_6", false,-1);
    tracep->declBit(c+401,"sync_7", false,-1);
    tracep->declBit(c+402,"sync_8", false,-1);
    tracep->declBit(c+403,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1436,"auto_in_psel", false,-1);
    tracep->declBit(c+1437,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"auto_in_pready", false,-1);
    tracep->declBit(c+1724,"auto_in_pslverr", false,-1);
    tracep->declBus(c+566,"auto_in_prdata", false,-1, 31,0);
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
    tracep->declBus(c+1419,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1436,"in_psel", false,-1);
    tracep->declBit(c+1437,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"in_pready", false,-1);
    tracep->declBus(c+566,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1724,"in_pslverr", false,-1);
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
    tracep->declBus(c+1734,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1803,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1804,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1805,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1806,"ONE", false,-1, 7,0);
    tracep->declBus(c+1807,"TWO", false,-1, 7,0);
    tracep->declBus(c+1808,"THREE", false,-1, 7,0);
    tracep->declBus(c+1809,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1810,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1811,"SIX", false,-1, 7,0);
    tracep->declBus(c+1812,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1813,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1814,"NINE", false,-1, 7,0);
    tracep->declBus(c+1815,"A", false,-1, 7,0);
    tracep->declBus(c+1816,"B", false,-1, 7,0);
    tracep->declBus(c+1817,"C", false,-1, 7,0);
    tracep->declBus(c+1818,"D", false,-1, 7,0);
    tracep->declBus(c+1819,"E", false,-1, 7,0);
    tracep->declBus(c+1820,"F", false,-1, 7,0);
    tracep->declBus(c+597,"led_reg", false,-1, 15,0);
    tracep->declBus(c+598,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+599+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1575,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1576,"write_en", false,-1);
    tracep->declBit(c+1577,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1434,"auto_in_psel", false,-1);
    tracep->declBit(c+1435,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"auto_in_pready", false,-1);
    tracep->declBit(c+1723,"auto_in_pslverr", false,-1);
    tracep->declBus(c+564,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1639,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1640,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1419,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1434,"in_psel", false,-1);
    tracep->declBit(c+1435,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"in_pready", false,-1);
    tracep->declBus(c+564,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1723,"in_pslverr", false,-1);
    tracep->declBit(c+1639,"ps2_clk", false,-1);
    tracep->declBit(c+1640,"ps2_data", false,-1);
    tracep->declBus(c+1821,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1822,"EXP", false,-1, 7,0);
    tracep->declBus(c+1049,"state", false,-1, 1,0);
    tracep->declBus(c+1050,"counter", false,-1, 3,0);
    tracep->declBus(c+1051,"buffer", false,-1, 7,0);
    tracep->declBus(c+1052,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1053,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1698,"ready", false,-1);
    tracep->declBus(c+1699,"rdata", false,-1, 31,0);
    tracep->declBit(c+1578,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1236,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1672,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1237,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1238,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1673,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1256,"raddr", false,-1, 31,0);
    tracep->declBit(c+1257,"ren", false,-1);
    tracep->declBus(c+1258,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1438,"auto_in_psel", false,-1);
    tracep->declBit(c+1439,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1417,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_in_pready", false,-1);
    tracep->declBit(c+1725,"auto_in_pslverr", false,-1);
    tracep->declBus(c+957,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1623,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1624,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1650,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1417,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1438,"in_psel", false,-1);
    tracep->declBit(c+1439,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"in_pready", false,-1);
    tracep->declBus(c+957,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1725,"in_pslverr", false,-1);
    tracep->declBit(c+1623,"qspi_sck", false,-1);
    tracep->declBit(c+1624,"qspi_ce_n", false,-1);
    tracep->declBus(c+1650,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1625,"dout", false,-1, 3,0);
    tracep->declBus(c+1626,"douten", false,-1, 3,0);
    tracep->declBit(c+1700,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1417,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1427,"dat_i", false,-1, 31,0);
    tracep->declBus(c+957,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1428,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1438,"cyc_i", false,-1);
    tracep->declBit(c+1438,"stb_i", false,-1);
    tracep->declBit(c+1700,"ack_o", false,-1);
    tracep->declBit(c+1426,"we_i", false,-1);
    tracep->declBit(c+1623,"sck", false,-1);
    tracep->declBit(c+1624,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1625,"dout", false,-1, 3,0);
    tracep->declBus(c+1626,"douten", false,-1, 3,0);
    tracep->declBus(c+1772,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+607,"mr_sck", false,-1);
    tracep->declBit(c+608,"mr_ce_n", false,-1);
    tracep->declBus(c+1650,"mr_din", false,-1, 3,0);
    tracep->declBus(c+609,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+610,"mr_doe", false,-1);
    tracep->declBit(c+611,"mw_sck", false,-1);
    tracep->declBit(c+612,"mw_ce_n", false,-1);
    tracep->declBus(c+1650,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1579,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+613,"mw_doe", false,-1);
    tracep->declBit(c+1580,"mr_rd", false,-1);
    tracep->declBit(c+614,"mr_done", false,-1);
    tracep->declBit(c+1581,"mw_wr", false,-1);
    tracep->declBit(c+1582,"mw_done", false,-1);
    tracep->declBit(c+1438,"wb_valid", false,-1);
    tracep->declBit(c+1583,"wb_we", false,-1);
    tracep->declBit(c+1584,"wb_re", false,-1);
    tracep->declBit(c+615,"state", false,-1);
    tracep->declBit(c+1585,"nstate", false,-1);
    tracep->declBus(c+1586,"size", false,-1, 2,0);
    tracep->declBus(c+1587,"byte0", false,-1, 7,0);
    tracep->declBus(c+1588,"byte1", false,-1, 7,0);
    tracep->declBus(c+1589,"byte2", false,-1, 7,0);
    tracep->declBus(c+1590,"byte3", false,-1, 7,0);
    tracep->declBus(c+1420,"wdata", false,-1, 31,0);
    tracep->declBit(c+866,"qpi_flag", false,-1);
    tracep->declBit(c+867,"qpi_sck", false,-1);
    tracep->declBit(c+868,"qpi_ce_n", false,-1);
    tracep->declBus(c+869,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+870,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+871,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1701,"rst_n", false,-1);
    tracep->declBus(c+1421,"addr", false,-1, 23,0);
    tracep->declBit(c+1580,"rd", false,-1);
    tracep->declBus(c+1729,"size", false,-1, 2,0);
    tracep->declBit(c+614,"done", false,-1);
    tracep->declBus(c+957,"line", false,-1, 31,0);
    tracep->declBit(c+607,"sck", false,-1);
    tracep->declBit(c+608,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+609,"dout", false,-1, 3,0);
    tracep->declBit(c+610,"douten", false,-1);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"READ", false,-1, 0,0);
    tracep->declBus(c+1823,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+616,"state", false,-1);
    tracep->declBit(c+1591,"nstate", false,-1);
    tracep->declBus(c+617,"counter", false,-1, 7,0);
    tracep->declBus(c+618,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+967+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1824,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+619,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1701,"rst_n", false,-1);
    tracep->declBus(c+1422,"addr", false,-1, 23,0);
    tracep->declBus(c+1420,"line", false,-1, 31,0);
    tracep->declBus(c+1586,"size", false,-1, 2,0);
    tracep->declBit(c+1581,"wr", false,-1);
    tracep->declBit(c+1582,"done", false,-1);
    tracep->declBit(c+611,"sck", false,-1);
    tracep->declBit(c+612,"ce_n", false,-1);
    tracep->declBus(c+1650,"din", false,-1, 3,0);
    tracep->declBus(c+1579,"dout", false,-1, 3,0);
    tracep->declBit(c+613,"douten", false,-1);
    tracep->declBus(c+1772,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1773,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1592,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+620,"state", false,-1);
    tracep->declBit(c+1593,"nstate", false,-1);
    tracep->declBus(c+621,"counter", false,-1, 7,0);
    tracep->declBus(c+622,"saddr", false,-1, 23,0);
    tracep->declBus(c+1825,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1374,"auto_in_awready", false,-1);
    tracep->declBit(c+1375,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1376,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1377,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1378,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1163,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1379,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1380,"auto_in_wready", false,-1);
    tracep->declBit(c+1460,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_wlast", false,-1);
    tracep->declBit(c+1659,"auto_in_bready", false,-1);
    tracep->declBit(c+580,"auto_in_bvalid", false,-1);
    tracep->declBus(c+577,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1716,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_in_arready", false,-1);
    tracep->declBit(c+1369,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1370,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1371,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1372,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1162,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1373,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1459,"auto_in_rready", false,-1);
    tracep->declBit(c+576,"auto_in_rvalid", false,-1);
    tracep->declBus(c+577,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+578,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1716,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+579,"auto_in_rlast", false,-1);
    tracep->declBit(c+1651,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+553,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+983,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+984,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+985,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+986,"sdram_bundle_we", false,-1);
    tracep->declBus(c+987,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+988,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+554,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1012,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1374,"in_awready", false,-1);
    tracep->declBit(c+1375,"in_awvalid", false,-1);
    tracep->declBus(c+1377,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1376,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1378,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1163,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1379,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1380,"in_wready", false,-1);
    tracep->declBit(c+1460,"in_wvalid", false,-1);
    tracep->declBus(c+1658,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"in_wlast", false,-1);
    tracep->declBit(c+1659,"in_bready", false,-1);
    tracep->declBit(c+580,"in_bvalid", false,-1);
    tracep->declBus(c+1716,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+577,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1368,"in_arready", false,-1);
    tracep->declBit(c+1369,"in_arvalid", false,-1);
    tracep->declBus(c+1371,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1370,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1372,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1162,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1373,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1459,"in_rready", false,-1);
    tracep->declBit(c+576,"in_rvalid", false,-1);
    tracep->declBus(c+1716,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+578,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+579,"in_rlast", false,-1);
    tracep->declBus(c+577,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1651,"sdram_clk", false,-1);
    tracep->declBit(c+553,"sdram_cke", false,-1);
    tracep->declBit(c+983,"sdram_cs", false,-1);
    tracep->declBit(c+984,"sdram_ras", false,-1);
    tracep->declBit(c+985,"sdram_cas", false,-1);
    tracep->declBit(c+986,"sdram_we", false,-1);
    tracep->declBus(c+987,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+988,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+554,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1012,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+623,"sdram_dout_en", false,-1);
    tracep->declBus(c+624,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1375,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1377,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1376,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1378,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1379,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1460,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1658,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1164,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1165,"inport_wlast_i", false,-1);
    tracep->declBit(c+1659,"inport_bready_i", false,-1);
    tracep->declBit(c+1369,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1371,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1370,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1372,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1373,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1459,"inport_rready_i", false,-1);
    tracep->declBus(c+1012,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1374,"inport_awready_o", false,-1);
    tracep->declBit(c+1380,"inport_wready_o", false,-1);
    tracep->declBit(c+580,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1716,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+577,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1368,"inport_arready_o", false,-1);
    tracep->declBit(c+576,"inport_rvalid_o", false,-1);
    tracep->declBus(c+578,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1716,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+577,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+579,"inport_rlast_o", false,-1);
    tracep->declBit(c+1651,"sdram_clk_o", false,-1);
    tracep->declBit(c+553,"sdram_cke_o", false,-1);
    tracep->declBit(c+983,"sdram_cs_o", false,-1);
    tracep->declBit(c+984,"sdram_ras_o", false,-1);
    tracep->declBit(c+985,"sdram_cas_o", false,-1);
    tracep->declBit(c+986,"sdram_we_o", false,-1);
    tracep->declBus(c+554,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+987,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+988,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+624,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+623,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1826,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1827,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1828,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1391,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1594,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1392,"ram_rd_w", false,-1);
    tracep->declBit(c+989,"ram_accept_w", false,-1);
    tracep->declBus(c+1658,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+625,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1393,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+626,"ram_ack_w", false,-1);
    tracep->declBit(c+1725,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1375,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1377,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1376,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1378,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1379,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1460,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1658,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1164,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1165,"axi_wlast_i", false,-1);
    tracep->declBit(c+1659,"axi_bready_i", false,-1);
    tracep->declBit(c+1369,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1371,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1370,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1372,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1373,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1459,"axi_rready_i", false,-1);
    tracep->declBit(c+989,"ram_accept_i", false,-1);
    tracep->declBit(c+626,"ram_ack_i", false,-1);
    tracep->declBit(c+1725,"ram_error_i", false,-1);
    tracep->declBus(c+625,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1374,"axi_awready_o", false,-1);
    tracep->declBit(c+1380,"axi_wready_o", false,-1);
    tracep->declBit(c+580,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1716,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+577,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1368,"axi_arready_o", false,-1);
    tracep->declBit(c+576,"axi_rvalid_o", false,-1);
    tracep->declBus(c+578,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1716,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+577,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+579,"axi_rlast_o", false,-1);
    tracep->declBus(c+1594,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1392,"ram_rd_o", false,-1);
    tracep->declBus(c+1393,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1391,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1658,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+627,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+628,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+629,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+630,"req_rd_q", false,-1);
    tracep->declBit(c+631,"req_wr_q", false,-1);
    tracep->declBus(c+632,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+633,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+634,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+635,"req_prio_q", false,-1);
    tracep->declBit(c+636,"req_hold_rd_q", false,-1);
    tracep->declBit(c+637,"req_hold_wr_q", false,-1);
    tracep->declBit(c+638,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1595,"req_push_w", false,-1);
    tracep->declBus(c+1702,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+639,"req_out_valid_w", false,-1);
    tracep->declBus(c+640,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1596,"resp_accept_w", false,-1);
    tracep->declBit(c+641,"resp_is_write_w", false,-1);
    tracep->declBit(c+642,"resp_is_read_w", false,-1);
    tracep->declBit(c+579,"resp_is_last_w", false,-1);
    tracep->declBus(c+577,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+643,"resp_valid_w", false,-1);
    tracep->declBit(c+644,"write_prio_w", false,-1);
    tracep->declBit(c+645,"read_prio_w", false,-1);
    tracep->declBit(c+1394,"write_active_w", false,-1);
    tracep->declBit(c+1392,"read_active_w", false,-1);
    tracep->declBus(c+1391,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1703,"wr_w", false,-1);
    tracep->declBit(c+1392,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1829,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1786,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1769,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1702,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1595,"push_i", false,-1);
    tracep->declBit(c+1596,"pop_i", false,-1);
    tracep->declBus(c+640,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+638,"accept_o", false,-1);
    tracep->declBit(c+639,"valid_o", false,-1);
    tracep->declBus(c+1768,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+646+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+650,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+651,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+652,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1789,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1786,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1769,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+625,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+626,"push_i", false,-1);
    tracep->declBit(c+1596,"pop_i", false,-1);
    tracep->declBus(c+578,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+653,"accept_o", false,-1);
    tracep->declBit(c+643,"valid_o", false,-1);
    tracep->declBus(c+1768,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+654+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+658,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+659,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+660,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBus(c+1594,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1392,"inport_rd_i", false,-1);
    tracep->declBus(c+1393,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1391,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1658,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1012,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+989,"inport_accept_o", false,-1);
    tracep->declBit(c+626,"inport_ack_o", false,-1);
    tracep->declBit(c+1725,"inport_error_o", false,-1);
    tracep->declBus(c+625,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1651,"sdram_clk_o", false,-1);
    tracep->declBit(c+553,"sdram_cke_o", false,-1);
    tracep->declBit(c+983,"sdram_cs_o", false,-1);
    tracep->declBit(c+984,"sdram_ras_o", false,-1);
    tracep->declBit(c+985,"sdram_cas_o", false,-1);
    tracep->declBit(c+986,"sdram_we_o", false,-1);
    tracep->declBus(c+554,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+987,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+988,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+624,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+623,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1826,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1827,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1828,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1768,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1786,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1830,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1831,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1832,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1833,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1834,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1786,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1780,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1776,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1778,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1777,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1779,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1775,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1774,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1732,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1835,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1786,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1732,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1774,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1775,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1776,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1777,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1778,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1779,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1780,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1781,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1782,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1836,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1789,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1836,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1769,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1829,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1391,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1594,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1392,"ram_rd_w", false,-1);
    tracep->declBit(c+989,"ram_accept_w", false,-1);
    tracep->declBus(c+1658,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+625,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+626,"ram_ack_w", false,-1);
    tracep->declBit(c+1597,"ram_req_w", false,-1);
    tracep->declBus(c+990,"command_q", false,-1, 3,0);
    tracep->declBus(c+987,"addr_q", false,-1, 12,0);
    tracep->declBus(c+624,"data_q", false,-1, 31,0);
    tracep->declBit(c+661,"data_rd_en_q", false,-1);
    tracep->declBus(c+554,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+553,"cke_q", false,-1);
    tracep->declBus(c+988,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1837,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+662,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1012,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+663,"refresh_q", false,-1);
    tracep->declBus(c+991,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+664+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+992,"state_q", false,-1, 3,0);
    tracep->declBus(c+1598,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1599,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+672,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+673,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1395,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1396,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1397,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1786,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+674,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1600,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1838,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+993,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+675,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+625,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+676,"idx", false,-1, 31,0);
    tracep->declBus(c+677,"rd_q", false,-1, 3,0);
    tracep->declBit(c+626,"ack_q", false,-1);
    tracep->declArray(c+994,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1444,"auto_in_psel", false,-1);
    tracep->declBit(c+1445,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"auto_in_pready", false,-1);
    tracep->declBit(c+1725,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1446,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+551,"spi_bundle_sck", false,-1);
    tracep->declBus(c+552,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+982,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1649,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1839,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1840,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1830,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1601,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1444,"in_psel", false,-1);
    tracep->declBit(c+1445,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1654,"in_pready", false,-1);
    tracep->declBus(c+1446,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1725,"in_pslverr", false,-1);
    tracep->declBit(c+551,"spi_sck", false,-1);
    tracep->declBus(c+552,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+982,"spi_mosi", false,-1);
    tracep->declBit(c+1649,"spi_miso", false,-1);
    tracep->declBit(c+678,"spi_irq_out", false,-1);
    tracep->declBus(c+1602,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1603,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1604,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1605,"wb_we_i", false,-1);
    tracep->declBit(c+1606,"wb_stb_i", false,-1);
    tracep->declBit(c+1607,"wb_cyc_i", false,-1);
    tracep->declBit(c+679,"wb_ack_o", false,-1);
    tracep->declBus(c+680,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1726,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1715,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1727,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1728,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1729,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1841,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1842,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1843,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+404,"state", false,-1, 2,0);
    tracep->declBus(c+405,"next_state", false,-1, 2,0);
    tracep->declBus(c+406,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+407,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+408,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+409,"flash_pwrite", false,-1);
    tracep->declBit(c+410,"flash_psel", false,-1);
    tracep->declBit(c+411,"flash_penable", false,-1);
    tracep->declBit(c+412,"flash_pready", false,-1);
    tracep->declBus(c+413,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"wb_clk_i", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+1602,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1603,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+680,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1604,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1605,"wb_we_i", false,-1);
    tracep->declBit(c+1606,"wb_stb_i", false,-1);
    tracep->declBit(c+1607,"wb_cyc_i", false,-1);
    tracep->declBit(c+679,"wb_ack_o", false,-1);
    tracep->declBit(c+1725,"wb_err_o", false,-1);
    tracep->declBit(c+678,"wb_int_o", false,-1);
    tracep->declBus(c+552,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+551,"sclk_pad_o", false,-1);
    tracep->declBit(c+982,"mosi_pad_o", false,-1);
    tracep->declBit(c+1649,"miso_pad_i", false,-1);
    tracep->declBus(c+681,"divider", false,-1, 15,0);
    tracep->declBus(c+682,"ctrl", false,-1, 13,0);
    tracep->declBus(c+683,"ss", false,-1, 7,0);
    tracep->declBus(c+1608,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+684,"rx", false,-1, 127,0);
    tracep->declBit(c+688,"rx_negedge", false,-1);
    tracep->declBit(c+689,"tx_negedge", false,-1);
    tracep->declBus(c+690,"char_len", false,-1, 6,0);
    tracep->declBit(c+691,"go", false,-1);
    tracep->declBit(c+692,"lsb", false,-1);
    tracep->declBit(c+693,"ie", false,-1);
    tracep->declBit(c+694,"ass", false,-1);
    tracep->declBit(c+1609,"spi_divider_sel", false,-1);
    tracep->declBit(c+1610,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1611,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1612,"spi_ss_sel", false,-1);
    tracep->declBit(c+695,"tip", false,-1);
    tracep->declBit(c+696,"pos_edge", false,-1);
    tracep->declBit(c+697,"neg_edge", false,-1);
    tracep->declBit(c+698,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"clk_in", false,-1);
    tracep->declBit(c+1628,"rst", false,-1);
    tracep->declBit(c+695,"enable", false,-1);
    tracep->declBit(c+691,"go", false,-1);
    tracep->declBit(c+698,"last_clk", false,-1);
    tracep->declBus(c+681,"divider", false,-1, 15,0);
    tracep->declBit(c+551,"clk_out", false,-1);
    tracep->declBit(c+696,"pos_edge", false,-1);
    tracep->declBit(c+697,"neg_edge", false,-1);
    tracep->declBus(c+699,"cnt", false,-1, 15,0);
    tracep->declBit(c+700,"cnt_zero", false,-1);
    tracep->declBit(c+701,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"rst", false,-1);
    tracep->declBus(c+1613,"latch", false,-1, 3,0);
    tracep->declBus(c+1604,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+690,"len", false,-1, 6,0);
    tracep->declBit(c+692,"lsb", false,-1);
    tracep->declBit(c+691,"go", false,-1);
    tracep->declBit(c+696,"pos_edge", false,-1);
    tracep->declBit(c+697,"neg_edge", false,-1);
    tracep->declBit(c+688,"rx_negedge", false,-1);
    tracep->declBit(c+689,"tx_negedge", false,-1);
    tracep->declBit(c+695,"tip", false,-1);
    tracep->declBit(c+698,"last", false,-1);
    tracep->declBus(c+1603,"p_in", false,-1, 31,0);
    tracep->declArray(c+684,"p_out", false,-1, 127,0);
    tracep->declBit(c+551,"s_clk", false,-1);
    tracep->declBit(c+1649,"s_in", false,-1);
    tracep->declBit(c+982,"s_out", false,-1);
    tracep->declBus(c+702,"cnt", false,-1, 7,0);
    tracep->declArray(c+684,"data", false,-1, 127,0);
    tracep->declBus(c+703,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+704,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+705,"rx_clk", false,-1);
    tracep->declBit(c+706,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1440,"auto_in_psel", false,-1);
    tracep->declBit(c+1441,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1418,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1442,"auto_in_pready", false,-1);
    tracep->declBit(c+1725,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1443,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1440,"in_psel", false,-1);
    tracep->declBit(c+1441,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1442,"in_pready", false,-1);
    tracep->declBit(c+1725,"in_pslverr", false,-1);
    tracep->declBus(c+1419,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1443,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1647,"uart_rx", false,-1);
    tracep->declBit(c+1648,"uart_tx", false,-1);
    tracep->declBit(c+707,"rtsn", false,-1);
    tracep->declBit(c+1725,"ctsn", false,-1);
    tracep->declBit(c+708,"dtr_pad_o", false,-1);
    tracep->declBit(c+1725,"dsr_pad_i", false,-1);
    tracep->declBit(c+1725,"ri_pad_i", false,-1);
    tracep->declBit(c+1725,"dcd_pad_i", false,-1);
    tracep->declBit(c+709,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1614,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1615,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+414,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1616,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+710,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+1614,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1617,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1616,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1648,"stx_pad_o", false,-1);
    tracep->declBit(c+1647,"srx_pad_i", false,-1);
    tracep->declBus(c+1781,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+710,"rts_pad_o", false,-1);
    tracep->declBit(c+708,"dtr_pad_o", false,-1);
    tracep->declBit(c+709,"int_o", false,-1);
    tracep->declBit(c+711,"enable", false,-1);
    tracep->declBit(c+712,"srx_pad", false,-1);
    tracep->declBus(c+713,"ier", false,-1, 3,0);
    tracep->declBus(c+714,"iir", false,-1, 3,0);
    tracep->declBus(c+715,"fcr", false,-1, 1,0);
    tracep->declBus(c+716,"mcr", false,-1, 4,0);
    tracep->declBus(c+717,"lcr", false,-1, 7,0);
    tracep->declBus(c+718,"msr", false,-1, 7,0);
    tracep->declBus(c+719,"dl", false,-1, 15,0);
    tracep->declBus(c+720,"scratch", false,-1, 7,0);
    tracep->declBit(c+721,"start_dlc", false,-1);
    tracep->declBit(c+722,"lsr_mask_d", false,-1);
    tracep->declBit(c+723,"msi_reset", false,-1);
    tracep->declBus(c+724,"dlc", false,-1, 15,0);
    tracep->declBus(c+725,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+726,"rx_reset", false,-1);
    tracep->declBit(c+727,"tx_reset", false,-1);
    tracep->declBit(c+728,"dlab", false,-1);
    tracep->declBit(c+1730,"cts_pad_i", false,-1);
    tracep->declBit(c+1725,"dsr_pad_i", false,-1);
    tracep->declBit(c+1725,"ri_pad_i", false,-1);
    tracep->declBit(c+1725,"dcd_pad_i", false,-1);
    tracep->declBit(c+729,"loopback", false,-1);
    tracep->declBit(c+1725,"cts", false,-1);
    tracep->declBit(c+1730,"dsr", false,-1);
    tracep->declBit(c+1730,"ri", false,-1);
    tracep->declBit(c+1730,"dcd", false,-1);
    tracep->declBit(c+730,"cts_c", false,-1);
    tracep->declBit(c+731,"dsr_c", false,-1);
    tracep->declBit(c+732,"ri_c", false,-1);
    tracep->declBit(c+733,"dcd_c", false,-1);
    tracep->declBus(c+734,"lsr", false,-1, 7,0);
    tracep->declBit(c+735,"lsr0", false,-1);
    tracep->declBit(c+736,"lsr1", false,-1);
    tracep->declBit(c+737,"lsr2", false,-1);
    tracep->declBit(c+738,"lsr3", false,-1);
    tracep->declBit(c+739,"lsr4", false,-1);
    tracep->declBit(c+740,"lsr5", false,-1);
    tracep->declBit(c+741,"lsr6", false,-1);
    tracep->declBit(c+742,"lsr7", false,-1);
    tracep->declBit(c+743,"lsr0r", false,-1);
    tracep->declBit(c+744,"lsr1r", false,-1);
    tracep->declBit(c+745,"lsr2r", false,-1);
    tracep->declBit(c+746,"lsr3r", false,-1);
    tracep->declBit(c+747,"lsr4r", false,-1);
    tracep->declBit(c+748,"lsr5r", false,-1);
    tracep->declBit(c+749,"lsr6r", false,-1);
    tracep->declBit(c+750,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+751,"rls_int", false,-1);
    tracep->declBit(c+752,"rda_int", false,-1);
    tracep->declBit(c+753,"ti_int", false,-1);
    tracep->declBit(c+754,"thre_int", false,-1);
    tracep->declBit(c+755,"ms_int", false,-1);
    tracep->declBit(c+756,"tf_push", false,-1);
    tracep->declBit(c+757,"rf_pop", false,-1);
    tracep->declBus(c+1704,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+758,"rf_error_bit", false,-1);
    tracep->declBit(c+736,"rf_overrun", false,-1);
    tracep->declBit(c+759,"rf_push_pulse", false,-1);
    tracep->declBus(c+760,"rf_count", false,-1, 4,0);
    tracep->declBus(c+761,"tf_count", false,-1, 4,0);
    tracep->declBus(c+762,"tstate", false,-1, 2,0);
    tracep->declBus(c+763,"rstate", false,-1, 3,0);
    tracep->declBus(c+764,"counter_t", false,-1, 9,0);
    tracep->declBit(c+765,"thre_set_en", false,-1);
    tracep->declBus(c+766,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+767,"block_value", false,-1, 7,0);
    tracep->declBit(c+768,"serial_out", false,-1);
    tracep->declBit(c+769,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+770,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+771,"lsr0_d", false,-1);
    tracep->declBit(c+772,"lsr1_d", false,-1);
    tracep->declBit(c+773,"lsr2_d", false,-1);
    tracep->declBit(c+774,"lsr3_d", false,-1);
    tracep->declBit(c+775,"lsr4_d", false,-1);
    tracep->declBit(c+776,"lsr5_d", false,-1);
    tracep->declBit(c+777,"lsr6_d", false,-1);
    tracep->declBit(c+778,"lsr7_d", false,-1);
    tracep->declBit(c+779,"rls_int_d", false,-1);
    tracep->declBit(c+780,"thre_int_d", false,-1);
    tracep->declBit(c+781,"ms_int_d", false,-1);
    tracep->declBit(c+782,"ti_int_d", false,-1);
    tracep->declBit(c+783,"rda_int_d", false,-1);
    tracep->declBit(c+784,"rls_int_rise", false,-1);
    tracep->declBit(c+785,"thre_int_rise", false,-1);
    tracep->declBit(c+786,"ms_int_rise", false,-1);
    tracep->declBit(c+787,"ti_int_rise", false,-1);
    tracep->declBit(c+788,"rda_int_rise", false,-1);
    tracep->declBit(c+789,"rls_int_pnd", false,-1);
    tracep->declBit(c+790,"rda_int_pnd", false,-1);
    tracep->declBit(c+791,"thre_int_pnd", false,-1);
    tracep->declBit(c+792,"ms_int_pnd", false,-1);
    tracep->declBit(c+793,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1787,"Tp", false,-1, 31,0);
    tracep->declBus(c+1787,"width", false,-1, 31,0);
    tracep->declBus(c+1773,"init_value", false,-1, 0,0);
    tracep->declBit(c+1628,"rst_i", false,-1);
    tracep->declBit(c+1627,"clk_i", false,-1);
    tracep->declBit(c+1725,"stage1_rst_i", false,-1);
    tracep->declBit(c+1730,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1647,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+712,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+794,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+717,"lcr", false,-1, 7,0);
    tracep->declBit(c+757,"rf_pop", false,-1);
    tracep->declBit(c+769,"srx_pad_i", false,-1);
    tracep->declBit(c+711,"enable", false,-1);
    tracep->declBit(c+726,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+764,"counter_t", false,-1, 9,0);
    tracep->declBus(c+760,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1704,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+736,"rf_overrun", false,-1);
    tracep->declBit(c+758,"rf_error_bit", false,-1);
    tracep->declBus(c+763,"rstate", false,-1, 3,0);
    tracep->declBit(c+759,"rf_push_pulse", false,-1);
    tracep->declBus(c+795,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+796,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+797,"rshift", false,-1, 7,0);
    tracep->declBit(c+798,"rparity", false,-1);
    tracep->declBit(c+799,"rparity_error", false,-1);
    tracep->declBit(c+800,"rframing_error", false,-1);
    tracep->declBit(c+801,"rbit_in", false,-1);
    tracep->declBit(c+802,"rparity_xor", false,-1);
    tracep->declBus(c+803,"counter_b", false,-1, 7,0);
    tracep->declBit(c+804,"rf_push_q", false,-1);
    tracep->declBus(c+805,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+806,"rf_push", false,-1);
    tracep->declBit(c+807,"break_error", false,-1);
    tracep->declBit(c+808,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+809,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+810,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+811,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1732,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1774,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1775,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1776,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1777,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1778,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1779,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1780,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1781,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1782,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1783,"sr_push", false,-1, 3,0);
    tracep->declBus(c+812,"toc_value", false,-1, 9,0);
    tracep->declBus(c+813,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1844,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1845,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1786,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1846,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBit(c+759,"push", false,-1);
    tracep->declBit(c+757,"pop", false,-1);
    tracep->declBus(c+805,"data_in", false,-1, 10,0);
    tracep->declBit(c+726,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1704,"data_out", false,-1, 10,0);
    tracep->declBit(c+736,"overrun", false,-1);
    tracep->declBus(c+760,"count", false,-1, 4,0);
    tracep->declBit(c+758,"error_bit", false,-1);
    tracep->declBus(c+1705,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+814+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+830,"top", false,-1, 3,0);
    tracep->declBus(c+831,"bottom", false,-1, 3,0);
    tracep->declBus(c+832,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+833,"word0", false,-1, 2,0);
    tracep->declBus(c+834,"word1", false,-1, 2,0);
    tracep->declBus(c+835,"word2", false,-1, 2,0);
    tracep->declBus(c+836,"word3", false,-1, 2,0);
    tracep->declBus(c+837,"word4", false,-1, 2,0);
    tracep->declBus(c+838,"word5", false,-1, 2,0);
    tracep->declBus(c+839,"word6", false,-1, 2,0);
    tracep->declBus(c+840,"word7", false,-1, 2,0);
    tracep->declBus(c+841,"word8", false,-1, 2,0);
    tracep->declBus(c+842,"word9", false,-1, 2,0);
    tracep->declBus(c+843,"word10", false,-1, 2,0);
    tracep->declBus(c+844,"word11", false,-1, 2,0);
    tracep->declBus(c+845,"word12", false,-1, 2,0);
    tracep->declBus(c+846,"word13", false,-1, 2,0);
    tracep->declBus(c+847,"word14", false,-1, 2,0);
    tracep->declBus(c+848,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1786,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1830,"data_width", false,-1, 31,0);
    tracep->declBus(c+1845,"depth", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+759,"we", false,-1);
    tracep->declBus(c+830,"a", false,-1, 3,0);
    tracep->declBus(c+831,"dpra", false,-1, 3,0);
    tracep->declBus(c+849,"di", false,-1, 7,0);
    tracep->declBus(c+1705,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+415+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBus(c+717,"lcr", false,-1, 7,0);
    tracep->declBit(c+756,"tf_push", false,-1);
    tracep->declBus(c+1617,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+711,"enable", false,-1);
    tracep->declBit(c+727,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+768,"stx_pad_o", false,-1);
    tracep->declBus(c+762,"tstate", false,-1, 2,0);
    tracep->declBus(c+761,"tf_count", false,-1, 4,0);
    tracep->declBus(c+850,"counter", false,-1, 4,0);
    tracep->declBus(c+851,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+852,"shift_out", false,-1, 6,0);
    tracep->declBit(c+853,"stx_o_tmp", false,-1);
    tracep->declBit(c+854,"parity_xor", false,-1);
    tracep->declBit(c+855,"tf_pop", false,-1);
    tracep->declBit(c+856,"bit_out", false,-1);
    tracep->declBus(c+1617,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1706,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+857,"tf_overrun", false,-1);
    tracep->declBus(c+1726,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1715,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1727,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1728,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1729,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1841,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1830,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1845,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1786,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1846,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+1628,"wb_rst_i", false,-1);
    tracep->declBit(c+756,"push", false,-1);
    tracep->declBit(c+855,"pop", false,-1);
    tracep->declBus(c+1617,"data_in", false,-1, 7,0);
    tracep->declBit(c+727,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1706,"data_out", false,-1, 7,0);
    tracep->declBit(c+857,"overrun", false,-1);
    tracep->declBus(c+761,"count", false,-1, 4,0);
    tracep->declBus(c+858,"top", false,-1, 3,0);
    tracep->declBus(c+859,"bottom", false,-1, 3,0);
    tracep->declBus(c+860,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1786,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1830,"data_width", false,-1, 31,0);
    tracep->declBus(c+1845,"depth", false,-1, 31,0);
    tracep->declBit(c+1627,"clk", false,-1);
    tracep->declBit(c+756,"we", false,-1);
    tracep->declBus(c+858,"a", false,-1, 3,0);
    tracep->declBus(c+859,"dpra", false,-1, 3,0);
    tracep->declBus(c+1617,"di", false,-1, 7,0);
    tracep->declBus(c+1706,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+431+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBit(c+1431,"auto_in_psel", false,-1);
    tracep->declBit(c+1432,"auto_in_penable", false,-1);
    tracep->declBit(c+1426,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1425,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1427,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+562,"auto_in_pready", false,-1);
    tracep->declBit(c+1721,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1722,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1641,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1642,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1643,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1644,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1645,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1646,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1627,"clock", false,-1);
    tracep->declBit(c+1628,"reset", false,-1);
    tracep->declBus(c+1601,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1431,"in_psel", false,-1);
    tracep->declBit(c+1432,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1426,"in_pwrite", false,-1);
    tracep->declBus(c+1427,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+562,"in_pready", false,-1);
    tracep->declBus(c+1722,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1721,"in_pslverr", false,-1);
    tracep->declBus(c+1641,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1642,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1643,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1644,"vga_hsync", false,-1);
    tracep->declBit(c+1645,"vga_vsync", false,-1);
    tracep->declBit(c+1646,"vga_valid", false,-1);
    tracep->declBit(c+1618,"is_write", false,-1);
    tracep->declBus(c+1619,"addr", false,-1, 31,0);
    tracep->declBit(c+562,"ready", false,-1);
    tracep->declBus(c+861,"i", false,-1, 31,0);
    tracep->declBus(c+1847,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1848,"h_active", false,-1, 31,0);
    tracep->declBus(c+1849,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1850,"h_total", false,-1, 31,0);
    tracep->declBus(c+1769,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1851,"v_active", false,-1, 31,0);
    tracep->declBus(c+1852,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1853,"v_total", false,-1, 31,0);
    tracep->declBus(c+862,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+447,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+863,"h_valid", false,-1);
    tracep->declBit(c+448,"v_valid", false,-1);
    tracep->declBus(c+864,"h_addr", false,-1, 9,0);
    tracep->declBus(c+449,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1707,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+551,"sck", false,-1);
    tracep->declBit(c+997,"ss", false,-1);
    tracep->declBit(c+982,"mosi", false,-1);
    tracep->declBit(c+977,"miso", false,-1);
    tracep->declBus(c+978,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+979,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+980,"counter", false,-1, 2,0);
    tracep->declBit(c+981,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+551,"sck", false,-1);
    tracep->declBit(c+865,"ss", false,-1);
    tracep->declBit(c+982,"mosi", false,-1);
    tracep->declBit(c+1708,"miso", false,-1);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+971,"state", false,-1, 2,0);
    tracep->declBus(c+972,"counter", false,-1, 7,0);
    tracep->declBus(c+973,"cmd", false,-1, 7,0);
    tracep->declBus(c+974,"addr", false,-1, 23,0);
    tracep->declBus(c+975,"data", false,-1, 31,0);
    tracep->declBit(c+976,"ren", false,-1);
    tracep->declBus(c+1709,"rdata", false,-1, 31,0);
    tracep->declBus(c+1710,"raddr", false,-1, 31,0);
    tracep->declBus(c+1711,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+551,"clock", false,-1);
    tracep->declBit(c+976,"valid", false,-1);
    tracep->declBus(c+973,"cmd", false,-1, 7,0);
    tracep->declBus(c+1710,"addr", false,-1, 31,0);
    tracep->declBus(c+1709,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1623,"sck", false,-1);
    tracep->declBit(c+1624,"ce_n", false,-1);
    tracep->declBus(c+1650,"dio", false,-1, 3,0);
    tracep->declBit(c+1624,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1015,"cmd", false,-1, 7,0);
    tracep->declBus(c+1016,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1017+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1712,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1713,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1021,"ren", false,-1);
    tracep->declBit(c+1022,"wen", false,-1);
    tracep->declBus(c+1023,"len", false,-1, 7,0);
    tracep->declBus(c+1714,"rdata", false,-1, 31,0);
    tracep->declBus(c+1024,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1623,"clock", false,-1);
    tracep->declBit(c+1021,"ren", false,-1);
    tracep->declBit(c+1022,"wen", false,-1);
    tracep->declBus(c+1015,"cmd", false,-1, 7,0);
    tracep->declBus(c+1024,"saddr", false,-1, 31,0);
    tracep->declBus(c+1714,"rdata", false,-1, 31,0);
    tracep->declBus(c+1025,"wdata", false,-1, 31,0);
    tracep->declBus(c+1023,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+553,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+987,"a", false,-1, 12,0);
    tracep->declBus(c+998,"ba", false,-1, 1,0);
    tracep->declBus(c+999,"dqm", false,-1, 1,0);
    tracep->declBus(c+1013,"dq", false,-1, 15,0);
    tracep->declBit(c+1000,"reset", false,-1);
    tracep->declBus(c+872,"state", false,-1, 2,0);
    tracep->declBus(c+873,"counter", false,-1, 7,0);
    tracep->declBus(c+874,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1854,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+875,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+876,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1001,"nop", false,-1);
    tracep->declBit(c+1002,"active", false,-1);
    tracep->declBit(c+1003,"precharge", false,-1);
    tracep->declBit(c+1004,"read", false,-1);
    tracep->declBit(c+1005,"write", false,-1);
    tracep->declBit(c+1006,"burstterm", false,-1);
    tracep->declBit(c+1007,"autorefresh", false,-1);
    tracep->declBit(c+1008,"mode", false,-1);
    tracep->declBus(c+877,"test", false,-1, 15,0);
    tracep->declBus(c+878,"test1", false,-1, 15,0);
    tracep->declBus(c+879,"sense", false,-1, 31,0);
    tracep->declBit(c+880,"write_burst_mode", false,-1);
    tracep->declBus(c+881,"op_mode", false,-1, 1,0);
    tracep->declBus(c+882,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+883,"burst_type", false,-1);
    tracep->declBus(c+884,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+885,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+886,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+887,"bank", false,-1, 1,0);
    tracep->declBus(c+888,"row", false,-1, 12,0);
    tracep->declBus(c+889,"column", false,-1, 8,0);
    tracep->declBus(c+890,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+891,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+892,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+553,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+987,"a", false,-1, 12,0);
    tracep->declBus(c+998,"ba", false,-1, 1,0);
    tracep->declBus(c+1009,"dqm", false,-1, 1,0);
    tracep->declBus(c+1014,"dq", false,-1, 15,0);
    tracep->declBit(c+1000,"reset", false,-1);
    tracep->declBus(c+893,"state", false,-1, 2,0);
    tracep->declBus(c+894,"counter", false,-1, 7,0);
    tracep->declBus(c+895,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1855,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+896,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+897,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1001,"nop", false,-1);
    tracep->declBit(c+1002,"active", false,-1);
    tracep->declBit(c+1003,"precharge", false,-1);
    tracep->declBit(c+1004,"read", false,-1);
    tracep->declBit(c+1005,"write", false,-1);
    tracep->declBit(c+1006,"burstterm", false,-1);
    tracep->declBit(c+1007,"autorefresh", false,-1);
    tracep->declBit(c+1008,"mode", false,-1);
    tracep->declBus(c+898,"test", false,-1, 15,0);
    tracep->declBus(c+899,"test1", false,-1, 15,0);
    tracep->declBus(c+900,"sense", false,-1, 31,0);
    tracep->declBit(c+901,"write_burst_mode", false,-1);
    tracep->declBus(c+902,"op_mode", false,-1, 1,0);
    tracep->declBus(c+903,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+904,"burst_type", false,-1);
    tracep->declBus(c+905,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+906,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+907,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+908,"bank", false,-1, 1,0);
    tracep->declBus(c+909,"row", false,-1, 12,0);
    tracep->declBus(c+910,"column", false,-1, 8,0);
    tracep->declBus(c+911,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+912,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+913,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+553,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+987,"a", false,-1, 12,0);
    tracep->declBus(c+998,"ba", false,-1, 1,0);
    tracep->declBus(c+1010,"dqm", false,-1, 1,0);
    tracep->declBus(c+1013,"dq", false,-1, 15,0);
    tracep->declBit(c+1000,"reset", false,-1);
    tracep->declBus(c+914,"state", false,-1, 2,0);
    tracep->declBus(c+915,"counter", false,-1, 7,0);
    tracep->declBus(c+916,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1856,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+917,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+918,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1001,"nop", false,-1);
    tracep->declBit(c+1002,"active", false,-1);
    tracep->declBit(c+1003,"precharge", false,-1);
    tracep->declBit(c+1004,"read", false,-1);
    tracep->declBit(c+1005,"write", false,-1);
    tracep->declBit(c+1006,"burstterm", false,-1);
    tracep->declBit(c+1007,"autorefresh", false,-1);
    tracep->declBit(c+1008,"mode", false,-1);
    tracep->declBus(c+919,"test", false,-1, 15,0);
    tracep->declBus(c+920,"test1", false,-1, 15,0);
    tracep->declBus(c+921,"sense", false,-1, 31,0);
    tracep->declBit(c+922,"write_burst_mode", false,-1);
    tracep->declBus(c+923,"op_mode", false,-1, 1,0);
    tracep->declBus(c+924,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+925,"burst_type", false,-1);
    tracep->declBus(c+926,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+927,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+928,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+929,"bank", false,-1, 1,0);
    tracep->declBus(c+930,"row", false,-1, 12,0);
    tracep->declBus(c+931,"column", false,-1, 8,0);
    tracep->declBus(c+932,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+933,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+934,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1651,"clk", false,-1);
    tracep->declBit(c+553,"cke", false,-1);
    tracep->declBit(c+983,"cs", false,-1);
    tracep->declBit(c+984,"ras", false,-1);
    tracep->declBit(c+985,"cas", false,-1);
    tracep->declBit(c+986,"we", false,-1);
    tracep->declBus(c+987,"a", false,-1, 12,0);
    tracep->declBus(c+998,"ba", false,-1, 1,0);
    tracep->declBus(c+1011,"dqm", false,-1, 1,0);
    tracep->declBus(c+1014,"dq", false,-1, 15,0);
    tracep->declBit(c+1000,"reset", false,-1);
    tracep->declBus(c+935,"state", false,-1, 2,0);
    tracep->declBus(c+936,"counter", false,-1, 7,0);
    tracep->declBus(c+937,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1857,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+938,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+939,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1001,"nop", false,-1);
    tracep->declBit(c+1002,"active", false,-1);
    tracep->declBit(c+1003,"precharge", false,-1);
    tracep->declBit(c+1004,"read", false,-1);
    tracep->declBit(c+1005,"write", false,-1);
    tracep->declBit(c+1006,"burstterm", false,-1);
    tracep->declBit(c+1007,"autorefresh", false,-1);
    tracep->declBit(c+1008,"mode", false,-1);
    tracep->declBus(c+940,"test", false,-1, 15,0);
    tracep->declBus(c+941,"test1", false,-1, 15,0);
    tracep->declBus(c+942,"sense", false,-1, 31,0);
    tracep->declBit(c+943,"write_burst_mode", false,-1);
    tracep->declBus(c+944,"op_mode", false,-1, 1,0);
    tracep->declBus(c+945,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+946,"burst_type", false,-1);
    tracep->declBus(c+947,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+948,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+949,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+950,"bank", false,-1, 1,0);
    tracep->declBus(c+951,"row", false,-1, 12,0);
    tracep->declBus(c+952,"column", false,-1, 8,0);
    tracep->declBus(c+953,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+954,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+955,"rdqm_reg2", false,-1, 1,0);
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
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),7);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullBit(oldp+450,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullCData(oldp+451,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+452,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+453,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+454,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                : 0U)),4);
    bufp->fullCData(oldp+455,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                : 0U)),4);
    bufp->fullBit(oldp+456,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+458,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+459,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][0U]),27);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][1U]),27);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][2U]),27);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [0U][3U]),27);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][0U]),27);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][1U]),27);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][2U]),27);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [1U][3U]),27);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][0U]),27);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][1U]),27);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][2U]),27);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [2U][3U]),27);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][0U]),27);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][1U]),27);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][2U]),27);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                              [3U][3U]),27);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),4);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),4);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),4);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),4);
    bufp->fullIData(oldp+532,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+533,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+534,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                     >> 2U))),2);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullCData(oldp+543,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls))),4);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+545,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+546,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+547,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+548,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+549,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+550,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+577,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+609,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+610,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+613,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+614,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+619,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+638,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+639,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+641,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+642,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+643,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+644,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+645,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+653,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+690,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+692,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+693,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+694,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+698,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+700,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+701,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+703,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+707,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+708,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+710,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+728,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+729,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+730,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+731,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+732,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+733,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+734,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+738,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+739,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+758,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+765,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+784,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+785,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+786,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+787,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+788,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+807,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+808,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+809,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+810,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+811,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+813,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+832,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+849,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+860,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+874,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+876,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+879,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+880,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+881,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+882,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+883,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+884,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+885,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+886,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+900,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+901,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+902,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+903,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+904,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+905,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+906,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+907,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+909,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+910,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+921,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+922,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+923,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+924,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+926,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+927,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+928,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+942,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+943,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+944,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+945,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+946,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+947,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+948,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+949,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+956,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+957,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+976,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+983,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+984,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+985,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+986,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+998,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1003,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1012,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1013,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1014,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1025,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullBit(oldp+1038,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullIData(oldp+1040,(((((- (IData)((0x13U 
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
    bufp->fullBit(oldp+1041,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullCData(oldp+1042,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h8f4cfdd6__0) 
                                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                       | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                          | ((0x33U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                             | (0x73U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)))))))
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 7U))
                                 : 0U)),5);
    bufp->fullIData(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U))
                                 : 0U)),32);
    bufp->fullIData(oldp+1044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)
                                 : 0U)),32);
    bufp->fullIData(oldp+1045,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                       >> 7U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
                                                             >> 7U))))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
                                                              >> 0x14U))))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))
                                 : 0U)),5);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullCData(oldp+1058,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+1060,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+1061,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+1062,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+1063,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+1065,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+1066,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+1067,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullCData(oldp+1068,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+1069,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1070,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1071,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1072,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1073,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1078,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1079,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ls));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ls));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ls));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ls));
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1106,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1107,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1108,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1109,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1110,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1111,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1112,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1113,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1114,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1115,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1116,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1117,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1118,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1119,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1143,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1144,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1148,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1149,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1150,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1151,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1152,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1153,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1154,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1155,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1156,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1157,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1158,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1159,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1160,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1161,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1166,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_ex));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_ex));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_ex));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_ex));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1205,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1206,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1208,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1223,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1225,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1226,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1227,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1228,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1238,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1243,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1245,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1246,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1256,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1261,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1262,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1263,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1264,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1265,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1266,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1267,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1269,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1270,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1271,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1272,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1273,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1274,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1275,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1276,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1277,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1278,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1279,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1280,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1281,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1282,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1283,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1284,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1286,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1287,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1288,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1289,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1290,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1291,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1292,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullIData(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen_id));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen_id));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen_id));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen_id));
    bufp->fullBit(oldp+1310,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1311,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1312,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1313,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullIData(oldp+1314,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1315,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullIData(oldp+1316,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1317,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullIData(oldp+1318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1320,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1322,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
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
    bufp->fullCData(oldp+1325,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
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
    bufp->fullIData(oldp+1326,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1327,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1328,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1329,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1330,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+1333,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1334,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1335,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),2);
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op),7);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3),3);
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullBit(oldp+1342,((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1343,((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1344,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1345,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1346,((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1347,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1348,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1349,((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1350,((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1351,((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1352,((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op))));
    bufp->fullBit(oldp+1353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h8f4cfdd6__0) 
                              | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                 | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                    | ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                       | ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                          | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)))))))));
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullBit(oldp+1355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_heaf68671__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h083bf257__0))));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen));
    bufp->fullBit(oldp+1357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_heafa663f__0) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h083bf257__0))));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen));
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+1363,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullBit(oldp+1364,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1366,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1367,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1393,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullSData(oldp+1395,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1396,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1397,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1402,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit),4);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullIData(oldp+1417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1420,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1421,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1425,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1430,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1431,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1432,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1436,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1439,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1442,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1444,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1449,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1452,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+1492,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1493,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1514,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1515,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1538,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1539,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1540,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1541,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1542,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1543,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1544,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1546,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1547,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1548,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1549,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1550,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1551,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1552,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1553,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1554,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1555,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1556,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1557,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1558,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1559,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1560,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1561,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1563,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1564,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1565,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1566,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1567,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1568,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1592,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1619,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1622,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
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
    bufp->fullBit(oldp+1657,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1658,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+1659,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullCData(oldp+1660,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1661,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1662,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1663,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1664,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1665,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullBit(oldp+1666,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1667,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1668,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1669,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1670,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1671,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1675,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))
                                 ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg
                                [(7U & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc) 
                                        + VL_CLOG2_I((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))))])),32);
    bufp->fullCData(oldp+1676,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1677,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1678,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                         >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1679,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1680,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullBit(oldp+1681,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullIData(oldp+1683,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1684,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullCData(oldp+1685,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
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
    bufp->fullBit(oldp+1686,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1687,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1689,(((((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he13e4acc__0) 
                                     | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha7e8918b__0)))) 
                                 | ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h602e6420__0) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6e33f2cd__0) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h87dfbd81__0) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he59279b7__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he9162606__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he888a791__0) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c836c48__0)))))))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h05efdedf__0) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbe00665a__0))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
                                     : 0U))),32);
    bufp->fullIData(oldp+1690,((((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he13e4acc__0) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_ha7e8918b__0)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h05efdedf__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm
                                     : (((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                         & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3)) 
                                            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3))))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)
                                             ? (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 0x14U))
                                             : 0U) : 
                                        (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h602e6420__0) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h87dfbd81__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he59279b7__0) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h0c836c48__0)))))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                          : (((0x33U 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op)) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h6e33f2cd__0) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he9162606__0) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he888a791__0))))
                                              ? ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & vlSelf->__VdfgTmp_hebfd84b3__0))
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbe00665a__0)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                                  : 0U))))))),32);
    bufp->fullIData(oldp+1691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_heaf68671__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mstatus_wen)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_heafa663f__0)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__mtvec_wen)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                             : 0U))))),32);
    bufp->fullIData(oldp+1692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1693,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1695,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                            >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1697,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1701,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1702,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullSData(oldp+1704,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1707,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1708,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1710,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1711,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1713,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1715,(1U),3);
    bufp->fullCData(oldp+1716,(0U),2);
    bufp->fullCData(oldp+1717,(1U),2);
    bufp->fullCData(oldp+1718,(2U),2);
    bufp->fullCData(oldp+1719,(3U),2);
    bufp->fullSData(oldp+1720,(0xaU),11);
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1725,(0U));
    bufp->fullCData(oldp+1726,(0U),3);
    bufp->fullCData(oldp+1727,(2U),3);
    bufp->fullCData(oldp+1728,(3U),3);
    bufp->fullCData(oldp+1729,(4U),3);
    bufp->fullBit(oldp+1730,(1U));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1732,(0U),4);
    bufp->fullIData(oldp+1733,(0U),32);
    bufp->fullCData(oldp+1734,(0U),8);
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1745,(0U),32);
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1768,(3U),32);
    bufp->fullIData(oldp+1769,(2U),32);
    bufp->fullIData(oldp+1770,(0x2000000U),32);
    bufp->fullIData(oldp+1771,(0x2000004U),32);
    bufp->fullBit(oldp+1772,(0U));
    bufp->fullBit(oldp+1773,(1U));
    bufp->fullCData(oldp+1774,(1U),4);
    bufp->fullCData(oldp+1775,(2U),4);
    bufp->fullCData(oldp+1776,(3U),4);
    bufp->fullCData(oldp+1777,(4U),4);
    bufp->fullCData(oldp+1778,(5U),4);
    bufp->fullCData(oldp+1779,(6U),4);
    bufp->fullCData(oldp+1780,(7U),4);
    bufp->fullCData(oldp+1781,(8U),4);
    bufp->fullCData(oldp+1782,(9U),4);
    bufp->fullCData(oldp+1783,(0xaU),4);
    bufp->fullCData(oldp+1784,(0xbU),4);
    bufp->fullCData(oldp+1785,(0xcU),4);
    bufp->fullIData(oldp+1786,(4U),32);
    bufp->fullIData(oldp+1787,(1U),32);
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),2);
    bufp->fullIData(oldp+1789,(0x20U),32);
    bufp->fullIData(oldp+1790,(0x1000000U),32);
    bufp->fullIData(oldp+1791,(0x1000004U),32);
    bufp->fullCData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1800,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1801,(0x1800U),32);
    bufp->fullIData(oldp+1802,(0x79737978U),32);
    bufp->fullCData(oldp+1803,(4U),8);
    bufp->fullCData(oldp+1804,(8U),8);
    bufp->fullCData(oldp+1805,(3U),8);
    bufp->fullCData(oldp+1806,(0x9fU),8);
    bufp->fullCData(oldp+1807,(0x25U),8);
    bufp->fullCData(oldp+1808,(0xdU),8);
    bufp->fullCData(oldp+1809,(0x99U),8);
    bufp->fullCData(oldp+1810,(0x49U),8);
    bufp->fullCData(oldp+1811,(0x41U),8);
    bufp->fullCData(oldp+1812,(0x1fU),8);
    bufp->fullCData(oldp+1813,(1U),8);
    bufp->fullCData(oldp+1814,(9U),8);
    bufp->fullCData(oldp+1815,(0x11U),8);
    bufp->fullCData(oldp+1816,(0xc1U),8);
    bufp->fullCData(oldp+1817,(0x63U),8);
    bufp->fullCData(oldp+1818,(0x85U),8);
    bufp->fullCData(oldp+1819,(0x61U),8);
    bufp->fullCData(oldp+1820,(0x71U),8);
    bufp->fullCData(oldp+1821,(0xf0U),8);
    bufp->fullCData(oldp+1822,(0xe0U),8);
    bufp->fullCData(oldp+1823,(0x15U),8);
    bufp->fullCData(oldp+1824,(0xebU),8);
    bufp->fullCData(oldp+1825,(0x38U),8);
    bufp->fullIData(oldp+1826,(0x64U),32);
    bufp->fullIData(oldp+1827,(0x18U),32);
    bufp->fullIData(oldp+1828,(9U),32);
    bufp->fullIData(oldp+1829,(6U),32);
    bufp->fullIData(oldp+1830,(8U),32);
    bufp->fullIData(oldp+1831,(0xdU),32);
    bufp->fullIData(oldp+1832,(0x2000U),32);
    bufp->fullIData(oldp+1833,(0x2710U),32);
    bufp->fullIData(oldp+1834,(0x30cU),32);
    bufp->fullSData(oldp+1835,(0x20U),13);
    bufp->fullIData(oldp+1836,(0xaU),32);
    bufp->fullIData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1838,(0x11U),32);
    bufp->fullIData(oldp+1839,(0x30000000U),32);
    bufp->fullIData(oldp+1840,(0x3fffffffU),32);
    bufp->fullCData(oldp+1841,(5U),3);
    bufp->fullCData(oldp+1842,(6U),3);
    bufp->fullCData(oldp+1843,(7U),3);
    bufp->fullIData(oldp+1844,(0xbU),32);
    bufp->fullIData(oldp+1845,(0x10U),32);
    bufp->fullIData(oldp+1846,(5U),32);
    bufp->fullIData(oldp+1847,(0x60U),32);
    bufp->fullIData(oldp+1848,(0x90U),32);
    bufp->fullIData(oldp+1849,(0x310U),32);
    bufp->fullIData(oldp+1850,(0x320U),32);
    bufp->fullIData(oldp+1851,(0x23U),32);
    bufp->fullIData(oldp+1852,(0x203U),32);
    bufp->fullIData(oldp+1853,(0x20dU),32);
    bufp->fullSData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
