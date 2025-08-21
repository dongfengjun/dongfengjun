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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1704,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1705,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1706,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1707,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1708,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1709,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1710,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1711,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1712,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1713,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1714,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1715,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1716,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1717,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1718,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1719,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1720,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1721,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1722,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1723,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1704,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1705,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1706,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1707,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1708,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1709,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1710,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1711,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1712,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1713,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1714,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1715,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1716,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1717,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1718,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1719,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1720,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1721,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1722,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1723,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+481,"spi_sck", false,-1);
    tracep->declBus(c+482,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+911,"spi_mosi", false,-1);
    tracep->declBit(c+1724,"spi_miso", false,-1);
    tracep->declBit(c+1722,"uart_rx", false,-1);
    tracep->declBit(c+1723,"uart_tx", false,-1);
    tracep->declBit(c+1698,"psram_sck", false,-1);
    tracep->declBit(c+1699,"psram_ce_n", false,-1);
    tracep->declBus(c+1725,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1726,"sdram_clk", false,-1);
    tracep->declBit(c+483,"sdram_cke", false,-1);
    tracep->declBit(c+912,"sdram_cs", false,-1);
    tracep->declBit(c+913,"sdram_ras", false,-1);
    tracep->declBit(c+914,"sdram_cas", false,-1);
    tracep->declBit(c+915,"sdram_we", false,-1);
    tracep->declBus(c+916,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+484,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+941,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1704,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1705,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1706,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1707,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1708,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1709,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1710,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1711,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1712,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1713,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1714,"ps2_clk", false,-1);
    tracep->declBit(c+1715,"ps2_data", false,-1);
    tracep->declBus(c+1716,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1717,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1718,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1719,"vga_hsync", false,-1);
    tracep->declBit(c+1720,"vga_vsync", false,-1);
    tracep->declBit(c+1721,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1329,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1330,"in_psel", false,-1);
    tracep->declBit(c+886,"in_penable", false,-1);
    tracep->declBus(c+1785,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1331,"in_pwrite", false,-1);
    tracep->declBus(c+1332,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1333,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+485,"in_pready", false,-1);
    tracep->declBus(c+486,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+487,"in_pslverr", false,-1);
    tracep->declBus(c+1422,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1463,"out_psel", false,-1);
    tracep->declBit(c+1464,"out_penable", false,-1);
    tracep->declBus(c+1465,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"out_pwrite", false,-1);
    tracep->declBus(c+1467,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1469,"out_pready", false,-1);
    tracep->declBus(c+1727,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1470,"out_pslverr", false,-1);
    tracep->declBus(c+1786,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1787,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1788,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1789,"DELAY", false,-1, 1,0);
    tracep->declBus(c+488,"state", false,-1, 1,0);
    tracep->declBus(c+489,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+490,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+491,"pslverr_reg", false,-1);
    tracep->declBus(c+1790,"r", false,-1, 10,0);
    tracep->declBus(c+1788,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1463,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1464,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1422,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1465,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1469,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1470,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1727,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1471,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1472,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1473,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1465,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+492,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1791,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1792,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1474,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1475,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+493,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1793,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+494,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1476,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1477,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1794,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+496,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1478,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1479,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1422,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1465,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1728,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1795,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+887,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1480,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1481,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1482,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1795,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1483,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1484,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1485,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1466,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1473,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1465,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1729,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1795,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1486,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1487,"sel_0", false,-1);
    tracep->declBit(c+1488,"sel_1", false,-1);
    tracep->declBit(c+1489,"sel_2", false,-1);
    tracep->declBit(c+1490,"sel_3", false,-1);
    tracep->declBit(c+1491,"sel_4", false,-1);
    tracep->declBit(c+1492,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1334,"auto_in_awready", false,-1);
    tracep->declBit(c+1335,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_in_wready", false,-1);
    tracep->declBit(c+1339,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1493,"auto_in_bready", false,-1);
    tracep->declBit(c+1494,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1730,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1342,"auto_in_arready", false,-1);
    tracep->declBit(c+1343,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1495,"auto_in_rready", false,-1);
    tracep->declBit(c+1496,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1731,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1730,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1330,"auto_out_psel", false,-1);
    tracep->declBit(c+886,"auto_out_penable", false,-1);
    tracep->declBit(c+1331,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1329,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1332,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1333,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+485,"auto_out_pready", false,-1);
    tracep->declBit(c+487,"auto_out_pslverr", false,-1);
    tracep->declBus(c+486,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+886,"nodeOut_penable", false,-1);
    tracep->declBus(c+888,"state", false,-1, 1,0);
    tracep->declBit(c+1342,"accept_read", false,-1);
    tracep->declBit(c+1334,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1331,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+497,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1730,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1496,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1494,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1497,"in_arready", false,-1);
    tracep->declBit(c+1347,"in_arvalid", false,-1);
    tracep->declBus(c+1015,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1498,"in_rready", false,-1);
    tracep->declBit(c+498,"in_rvalid", false,-1);
    tracep->declBus(c+499,"in_rid", false,-1, 3,0);
    tracep->declBus(c+500,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+501,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+502,"in_rlast", false,-1);
    tracep->declBit(c+1499,"in_awready", false,-1);
    tracep->declBit(c+1348,"in_awvalid", false,-1);
    tracep->declBus(c+1020,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1500,"in_wready", false,-1);
    tracep->declBit(c+1349,"in_wvalid", false,-1);
    tracep->declBus(c+1350,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"in_wlast", false,-1);
    tracep->declBit(c+1501,"in_bready", false,-1);
    tracep->declBit(c+503,"in_bvalid", false,-1);
    tracep->declBus(c+504,"in_bid", false,-1, 3,0);
    tracep->declBus(c+505,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1502,"out_arready", false,-1);
    tracep->declBit(c+1503,"out_arvalid", false,-1);
    tracep->declBus(c+1504,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1505,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1506,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1309,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1507,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1508,"out_rready", false,-1);
    tracep->declBit(c+506,"out_rvalid", false,-1);
    tracep->declBus(c+507,"out_rid", false,-1, 3,0);
    tracep->declBus(c+508,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1786,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+509,"out_rlast", false,-1);
    tracep->declBit(c+1509,"out_awready", false,-1);
    tracep->declBit(c+1510,"out_awvalid", false,-1);
    tracep->declBus(c+1511,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1512,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1513,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1310,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1514,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1515,"out_wready", false,-1);
    tracep->declBit(c+1516,"out_wvalid", false,-1);
    tracep->declBus(c+1424,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1311,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1312,"out_wlast", false,-1);
    tracep->declBit(c+1732,"out_bready", false,-1);
    tracep->declBit(c+510,"out_bvalid", false,-1);
    tracep->declBus(c+507,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1786,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1796,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1785,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1797,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1798,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1799,"DELAY", false,-1, 2,0);
    tracep->declBus(c+511,"rstate", false,-1, 2,0);
    tracep->declBus(c+512,"wstate", false,-1, 2,0);
    tracep->declBus(c+513,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+514,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+515,"rvalid_reg", false,-1);
    tracep->declBus(c+516,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+517,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+521,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+522,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+523,"bvalid_reg", false,-1);
    tracep->declBus(c+524,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+525,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1790,"r", false,-1, 10,0);
    tracep->declBus(c+1788,"s", false,-1, 1,0);
    tracep->declBus(c+526,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1351,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1020,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1352,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1350,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_in_wlast", false,-1);
    tracep->declBit(c+1733,"auto_in_bready", false,-1);
    tracep->declBit(c+1517,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1734,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1353,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1015,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1519,"auto_in_rready", false,-1);
    tracep->declBit(c+1520,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1737,"auto_in_rlast", false,-1);
    tracep->declBit(c+1522,"auto_out_awready", false,-1);
    tracep->declBit(c+1354,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1355,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1523,"auto_out_wready", false,-1);
    tracep->declBit(c+1356,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1357,"auto_out_wlast", false,-1);
    tracep->declBit(c+1524,"auto_out_bready", false,-1);
    tracep->declBit(c+1525,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1526,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1527,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1528,"auto_out_arready", false,-1);
    tracep->declBit(c+1358,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1359,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1519,"auto_out_rready", false,-1);
    tracep->declBit(c+1520,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1738,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1529,"auto_out_rlast", false,-1);
    tracep->declBit(c+1356,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1530,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1360,"len", false,-1, 7,0);
    tracep->declBus(c+1361,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1362,"len_1", false,-1, 7,0);
    tracep->declBus(c+1363,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1354,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1364,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1365,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1357,"w_last", false,-1);
    tracep->declBit(c+1524,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1353,"io_enq_valid", false,-1);
    tracep->declBus(c+1015,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1016,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1017,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1018,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1019,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1531,"io_deq_ready", false,-1);
    tracep->declBit(c+1358,"io_deq_valid", false,-1);
    tracep->declBus(c+1344,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1366,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1367,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1346,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1368,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1358,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1532,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1351,"io_enq_valid", false,-1);
    tracep->declBus(c+1020,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1021,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1022,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1023,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1024,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1533,"io_deq_ready", false,-1);
    tracep->declBit(c+1369,"io_deq_valid", false,-1);
    tracep->declBus(c+1336,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1370,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1371,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1338,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1372,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1369,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1534,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1352,"io_enq_valid", false,-1);
    tracep->declBus(c+1350,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1025,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1026,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1535,"io_deq_ready", false,-1);
    tracep->declBit(c+1373,"io_deq_valid", false,-1);
    tracep->declBus(c+1340,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1341,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1739,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1373,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1536,"do_enq", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1537,"auto_in_awready", false,-1);
    tracep->declBit(c+1374,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1375,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1425,"auto_in_wready", false,-1);
    tracep->declBit(c+1376,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1539,"auto_in_arready", false,-1);
    tracep->declBit(c+1377,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1378,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1540,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1539,"nodeIn_arready", false,-1);
    tracep->declBit(c+1537,"nodeIn_awready", false,-1);
    tracep->declBit(c+1379,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1541,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1380,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1541,"R0_en", false,-1);
    tracep->declBit(c+1702,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1381,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1542,"W0_en", false,-1);
    tracep->declBit(c+1702,"W0_clk", false,-1);
    tracep->declBus(c+1340,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1341,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1543,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1027,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1020,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1028,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1350,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1029,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1544,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1545,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1740,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1546,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1030,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1015,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1547,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1548,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1741,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1742,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1549,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1499,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1348,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1020,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1500,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1350,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1501,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+503,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+504,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+505,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1497,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1347,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1015,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1498,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+498,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+499,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+500,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+501,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+502,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1351,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1020,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1352,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1350,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1733,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1517,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1734,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1353,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1015,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1519,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1520,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1737,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1544,"in_0_bvalid", false,-1);
    tracep->declBit(c+1547,"in_0_rvalid", false,-1);
    tracep->declBit(c+1550,"in_0_wready", false,-1);
    tracep->declBit(c+1551,"in_0_awready", false,-1);
    tracep->declBit(c+1743,"in_0_arready", false,-1);
    tracep->declBit(c+1543,"anonIn_awready", false,-1);
    tracep->declBit(c+1546,"anonIn_arready", false,-1);
    tracep->declBit(c+1032,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1033,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1034,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1035,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1036,"arSel", false,-1, 15,0);
    tracep->declBus(c+1037,"awSel", false,-1, 15,0);
    tracep->declBus(c+1552,"rSel", false,-1, 15,0);
    tracep->declBus(c+1553,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1382,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1383,"in_0_awvalid", false,-1);
    tracep->declBit(c+1384,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1385,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1554,"anyValid", false,-1);
    tracep->declBus(c+1555,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1556,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1557,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1558,"prefixOR_1", false,-1);
    tracep->declBit(c+1559,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1560,"muxState_2_0", false,-1);
    tracep->declBit(c+1561,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1562,"anyValid_1", false,-1);
    tracep->declBus(c+1563,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1564,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1565,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1566,"winner_3_0", false,-1);
    tracep->declBit(c+1567,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+1568,"muxState_3_0", false,-1);
    tracep->declBit(c+1569,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1384,"io_enq_valid", false,-1);
    tracep->declBus(c+1038,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1570,"io_deq_ready", false,-1);
    tracep->declBit(c+1386,"io_deq_valid", false,-1);
    tracep->declBus(c+1387,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1386,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1571,"do_deq", false,-1);
    tracep->declBit(c+1572,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1800,"R0_en", false,-1);
    tracep->declBit(c+1702,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1572,"W0_en", false,-1);
    tracep->declBit(c+1702,"W0_clk", false,-1);
    tracep->declBus(c+1038,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1573,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1388,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1523,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1356,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1357,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1524,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1525,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1526,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1389,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1519,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1520,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1529,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1537,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1374,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1375,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1425,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1538,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1539,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1377,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1378,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1540,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1390,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1391,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1392,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1393,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1744,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1334,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1335,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1334,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1339,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1493,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1494,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1730,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1342,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1343,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1495,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1496,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1731,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1730,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1525,"in_0_bvalid", false,-1);
    tracep->declBit(c+1520,"in_0_rvalid", false,-1);
    tracep->declBit(c+1575,"in_0_wready", false,-1);
    tracep->declBit(c+1576,"in_0_awready", false,-1);
    tracep->declBit(c+1574,"in_0_arready", false,-1);
    tracep->declBit(c+1573,"anonIn_awready", false,-1);
    tracep->declBit(c+1394,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1395,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1396,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1397,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1398,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1399,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1400,"arSel", false,-1, 15,0);
    tracep->declBus(c+1401,"awSel", false,-1, 15,0);
    tracep->declBus(c+1577,"rSel", false,-1, 15,0);
    tracep->declBus(c+1578,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1402,"in_0_awvalid", false,-1);
    tracep->declBit(c+1403,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1404,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1579,"anyValid", false,-1);
    tracep->declBus(c+1580,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1581,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1582,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1583,"prefixOR_1", false,-1);
    tracep->declBit(c+1584,"winner_3_1", false,-1);
    tracep->declBit(c+1585,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1586,"muxState_3_0", false,-1);
    tracep->declBit(c+1587,"muxState_3_1", false,-1);
    tracep->declBit(c+1588,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1589,"anyValid_1", false,-1);
    tracep->declBus(c+1590,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1591,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1592,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1593,"winner_4_0", false,-1);
    tracep->declBit(c+1594,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1595,"muxState_4_0", false,-1);
    tracep->declBit(c+1596,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1403,"io_enq_valid", false,-1);
    tracep->declBus(c+1405,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1597,"io_deq_ready", false,-1);
    tracep->declBit(c+1406,"io_deq_valid", false,-1);
    tracep->declBus(c+1407,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1406,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1598,"do_deq", false,-1);
    tracep->declBit(c+1599,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1800,"R0_en", false,-1);
    tracep->declBit(c+1702,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1599,"W0_en", false,-1);
    tracep->declBit(c+1702,"W0_clk", false,-1);
    tracep->declBus(c+1405,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1522,"auto_in_awready", false,-1);
    tracep->declBit(c+1354,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1355,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1523,"auto_in_wready", false,-1);
    tracep->declBit(c+1356,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1357,"auto_in_wlast", false,-1);
    tracep->declBit(c+1524,"auto_in_bready", false,-1);
    tracep->declBit(c+1525,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1526,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1527,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1528,"auto_in_arready", false,-1);
    tracep->declBit(c+1358,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1359,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1519,"auto_in_rready", false,-1);
    tracep->declBit(c+1520,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1738,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1529,"auto_in_rlast", false,-1);
    tracep->declBit(c+1573,"auto_out_awready", false,-1);
    tracep->declBit(c+1388,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1336,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1337,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1338,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1523,"auto_out_wready", false,-1);
    tracep->declBit(c+1356,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1340,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1357,"auto_out_wlast", false,-1);
    tracep->declBit(c+1524,"auto_out_bready", false,-1);
    tracep->declBit(c+1525,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1518,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1526,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1574,"auto_out_arready", false,-1);
    tracep->declBit(c+1389,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1345,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1346,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1519,"auto_out_rready", false,-1);
    tracep->declBit(c+1520,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1521,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1735,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1736,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1529,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1427,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1600,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1428,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1601,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1429,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1602,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1430,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1603,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1431,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1604,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1432,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1605,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1433,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1606,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1434,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1607,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1435,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1608,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1436,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1609,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1437,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1610,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1438,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1611,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1439,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1612,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1440,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1613,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1441,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1614,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1442,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1615,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1443,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1616,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1444,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1617,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1445,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1618,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1446,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1619,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1447,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1620,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1448,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1621,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1449,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1622,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1450,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1623,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1451,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1624,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1452,"io_enq_valid", false,-1);
    tracep->declBit(c+1355,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1625,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1453,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1626,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1454,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1627,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1455,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1628,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1456,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1629,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1457,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1630,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1458,"io_enq_valid", false,-1);
    tracep->declBit(c+1359,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1631,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1745,"reset", false,-1);
    tracep->declBit(c+1543,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1027,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1020,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1028,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1350,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1029,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1544,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1545,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1740,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1546,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1030,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1015,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1031,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1547,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1548,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1741,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1742,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1549,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1745,"reset", false,-1);
    tracep->declBit(c+1795,"io_interrupt", false,-1);
    tracep->declBit(c+1543,"io_master_awready", false,-1);
    tracep->declBit(c+1027,"io_master_awvalid", false,-1);
    tracep->declBus(c+1020,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"io_master_wready", false,-1);
    tracep->declBit(c+1028,"io_master_wvalid", false,-1);
    tracep->declBus(c+1350,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"io_master_wlast", false,-1);
    tracep->declBit(c+1029,"io_master_bready", false,-1);
    tracep->declBit(c+1544,"io_master_bvalid", false,-1);
    tracep->declBus(c+1545,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1740,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1546,"io_master_arready", false,-1);
    tracep->declBit(c+1030,"io_master_arvalid", false,-1);
    tracep->declBus(c+1015,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1031,"io_master_rready", false,-1);
    tracep->declBit(c+1547,"io_master_rvalid", false,-1);
    tracep->declBus(c+1548,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1741,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1742,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1549,"io_master_rlast", false,-1);
    tracep->declBit(c+1801,"io_slave_awready", false,-1);
    tracep->declBit(c+1795,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1802,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1803,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1804,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1796,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1786,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1805,"io_slave_wready", false,-1);
    tracep->declBit(c+1795,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1803,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1802,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1795,"io_slave_wlast", false,-1);
    tracep->declBit(c+1795,"io_slave_bready", false,-1);
    tracep->declBit(c+1806,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1807,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1808,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1809,"io_slave_arready", false,-1);
    tracep->declBit(c+1795,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1802,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1803,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1804,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1796,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1786,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1795,"io_slave_rready", false,-1);
    tracep->declBit(c+1810,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1811,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1812,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1813,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1814,"io_slave_rlast", false,-1);
    tracep->declBus(c+1039,"pc", false,-1, 31,0);
    tracep->declBit(c+1800,"pc_valid", false,-1);
    tracep->declBus(c+1746,"snpc", false,-1, 31,0);
    tracep->declBus(c+1040,"inst_if", false,-1, 31,0);
    tracep->declBus(c+1041,"pc_if", false,-1, 31,0);
    tracep->declBit(c+1042,"if_valid", false,-1);
    tracep->declBit(c+1043,"if_ready", false,-1);
    tracep->declBus(c+1815,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1815,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1044,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1045,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1802,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1804,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+443,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1802,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1816,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+444,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1817,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1796,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+445,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1786,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+446,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1818,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1819,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1795,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1820,"if_axi_awready", false,-1);
    tracep->declBit(c+1795,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1821,"if_axi_wready", false,-1);
    tracep->declBit(c+1822,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1795,"if_axi_bready", false,-1);
    tracep->declBit(c+1046,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1047,"if_axi_arready", false,-1);
    tracep->declBit(c+1632,"if_axi_rvalid", false,-1);
    tracep->declBit(c+1048,"if_axi_rready", false,-1);
    tracep->declBit(c+1823,"if_axi_wlast", false,-1);
    tracep->declBit(c+1824,"if_axi_rlast", false,-1);
    tracep->declBus(c+1825,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1826,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1313,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1827,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1828,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1050,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1829,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1314,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1830,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1315,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1831,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1051,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1832,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1052,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1747,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1748,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1833,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1316,"icache_axi_awready", false,-1);
    tracep->declBit(c+1834,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1749,"icache_axi_wready", false,-1);
    tracep->declBit(c+1317,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1835,"icache_axi_bready", false,-1);
    tracep->declBit(c+1053,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1318,"icache_axi_arready", false,-1);
    tracep->declBit(c+1319,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1054,"icache_axi_rready", false,-1);
    tracep->declBit(c+1836,"icache_axi_wlast", false,-1);
    tracep->declBit(c+1633,"icache_axi_rlast", false,-1);
    tracep->declBus(c+955,"inst_id", false,-1, 31,0);
    tracep->declBit(c+1408,"id_valid", false,-1);
    tracep->declBit(c+1409,"id_ready", false,-1);
    tracep->declBus(c+1055,"prepc", false,-1, 31,0);
    tracep->declBit(c+1056,"prepc_en", false,-1);
    tracep->declBus(c+1057,"rs1", false,-1, 4,0);
    tracep->declBus(c+1058,"rs2", false,-1, 4,0);
    tracep->declBus(c+1059,"pc_id", false,-1, 31,0);
    tracep->declBus(c+956,"imm_id", false,-1, 31,0);
    tracep->declBus(c+1060,"op_id", false,-1, 6,0);
    tracep->declBus(c+1061,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+957,"rd_id", false,-1, 4,0);
    tracep->declBit(c+958,"gpr_wen_id", false,-1);
    tracep->declBus(c+447,"alu_sel_id", false,-1, 3,0);
    tracep->declBus(c+448,"a_id", false,-1, 31,0);
    tracep->declBus(c+449,"b_id", false,-1, 31,0);
    tracep->declBus(c+450,"r1_id", false,-1, 31,0);
    tracep->declBus(c+1062,"r2_id", false,-1, 31,0);
    tracep->declBus(c+959,"csr_id", false,-1, 31,0);
    tracep->declBus(c+451,"mepc_id", false,-1, 31,0);
    tracep->declBus(c+452,"mtvec_id", false,-1, 31,0);
    tracep->declBus(c+1063,"csrs_wen_id", false,-1, 3,0);
    tracep->declBit(c+1064,"fencei_id", false,-1);
    tracep->declBus(c+889,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+890,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+1750,"ex_ready", false,-1);
    tracep->declBit(c+1695,"ex_valid", false,-1);
    tracep->declBus(c+341,"op_ex", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+891,"rd_ex", false,-1, 4,0);
    tracep->declBit(c+892,"gpr_wen_ex", false,-1);
    tracep->declBus(c+998,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+999,"mstatus_ex", false,-1, 31,0);
    tracep->declBus(c+1000,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+1001,"mtvec_ex", false,-1, 31,0);
    tracep->declBus(c+1002,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+893,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+1003,"ls_valid_ex", false,-1);
    tracep->declBit(c+343,"ls_wen_ex", false,-1);
    tracep->declBit(c+1004,"ls_read_ex", false,-1);
    tracep->declBit(c+1005,"ls_write_ex", false,-1);
    tracep->declBus(c+1006,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+1007,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+1008,"ls_wmask_ex", false,-1, 3,0);
    tracep->declBus(c+1009,"ls_awsize_ex", false,-1, 2,0);
    tracep->declBus(c+1010,"ls_arsize_ex", false,-1, 2,0);
    tracep->declBus(c+1011,"ls_awlen_ex", false,-1, 7,0);
    tracep->declBus(c+1012,"ls_arlen_ex", false,-1, 7,0);
    tracep->declBus(c+1013,"ls_awburst_ex", false,-1, 1,0);
    tracep->declBus(c+1014,"ls_arburst_ex", false,-1, 1,0);
    tracep->declBus(c+894,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+453,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+454,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+455,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+1065,"ls_ready", false,-1);
    tracep->declBit(c+1066,"ls_valid", false,-1);
    tracep->declBit(c+1067,"difftest", false,-1);
    tracep->declBus(c+456,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+457,"rd_ls", false,-1, 4,0);
    tracep->declBit(c+458,"gpr_wen_ls", false,-1);
    tracep->declBus(c+970,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+971,"mstatus_ls", false,-1, 31,0);
    tracep->declBus(c+972,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+973,"mtvec_ls", false,-1, 31,0);
    tracep->declBus(c+974,"csrs_wen_ls", false,-1, 3,0);
    tracep->declBus(c+975,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1751,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1320,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+977,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+978,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+979,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1837,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1321,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1838,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1322,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+980,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+981,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+982,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+983,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1752,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1753,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+984,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1634,"ls_axi_awready", false,-1);
    tracep->declBit(c+985,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1754,"ls_axi_wready", false,-1);
    tracep->declBit(c+1635,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+986,"ls_axi_bready", false,-1);
    tracep->declBit(c+987,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1636,"ls_axi_arready", false,-1);
    tracep->declBit(c+1637,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+988,"ls_axi_rready", false,-1);
    tracep->declBit(c+989,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1323,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1068,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1410,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1069,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1755,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1070,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1071,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1072,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1073,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1839,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1074,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1840,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1075,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1077,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1078,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1841,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1842,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1079,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1843,"c_axi_awready", false,-1);
    tracep->declBit(c+1080,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1844,"c_axi_wready", false,-1);
    tracep->declBit(c+1845,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1081,"c_axi_bready", false,-1);
    tracep->declBit(c+1082,"c_axi_arvalid", false,-1);
    tracep->declBit(c+345,"c_axi_arready", false,-1);
    tracep->declBit(c+895,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1083,"c_axi_rready", false,-1);
    tracep->declBit(c+1084,"c_axi_wlast", false,-1);
    tracep->declBit(c+1846,"c_axi_rlast", false,-1);
    tracep->declBus(c+1411,"r1", false,-1, 31,0);
    tracep->declBus(c+1412,"r2", false,-1, 31,0);
    tracep->declBus(c+966,"mepc", false,-1, 31,0);
    tracep->declBus(c+967,"mstatus", false,-1, 31,0);
    tracep->declBus(c+968,"mcause", false,-1, 31,0);
    tracep->declBus(c+969,"mtvec", false,-1, 31,0);
    tracep->declBus(c+346,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+347,"marchid", false,-1, 31,0);
    tracep->declBit(c+1413,"isRAW", false,-1);
    tracep->declBit(c+1696,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1847,"n", false,-1, 31,0);
    tracep->declBus(c+1848,"w", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+1039,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1746,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+1055,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1041,"dnpc_tag_i", false,-1, 31,0);
    tracep->declBit(c+1056,"dnpc_en_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+348+i*1,"snpc_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+356+i*1,"tag_reg", true,(i+0), 28,0);
    }
    tracep->declBus(c+1085,"tag", false,-1, 28,0);
    tracep->declBus(c+1086,"index", false,-1, 0,0);
    tracep->declBus(c+1087,"dnpc_tag", false,-1, 28,0);
    tracep->declBus(c+1088,"dnpc_index", false,-1, 0,0);
    tracep->declBus(c+1414,"hit", false,-1, 3,0);
    tracep->declBus(c+1415,"already", false,-1, 3,0);
    tracep->declBit(c+364,"enable", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+365,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+366,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1843,"c_axi_awready", false,-1);
    tracep->declBit(c+1079,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1073,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1068,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1075,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1077,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1844,"c_axi_wready", false,-1);
    tracep->declBit(c+1080,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1410,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1070,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1084,"c_axi_wlast", false,-1);
    tracep->declBit(c+1081,"c_axi_bready", false,-1);
    tracep->declBit(c+1845,"c_axi_bvalid", false,-1);
    tracep->declBus(c+1839,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1841,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+345,"c_axi_arready", false,-1);
    tracep->declBit(c+1082,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1074,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1069,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1072,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1076,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1078,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1083,"c_axi_rready", false,-1);
    tracep->declBit(c+895,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1840,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1755,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1842,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1846,"c_axi_rlast", false,-1);
    tracep->declBus(c+1849,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1850,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+367,"mtime", false,-1, 63,0);
    tracep->declBus(c+1756,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1696,"isCHazard", false,-1);
    tracep->declBus(c+955,"inst_i", false,-1, 31,0);
    tracep->declBus(c+889,"pc_o", false,-1, 31,0);
    tracep->declBus(c+890,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1408,"id_valid_i", false,-1);
    tracep->declBit(c+1750,"ex_ready_o", false,-1);
    tracep->declBit(c+1695,"ex_valid_o", false,-1);
    tracep->declBit(c+1065,"ls_ready_i", false,-1);
    tracep->declBus(c+1059,"pc_i", false,-1, 31,0);
    tracep->declBus(c+956,"imm_i", false,-1, 31,0);
    tracep->declBus(c+1060,"op_i", false,-1, 6,0);
    tracep->declBus(c+1061,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+957,"rd_i", false,-1, 4,0);
    tracep->declBit(c+958,"gpr_wen_i", false,-1);
    tracep->declBus(c+447,"alu_sel_i", false,-1, 3,0);
    tracep->declBus(c+448,"a_i", false,-1, 31,0);
    tracep->declBus(c+449,"b_i", false,-1, 31,0);
    tracep->declBus(c+450,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1062,"r2_i", false,-1, 31,0);
    tracep->declBus(c+959,"csr_i", false,-1, 31,0);
    tracep->declBus(c+451,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+452,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+1063,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+341,"op_o", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+891,"rd_o", false,-1, 4,0);
    tracep->declBit(c+892,"gpr_wen_o", false,-1);
    tracep->declBus(c+998,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+999,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+1000,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+1001,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+1002,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+893,"ex_o", false,-1, 31,0);
    tracep->declBit(c+1003,"ls_valid_o", false,-1);
    tracep->declBit(c+343,"ls_wen_o", false,-1);
    tracep->declBit(c+1004,"ls_read_o", false,-1);
    tracep->declBit(c+1005,"ls_write_o", false,-1);
    tracep->declBus(c+1006,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1007,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+1008,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+1009,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1010,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1011,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1012,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1013,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1014,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+894,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+369,"ex_valid_reg", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1757,"state", false,-1);
    tracep->declBus(c+960,"al_res", false,-1, 31,0);
    tracep->declBit(c+459,"al_done", false,-1);
    tracep->declBus(c+1758,"ex", false,-1, 31,0);
    tracep->declBus(c+1089,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+1090,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+1091,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+1090,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+1090,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+1092,"ls_valid", false,-1);
    tracep->declBit(c+1093,"ls_wen", false,-1);
    tracep->declBus(c+1094,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+1095,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+1096,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1097,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+1098,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+1099,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1804,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1804,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1787,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1787,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+956,"offset", false,-1, 31,0);
    tracep->declBit(c+1100,"jalen", false,-1);
    tracep->declBit(c+1101,"jalren", false,-1);
    tracep->declBit(c+475,"beqen", false,-1);
    tracep->declBit(c+476,"bneen", false,-1);
    tracep->declBit(c+477,"blten", false,-1);
    tracep->declBit(c+478,"bgeen", false,-1);
    tracep->declBit(c+479,"bltuen", false,-1);
    tracep->declBit(c+480,"bgeuen", false,-1);
    tracep->declBit(c+1102,"ecall_en", false,-1);
    tracep->declBit(c+1759,"mret_en", false,-1);
    tracep->declBus(c+1103,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+448,"a", false,-1, 31,0);
    tracep->declBus(c+449,"b", false,-1, 31,0);
    tracep->declBus(c+447,"opcode", false,-1, 3,0);
    tracep->declBus(c+960,"res", false,-1, 31,0);
    tracep->declBit(c+459,"done", false,-1);
    tracep->declBus(c+1802,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1853,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1854,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1855,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1856,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1857,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1858,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1859,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1860,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1861,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1862,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1863,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1864,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"EXECUTE", false,-1, 0,0);
    tracep->declBit(c+460,"state", false,-1);
    tracep->declQuad(c+461,"mul_result", false,-1, 63,0);
    tracep->declBus(c+463,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+464,"dividend", false,-1, 31,0);
    tracep->declBus(c+465,"divisor", false,-1, 31,0);
    tracep->declBus(c+466,"quotient", false,-1, 31,0);
    tracep->declBus(c+467,"remainder", false,-1, 31,0);
    tracep->declBus(c+468,"div_counter", false,-1, 5,0);
    tracep->declBit(c+469,"done_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1865,"n", false,-1, 31,0);
    tracep->declBus(c+1865,"m", false,-1, 31,0);
    tracep->declBus(c+1847,"w", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1064,"fencei_i", false,-1);
    tracep->declBit(c+1820,"m_axi_awready", false,-1);
    tracep->declBit(c+1795,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1802,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1815,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1804,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1796,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1786,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1821,"m_axi_wready", false,-1);
    tracep->declBit(c+1795,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1815,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1802,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1823,"m_axi_wlast", false,-1);
    tracep->declBit(c+1795,"m_axi_bready", false,-1);
    tracep->declBit(c+1822,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1816,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1818,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1047,"m_axi_arready", false,-1);
    tracep->declBit(c+1046,"m_axi_arvalid", false,-1);
    tracep->declBus(c+444,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1044,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+443,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+445,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+446,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1048,"m_axi_rready", false,-1);
    tracep->declBit(c+1632,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1817,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1045,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1819,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1824,"m_axi_rlast", false,-1);
    tracep->declBit(c+1316,"s_axi_awready", false,-1);
    tracep->declBit(c+1833,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1829,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1825,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1828,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1831,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1832,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1749,"s_axi_wready", false,-1);
    tracep->declBit(c+1834,"s_axi_wvalid", false,-1);
    tracep->declBus(c+1826,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1827,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1836,"s_axi_wlast", false,-1);
    tracep->declBit(c+1835,"s_axi_bready", false,-1);
    tracep->declBit(c+1317,"s_axi_bvalid", false,-1);
    tracep->declBus(c+1314,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1747,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1318,"s_axi_arready", false,-1);
    tracep->declBit(c+1053,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1830,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1049,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1050,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1051,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1052,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1054,"s_axi_rready", false,-1);
    tracep->declBit(c+1319,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1315,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1313,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1748,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1633,"s_axi_rlast", false,-1);
    tracep->declBus(c+1865,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1866,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1867,"CACHE_WAY", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1104+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1108,"tag", false,-1, 26,0);
    tracep->declBus(c+1109,"index", false,-1, 0,0);
    tracep->declBus(c+1110,"offset", false,-1, 1,0);
    tracep->declBus(c+1111,"s_tag", false,-1, 26,0);
    tracep->declBus(c+1112,"s_index", false,-1, 0,0);
    tracep->declBus(c+1113,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1760,"access", false,-1, 7,0);
    tracep->declBus(c+1114,"hit", false,-1, 7,0);
    tracep->declArray(c+1115,"cache_test00", false,-1, 127,0);
    tracep->declArray(c+1119,"cache_test01", false,-1, 127,0);
    tracep->declArray(c+1123,"cache_test02", false,-1, 127,0);
    tracep->declArray(c+1127,"cache_test03", false,-1, 127,0);
    tracep->declArray(c+1131,"cache_test04", false,-1, 127,0);
    tracep->declArray(c+1135,"cache_test05", false,-1, 127,0);
    tracep->declArray(c+1139,"cache_test06", false,-1, 127,0);
    tracep->declArray(c+1143,"cache_test07", false,-1, 127,0);
    tracep->declArray(c+1147,"cache_test10", false,-1, 127,0);
    tracep->declArray(c+1151,"cache_test11", false,-1, 127,0);
    tracep->declArray(c+1155,"cache_test12", false,-1, 127,0);
    tracep->declArray(c+1159,"cache_test13", false,-1, 127,0);
    tracep->declArray(c+1163,"cache_test14", false,-1, 127,0);
    tracep->declArray(c+1167,"cache_test15", false,-1, 127,0);
    tracep->declArray(c+1171,"cache_test16", false,-1, 127,0);
    tracep->declArray(c+1175,"cache_test17", false,-1, 127,0);
    tracep->declArray(c+1179,"tag_test00", false,-1, 107,0);
    tracep->declArray(c+1183,"tag_test01", false,-1, 107,0);
    tracep->declArray(c+1187,"tag_test02", false,-1, 107,0);
    tracep->declArray(c+1191,"tag_test03", false,-1, 107,0);
    tracep->declArray(c+1195,"tag_test04", false,-1, 107,0);
    tracep->declArray(c+1199,"tag_test05", false,-1, 107,0);
    tracep->declArray(c+1203,"tag_test06", false,-1, 107,0);
    tracep->declArray(c+1207,"tag_test07", false,-1, 107,0);
    tracep->declArray(c+1211,"tag_test10", false,-1, 107,0);
    tracep->declArray(c+1215,"tag_test11", false,-1, 107,0);
    tracep->declArray(c+1219,"tag_test12", false,-1, 107,0);
    tracep->declArray(c+1223,"tag_test13", false,-1, 107,0);
    tracep->declArray(c+1227,"tag_test14", false,-1, 107,0);
    tracep->declArray(c+1231,"tag_test15", false,-1, 107,0);
    tracep->declArray(c+1235,"tag_test16", false,-1, 107,0);
    tracep->declArray(c+1239,"tag_test17", false,-1, 107,0);
    tracep->declBit(c+1638,"axi_rvalid", false,-1);
    tracep->declBit(c+370,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"TRANS", false,-1, 0,0);
    tracep->declBit(c+1243,"state", false,-1);
    tracep->declBus(c+1244,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+1245,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+470,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+471,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1246,"a", false,-1, 31,0);
    tracep->declBus(c+1247,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1413,"isRAW", false,-1);
    tracep->declBit(c+1696,"isCHazard", false,-1);
    tracep->declBus(c+955,"inst_o", false,-1, 31,0);
    tracep->declBus(c+1055,"prepc_o", false,-1, 31,0);
    tracep->declBit(c+1056,"prepc_en_o", false,-1);
    tracep->declBus(c+1057,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+1058,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+1411,"r1_i", false,-1, 31,0);
    tracep->declBus(c+1412,"r2_i", false,-1, 31,0);
    tracep->declBus(c+966,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+967,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+968,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+969,"mtvec_i", false,-1, 31,0);
    tracep->declBit(c+1042,"if_valid_i", false,-1);
    tracep->declBit(c+1409,"id_ready_o", false,-1);
    tracep->declBit(c+1408,"id_valid_o", false,-1);
    tracep->declBit(c+1750,"ex_ready_i", false,-1);
    tracep->declBus(c+1041,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1040,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1059,"pc_o", false,-1, 31,0);
    tracep->declBus(c+956,"imm_o", false,-1, 31,0);
    tracep->declBus(c+1060,"op_o", false,-1, 6,0);
    tracep->declBus(c+1061,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+957,"rd_o", false,-1, 4,0);
    tracep->declBit(c+958,"gpr_wen_o", false,-1);
    tracep->declBus(c+447,"alu_sel_o", false,-1, 3,0);
    tracep->declBus(c+448,"a_o", false,-1, 31,0);
    tracep->declBus(c+449,"b_o", false,-1, 31,0);
    tracep->declBus(c+450,"r1_o", false,-1, 31,0);
    tracep->declBus(c+1062,"r2_o", false,-1, 31,0);
    tracep->declBus(c+959,"csr_o", false,-1, 31,0);
    tracep->declBus(c+451,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+452,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+1063,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1064,"fencei_o", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1248,"state", false,-1);
    tracep->declBus(c+1249,"op", false,-1, 6,0);
    tracep->declBus(c+1250,"rd", false,-1, 4,0);
    tracep->declBus(c+1251,"funct3", false,-1, 2,0);
    tracep->declBus(c+1252,"immI", false,-1, 31,0);
    tracep->declBus(c+1253,"immU", false,-1, 31,0);
    tracep->declBus(c+1254,"immS", false,-1, 31,0);
    tracep->declBus(c+1255,"immB", false,-1, 31,0);
    tracep->declBus(c+1256,"immJ", false,-1, 31,0);
    tracep->declBus(c+1257,"imm", false,-1, 31,0);
    tracep->declBus(c+1258,"funct7", false,-1, 6,0);
    tracep->declBus(c+1259,"shamt", false,-1, 4,0);
    tracep->declBit(c+1260,"gpr_wen", false,-1);
    tracep->declBus(c+1261,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+1761,"a", false,-1, 31,0);
    tracep->declBus(c+1762,"b", false,-1, 31,0);
    tracep->declBus(c+1802,"ADD", false,-1, 3,0);
    tracep->declBus(c+1853,"SUB", false,-1, 3,0);
    tracep->declBus(c+1854,"SLL", false,-1, 3,0);
    tracep->declBus(c+1855,"SRL", false,-1, 3,0);
    tracep->declBus(c+1856,"SRA", false,-1, 3,0);
    tracep->declBus(c+1857,"SLT", false,-1, 3,0);
    tracep->declBus(c+1858,"AND", false,-1, 3,0);
    tracep->declBus(c+1859,"OR", false,-1, 3,0);
    tracep->declBus(c+1860,"XOR", false,-1, 3,0);
    tracep->declBus(c+1861,"MUL", false,-1, 3,0);
    tracep->declBus(c+1862,"MULH", false,-1, 3,0);
    tracep->declBus(c+1863,"DIV", false,-1, 3,0);
    tracep->declBus(c+1864,"REM", false,-1, 3,0);
    tracep->declBus(c+1763,"csr", false,-1, 31,0);
    tracep->declBus(c+1262,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+1263,"fencei", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1696,"isCHazard", false,-1);
    tracep->declBit(c+1800,"pc_valid_i", false,-1);
    tracep->declBit(c+1043,"if_ready_o", false,-1);
    tracep->declBit(c+1042,"if_valid_o", false,-1);
    tracep->declBit(c+1409,"id_ready_i", false,-1);
    tracep->declBus(c+1039,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1041,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1040,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1820,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1795,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1802,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1815,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1804,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1796,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1786,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1821,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1795,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1815,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1802,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1823,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1795,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1822,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1816,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1818,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1047,"if_axi_arready_i", false,-1);
    tracep->declBit(c+1046,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+444,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+1044,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+443,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+445,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+446,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+1048,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1632,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1817,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1045,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1819,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1824,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1264,"state", false,-1);
    tracep->declBit(c+472,"isCHazard_reg", false,-1);
    tracep->declBus(c+1851,"AXI_IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"AXI_FETCH", false,-1, 0,0);
    tracep->declBit(c+1265,"axi_state", false,-1);
    tracep->declBus(c+1266,"axi_rdata_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+889,"pc_i", false,-1, 31,0);
    tracep->declBus(c+890,"inst_i", false,-1, 31,0);
    tracep->declBus(c+894,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+453,"pc_o", false,-1, 31,0);
    tracep->declBus(c+454,"inst_o", false,-1, 31,0);
    tracep->declBus(c+455,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+1697,"ex_valid_i", false,-1);
    tracep->declBit(c+1065,"ls_ready_o", false,-1);
    tracep->declBit(c+1066,"ls_valid_o", false,-1);
    tracep->declBit(c+1067,"difftest_o", false,-1);
    tracep->declBus(c+341,"op_i", false,-1, 6,0);
    tracep->declBus(c+342,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+891,"rd_i", false,-1, 4,0);
    tracep->declBit(c+892,"gpr_wen_i", false,-1);
    tracep->declBus(c+998,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+999,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+1000,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+1001,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+1002,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+893,"ex_i", false,-1, 31,0);
    tracep->declBit(c+1003,"ls_valid_i", false,-1);
    tracep->declBit(c+343,"ls_wen_i", false,-1);
    tracep->declBit(c+1004,"ls_read_i", false,-1);
    tracep->declBit(c+1005,"ls_write_i", false,-1);
    tracep->declBus(c+1006,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+344,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1007,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+1008,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1009,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+1010,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1011,"ls_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1012,"ls_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1013,"ls_awburst_i", false,-1, 1,0);
    tracep->declBus(c+1014,"ls_arburst_i", false,-1, 1,0);
    tracep->declBus(c+456,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+457,"rd_o", false,-1, 4,0);
    tracep->declBit(c+458,"gpr_wen_o", false,-1);
    tracep->declBus(c+970,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+971,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+972,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+973,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+974,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1634,"ls_axi_awready", false,-1);
    tracep->declBit(c+984,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1837,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+975,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+978,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+980,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+982,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1754,"ls_axi_wready", false,-1);
    tracep->declBit(c+985,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1751,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+977,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+989,"ls_axi_wlast", false,-1);
    tracep->declBit(c+986,"ls_axi_bready", false,-1);
    tracep->declBit(c+1635,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1321,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1752,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1636,"ls_axi_arready", false,-1);
    tracep->declBit(c+987,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1838,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+976,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+979,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+981,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+988,"ls_axi_rready", false,-1);
    tracep->declBit(c+1637,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1322,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1320,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1753,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1323,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1786,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1787,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1788,"DONE", false,-1, 1,0);
    tracep->declBus(c+1789,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1267,"state", false,-1, 1,0);
    tracep->declBus(c+1764,"xrd", false,-1, 31,0);
    tracep->declBit(c+990,"ls_done_reg", false,-1);
    tracep->declBit(c+990,"ls_done_o", false,-1);
    tracep->declBus(c+991,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1416,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+1796,"AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1785,"AXI_READ", false,-1, 2,0);
    tracep->declBus(c+1797,"AXI_WRITE1", false,-1, 2,0);
    tracep->declBus(c+1798,"AXI_WRITE2", false,-1, 2,0);
    tracep->declBus(c+1799,"AXI_DONE", false,-1, 2,0);
    tracep->declBus(c+992,"axi_state", false,-1, 2,0);
    tracep->declBit(c+984,"axi_awvalid", false,-1);
    tracep->declBit(c+985,"axi_wvalid", false,-1);
    tracep->declBus(c+1837,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+975,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+993,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+978,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+980,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+982,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+977,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+986,"axi_bready", false,-1);
    tracep->declBit(c+989,"axi_wlast", false,-1);
    tracep->declBit(c+987,"axi_arvalid", false,-1);
    tracep->declBit(c+988,"axi_rready", false,-1);
    tracep->declBus(c+1838,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+976,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+979,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+981,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+983,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1696,"isCHazard", false,-1);
    tracep->declBus(c+1039,"pc_o", false,-1, 31,0);
    tracep->declBus(c+894,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+1746,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+1800,"pc_valid_o", false,-1);
    tracep->declBit(c+1043,"if_ready_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1865,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1868,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBus(c+456,"wdata", false,-1, 31,0);
    tracep->declBus(c+473,"waddr", false,-1, 3,0);
    tracep->declBit(c+458,"wen", false,-1);
    tracep->declBus(c+1268,"raddr1", false,-1, 3,0);
    tracep->declBus(c+1411,"r1", false,-1, 31,0);
    tracep->declBus(c+1269,"raddr2", false,-1, 3,0);
    tracep->declBus(c+1412,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+371+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBit(c+1316,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1833,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1829,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1825,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1828,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1831,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1832,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1749,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1834,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1826,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1827,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1836,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1835,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+1317,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+1314,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1747,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1318,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1053,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1830,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1049,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1050,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1051,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1052,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1054,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1319,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1315,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1313,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1748,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1633,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1634,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+984,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1837,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+975,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+978,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+980,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+982,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1754,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+985,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1751,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+977,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+989,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+986,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1635,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1321,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1752,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1636,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+987,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1838,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+976,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+979,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+981,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+983,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+988,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1637,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1322,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1320,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1753,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1323,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1543,"io_master_awready", false,-1);
    tracep->declBit(c+1027,"io_master_awvalid", false,-1);
    tracep->declBus(c+1020,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1022,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1023,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1024,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1426,"io_master_wready", false,-1);
    tracep->declBit(c+1028,"io_master_wvalid", false,-1);
    tracep->declBus(c+1350,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1025,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"io_master_wlast", false,-1);
    tracep->declBit(c+1029,"io_master_bready", false,-1);
    tracep->declBit(c+1544,"io_master_bvalid", false,-1);
    tracep->declBus(c+1545,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1740,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1546,"io_master_arready", false,-1);
    tracep->declBit(c+1030,"io_master_arvalid", false,-1);
    tracep->declBus(c+1015,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1016,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1017,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1018,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1019,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1031,"io_master_rready", false,-1);
    tracep->declBit(c+1547,"io_master_rvalid", false,-1);
    tracep->declBus(c+1548,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1741,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1742,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1549,"io_master_rlast", false,-1);
    tracep->declBit(c+1843,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1079,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1073,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1068,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1071,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1075,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1077,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1844,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1080,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1410,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1070,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1084,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1081,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+1845,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+1839,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1841,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+345,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1082,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1074,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1069,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1072,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1076,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1078,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1083,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+895,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1840,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1755,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1842,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1846,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+346,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+347,"marchid", false,-1, 31,0);
    tracep->declBus(c+1270,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1417,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1271,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1639,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1272,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1273,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1274,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1275,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1324,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1276,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1325,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1277,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1278,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1279,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1280,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1765,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1766,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1281,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1326,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1282,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1767,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1327,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1283,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1284,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1640,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1641,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1285,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1286,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1328,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+474,"state", false,-1, 1,0);
    tracep->declBus(c+1287,"sel_m", false,-1, 1,0);
    tracep->declBus(c+1786,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1787,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1788,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1849,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1850,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1288,"sel_clint", false,-1);
    tracep->declBus(c+1869,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1870,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1289,"sel_mvendorid", false,-1);
    tracep->declBit(c+1290,"sel_marchid", false,-1);
    tracep->declBit(c+1291,"sel_id", false,-1);
    tracep->declBus(c+1292,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1418,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1293,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1768,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1294,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1295,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1296,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1297,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1871,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1298,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1872,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1299,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1300,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1301,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1302,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1873,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1874,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1875,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1303,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1304,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1876,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1877,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1305,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1306,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1800,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1800,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1307,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1308,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1878,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1879,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+1803,"din", false,-1, 31,0);
    tracep->declBus(c+347,"dout", false,-1, 31,0);
    tracep->declBit(c+1795,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1803,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+972,"din", false,-1, 31,0);
    tracep->declBus(c+968,"dout", false,-1, 31,0);
    tracep->declBit(c+994,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1803,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+970,"din", false,-1, 31,0);
    tracep->declBus(c+966,"dout", false,-1, 31,0);
    tracep->declBit(c+995,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1880,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+971,"din", false,-1, 31,0);
    tracep->declBus(c+967,"dout", false,-1, 31,0);
    tracep->declBit(c+996,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1803,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+973,"din", false,-1, 31,0);
    tracep->declBus(c+969,"dout", false,-1, 31,0);
    tracep->declBit(c+997,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1881,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1745,"rst", false,-1);
    tracep->declBus(c+1803,"din", false,-1, 31,0);
    tracep->declBus(c+346,"dout", false,-1, 31,0);
    tracep->declBit(c+1795,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"io_d", false,-1);
    tracep->declBit(c+387,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"io_d", false,-1);
    tracep->declBit(c+387,"io_q", false,-1);
    tracep->declBit(c+387,"sync_0", false,-1);
    tracep->declBit(c+388,"sync_1", false,-1);
    tracep->declBit(c+389,"sync_2", false,-1);
    tracep->declBit(c+390,"sync_3", false,-1);
    tracep->declBit(c+391,"sync_4", false,-1);
    tracep->declBit(c+392,"sync_5", false,-1);
    tracep->declBit(c+393,"sync_6", false,-1);
    tracep->declBit(c+394,"sync_7", false,-1);
    tracep->declBit(c+395,"sync_8", false,-1);
    tracep->declBit(c+396,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1476,"auto_in_psel", false,-1);
    tracep->declBit(c+1477,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"auto_in_pready", false,-1);
    tracep->declBit(c+1794,"auto_in_pslverr", false,-1);
    tracep->declBus(c+496,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1704,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1705,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1706,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1707,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1708,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1709,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1710,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1711,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1712,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1713,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1459,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1476,"in_psel", false,-1);
    tracep->declBit(c+1477,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+495,"in_pready", false,-1);
    tracep->declBus(c+496,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1794,"in_pslverr", false,-1);
    tracep->declBus(c+1704,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1705,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1706,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1707,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1708,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1709,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1710,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1711,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1712,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1713,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1804,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1882,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1883,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1884,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1885,"ONE", false,-1, 7,0);
    tracep->declBus(c+1886,"TWO", false,-1, 7,0);
    tracep->declBus(c+1887,"THREE", false,-1, 7,0);
    tracep->declBus(c+1888,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1889,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1890,"SIX", false,-1, 7,0);
    tracep->declBus(c+1891,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1892,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1893,"NINE", false,-1, 7,0);
    tracep->declBus(c+1894,"A", false,-1, 7,0);
    tracep->declBus(c+1895,"B", false,-1, 7,0);
    tracep->declBus(c+1896,"C", false,-1, 7,0);
    tracep->declBus(c+1897,"D", false,-1, 7,0);
    tracep->declBus(c+1898,"E", false,-1, 7,0);
    tracep->declBus(c+1899,"F", false,-1, 7,0);
    tracep->declBus(c+527,"led_reg", false,-1, 15,0);
    tracep->declBus(c+528,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+529+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1642,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1643,"write_en", false,-1);
    tracep->declBit(c+1644,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1474,"auto_in_psel", false,-1);
    tracep->declBit(c+1475,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+493,"auto_in_pready", false,-1);
    tracep->declBit(c+1793,"auto_in_pslverr", false,-1);
    tracep->declBus(c+494,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1714,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1715,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1459,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1474,"in_psel", false,-1);
    tracep->declBit(c+1475,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+493,"in_pready", false,-1);
    tracep->declBus(c+494,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1793,"in_pslverr", false,-1);
    tracep->declBit(c+1714,"ps2_clk", false,-1);
    tracep->declBit(c+1715,"ps2_data", false,-1);
    tracep->declBus(c+1900,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1901,"EXP", false,-1, 7,0);
    tracep->declBus(c+961,"state", false,-1, 1,0);
    tracep->declBus(c+962,"counter", false,-1, 3,0);
    tracep->declBus(c+963,"buffer", false,-1, 7,0);
    tracep->declBus(c+964,"buffer1", false,-1, 7,0);
    tracep->declBus(c+965,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1769,"ready", false,-1);
    tracep->declBus(c+1770,"rdata", false,-1, 31,0);
    tracep->declBit(c+1645,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1390,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1391,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1392,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1344,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1393,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1744,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1419,"raddr", false,-1, 31,0);
    tracep->declBit(c+1420,"ren", false,-1);
    tracep->declBus(c+1421,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1478,"auto_in_psel", false,-1);
    tracep->declBit(c+1479,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1422,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1728,"auto_in_pready", false,-1);
    tracep->declBit(c+1795,"auto_in_pslverr", false,-1);
    tracep->declBus(c+887,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1698,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1699,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1725,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1422,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1478,"in_psel", false,-1);
    tracep->declBit(c+1479,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1728,"in_pready", false,-1);
    tracep->declBus(c+887,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1795,"in_pslverr", false,-1);
    tracep->declBit(c+1698,"qspi_sck", false,-1);
    tracep->declBit(c+1699,"qspi_ce_n", false,-1);
    tracep->declBus(c+1725,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1725,"din", false,-1, 3,0);
    tracep->declBus(c+1700,"dout", false,-1, 3,0);
    tracep->declBus(c+1701,"douten", false,-1, 3,0);
    tracep->declBit(c+1771,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBus(c+1422,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1467,"dat_i", false,-1, 31,0);
    tracep->declBus(c+887,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1468,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1478,"cyc_i", false,-1);
    tracep->declBit(c+1478,"stb_i", false,-1);
    tracep->declBit(c+1771,"ack_o", false,-1);
    tracep->declBit(c+1466,"we_i", false,-1);
    tracep->declBit(c+1698,"sck", false,-1);
    tracep->declBit(c+1699,"ce_n", false,-1);
    tracep->declBus(c+1725,"din", false,-1, 3,0);
    tracep->declBus(c+1700,"dout", false,-1, 3,0);
    tracep->declBus(c+1701,"douten", false,-1, 3,0);
    tracep->declBus(c+1851,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+537,"mr_sck", false,-1);
    tracep->declBit(c+538,"mr_ce_n", false,-1);
    tracep->declBus(c+1725,"mr_din", false,-1, 3,0);
    tracep->declBus(c+539,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+540,"mr_doe", false,-1);
    tracep->declBit(c+541,"mw_sck", false,-1);
    tracep->declBit(c+542,"mw_ce_n", false,-1);
    tracep->declBus(c+1725,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1646,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+543,"mw_doe", false,-1);
    tracep->declBit(c+1647,"mr_rd", false,-1);
    tracep->declBit(c+544,"mr_done", false,-1);
    tracep->declBit(c+1648,"mw_wr", false,-1);
    tracep->declBit(c+1649,"mw_done", false,-1);
    tracep->declBit(c+1478,"wb_valid", false,-1);
    tracep->declBit(c+1650,"wb_we", false,-1);
    tracep->declBit(c+1651,"wb_re", false,-1);
    tracep->declBit(c+545,"state", false,-1);
    tracep->declBit(c+1652,"nstate", false,-1);
    tracep->declBus(c+1653,"size", false,-1, 2,0);
    tracep->declBus(c+1654,"byte0", false,-1, 7,0);
    tracep->declBus(c+1655,"byte1", false,-1, 7,0);
    tracep->declBus(c+1656,"byte2", false,-1, 7,0);
    tracep->declBus(c+1657,"byte3", false,-1, 7,0);
    tracep->declBus(c+1460,"wdata", false,-1, 31,0);
    tracep->declBit(c+796,"qpi_flag", false,-1);
    tracep->declBit(c+797,"qpi_sck", false,-1);
    tracep->declBit(c+798,"qpi_ce_n", false,-1);
    tracep->declBus(c+799,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+800,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+801,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1772,"rst_n", false,-1);
    tracep->declBus(c+1461,"addr", false,-1, 23,0);
    tracep->declBit(c+1647,"rd", false,-1);
    tracep->declBus(c+1799,"size", false,-1, 2,0);
    tracep->declBit(c+544,"done", false,-1);
    tracep->declBus(c+887,"line", false,-1, 31,0);
    tracep->declBit(c+537,"sck", false,-1);
    tracep->declBit(c+538,"ce_n", false,-1);
    tracep->declBus(c+1725,"din", false,-1, 3,0);
    tracep->declBus(c+539,"dout", false,-1, 3,0);
    tracep->declBit(c+540,"douten", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"READ", false,-1, 0,0);
    tracep->declBus(c+1902,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+546,"state", false,-1);
    tracep->declBit(c+1658,"nstate", false,-1);
    tracep->declBus(c+547,"counter", false,-1, 7,0);
    tracep->declBus(c+548,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+896+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1903,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+549,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1772,"rst_n", false,-1);
    tracep->declBus(c+1462,"addr", false,-1, 23,0);
    tracep->declBus(c+1460,"line", false,-1, 31,0);
    tracep->declBus(c+1653,"size", false,-1, 2,0);
    tracep->declBit(c+1648,"wr", false,-1);
    tracep->declBit(c+1649,"done", false,-1);
    tracep->declBit(c+541,"sck", false,-1);
    tracep->declBit(c+542,"ce_n", false,-1);
    tracep->declBus(c+1725,"din", false,-1, 3,0);
    tracep->declBus(c+1646,"dout", false,-1, 3,0);
    tracep->declBit(c+543,"douten", false,-1);
    tracep->declBus(c+1851,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1852,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1659,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+550,"state", false,-1);
    tracep->declBit(c+1660,"nstate", false,-1);
    tracep->declBus(c+551,"counter", false,-1, 7,0);
    tracep->declBus(c+552,"saddr", false,-1, 23,0);
    tracep->declBus(c+1904,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1509,"auto_in_awready", false,-1);
    tracep->declBit(c+1510,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1511,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1512,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1513,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1310,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1514,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1515,"auto_in_wready", false,-1);
    tracep->declBit(c+1516,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1424,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1311,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1312,"auto_in_wlast", false,-1);
    tracep->declBit(c+1732,"auto_in_bready", false,-1);
    tracep->declBit(c+510,"auto_in_bvalid", false,-1);
    tracep->declBus(c+507,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1786,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1502,"auto_in_arready", false,-1);
    tracep->declBit(c+1503,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1504,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1505,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1506,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1309,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1507,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1508,"auto_in_rready", false,-1);
    tracep->declBit(c+506,"auto_in_rvalid", false,-1);
    tracep->declBus(c+507,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+508,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1786,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+509,"auto_in_rlast", false,-1);
    tracep->declBit(c+1726,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+483,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+912,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+913,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+914,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+915,"sdram_bundle_we", false,-1);
    tracep->declBus(c+916,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+484,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+941,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1509,"in_awready", false,-1);
    tracep->declBit(c+1510,"in_awvalid", false,-1);
    tracep->declBus(c+1512,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1511,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1513,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1310,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1514,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1515,"in_wready", false,-1);
    tracep->declBit(c+1516,"in_wvalid", false,-1);
    tracep->declBus(c+1424,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1311,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1312,"in_wlast", false,-1);
    tracep->declBit(c+1732,"in_bready", false,-1);
    tracep->declBit(c+510,"in_bvalid", false,-1);
    tracep->declBus(c+1786,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+507,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1502,"in_arready", false,-1);
    tracep->declBit(c+1503,"in_arvalid", false,-1);
    tracep->declBus(c+1505,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1504,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1506,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1309,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1507,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1508,"in_rready", false,-1);
    tracep->declBit(c+506,"in_rvalid", false,-1);
    tracep->declBus(c+1786,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+508,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+509,"in_rlast", false,-1);
    tracep->declBus(c+507,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1726,"sdram_clk", false,-1);
    tracep->declBit(c+483,"sdram_cke", false,-1);
    tracep->declBit(c+912,"sdram_cs", false,-1);
    tracep->declBit(c+913,"sdram_ras", false,-1);
    tracep->declBit(c+914,"sdram_cas", false,-1);
    tracep->declBit(c+915,"sdram_we", false,-1);
    tracep->declBus(c+916,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+484,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+941,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+553,"sdram_dout_en", false,-1);
    tracep->declBus(c+554,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBit(c+1510,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1512,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1511,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1513,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1514,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1516,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1424,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1311,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1312,"inport_wlast_i", false,-1);
    tracep->declBit(c+1732,"inport_bready_i", false,-1);
    tracep->declBit(c+1503,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1505,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1504,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1506,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1507,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1508,"inport_rready_i", false,-1);
    tracep->declBus(c+941,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1509,"inport_awready_o", false,-1);
    tracep->declBit(c+1515,"inport_wready_o", false,-1);
    tracep->declBit(c+510,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1786,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+507,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1502,"inport_arready_o", false,-1);
    tracep->declBit(c+506,"inport_rvalid_o", false,-1);
    tracep->declBus(c+508,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1786,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+507,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+509,"inport_rlast_o", false,-1);
    tracep->declBit(c+1726,"sdram_clk_o", false,-1);
    tracep->declBit(c+483,"sdram_cke_o", false,-1);
    tracep->declBit(c+912,"sdram_cs_o", false,-1);
    tracep->declBit(c+913,"sdram_ras_o", false,-1);
    tracep->declBit(c+914,"sdram_cas_o", false,-1);
    tracep->declBit(c+915,"sdram_we_o", false,-1);
    tracep->declBus(c+484,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+554,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+553,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1905,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1906,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1907,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1661,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1662,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1663,"ram_rd_w", false,-1);
    tracep->declBit(c+918,"ram_accept_w", false,-1);
    tracep->declBus(c+1424,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+555,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1664,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+556,"ram_ack_w", false,-1);
    tracep->declBit(c+1795,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBit(c+1510,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1512,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1511,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1513,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1514,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1516,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1424,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1311,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1312,"axi_wlast_i", false,-1);
    tracep->declBit(c+1732,"axi_bready_i", false,-1);
    tracep->declBit(c+1503,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1505,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1504,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1506,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1507,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1508,"axi_rready_i", false,-1);
    tracep->declBit(c+918,"ram_accept_i", false,-1);
    tracep->declBit(c+556,"ram_ack_i", false,-1);
    tracep->declBit(c+1795,"ram_error_i", false,-1);
    tracep->declBus(c+555,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1509,"axi_awready_o", false,-1);
    tracep->declBit(c+1515,"axi_wready_o", false,-1);
    tracep->declBit(c+510,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1786,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+507,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1502,"axi_arready_o", false,-1);
    tracep->declBit(c+506,"axi_rvalid_o", false,-1);
    tracep->declBus(c+508,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1786,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+507,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+509,"axi_rlast_o", false,-1);
    tracep->declBus(c+1662,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1663,"ram_rd_o", false,-1);
    tracep->declBus(c+1664,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1661,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1424,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+557,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+558,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+559,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+560,"req_rd_q", false,-1);
    tracep->declBit(c+561,"req_wr_q", false,-1);
    tracep->declBus(c+562,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+563,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+564,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+565,"req_prio_q", false,-1);
    tracep->declBit(c+566,"req_hold_rd_q", false,-1);
    tracep->declBit(c+567,"req_hold_wr_q", false,-1);
    tracep->declBit(c+568,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1665,"req_push_w", false,-1);
    tracep->declBus(c+1773,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+569,"req_out_valid_w", false,-1);
    tracep->declBus(c+570,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1666,"resp_accept_w", false,-1);
    tracep->declBit(c+571,"resp_is_write_w", false,-1);
    tracep->declBit(c+572,"resp_is_read_w", false,-1);
    tracep->declBit(c+509,"resp_is_last_w", false,-1);
    tracep->declBus(c+507,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+573,"resp_valid_w", false,-1);
    tracep->declBit(c+574,"write_prio_w", false,-1);
    tracep->declBit(c+575,"read_prio_w", false,-1);
    tracep->declBit(c+1667,"write_active_w", false,-1);
    tracep->declBit(c+1663,"read_active_w", false,-1);
    tracep->declBus(c+1661,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1668,"wr_w", false,-1);
    tracep->declBit(c+1663,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1908,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1865,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1848,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBus(c+1773,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1665,"push_i", false,-1);
    tracep->declBit(c+1666,"pop_i", false,-1);
    tracep->declBus(c+570,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+568,"accept_o", false,-1);
    tracep->declBit(c+569,"valid_o", false,-1);
    tracep->declBus(c+1847,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+576+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+580,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+581,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+582,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1868,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1865,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1848,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBus(c+555,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+556,"push_i", false,-1);
    tracep->declBit(c+1666,"pop_i", false,-1);
    tracep->declBus(c+508,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+583,"accept_o", false,-1);
    tracep->declBit(c+573,"valid_o", false,-1);
    tracep->declBus(c+1847,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+584+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+588,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+589,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+590,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBus(c+1662,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1663,"inport_rd_i", false,-1);
    tracep->declBus(c+1664,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1661,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1424,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+941,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+918,"inport_accept_o", false,-1);
    tracep->declBit(c+556,"inport_ack_o", false,-1);
    tracep->declBit(c+1795,"inport_error_o", false,-1);
    tracep->declBus(c+555,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1726,"sdram_clk_o", false,-1);
    tracep->declBit(c+483,"sdram_cke_o", false,-1);
    tracep->declBit(c+912,"sdram_cs_o", false,-1);
    tracep->declBit(c+913,"sdram_ras_o", false,-1);
    tracep->declBit(c+914,"sdram_cas_o", false,-1);
    tracep->declBit(c+915,"sdram_we_o", false,-1);
    tracep->declBus(c+484,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+916,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+917,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+554,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+553,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1905,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1906,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1907,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1847,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1865,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1867,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1909,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1910,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1911,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1912,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1865,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1859,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1855,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1857,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1856,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1858,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1854,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1853,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1802,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1913,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1865,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1802,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1853,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1854,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1855,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1856,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1857,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1858,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1859,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1860,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1861,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1914,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1914,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1868,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1914,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1848,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1908,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1661,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1662,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1663,"ram_rd_w", false,-1);
    tracep->declBit(c+918,"ram_accept_w", false,-1);
    tracep->declBus(c+1424,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+555,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+556,"ram_ack_w", false,-1);
    tracep->declBit(c+1669,"ram_req_w", false,-1);
    tracep->declBus(c+919,"command_q", false,-1, 3,0);
    tracep->declBus(c+916,"addr_q", false,-1, 12,0);
    tracep->declBus(c+554,"data_q", false,-1, 31,0);
    tracep->declBit(c+591,"data_rd_en_q", false,-1);
    tracep->declBus(c+484,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+483,"cke_q", false,-1);
    tracep->declBus(c+917,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1915,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+592,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+941,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+593,"refresh_q", false,-1);
    tracep->declBus(c+920,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+594+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+921,"state_q", false,-1, 3,0);
    tracep->declBus(c+1670,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1671,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+602,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+603,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1672,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1673,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1674,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1865,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+604,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1675,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1916,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+922,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+605,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+555,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+606,"idx", false,-1, 31,0);
    tracep->declBus(c+607,"rd_q", false,-1, 3,0);
    tracep->declBit(c+556,"ack_q", false,-1);
    tracep->declArray(c+923,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1484,"auto_in_psel", false,-1);
    tracep->declBit(c+1485,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1473,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1729,"auto_in_pready", false,-1);
    tracep->declBit(c+1795,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1486,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+481,"spi_bundle_sck", false,-1);
    tracep->declBus(c+482,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+911,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1724,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1917,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1918,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1867,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1676,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1484,"in_psel", false,-1);
    tracep->declBit(c+1485,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1729,"in_pready", false,-1);
    tracep->declBus(c+1486,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1795,"in_pslverr", false,-1);
    tracep->declBit(c+481,"spi_sck", false,-1);
    tracep->declBus(c+482,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+911,"spi_mosi", false,-1);
    tracep->declBit(c+1724,"spi_miso", false,-1);
    tracep->declBit(c+608,"spi_irq_out", false,-1);
    tracep->declBus(c+1677,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1678,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1679,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1680,"wb_we_i", false,-1);
    tracep->declBit(c+1681,"wb_stb_i", false,-1);
    tracep->declBit(c+1682,"wb_cyc_i", false,-1);
    tracep->declBit(c+609,"wb_ack_o", false,-1);
    tracep->declBus(c+610,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1796,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1785,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1797,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1798,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1799,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1919,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1920,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1921,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+397,"state", false,-1, 2,0);
    tracep->declBus(c+398,"next_state", false,-1, 2,0);
    tracep->declBus(c+399,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+400,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+401,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+402,"flash_pwrite", false,-1);
    tracep->declBit(c+403,"flash_psel", false,-1);
    tracep->declBit(c+404,"flash_penable", false,-1);
    tracep->declBit(c+405,"flash_pready", false,-1);
    tracep->declBus(c+406,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1922,"Tp", false,-1, 31,0);
    tracep->declBit(c+1702,"wb_clk_i", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBus(c+1677,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1678,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+610,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1679,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1680,"wb_we_i", false,-1);
    tracep->declBit(c+1681,"wb_stb_i", false,-1);
    tracep->declBit(c+1682,"wb_cyc_i", false,-1);
    tracep->declBit(c+609,"wb_ack_o", false,-1);
    tracep->declBit(c+1795,"wb_err_o", false,-1);
    tracep->declBit(c+608,"wb_int_o", false,-1);
    tracep->declBus(c+482,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+481,"sclk_pad_o", false,-1);
    tracep->declBit(c+911,"mosi_pad_o", false,-1);
    tracep->declBit(c+1724,"miso_pad_i", false,-1);
    tracep->declBus(c+611,"divider", false,-1, 15,0);
    tracep->declBus(c+612,"ctrl", false,-1, 13,0);
    tracep->declBus(c+613,"ss", false,-1, 7,0);
    tracep->declBus(c+1683,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+614,"rx", false,-1, 127,0);
    tracep->declBit(c+618,"rx_negedge", false,-1);
    tracep->declBit(c+619,"tx_negedge", false,-1);
    tracep->declBus(c+620,"char_len", false,-1, 6,0);
    tracep->declBit(c+621,"go", false,-1);
    tracep->declBit(c+622,"lsb", false,-1);
    tracep->declBit(c+623,"ie", false,-1);
    tracep->declBit(c+624,"ass", false,-1);
    tracep->declBit(c+1684,"spi_divider_sel", false,-1);
    tracep->declBit(c+1685,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1686,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1687,"spi_ss_sel", false,-1);
    tracep->declBit(c+625,"tip", false,-1);
    tracep->declBit(c+626,"pos_edge", false,-1);
    tracep->declBit(c+627,"neg_edge", false,-1);
    tracep->declBit(c+628,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1922,"Tp", false,-1, 31,0);
    tracep->declBit(c+1702,"clk_in", false,-1);
    tracep->declBit(c+1703,"rst", false,-1);
    tracep->declBit(c+625,"enable", false,-1);
    tracep->declBit(c+621,"go", false,-1);
    tracep->declBit(c+628,"last_clk", false,-1);
    tracep->declBus(c+611,"divider", false,-1, 15,0);
    tracep->declBit(c+481,"clk_out", false,-1);
    tracep->declBit(c+626,"pos_edge", false,-1);
    tracep->declBit(c+627,"neg_edge", false,-1);
    tracep->declBus(c+629,"cnt", false,-1, 15,0);
    tracep->declBit(c+630,"cnt_zero", false,-1);
    tracep->declBit(c+631,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1922,"Tp", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"rst", false,-1);
    tracep->declBus(c+1688,"latch", false,-1, 3,0);
    tracep->declBus(c+1679,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+620,"len", false,-1, 6,0);
    tracep->declBit(c+622,"lsb", false,-1);
    tracep->declBit(c+621,"go", false,-1);
    tracep->declBit(c+626,"pos_edge", false,-1);
    tracep->declBit(c+627,"neg_edge", false,-1);
    tracep->declBit(c+618,"rx_negedge", false,-1);
    tracep->declBit(c+619,"tx_negedge", false,-1);
    tracep->declBit(c+625,"tip", false,-1);
    tracep->declBit(c+628,"last", false,-1);
    tracep->declBus(c+1678,"p_in", false,-1, 31,0);
    tracep->declArray(c+614,"p_out", false,-1, 127,0);
    tracep->declBit(c+481,"s_clk", false,-1);
    tracep->declBit(c+1724,"s_in", false,-1);
    tracep->declBit(c+911,"s_out", false,-1);
    tracep->declBus(c+632,"cnt", false,-1, 7,0);
    tracep->declArray(c+614,"data", false,-1, 127,0);
    tracep->declBus(c+633,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+634,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+635,"rx_clk", false,-1);
    tracep->declBit(c+636,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1480,"auto_in_psel", false,-1);
    tracep->declBit(c+1481,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1423,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1482,"auto_in_pready", false,-1);
    tracep->declBit(c+1795,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1483,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1722,"uart_rx", false,-1);
    tracep->declBit(c+1723,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1480,"in_psel", false,-1);
    tracep->declBit(c+1481,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1482,"in_pready", false,-1);
    tracep->declBit(c+1795,"in_pslverr", false,-1);
    tracep->declBus(c+1459,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1483,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1722,"uart_rx", false,-1);
    tracep->declBit(c+1723,"uart_tx", false,-1);
    tracep->declBit(c+637,"rtsn", false,-1);
    tracep->declBit(c+1795,"ctsn", false,-1);
    tracep->declBit(c+638,"dtr_pad_o", false,-1);
    tracep->declBit(c+1795,"dsr_pad_i", false,-1);
    tracep->declBit(c+1795,"ri_pad_i", false,-1);
    tracep->declBit(c+1795,"dcd_pad_i", false,-1);
    tracep->declBit(c+639,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1689,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1690,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+407,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1691,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+640,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBus(c+1689,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1692,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1691,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1723,"stx_pad_o", false,-1);
    tracep->declBit(c+1722,"srx_pad_i", false,-1);
    tracep->declBus(c+1860,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+640,"rts_pad_o", false,-1);
    tracep->declBit(c+638,"dtr_pad_o", false,-1);
    tracep->declBit(c+639,"int_o", false,-1);
    tracep->declBit(c+641,"enable", false,-1);
    tracep->declBit(c+642,"srx_pad", false,-1);
    tracep->declBus(c+643,"ier", false,-1, 3,0);
    tracep->declBus(c+644,"iir", false,-1, 3,0);
    tracep->declBus(c+645,"fcr", false,-1, 1,0);
    tracep->declBus(c+646,"mcr", false,-1, 4,0);
    tracep->declBus(c+647,"lcr", false,-1, 7,0);
    tracep->declBus(c+648,"msr", false,-1, 7,0);
    tracep->declBus(c+649,"dl", false,-1, 15,0);
    tracep->declBus(c+650,"scratch", false,-1, 7,0);
    tracep->declBit(c+651,"start_dlc", false,-1);
    tracep->declBit(c+652,"lsr_mask_d", false,-1);
    tracep->declBit(c+653,"msi_reset", false,-1);
    tracep->declBus(c+654,"dlc", false,-1, 15,0);
    tracep->declBus(c+655,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+656,"rx_reset", false,-1);
    tracep->declBit(c+657,"tx_reset", false,-1);
    tracep->declBit(c+658,"dlab", false,-1);
    tracep->declBit(c+1800,"cts_pad_i", false,-1);
    tracep->declBit(c+1795,"dsr_pad_i", false,-1);
    tracep->declBit(c+1795,"ri_pad_i", false,-1);
    tracep->declBit(c+1795,"dcd_pad_i", false,-1);
    tracep->declBit(c+659,"loopback", false,-1);
    tracep->declBit(c+1795,"cts", false,-1);
    tracep->declBit(c+1800,"dsr", false,-1);
    tracep->declBit(c+1800,"ri", false,-1);
    tracep->declBit(c+1800,"dcd", false,-1);
    tracep->declBit(c+660,"cts_c", false,-1);
    tracep->declBit(c+661,"dsr_c", false,-1);
    tracep->declBit(c+662,"ri_c", false,-1);
    tracep->declBit(c+663,"dcd_c", false,-1);
    tracep->declBus(c+664,"lsr", false,-1, 7,0);
    tracep->declBit(c+665,"lsr0", false,-1);
    tracep->declBit(c+666,"lsr1", false,-1);
    tracep->declBit(c+667,"lsr2", false,-1);
    tracep->declBit(c+668,"lsr3", false,-1);
    tracep->declBit(c+669,"lsr4", false,-1);
    tracep->declBit(c+670,"lsr5", false,-1);
    tracep->declBit(c+671,"lsr6", false,-1);
    tracep->declBit(c+672,"lsr7", false,-1);
    tracep->declBit(c+673,"lsr0r", false,-1);
    tracep->declBit(c+674,"lsr1r", false,-1);
    tracep->declBit(c+675,"lsr2r", false,-1);
    tracep->declBit(c+676,"lsr3r", false,-1);
    tracep->declBit(c+677,"lsr4r", false,-1);
    tracep->declBit(c+678,"lsr5r", false,-1);
    tracep->declBit(c+679,"lsr6r", false,-1);
    tracep->declBit(c+680,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+681,"rls_int", false,-1);
    tracep->declBit(c+682,"rda_int", false,-1);
    tracep->declBit(c+683,"ti_int", false,-1);
    tracep->declBit(c+684,"thre_int", false,-1);
    tracep->declBit(c+685,"ms_int", false,-1);
    tracep->declBit(c+686,"tf_push", false,-1);
    tracep->declBit(c+687,"rf_pop", false,-1);
    tracep->declBus(c+1774,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+688,"rf_error_bit", false,-1);
    tracep->declBit(c+666,"rf_overrun", false,-1);
    tracep->declBit(c+689,"rf_push_pulse", false,-1);
    tracep->declBus(c+690,"rf_count", false,-1, 4,0);
    tracep->declBus(c+691,"tf_count", false,-1, 4,0);
    tracep->declBus(c+692,"tstate", false,-1, 2,0);
    tracep->declBus(c+693,"rstate", false,-1, 3,0);
    tracep->declBus(c+694,"counter_t", false,-1, 9,0);
    tracep->declBit(c+695,"thre_set_en", false,-1);
    tracep->declBus(c+696,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+697,"block_value", false,-1, 7,0);
    tracep->declBit(c+698,"serial_out", false,-1);
    tracep->declBit(c+699,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+700,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+701,"lsr0_d", false,-1);
    tracep->declBit(c+702,"lsr1_d", false,-1);
    tracep->declBit(c+703,"lsr2_d", false,-1);
    tracep->declBit(c+704,"lsr3_d", false,-1);
    tracep->declBit(c+705,"lsr4_d", false,-1);
    tracep->declBit(c+706,"lsr5_d", false,-1);
    tracep->declBit(c+707,"lsr6_d", false,-1);
    tracep->declBit(c+708,"lsr7_d", false,-1);
    tracep->declBit(c+709,"rls_int_d", false,-1);
    tracep->declBit(c+710,"thre_int_d", false,-1);
    tracep->declBit(c+711,"ms_int_d", false,-1);
    tracep->declBit(c+712,"ti_int_d", false,-1);
    tracep->declBit(c+713,"rda_int_d", false,-1);
    tracep->declBit(c+714,"rls_int_rise", false,-1);
    tracep->declBit(c+715,"thre_int_rise", false,-1);
    tracep->declBit(c+716,"ms_int_rise", false,-1);
    tracep->declBit(c+717,"ti_int_rise", false,-1);
    tracep->declBit(c+718,"rda_int_rise", false,-1);
    tracep->declBit(c+719,"rls_int_pnd", false,-1);
    tracep->declBit(c+720,"rda_int_pnd", false,-1);
    tracep->declBit(c+721,"thre_int_pnd", false,-1);
    tracep->declBit(c+722,"ms_int_pnd", false,-1);
    tracep->declBit(c+723,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1922,"Tp", false,-1, 31,0);
    tracep->declBus(c+1922,"width", false,-1, 31,0);
    tracep->declBus(c+1852,"init_value", false,-1, 0,0);
    tracep->declBit(c+1703,"rst_i", false,-1);
    tracep->declBit(c+1702,"clk_i", false,-1);
    tracep->declBit(c+1795,"stage1_rst_i", false,-1);
    tracep->declBit(c+1800,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1722,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+642,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+724,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBus(c+647,"lcr", false,-1, 7,0);
    tracep->declBit(c+687,"rf_pop", false,-1);
    tracep->declBit(c+699,"srx_pad_i", false,-1);
    tracep->declBit(c+641,"enable", false,-1);
    tracep->declBit(c+656,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+694,"counter_t", false,-1, 9,0);
    tracep->declBus(c+690,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1774,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+666,"rf_overrun", false,-1);
    tracep->declBit(c+688,"rf_error_bit", false,-1);
    tracep->declBus(c+693,"rstate", false,-1, 3,0);
    tracep->declBit(c+689,"rf_push_pulse", false,-1);
    tracep->declBus(c+725,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+726,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+727,"rshift", false,-1, 7,0);
    tracep->declBit(c+728,"rparity", false,-1);
    tracep->declBit(c+729,"rparity_error", false,-1);
    tracep->declBit(c+730,"rframing_error", false,-1);
    tracep->declBit(c+731,"rbit_in", false,-1);
    tracep->declBit(c+732,"rparity_xor", false,-1);
    tracep->declBus(c+733,"counter_b", false,-1, 7,0);
    tracep->declBit(c+734,"rf_push_q", false,-1);
    tracep->declBus(c+735,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+736,"rf_push", false,-1);
    tracep->declBit(c+737,"break_error", false,-1);
    tracep->declBit(c+738,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+739,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+740,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+741,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1802,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1853,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1854,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1855,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1856,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1857,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1858,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1859,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1860,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1861,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1862,"sr_push", false,-1, 3,0);
    tracep->declBus(c+742,"toc_value", false,-1, 9,0);
    tracep->declBus(c+743,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1923,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1866,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1865,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1924,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBit(c+689,"push", false,-1);
    tracep->declBit(c+687,"pop", false,-1);
    tracep->declBus(c+735,"data_in", false,-1, 10,0);
    tracep->declBit(c+656,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1774,"data_out", false,-1, 10,0);
    tracep->declBit(c+666,"overrun", false,-1);
    tracep->declBus(c+690,"count", false,-1, 4,0);
    tracep->declBit(c+688,"error_bit", false,-1);
    tracep->declBus(c+1775,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+744+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+760,"top", false,-1, 3,0);
    tracep->declBus(c+761,"bottom", false,-1, 3,0);
    tracep->declBus(c+762,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+763,"word0", false,-1, 2,0);
    tracep->declBus(c+764,"word1", false,-1, 2,0);
    tracep->declBus(c+765,"word2", false,-1, 2,0);
    tracep->declBus(c+766,"word3", false,-1, 2,0);
    tracep->declBus(c+767,"word4", false,-1, 2,0);
    tracep->declBus(c+768,"word5", false,-1, 2,0);
    tracep->declBus(c+769,"word6", false,-1, 2,0);
    tracep->declBus(c+770,"word7", false,-1, 2,0);
    tracep->declBus(c+771,"word8", false,-1, 2,0);
    tracep->declBus(c+772,"word9", false,-1, 2,0);
    tracep->declBus(c+773,"word10", false,-1, 2,0);
    tracep->declBus(c+774,"word11", false,-1, 2,0);
    tracep->declBus(c+775,"word12", false,-1, 2,0);
    tracep->declBus(c+776,"word13", false,-1, 2,0);
    tracep->declBus(c+777,"word14", false,-1, 2,0);
    tracep->declBus(c+778,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1865,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1867,"data_width", false,-1, 31,0);
    tracep->declBus(c+1866,"depth", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+689,"we", false,-1);
    tracep->declBus(c+760,"a", false,-1, 3,0);
    tracep->declBus(c+761,"dpra", false,-1, 3,0);
    tracep->declBus(c+779,"di", false,-1, 7,0);
    tracep->declBus(c+1775,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+408+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBus(c+647,"lcr", false,-1, 7,0);
    tracep->declBit(c+686,"tf_push", false,-1);
    tracep->declBus(c+1692,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+641,"enable", false,-1);
    tracep->declBit(c+657,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+698,"stx_pad_o", false,-1);
    tracep->declBus(c+692,"tstate", false,-1, 2,0);
    tracep->declBus(c+691,"tf_count", false,-1, 4,0);
    tracep->declBus(c+780,"counter", false,-1, 4,0);
    tracep->declBus(c+781,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+782,"shift_out", false,-1, 6,0);
    tracep->declBit(c+783,"stx_o_tmp", false,-1);
    tracep->declBit(c+784,"parity_xor", false,-1);
    tracep->declBit(c+785,"tf_pop", false,-1);
    tracep->declBit(c+786,"bit_out", false,-1);
    tracep->declBus(c+1692,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1776,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+787,"tf_overrun", false,-1);
    tracep->declBus(c+1796,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1785,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1797,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1798,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1799,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1919,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1867,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1866,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1865,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1924,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+1703,"wb_rst_i", false,-1);
    tracep->declBit(c+686,"push", false,-1);
    tracep->declBit(c+785,"pop", false,-1);
    tracep->declBus(c+1692,"data_in", false,-1, 7,0);
    tracep->declBit(c+657,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1776,"data_out", false,-1, 7,0);
    tracep->declBit(c+787,"overrun", false,-1);
    tracep->declBus(c+691,"count", false,-1, 4,0);
    tracep->declBus(c+788,"top", false,-1, 3,0);
    tracep->declBus(c+789,"bottom", false,-1, 3,0);
    tracep->declBus(c+790,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1865,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1867,"data_width", false,-1, 31,0);
    tracep->declBus(c+1866,"depth", false,-1, 31,0);
    tracep->declBit(c+1702,"clk", false,-1);
    tracep->declBit(c+686,"we", false,-1);
    tracep->declBus(c+788,"a", false,-1, 3,0);
    tracep->declBus(c+789,"dpra", false,-1, 3,0);
    tracep->declBus(c+1692,"di", false,-1, 7,0);
    tracep->declBus(c+1776,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+424+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBit(c+1471,"auto_in_psel", false,-1);
    tracep->declBit(c+1472,"auto_in_penable", false,-1);
    tracep->declBit(c+1466,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1473,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1465,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1467,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+492,"auto_in_pready", false,-1);
    tracep->declBit(c+1791,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1792,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1716,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1717,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1718,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1719,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1720,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1721,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1702,"clock", false,-1);
    tracep->declBit(c+1703,"reset", false,-1);
    tracep->declBus(c+1676,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1471,"in_psel", false,-1);
    tracep->declBit(c+1472,"in_penable", false,-1);
    tracep->declBus(c+1465,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1466,"in_pwrite", false,-1);
    tracep->declBus(c+1467,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1468,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+492,"in_pready", false,-1);
    tracep->declBus(c+1792,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1791,"in_pslverr", false,-1);
    tracep->declBus(c+1716,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1717,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1718,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1719,"vga_hsync", false,-1);
    tracep->declBit(c+1720,"vga_vsync", false,-1);
    tracep->declBit(c+1721,"vga_valid", false,-1);
    tracep->declBit(c+1693,"is_write", false,-1);
    tracep->declBus(c+1694,"addr", false,-1, 31,0);
    tracep->declBit(c+492,"ready", false,-1);
    tracep->declBus(c+791,"i", false,-1, 31,0);
    tracep->declBus(c+1925,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1926,"h_active", false,-1, 31,0);
    tracep->declBus(c+1927,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1928,"h_total", false,-1, 31,0);
    tracep->declBus(c+1848,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1929,"v_active", false,-1, 31,0);
    tracep->declBus(c+1930,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1931,"v_total", false,-1, 31,0);
    tracep->declBus(c+792,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+440,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+793,"h_valid", false,-1);
    tracep->declBit(c+441,"v_valid", false,-1);
    tracep->declBus(c+794,"h_addr", false,-1, 9,0);
    tracep->declBus(c+442,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1777,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+481,"sck", false,-1);
    tracep->declBit(c+926,"ss", false,-1);
    tracep->declBit(c+911,"mosi", false,-1);
    tracep->declBit(c+906,"miso", false,-1);
    tracep->declBus(c+907,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+908,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+909,"counter", false,-1, 2,0);
    tracep->declBit(c+910,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+481,"sck", false,-1);
    tracep->declBit(c+795,"ss", false,-1);
    tracep->declBit(c+911,"mosi", false,-1);
    tracep->declBit(c+1778,"miso", false,-1);
    tracep->declBit(c+795,"reset", false,-1);
    tracep->declBus(c+900,"state", false,-1, 2,0);
    tracep->declBus(c+901,"counter", false,-1, 7,0);
    tracep->declBus(c+902,"cmd", false,-1, 7,0);
    tracep->declBus(c+903,"addr", false,-1, 23,0);
    tracep->declBus(c+904,"data", false,-1, 31,0);
    tracep->declBit(c+905,"ren", false,-1);
    tracep->declBus(c+1779,"rdata", false,-1, 31,0);
    tracep->declBus(c+1780,"raddr", false,-1, 31,0);
    tracep->declBus(c+1781,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+481,"clock", false,-1);
    tracep->declBit(c+905,"valid", false,-1);
    tracep->declBus(c+902,"cmd", false,-1, 7,0);
    tracep->declBus(c+1780,"addr", false,-1, 31,0);
    tracep->declBus(c+1779,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1698,"sck", false,-1);
    tracep->declBit(c+1699,"ce_n", false,-1);
    tracep->declBus(c+1725,"dio", false,-1, 3,0);
    tracep->declBit(c+1699,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+944,"cmd", false,-1, 7,0);
    tracep->declBus(c+945,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+946+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1782,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1783,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+950,"ren", false,-1);
    tracep->declBit(c+951,"wen", false,-1);
    tracep->declBus(c+952,"len", false,-1, 7,0);
    tracep->declBus(c+1784,"rdata", false,-1, 31,0);
    tracep->declBus(c+953,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1698,"clock", false,-1);
    tracep->declBit(c+950,"ren", false,-1);
    tracep->declBit(c+951,"wen", false,-1);
    tracep->declBus(c+944,"cmd", false,-1, 7,0);
    tracep->declBus(c+953,"saddr", false,-1, 31,0);
    tracep->declBus(c+1784,"rdata", false,-1, 31,0);
    tracep->declBus(c+954,"wdata", false,-1, 31,0);
    tracep->declBus(c+952,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1726,"clk", false,-1);
    tracep->declBit(c+483,"cke", false,-1);
    tracep->declBit(c+912,"cs", false,-1);
    tracep->declBit(c+913,"ras", false,-1);
    tracep->declBit(c+914,"cas", false,-1);
    tracep->declBit(c+915,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+927,"ba", false,-1, 1,0);
    tracep->declBus(c+928,"dqm", false,-1, 1,0);
    tracep->declBus(c+942,"dq", false,-1, 15,0);
    tracep->declBit(c+929,"reset", false,-1);
    tracep->declBus(c+802,"state", false,-1, 2,0);
    tracep->declBus(c+803,"counter", false,-1, 7,0);
    tracep->declBus(c+804,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1932,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+805,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+806,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+930,"nop", false,-1);
    tracep->declBit(c+931,"active", false,-1);
    tracep->declBit(c+932,"precharge", false,-1);
    tracep->declBit(c+933,"read", false,-1);
    tracep->declBit(c+934,"write", false,-1);
    tracep->declBit(c+935,"burstterm", false,-1);
    tracep->declBit(c+936,"autorefresh", false,-1);
    tracep->declBit(c+937,"mode", false,-1);
    tracep->declBus(c+807,"test", false,-1, 15,0);
    tracep->declBus(c+808,"test1", false,-1, 15,0);
    tracep->declBus(c+809,"sense", false,-1, 31,0);
    tracep->declBit(c+810,"write_burst_mode", false,-1);
    tracep->declBus(c+811,"op_mode", false,-1, 1,0);
    tracep->declBus(c+812,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+813,"burst_type", false,-1);
    tracep->declBus(c+814,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+815,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+816,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+817,"bank", false,-1, 1,0);
    tracep->declBus(c+818,"row", false,-1, 12,0);
    tracep->declBus(c+819,"column", false,-1, 8,0);
    tracep->declBus(c+820,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+821,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+822,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1726,"clk", false,-1);
    tracep->declBit(c+483,"cke", false,-1);
    tracep->declBit(c+912,"cs", false,-1);
    tracep->declBit(c+913,"ras", false,-1);
    tracep->declBit(c+914,"cas", false,-1);
    tracep->declBit(c+915,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+927,"ba", false,-1, 1,0);
    tracep->declBus(c+938,"dqm", false,-1, 1,0);
    tracep->declBus(c+943,"dq", false,-1, 15,0);
    tracep->declBit(c+929,"reset", false,-1);
    tracep->declBus(c+823,"state", false,-1, 2,0);
    tracep->declBus(c+824,"counter", false,-1, 7,0);
    tracep->declBus(c+825,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1933,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+826,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+827,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+930,"nop", false,-1);
    tracep->declBit(c+931,"active", false,-1);
    tracep->declBit(c+932,"precharge", false,-1);
    tracep->declBit(c+933,"read", false,-1);
    tracep->declBit(c+934,"write", false,-1);
    tracep->declBit(c+935,"burstterm", false,-1);
    tracep->declBit(c+936,"autorefresh", false,-1);
    tracep->declBit(c+937,"mode", false,-1);
    tracep->declBus(c+828,"test", false,-1, 15,0);
    tracep->declBus(c+829,"test1", false,-1, 15,0);
    tracep->declBus(c+830,"sense", false,-1, 31,0);
    tracep->declBit(c+831,"write_burst_mode", false,-1);
    tracep->declBus(c+832,"op_mode", false,-1, 1,0);
    tracep->declBus(c+833,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+834,"burst_type", false,-1);
    tracep->declBus(c+835,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+836,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+837,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+838,"bank", false,-1, 1,0);
    tracep->declBus(c+839,"row", false,-1, 12,0);
    tracep->declBus(c+840,"column", false,-1, 8,0);
    tracep->declBus(c+841,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+842,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+843,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1726,"clk", false,-1);
    tracep->declBit(c+483,"cke", false,-1);
    tracep->declBit(c+912,"cs", false,-1);
    tracep->declBit(c+913,"ras", false,-1);
    tracep->declBit(c+914,"cas", false,-1);
    tracep->declBit(c+915,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+927,"ba", false,-1, 1,0);
    tracep->declBus(c+939,"dqm", false,-1, 1,0);
    tracep->declBus(c+942,"dq", false,-1, 15,0);
    tracep->declBit(c+929,"reset", false,-1);
    tracep->declBus(c+844,"state", false,-1, 2,0);
    tracep->declBus(c+845,"counter", false,-1, 7,0);
    tracep->declBus(c+846,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1934,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+847,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+848,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+930,"nop", false,-1);
    tracep->declBit(c+931,"active", false,-1);
    tracep->declBit(c+932,"precharge", false,-1);
    tracep->declBit(c+933,"read", false,-1);
    tracep->declBit(c+934,"write", false,-1);
    tracep->declBit(c+935,"burstterm", false,-1);
    tracep->declBit(c+936,"autorefresh", false,-1);
    tracep->declBit(c+937,"mode", false,-1);
    tracep->declBus(c+849,"test", false,-1, 15,0);
    tracep->declBus(c+850,"test1", false,-1, 15,0);
    tracep->declBus(c+851,"sense", false,-1, 31,0);
    tracep->declBit(c+852,"write_burst_mode", false,-1);
    tracep->declBus(c+853,"op_mode", false,-1, 1,0);
    tracep->declBus(c+854,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+855,"burst_type", false,-1);
    tracep->declBus(c+856,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+857,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+858,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+859,"bank", false,-1, 1,0);
    tracep->declBus(c+860,"row", false,-1, 12,0);
    tracep->declBus(c+861,"column", false,-1, 8,0);
    tracep->declBus(c+862,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+863,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+864,"rdqm_reg2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1726,"clk", false,-1);
    tracep->declBit(c+483,"cke", false,-1);
    tracep->declBit(c+912,"cs", false,-1);
    tracep->declBit(c+913,"ras", false,-1);
    tracep->declBit(c+914,"cas", false,-1);
    tracep->declBit(c+915,"we", false,-1);
    tracep->declBus(c+916,"a", false,-1, 12,0);
    tracep->declBus(c+927,"ba", false,-1, 1,0);
    tracep->declBus(c+940,"dqm", false,-1, 1,0);
    tracep->declBus(c+943,"dq", false,-1, 15,0);
    tracep->declBit(c+929,"reset", false,-1);
    tracep->declBus(c+865,"state", false,-1, 2,0);
    tracep->declBus(c+866,"counter", false,-1, 7,0);
    tracep->declBus(c+867,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1935,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+868,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+869,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+930,"nop", false,-1);
    tracep->declBit(c+931,"active", false,-1);
    tracep->declBit(c+932,"precharge", false,-1);
    tracep->declBit(c+933,"read", false,-1);
    tracep->declBit(c+934,"write", false,-1);
    tracep->declBit(c+935,"burstterm", false,-1);
    tracep->declBit(c+936,"autorefresh", false,-1);
    tracep->declBit(c+937,"mode", false,-1);
    tracep->declBus(c+870,"test", false,-1, 15,0);
    tracep->declBus(c+871,"test1", false,-1, 15,0);
    tracep->declBus(c+872,"sense", false,-1, 31,0);
    tracep->declBit(c+873,"write_burst_mode", false,-1);
    tracep->declBus(c+874,"op_mode", false,-1, 1,0);
    tracep->declBus(c+875,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+876,"burst_type", false,-1);
    tracep->declBus(c+877,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+878,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+879,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+880,"bank", false,-1, 1,0);
    tracep->declBus(c+881,"row", false,-1, 12,0);
    tracep->declBus(c+882,"column", false,-1, 8,0);
    tracep->declBus(c+883,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+884,"rdqm_reg1", false,-1, 1,0);
    tracep->declBus(c+885,"rdqm_reg2", false,-1, 1,0);
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
    VlWide<4>/*127:0*/ __Vtemp_he59c78dc__0;
    VlWide<4>/*127:0*/ __Vtemp_hac50c7d8__0;
    VlWide<4>/*127:0*/ __Vtemp_h0048c062__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ebbcbbe__0;
    VlWide<4>/*127:0*/ __Vtemp_hec39ea64__0;
    VlWide<4>/*127:0*/ __Vtemp_h582f963c__0;
    VlWide<4>/*127:0*/ __Vtemp_h6f98f37b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc44273c4__0;
    VlWide<4>/*127:0*/ __Vtemp_h974472aa__0;
    VlWide<4>/*127:0*/ __Vtemp_he53c9296__0;
    VlWide<4>/*127:0*/ __Vtemp_h856324e8__0;
    VlWide<4>/*127:0*/ __Vtemp_h9996c434__0;
    VlWide<4>/*127:0*/ __Vtemp_h6a9afab1__0;
    VlWide<4>/*127:0*/ __Vtemp_h4292e3b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a5bce9e__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0c0aded__0;
    VlWide<4>/*127:0*/ __Vtemp_haace0f02__0;
    VlWide<4>/*127:0*/ __Vtemp_ha35f8fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa6cbd76__0;
    VlWide<4>/*127:0*/ __Vtemp_hdaed2212__0;
    VlWide<4>/*127:0*/ __Vtemp_hae66eed0__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b1df98c__0;
    VlWide<4>/*127:0*/ __Vtemp_h811fa5f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hed9177a3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4d8df5d__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a177887__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a84a887__0;
    VlWide<4>/*127:0*/ __Vtemp_ha2d8664d__0;
    VlWide<4>/*127:0*/ __Vtemp_h803d2a6d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7b6fd98__0;
    VlWide<4>/*127:0*/ __Vtemp_h7144413b__0;
    VlWide<4>/*127:0*/ __Vtemp_h24faeae8__0;
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
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[4]),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[5]),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[6]),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[7]),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),29);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),29);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),29);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),29);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[4]),29);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[5]),29);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[6]),29);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[7]),29);
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable));
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk2__DOT__a),32);
    bufp->fullQData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid_reg));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+442,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arlen),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arid),4);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arsize),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arburst),2);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_sel_id),4);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__a_id),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_id),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_id),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_id),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),5);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state));
    bufp->fullQData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__done_reg));
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__isCHazard_reg));
    bufp->fullCData(oldp+473,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls))),4);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+475,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+476,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+477,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+478,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+479,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+480,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1_id 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+507,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+539,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+540,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+544,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+549,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+568,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+569,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+571,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+572,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+573,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+574,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+575,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+583,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+618,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+620,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+628,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+630,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+631,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+633,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+637,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+638,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+659,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+660,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+661,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+662,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+663,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+664,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+667,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+668,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+669,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+688,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+695,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+714,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+715,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+716,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+717,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+718,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+737,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+738,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+739,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+740,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+741,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+743,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+762,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+779,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+790,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+809,(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+810,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+811,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+812,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+814,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+815,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+816,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+830,(((vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+831,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+832,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+833,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+834,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+835,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+836,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+837,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+851,(((vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+852,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+853,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+854,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+855,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+856,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+857,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+858,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2),2);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][0U]),16);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [0U][0U][1U]),16);
    bufp->fullIData(oldp+872,(((vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                                [0U] << 0x10U) | vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                               [1U])),32);
    bufp->fullBit(oldp+873,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+874,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+875,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+876,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+877,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+878,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),8);
    bufp->fullCData(oldp+879,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+881,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1),2);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2),2);
    bufp->fullBit(oldp+886,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+887,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),5);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+905,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+912,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+913,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+914,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+915,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+927,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+932,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+941,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+942,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+954,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),5);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_id));
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_id),32);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ls),32);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ls),32);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls),4);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullIData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),3);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullBit(oldp+994,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 2U))));
    bufp->fullBit(oldp+995,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls))));
    bufp->fullBit(oldp+996,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 1U))));
    bufp->fullBit(oldp+997,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 3U))));
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_ex),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_ex),32);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_read_ex));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_write_ex));
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wmask_ex),4);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awsize_ex),3);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arsize_ex),3);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awlen_ex),8);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arlen_ex),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_awburst_ex),2);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_arburst_ex),2);
    bufp->fullCData(oldp+1015,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))),4);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[0U]),32);
    bufp->fullCData(oldp+1017,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0)),8);
    bufp->fullCData(oldp+1018,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))),3);
    bufp->fullCData(oldp+1019,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0))),2);
    bufp->fullCData(oldp+1020,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))),4);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[0U]),32);
    bufp->fullCData(oldp+1022,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0)),8);
    bufp->fullCData(oldp+1023,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))),3);
    bufp->fullCData(oldp+1024,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0))),2);
    bufp->fullCData(oldp+1025,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))),4);
    bufp->fullBit(oldp+1026,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullBit(oldp+1027,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0))));
    bufp->fullBit(oldp+1028,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0))));
    bufp->fullBit(oldp+1029,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0))));
    bufp->fullBit(oldp+1030,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0))));
    bufp->fullBit(oldp+1031,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0))));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1036,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0))))),16);
    bufp->fullSData(oldp+1037,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0))))),16);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullBit(oldp+1043,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullIData(oldp+1045,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                        >> 2U))][(0xfU 
                                                  & (((8U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                                          >> 1U)) 
                                                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit)) 
                                                     - (IData)(1U)))]
                                 : 0U)),32);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullIData(oldp+1055,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en)
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                                 : 0U)),32);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en));
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),7);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id),32);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_id),4);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_id));
    bufp->fullBit(oldp+1065,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1066,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+1067,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[2U]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]),32);
    bufp->fullCData(oldp+1070,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1071,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1072,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1073,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1074,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1075,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1076,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1077,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1078,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1079,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1080,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1081,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1082,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1083,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1084,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 2U))));
    bufp->fullIData(oldp+1085,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 3U)),29);
    bufp->fullBit(oldp+1086,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 2U))));
    bufp->fullIData(oldp+1087,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                >> 3U)),29);
    bufp->fullBit(oldp+1088,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                    >> 2U))));
    bufp->fullIData(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullIData(oldp+1091,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2_id
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1093,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullIData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_waddr),32);
    bufp->fullIData(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0)
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
    bufp->fullCData(oldp+1096,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha846422f__0) 
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
    bufp->fullIData(oldp+1097,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h46116b93__0
                                 : 0U)),32);
    bufp->fullCData(oldp+1098,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                          ? 1U : 2U))),3);
    bufp->fullCData(oldp+1099,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                 ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                          & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                             | (5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                          ? 1U : 2U))),3);
    bufp->fullBit(oldp+1100,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1101,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullSData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+1108,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1109,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1110,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1111,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1112,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1113,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),8);
    __Vtemp_he59c78dc__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0U];
    __Vtemp_he59c78dc__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0U];
    __Vtemp_he59c78dc__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0U]))));
    __Vtemp_he59c78dc__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1115,(__Vtemp_he59c78dc__0),128);
    __Vtemp_hac50c7d8__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][1U];
    __Vtemp_hac50c7d8__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][1U];
    __Vtemp_hac50c7d8__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [1U]))));
    __Vtemp_hac50c7d8__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [1U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1119,(__Vtemp_hac50c7d8__0),128);
    __Vtemp_h0048c062__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][2U];
    __Vtemp_h0048c062__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][2U];
    __Vtemp_h0048c062__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [2U]))));
    __Vtemp_h0048c062__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [2U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [2U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1123,(__Vtemp_h0048c062__0),128);
    __Vtemp_h8ebbcbbe__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][3U];
    __Vtemp_h8ebbcbbe__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][3U];
    __Vtemp_h8ebbcbbe__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [3U]))));
    __Vtemp_h8ebbcbbe__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [3U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1127,(__Vtemp_h8ebbcbbe__0),128);
    __Vtemp_hec39ea64__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][4U];
    __Vtemp_hec39ea64__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][4U];
    __Vtemp_hec39ea64__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [4U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [4U]))));
    __Vtemp_hec39ea64__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [4U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [4U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1131,(__Vtemp_hec39ea64__0),128);
    __Vtemp_h582f963c__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][5U];
    __Vtemp_h582f963c__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][5U];
    __Vtemp_h582f963c__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [5U]))));
    __Vtemp_h582f963c__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [5U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1135,(__Vtemp_h582f963c__0),128);
    __Vtemp_h6f98f37b__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][6U];
    __Vtemp_h6f98f37b__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][6U];
    __Vtemp_h6f98f37b__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [6U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [6U]))));
    __Vtemp_h6f98f37b__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [6U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [6U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1139,(__Vtemp_h6f98f37b__0),128);
    __Vtemp_hc44273c4__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][7U];
    __Vtemp_hc44273c4__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][7U];
    __Vtemp_hc44273c4__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [7U]))));
    __Vtemp_hc44273c4__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [7U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1143,(__Vtemp_hc44273c4__0),128);
    __Vtemp_h974472aa__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][8U];
    __Vtemp_h974472aa__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][8U];
    __Vtemp_h974472aa__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [8U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [8U]))));
    __Vtemp_h974472aa__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [8U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [8U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1147,(__Vtemp_h974472aa__0),128);
    __Vtemp_he53c9296__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][9U];
    __Vtemp_he53c9296__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][9U];
    __Vtemp_he53c9296__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [9U]))));
    __Vtemp_he53c9296__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [9U]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1151,(__Vtemp_he53c9296__0),128);
    __Vtemp_h856324e8__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xaU];
    __Vtemp_h856324e8__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xaU];
    __Vtemp_h856324e8__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xaU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xaU]))));
    __Vtemp_h856324e8__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xaU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xaU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1155,(__Vtemp_h856324e8__0),128);
    __Vtemp_h9996c434__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xbU];
    __Vtemp_h9996c434__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xbU];
    __Vtemp_h9996c434__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xbU]))));
    __Vtemp_h9996c434__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xbU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xbU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1159,(__Vtemp_h9996c434__0),128);
    __Vtemp_h6a9afab1__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xcU];
    __Vtemp_h6a9afab1__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xcU];
    __Vtemp_h6a9afab1__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xcU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xcU]))));
    __Vtemp_h6a9afab1__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xcU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xcU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1163,(__Vtemp_h6a9afab1__0),128);
    __Vtemp_h4292e3b7__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xdU];
    __Vtemp_h4292e3b7__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xdU];
    __Vtemp_h4292e3b7__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xdU]))));
    __Vtemp_h4292e3b7__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xdU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xdU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1167,(__Vtemp_h4292e3b7__0),128);
    __Vtemp_h8a5bce9e__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xeU];
    __Vtemp_h8a5bce9e__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xeU];
    __Vtemp_h8a5bce9e__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xeU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xeU]))));
    __Vtemp_h8a5bce9e__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xeU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xeU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1171,(__Vtemp_h8a5bce9e__0),128);
    __Vtemp_hb0c0aded__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [3U][0xfU];
    __Vtemp_hb0c0aded__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
        [2U][0xfU];
    __Vtemp_hb0c0aded__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                         [0U]
                                                         [0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [1U]
                                                          [0xfU]))));
    __Vtemp_hb0c0aded__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                          [0U]
                                                          [0xfU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
                                                           [1U]
                                                           [0xfU]))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+1175,(__Vtemp_hb0c0aded__0),128);
    __Vtemp_haace0f02__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0U]))));
    __Vtemp_haace0f02__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0U]))) 
                                           >> 0x20U)));
    __Vtemp_haace0f02__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0U] >> 0xaU));
    __Vtemp_haace0f02__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0U] >> 0xfU);
    bufp->fullWData(oldp+1179,(__Vtemp_haace0f02__0),108);
    __Vtemp_ha35f8fdf__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [1U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [1U]))));
    __Vtemp_ha35f8fdf__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][1U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [1U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [1U]))) 
                                           >> 0x20U)));
    __Vtemp_ha35f8fdf__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][1U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][1U] >> 0xaU));
    __Vtemp_ha35f8fdf__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][1U] >> 0xfU);
    bufp->fullWData(oldp+1183,(__Vtemp_ha35f8fdf__0),108);
    __Vtemp_hfa6cbd76__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [2U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [2U]))));
    __Vtemp_hfa6cbd76__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][2U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [2U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [2U]))) 
                                           >> 0x20U)));
    __Vtemp_hfa6cbd76__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][2U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][2U] >> 0xaU));
    __Vtemp_hfa6cbd76__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][2U] >> 0xfU);
    bufp->fullWData(oldp+1187,(__Vtemp_hfa6cbd76__0),108);
    __Vtemp_hdaed2212__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [3U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [3U]))));
    __Vtemp_hdaed2212__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][3U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [3U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [3U]))) 
                                           >> 0x20U)));
    __Vtemp_hdaed2212__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][3U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][3U] >> 0xaU));
    __Vtemp_hdaed2212__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][3U] >> 0xfU);
    bufp->fullWData(oldp+1191,(__Vtemp_hdaed2212__0),108);
    __Vtemp_hae66eed0__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [4U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [4U]))));
    __Vtemp_hae66eed0__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][4U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [4U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [4U]))) 
                                           >> 0x20U)));
    __Vtemp_hae66eed0__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][4U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][4U] >> 0xaU));
    __Vtemp_hae66eed0__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][4U] >> 0xfU);
    bufp->fullWData(oldp+1195,(__Vtemp_hae66eed0__0),108);
    __Vtemp_h4b1df98c__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [5U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [5U]))));
    __Vtemp_h4b1df98c__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][5U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [5U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [5U]))) 
                                           >> 0x20U)));
    __Vtemp_h4b1df98c__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][5U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][5U] >> 0xaU));
    __Vtemp_h4b1df98c__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][5U] >> 0xfU);
    bufp->fullWData(oldp+1199,(__Vtemp_h4b1df98c__0),108);
    __Vtemp_h811fa5f6__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [6U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [6U]))));
    __Vtemp_h811fa5f6__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][6U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [6U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [6U]))) 
                                           >> 0x20U)));
    __Vtemp_h811fa5f6__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][6U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][6U] >> 0xaU));
    __Vtemp_h811fa5f6__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][6U] >> 0xfU);
    bufp->fullWData(oldp+1203,(__Vtemp_h811fa5f6__0),108);
    __Vtemp_hed9177a3__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [7U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [7U]))));
    __Vtemp_hed9177a3__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][7U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [7U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [7U]))) 
                                           >> 0x20U)));
    __Vtemp_hed9177a3__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][7U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][7U] >> 0xaU));
    __Vtemp_hed9177a3__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][7U] >> 0xfU);
    bufp->fullWData(oldp+1207,(__Vtemp_hed9177a3__0),108);
    __Vtemp_hb4d8df5d__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [8U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [8U]))));
    __Vtemp_hb4d8df5d__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][8U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [8U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [8U]))) 
                                           >> 0x20U)));
    __Vtemp_hb4d8df5d__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][8U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][8U] >> 0xaU));
    __Vtemp_hb4d8df5d__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][8U] >> 0xfU);
    bufp->fullWData(oldp+1211,(__Vtemp_hb4d8df5d__0),108);
    __Vtemp_h5a177887__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [9U])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [9U]))));
    __Vtemp_h5a177887__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][9U] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [9U])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [9U]))) 
                                           >> 0x20U)));
    __Vtemp_h5a177887__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][9U] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][9U] >> 0xaU));
    __Vtemp_h5a177887__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][9U] >> 0xfU);
    bufp->fullWData(oldp+1215,(__Vtemp_h5a177887__0),108);
    __Vtemp_h5a84a887__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xaU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xaU]))));
    __Vtemp_h5a84a887__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xaU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xaU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xaU]))) 
                                           >> 0x20U)));
    __Vtemp_h5a84a887__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xaU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xaU] >> 0xaU));
    __Vtemp_h5a84a887__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xaU] >> 0xfU);
    bufp->fullWData(oldp+1219,(__Vtemp_h5a84a887__0),108);
    __Vtemp_ha2d8664d__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xbU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xbU]))));
    __Vtemp_ha2d8664d__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xbU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xbU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xbU]))) 
                                           >> 0x20U)));
    __Vtemp_ha2d8664d__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xbU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xbU] >> 0xaU));
    __Vtemp_ha2d8664d__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xbU] >> 0xfU);
    bufp->fullWData(oldp+1223,(__Vtemp_ha2d8664d__0),108);
    __Vtemp_h803d2a6d__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xcU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xcU]))));
    __Vtemp_h803d2a6d__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xcU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xcU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xcU]))) 
                                           >> 0x20U)));
    __Vtemp_h803d2a6d__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xcU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xcU] >> 0xaU));
    __Vtemp_h803d2a6d__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xcU] >> 0xfU);
    bufp->fullWData(oldp+1227,(__Vtemp_h803d2a6d__0),108);
    __Vtemp_hc7b6fd98__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xdU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xdU]))));
    __Vtemp_hc7b6fd98__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xdU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xdU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xdU]))) 
                                           >> 0x20U)));
    __Vtemp_hc7b6fd98__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xdU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xdU] >> 0xaU));
    __Vtemp_hc7b6fd98__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xdU] >> 0xfU);
    bufp->fullWData(oldp+1231,(__Vtemp_hc7b6fd98__0),108);
    __Vtemp_h7144413b__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xeU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xeU]))));
    __Vtemp_h7144413b__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xeU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xeU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xeU]))) 
                                           >> 0x20U)));
    __Vtemp_h7144413b__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xeU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xeU] >> 0xaU));
    __Vtemp_h7144413b__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xeU] >> 0xfU);
    bufp->fullWData(oldp+1235,(__Vtemp_h7144413b__0),108);
    __Vtemp_h24faeae8__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                         [2U]
                                                         [0xfU])) 
                                         << 0x1bU) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                          [3U]
                                                          [0xfU]))));
    __Vtemp_h24faeae8__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [1U][0xfU] << 0x16U) 
                                | (IData)(((((QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                             [2U]
                                                             [0xfU])) 
                                             << 0x1bU) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                                              [3U]
                                                              [0xfU]))) 
                                           >> 0x20U)));
    __Vtemp_h24faeae8__0[2U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                 [0U][0xfU] << 0x11U) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                   [1U][0xfU] >> 0xaU));
    __Vtemp_h24faeae8__0[3U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
                                [0U][0xfU] >> 0xfU);
    bufp->fullWData(oldp+1239,(__Vtemp_h24faeae8__0),108);
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1249,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),7);
    bufp->fullCData(oldp+1250,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
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
    bufp->fullCData(oldp+1251,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullIData(oldp+1252,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1253,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1254,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1255,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1256,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7),7);
    bufp->fullCData(oldp+1259,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h577d9af6__0) 
                              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                 | ((0x73U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                    | ((0x33U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
                                       | (3U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))))))));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__alu_sel),4);
    bufp->fullCData(oldp+1262,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h78d0ed1d__0) 
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
    bufp->fullBit(oldp+1263,((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata_reg),32);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__RFU____pinNumber5),4);
    bufp->fullCData(oldp+1269,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))),4);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m),2);
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1289,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1290,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7c4657fa__0[1U]),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[1U]),32);
    bufp->fullCData(oldp+1294,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1295,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7b4a6502__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1296,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcbf98339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1297,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he73a1240__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1298,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0a060828__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1299,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1300,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1301,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb15a62c8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1302,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h93792790__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1303,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1304,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5f8a950a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1305,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1306,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h12e9a5ec__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1307,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0dfebf70__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1308,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc012964d__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0ba4be52__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0f3620aa__0))
                                 : 0U)),4);
    bufp->fullBit(oldp+1312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0))));
    bufp->fullIData(oldp+1313,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1314,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                 : 0U)),4);
    bufp->fullCData(oldp+1315,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                 : 0U)),4);
    bufp->fullBit(oldp+1316,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                         >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1317,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1318,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1319,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullIData(oldp+1320,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1321,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))
                                 : 0U)),4);
    bufp->fullCData(oldp+1322,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))
                                 : 0U)),4);
    bufp->fullBit(oldp+1323,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))))));
    bufp->fullCData(oldp+1324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),4);
    bufp->fullCData(oldp+1325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+1326,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h46b9f7b5__0) 
                                            >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready))))));
    bufp->fullBit(oldp+1327,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+1328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1333,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_h8362b754__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1349,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]),32);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1355,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1357,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1359,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1375,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1376,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1377,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1378,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1379,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1380,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1381,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1391,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1392,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1393,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1398,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1400,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1401,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[2U]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit),4);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already),4);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[1U]),32);
    bufp->fullIData(oldp+1419,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullIData(oldp+1424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h8ef011f2__0[0U]
                                 : 0U)),32);
    bufp->fullBit(oldp+1425,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1427,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1428,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1429,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1430,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1431,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1432,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1433,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1436,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1437,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1438,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1439,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1440,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1441,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1442,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1443,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1444,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1445,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1446,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1447,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1448,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1449,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1450,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1451,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1453,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1454,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1455,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1456,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1457,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1458,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1459,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1460,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1461,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1462,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1465,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1470,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1471,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1472,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1479,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1489,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1492,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1552,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1553,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1577,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1578,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1601,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1602,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1603,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1604,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1605,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1606,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1607,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1609,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1610,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1611,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1612,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1613,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1614,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1615,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1616,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1617,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1618,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1619,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1620,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1621,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1622,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1623,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1624,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1626,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1627,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1628,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1629,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1630,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1631,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1659,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1664,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1672,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1673,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1674,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1694,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullBit(oldp+1697,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1702,(vlSelf->clock));
    bufp->fullBit(oldp+1703,(vlSelf->reset));
    bufp->fullSData(oldp+1704,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1705,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1706,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1707,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1708,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1709,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1710,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1711,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1712,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1713,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1714,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1715,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1716,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1717,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1718,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1719,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1720,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1721,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1722,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1723,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1724,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1725,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1726,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1727,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1728,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1731,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1732,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1733,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf07731ef__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))))));
    bufp->fullCData(oldp+1734,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1735,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1736,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1737,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1738,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1739,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_ha0226c9a__0)))));
    bufp->fullCData(oldp+1740,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1741,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1742,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1743,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1746,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))
                                 ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg
                                [(7U & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc) 
                                        + VL_CLOG2_I((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__hit))))])),32);
    bufp->fullCData(oldp+1747,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp)
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
    bufp->fullCData(oldp+1748,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
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
    bufp->fullBit(oldp+1749,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullBit(oldp+1750,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullIData(oldp+1751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                 : 0U)),32);
    bufp->fullCData(oldp+1752,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp)
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
    bufp->fullCData(oldp+1753,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
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
    bufp->fullBit(oldp+1754,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))))));
    bufp->fullIData(oldp+1755,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
                                 ? (((- (IData)((0x2000000U 
                                                 == 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                    | ((- (IData)((0x2000004U 
                                                   == 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                  >> 0x20U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1756,((((- (IData)((0x2000000U 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)) 
                                | ((- (IData)((0x2000004U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h87eb3120__0[2U]))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+1758,(((((- (IData)((0x13U 
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
    bufp->fullBit(oldp+1759,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                              & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullCData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullIData(oldp+1761,(((((0x13U == (0x7fU 
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
    bufp->fullIData(oldp+1762,((((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
    bufp->fullIData(oldp+1763,((((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)) 
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
    bufp->fullIData(oldp+1764,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_ex)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1765,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp)
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
    bufp->fullCData(oldp+1766,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp)
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
    bufp->fullBit(oldp+1767,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY)
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))))));
    bufp->fullIData(oldp+1768,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1771,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1772,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1773,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1774,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1777,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1778,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1780,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1783,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1785,(1U),3);
    bufp->fullCData(oldp+1786,(0U),2);
    bufp->fullCData(oldp+1787,(1U),2);
    bufp->fullCData(oldp+1788,(2U),2);
    bufp->fullCData(oldp+1789,(3U),2);
    bufp->fullSData(oldp+1790,(0xaU),11);
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1795,(0U));
    bufp->fullCData(oldp+1796,(0U),3);
    bufp->fullCData(oldp+1797,(2U),3);
    bufp->fullCData(oldp+1798,(3U),3);
    bufp->fullCData(oldp+1799,(4U),3);
    bufp->fullBit(oldp+1800,(1U));
    bufp->fullBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1802,(0U),4);
    bufp->fullIData(oldp+1803,(0U),32);
    bufp->fullCData(oldp+1804,(0U),8);
    bufp->fullBit(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1815,(0U),32);
    bufp->fullCData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bid),4);
    bufp->fullCData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bresp),2);
    bufp->fullCData(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_awready));
    bufp->fullBit(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wready));
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_bvalid));
    bufp->fullBit(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullIData(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awaddr),32);
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wdata),32);
    bufp->fullCData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wstrb),4);
    bufp->fullCData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awlen),8);
    bufp->fullCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awid),4);
    bufp->fullCData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awsize),3);
    bufp->fullCData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awburst),2);
    bufp->fullBit(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_awvalid));
    bufp->fullBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wvalid));
    bufp->fullBit(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_bready));
    bufp->fullBit(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_wlast));
    bufp->fullCData(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1847,(3U),32);
    bufp->fullIData(oldp+1848,(2U),32);
    bufp->fullIData(oldp+1849,(0x2000000U),32);
    bufp->fullIData(oldp+1850,(0x2000004U),32);
    bufp->fullBit(oldp+1851,(0U));
    bufp->fullBit(oldp+1852,(1U));
    bufp->fullCData(oldp+1853,(1U),4);
    bufp->fullCData(oldp+1854,(2U),4);
    bufp->fullCData(oldp+1855,(3U),4);
    bufp->fullCData(oldp+1856,(4U),4);
    bufp->fullCData(oldp+1857,(5U),4);
    bufp->fullCData(oldp+1858,(6U),4);
    bufp->fullCData(oldp+1859,(7U),4);
    bufp->fullCData(oldp+1860,(8U),4);
    bufp->fullCData(oldp+1861,(9U),4);
    bufp->fullCData(oldp+1862,(0xaU),4);
    bufp->fullCData(oldp+1863,(0xbU),4);
    bufp->fullCData(oldp+1864,(0xcU),4);
    bufp->fullIData(oldp+1865,(4U),32);
    bufp->fullIData(oldp+1866,(0x10U),32);
    bufp->fullIData(oldp+1867,(8U),32);
    bufp->fullIData(oldp+1868,(0x20U),32);
    bufp->fullIData(oldp+1869,(0x1000000U),32);
    bufp->fullIData(oldp+1870,(0x1000004U),32);
    bufp->fullCData(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_WREADY));
    bufp->fullBit(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BVALID));
    bufp->fullBit(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1879,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1880,(0x1800U),32);
    bufp->fullIData(oldp+1881,(0x79737978U),32);
    bufp->fullCData(oldp+1882,(4U),8);
    bufp->fullCData(oldp+1883,(8U),8);
    bufp->fullCData(oldp+1884,(3U),8);
    bufp->fullCData(oldp+1885,(0x9fU),8);
    bufp->fullCData(oldp+1886,(0x25U),8);
    bufp->fullCData(oldp+1887,(0xdU),8);
    bufp->fullCData(oldp+1888,(0x99U),8);
    bufp->fullCData(oldp+1889,(0x49U),8);
    bufp->fullCData(oldp+1890,(0x41U),8);
    bufp->fullCData(oldp+1891,(0x1fU),8);
    bufp->fullCData(oldp+1892,(1U),8);
    bufp->fullCData(oldp+1893,(9U),8);
    bufp->fullCData(oldp+1894,(0x11U),8);
    bufp->fullCData(oldp+1895,(0xc1U),8);
    bufp->fullCData(oldp+1896,(0x63U),8);
    bufp->fullCData(oldp+1897,(0x85U),8);
    bufp->fullCData(oldp+1898,(0x61U),8);
    bufp->fullCData(oldp+1899,(0x71U),8);
    bufp->fullCData(oldp+1900,(0xf0U),8);
    bufp->fullCData(oldp+1901,(0xe0U),8);
    bufp->fullCData(oldp+1902,(0x15U),8);
    bufp->fullCData(oldp+1903,(0xebU),8);
    bufp->fullCData(oldp+1904,(0x38U),8);
    bufp->fullIData(oldp+1905,(0x64U),32);
    bufp->fullIData(oldp+1906,(0x18U),32);
    bufp->fullIData(oldp+1907,(9U),32);
    bufp->fullIData(oldp+1908,(6U),32);
    bufp->fullIData(oldp+1909,(0xdU),32);
    bufp->fullIData(oldp+1910,(0x2000U),32);
    bufp->fullIData(oldp+1911,(0x2710U),32);
    bufp->fullIData(oldp+1912,(0x30cU),32);
    bufp->fullSData(oldp+1913,(0x20U),13);
    bufp->fullIData(oldp+1914,(0xaU),32);
    bufp->fullIData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1916,(0x11U),32);
    bufp->fullIData(oldp+1917,(0x30000000U),32);
    bufp->fullIData(oldp+1918,(0x3fffffffU),32);
    bufp->fullCData(oldp+1919,(5U),3);
    bufp->fullCData(oldp+1920,(6U),3);
    bufp->fullCData(oldp+1921,(7U),3);
    bufp->fullIData(oldp+1922,(1U),32);
    bufp->fullIData(oldp+1923,(0xbU),32);
    bufp->fullIData(oldp+1924,(5U),32);
    bufp->fullIData(oldp+1925,(0x60U),32);
    bufp->fullIData(oldp+1926,(0x90U),32);
    bufp->fullIData(oldp+1927,(0x310U),32);
    bufp->fullIData(oldp+1928,(0x320U),32);
    bufp->fullIData(oldp+1929,(0x23U),32);
    bufp->fullIData(oldp+1930,(0x203U),32);
    bufp->fullIData(oldp+1931,(0x20dU),32);
    bufp->fullSData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
