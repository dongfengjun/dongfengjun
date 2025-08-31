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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1503,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1504,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1505,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1506,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1507,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1508,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1509,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1510,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1511,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1512,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1513,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1514,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1515,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1516,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1517,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1518,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1519,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1520,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1521,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1522,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1503,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1504,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1505,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1506,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1507,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1508,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1509,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1510,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1511,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1512,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1513,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1514,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1515,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1516,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1517,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1518,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1519,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1520,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1521,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1522,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+522,"spi_sck", false,-1);
    tracep->declBus(c+523,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1215,"spi_mosi", false,-1);
    tracep->declBit(c+1523,"spi_miso", false,-1);
    tracep->declBit(c+1521,"uart_rx", false,-1);
    tracep->declBit(c+1522,"uart_tx", false,-1);
    tracep->declBit(c+1494,"psram_sck", false,-1);
    tracep->declBit(c+1495,"psram_ce_n", false,-1);
    tracep->declBus(c+1524,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1525,"sdram_clk", false,-1);
    tracep->declBit(c+524,"sdram_cke", false,-1);
    tracep->declBit(c+1216,"sdram_cs", false,-1);
    tracep->declBit(c+1217,"sdram_ras", false,-1);
    tracep->declBit(c+1218,"sdram_cas", false,-1);
    tracep->declBit(c+1219,"sdram_we", false,-1);
    tracep->declBus(c+1220,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1221,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+525,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1245,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1503,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1504,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1505,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1506,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1507,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1508,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1509,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1510,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1511,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1512,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1513,"ps2_clk", false,-1);
    tracep->declBit(c+1514,"ps2_data", false,-1);
    tracep->declBus(c+1515,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1516,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1517,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1518,"vga_hsync", false,-1);
    tracep->declBit(c+1519,"vga_vsync", false,-1);
    tracep->declBit(c+1520,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1035,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1036,"in_psel", false,-1);
    tracep->declBit(c+967,"in_penable", false,-1);
    tracep->declBus(c+1568,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1037,"in_pwrite", false,-1);
    tracep->declBus(c+1038,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+526,"in_pready", false,-1);
    tracep->declBus(c+527,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+528,"in_pslverr", false,-1);
    tracep->declBus(c+1161,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1264,"out_psel", false,-1);
    tracep->declBit(c+1265,"out_penable", false,-1);
    tracep->declBus(c+1266,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"out_pwrite", false,-1);
    tracep->declBus(c+1268,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"out_pready", false,-1);
    tracep->declBus(c+1526,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1271,"out_pslverr", false,-1);
    tracep->declBus(c+1569,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1570,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1571,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1572,"DELAY", false,-1, 1,0);
    tracep->declBus(c+529,"state", false,-1, 1,0);
    tracep->declBus(c+530,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+531,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+532,"pslverr_reg", false,-1);
    tracep->declBus(c+1573,"r", false,-1, 10,0);
    tracep->declBus(c+1571,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1264,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1265,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1161,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1270,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1271,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1526,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1272,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1273,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1274,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1266,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+533,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1574,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1575,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1275,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1276,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+534,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1576,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+535,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1277,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1278,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1577,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+537,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1279,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1280,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1161,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1527,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1578,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+968,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1281,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1578,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1284,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1285,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1267,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1274,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1266,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1528,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1578,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1287,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1288,"sel_0", false,-1);
    tracep->declBit(c+1289,"sel_1", false,-1);
    tracep->declBit(c+1290,"sel_2", false,-1);
    tracep->declBit(c+1291,"sel_3", false,-1);
    tracep->declBit(c+1292,"sel_4", false,-1);
    tracep->declBit(c+1293,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1040,"auto_in_awready", false,-1);
    tracep->declBit(c+1041,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1040,"auto_in_wready", false,-1);
    tracep->declBit(c+1045,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_in_bready", false,-1);
    tracep->declBit(c+1295,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1048,"auto_in_arready", false,-1);
    tracep->declBit(c+1049,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1296,"auto_in_rready", false,-1);
    tracep->declBit(c+1297,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1530,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1529,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1036,"auto_out_psel", false,-1);
    tracep->declBit(c+967,"auto_out_penable", false,-1);
    tracep->declBit(c+1037,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1035,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1038,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1039,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+526,"auto_out_pready", false,-1);
    tracep->declBit(c+528,"auto_out_pslverr", false,-1);
    tracep->declBus(c+527,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+967,"nodeOut_penable", false,-1);
    tracep->declBus(c+969,"state", false,-1, 1,0);
    tracep->declBit(c+1048,"accept_read", false,-1);
    tracep->declBit(c+1040,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+1037,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+538,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1529,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1297,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1295,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1298,"in_arready", false,-1);
    tracep->declBit(c+1053,"in_arvalid", false,-1);
    tracep->declBus(c+1054,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1299,"in_rready", false,-1);
    tracep->declBit(c+539,"in_rvalid", false,-1);
    tracep->declBus(c+540,"in_rid", false,-1, 3,0);
    tracep->declBus(c+541,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+542,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+543,"in_rlast", false,-1);
    tracep->declBit(c+1300,"in_awready", false,-1);
    tracep->declBit(c+1059,"in_awvalid", false,-1);
    tracep->declBus(c+1060,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1301,"in_wready", false,-1);
    tracep->declBit(c+1065,"in_wvalid", false,-1);
    tracep->declBus(c+1066,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"in_wlast", false,-1);
    tracep->declBit(c+1302,"in_bready", false,-1);
    tracep->declBit(c+544,"in_bvalid", false,-1);
    tracep->declBus(c+545,"in_bid", false,-1, 3,0);
    tracep->declBus(c+546,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1303,"out_arready", false,-1);
    tracep->declBit(c+1304,"out_arvalid", false,-1);
    tracep->declBus(c+1305,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1307,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1163,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1309,"out_rready", false,-1);
    tracep->declBit(c+547,"out_rvalid", false,-1);
    tracep->declBus(c+548,"out_rid", false,-1, 3,0);
    tracep->declBus(c+549,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1569,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+550,"out_rlast", false,-1);
    tracep->declBit(c+1310,"out_awready", false,-1);
    tracep->declBit(c+1311,"out_awvalid", false,-1);
    tracep->declBus(c+1312,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1313,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1164,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1315,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1316,"out_wready", false,-1);
    tracep->declBit(c+1317,"out_wvalid", false,-1);
    tracep->declBus(c+1165,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"out_wlast", false,-1);
    tracep->declBit(c+1531,"out_bready", false,-1);
    tracep->declBit(c+551,"out_bvalid", false,-1);
    tracep->declBus(c+548,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1569,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1579,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1568,"WAIT_READ", false,-1, 2,0);
    tracep->declBus(c+1580,"WAIT_WRITE", false,-1, 2,0);
    tracep->declBus(c+1581,"COMPUTE", false,-1, 2,0);
    tracep->declBus(c+1582,"DELAY", false,-1, 2,0);
    tracep->declBus(c+552,"rstate", false,-1, 2,0);
    tracep->declBus(c+553,"wstate", false,-1, 2,0);
    tracep->declBus(c+554,"rdelay_counter", false,-1, 10,0);
    tracep->declBus(c+555,"wdelay_counter", false,-1, 10,0);
    tracep->declBit(c+556,"rvalid_reg", false,-1);
    tracep->declBus(c+557,"rid_reg", false,-1, 15,0);
    tracep->declArray(c+558,"rdata_reg", false,-1, 127,0);
    tracep->declBus(c+562,"rresp_reg", false,-1, 7,0);
    tracep->declBus(c+563,"rlast_reg", false,-1, 3,0);
    tracep->declBit(c+564,"bvalid_reg", false,-1);
    tracep->declBus(c+565,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+566,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+1573,"r", false,-1, 10,0);
    tracep->declBus(c+1571,"s", false,-1, 1,0);
    tracep->declBus(c+567,"burst_counter", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+1069,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1060,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+1070,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1066,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_in_wlast", false,-1);
    tracep->declBit(c+1532,"auto_in_bready", false,-1);
    tracep->declBit(c+1318,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+1071,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1054,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1320,"auto_in_rready", false,-1);
    tracep->declBit(c+1321,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_in_rlast", false,-1);
    tracep->declBit(c+1323,"auto_out_awready", false,-1);
    tracep->declBit(c+1072,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1073,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1324,"auto_out_wready", false,-1);
    tracep->declBit(c+1074,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_wlast", false,-1);
    tracep->declBit(c+1325,"auto_out_bready", false,-1);
    tracep->declBit(c+1326,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1328,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1329,"auto_out_arready", false,-1);
    tracep->declBit(c+1076,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1077,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1320,"auto_out_rready", false,-1);
    tracep->declBit(c+1321,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+518,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1330,"auto_out_rlast", false,-1);
    tracep->declBit(c+1074,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1331,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1078,"len", false,-1, 7,0);
    tracep->declBus(c+1079,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1080,"len_1", false,-1, 7,0);
    tracep->declBus(c+1081,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1072,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1082,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1083,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1075,"w_last", false,-1);
    tracep->declBit(c+1325,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+1071,"io_enq_valid", false,-1);
    tracep->declBus(c+1054,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1055,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1056,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1057,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1058,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1332,"io_deq_ready", false,-1);
    tracep->declBit(c+1076,"io_deq_valid", false,-1);
    tracep->declBus(c+1050,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1084,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1085,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1052,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1086,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1076,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1333,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1069,"io_enq_valid", false,-1);
    tracep->declBus(c+1060,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1061,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1062,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1063,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1064,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1334,"io_deq_ready", false,-1);
    tracep->declBit(c+1087,"io_deq_valid", false,-1);
    tracep->declBus(c+1042,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1088,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1089,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1044,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1090,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1087,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1335,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+1070,"io_enq_valid", false,-1);
    tracep->declBus(c+1066,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1067,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1336,"io_deq_ready", false,-1);
    tracep->declBit(c+1091,"io_deq_valid", false,-1);
    tracep->declBus(c+1046,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1047,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1535,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1091,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1337,"do_enq", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1338,"auto_in_awready", false,-1);
    tracep->declBit(c+1092,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1168,"auto_in_wready", false,-1);
    tracep->declBit(c+1094,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1339,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_in_arready", false,-1);
    tracep->declBit(c+1095,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1096,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1341,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1340,"nodeIn_arready", false,-1);
    tracep->declBit(c+1338,"nodeIn_awready", false,-1);
    tracep->declBit(c+1097,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1342,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1098,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1342,"R0_en", false,-1);
    tracep->declBit(c+1501,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1099,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1343,"W0_en", false,-1);
    tracep->declBit(c+1501,"W0_clk", false,-1);
    tracep->declBus(c+1046,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1047,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1344,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1100,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1060,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1169,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1068,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1066,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1101,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1345,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1346,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1536,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1102,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1054,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1103,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1348,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1349,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1537,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1538,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1350,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1059,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1060,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1301,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1065,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1066,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1302,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+544,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+545,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+546,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1298,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1053,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1054,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1299,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+539,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+540,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+541,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+542,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+543,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1069,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1060,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1070,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1066,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1532,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1318,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1071,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1054,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1320,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1321,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1345,"in_0_bvalid", false,-1);
    tracep->declBit(c+1348,"in_0_rvalid", false,-1);
    tracep->declBit(c+1351,"in_0_wready", false,-1);
    tracep->declBit(c+1352,"in_0_awready", false,-1);
    tracep->declBit(c+1539,"in_0_arready", false,-1);
    tracep->declBit(c+1344,"anonIn_awready", false,-1);
    tracep->declBit(c+1347,"anonIn_arready", false,-1);
    tracep->declBit(c+1104,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1105,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1106,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1107,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1108,"arSel", false,-1, 15,0);
    tracep->declBus(c+1109,"awSel", false,-1, 15,0);
    tracep->declBus(c+1353,"rSel", false,-1, 15,0);
    tracep->declBus(c+1354,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1110,"in_0_arvalid", false,-1);
    tracep->declBit(c+138,"latched", false,-1);
    tracep->declBit(c+1111,"in_0_awvalid", false,-1);
    tracep->declBit(c+1112,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1113,"in_0_wvalid", false,-1);
    tracep->declBit(c+139,"idle_2", false,-1);
    tracep->declBit(c+1355,"anyValid", false,-1);
    tracep->declBus(c+1356,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+140,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1357,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1358,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1359,"prefixOR_1", false,-1);
    tracep->declBit(c+1360,"winner_2_1", false,-1);
    tracep->declBit(c+141,"state_2_0", false,-1);
    tracep->declBit(c+142,"state_2_1", false,-1);
    tracep->declBit(c+1361,"muxState_2_0", false,-1);
    tracep->declBit(c+1362,"muxState_2_1", false,-1);
    tracep->declBit(c+143,"idle_3", false,-1);
    tracep->declBit(c+1363,"anyValid_1", false,-1);
    tracep->declBus(c+1364,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+144,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1365,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1366,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1367,"winner_3_0", false,-1);
    tracep->declBit(c+1368,"winner_3_1", false,-1);
    tracep->declBit(c+145,"state_3_0", false,-1);
    tracep->declBit(c+146,"state_3_1", false,-1);
    tracep->declBit(c+519,"muxState_3_0", false,-1);
    tracep->declBit(c+520,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1112,"io_enq_valid", false,-1);
    tracep->declBus(c+1114,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1369,"io_deq_ready", false,-1);
    tracep->declBit(c+1115,"io_deq_valid", false,-1);
    tracep->declBus(c+1116,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+148,"wrap", false,-1);
    tracep->declBit(c+149,"wrap_1", false,-1);
    tracep->declBit(c+150,"maybe_full", false,-1);
    tracep->declBit(c+151,"ptr_match", false,-1);
    tracep->declBit(c+152,"empty", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+1115,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1370,"do_deq", false,-1);
    tracep->declBit(c+1371,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+149,"R0_addr", false,-1);
    tracep->declBit(c+1583,"R0_en", false,-1);
    tracep->declBit(c+1501,"R0_clk", false,-1);
    tracep->declBus(c+154,"R0_data", false,-1, 1,0);
    tracep->declBit(c+148,"W0_addr", false,-1);
    tracep->declBit(c+1371,"W0_en", false,-1);
    tracep->declBit(c+1501,"W0_clk", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1372,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1117,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1324,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1074,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1325,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1326,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1373,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1118,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1320,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1321,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1330,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1338,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1092,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1093,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1168,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1094,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1339,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1340,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1095,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1096,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1341,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1119,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+157,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1121,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1122,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+521,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+158,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+159,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1040,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1041,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1040,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1045,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1295,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1529,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1048,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1049,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1296,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1297,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1530,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1529,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1326,"in_0_bvalid", false,-1);
    tracep->declBit(c+1321,"in_0_rvalid", false,-1);
    tracep->declBit(c+1374,"in_0_wready", false,-1);
    tracep->declBit(c+1375,"in_0_awready", false,-1);
    tracep->declBit(c+1373,"in_0_arready", false,-1);
    tracep->declBit(c+1372,"anonIn_awready", false,-1);
    tracep->declBit(c+1123,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1124,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1125,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1126,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1127,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1128,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1129,"arSel", false,-1, 15,0);
    tracep->declBus(c+1130,"awSel", false,-1, 15,0);
    tracep->declBus(c+1376,"rSel", false,-1, 15,0);
    tracep->declBus(c+1377,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1131,"in_0_awvalid", false,-1);
    tracep->declBit(c+1132,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1133,"in_0_wvalid", false,-1);
    tracep->declBit(c+194,"idle_3", false,-1);
    tracep->declBit(c+1378,"anyValid", false,-1);
    tracep->declBus(c+1379,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+195,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1380,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1381,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1382,"prefixOR_1", false,-1);
    tracep->declBit(c+1383,"winner_3_1", false,-1);
    tracep->declBit(c+1384,"winner_3_2", false,-1);
    tracep->declBit(c+196,"state_3_0", false,-1);
    tracep->declBit(c+197,"state_3_1", false,-1);
    tracep->declBit(c+198,"state_3_2", false,-1);
    tracep->declBit(c+1385,"muxState_3_0", false,-1);
    tracep->declBit(c+1386,"muxState_3_1", false,-1);
    tracep->declBit(c+1387,"muxState_3_2", false,-1);
    tracep->declBit(c+199,"idle_4", false,-1);
    tracep->declBit(c+1388,"anyValid_1", false,-1);
    tracep->declBus(c+1389,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+200,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1390,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1391,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1392,"winner_4_0", false,-1);
    tracep->declBit(c+1393,"winner_4_2", false,-1);
    tracep->declBit(c+201,"state_4_0", false,-1);
    tracep->declBit(c+202,"state_4_2", false,-1);
    tracep->declBit(c+1394,"muxState_4_0", false,-1);
    tracep->declBit(c+1395,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBus(c+1134,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1396,"io_deq_ready", false,-1);
    tracep->declBit(c+1135,"io_deq_valid", false,-1);
    tracep->declBus(c+1136,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+1135,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1397,"do_deq", false,-1);
    tracep->declBit(c+1398,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1583,"R0_en", false,-1);
    tracep->declBit(c+1501,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1398,"W0_en", false,-1);
    tracep->declBit(c+1501,"W0_clk", false,-1);
    tracep->declBus(c+1134,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1323,"auto_in_awready", false,-1);
    tracep->declBit(c+1072,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1073,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1324,"auto_in_wready", false,-1);
    tracep->declBit(c+1074,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_in_wlast", false,-1);
    tracep->declBit(c+1325,"auto_in_bready", false,-1);
    tracep->declBit(c+1326,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1328,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1329,"auto_in_arready", false,-1);
    tracep->declBit(c+1076,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1077,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1320,"auto_in_rready", false,-1);
    tracep->declBit(c+1321,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+518,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1330,"auto_in_rlast", false,-1);
    tracep->declBit(c+1372,"auto_out_awready", false,-1);
    tracep->declBit(c+1117,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1042,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1043,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1044,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1324,"auto_out_wready", false,-1);
    tracep->declBit(c+1074,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1046,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1047,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_wlast", false,-1);
    tracep->declBit(c+1325,"auto_out_bready", false,-1);
    tracep->declBit(c+1326,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1319,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1327,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1373,"auto_out_arready", false,-1);
    tracep->declBit(c+1118,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1051,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1052,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1320,"auto_out_rready", false,-1);
    tracep->declBit(c+1321,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1322,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1533,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1534,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1330,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+1170,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1399,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+1171,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1400,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+1172,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1401,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+1173,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1402,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+1174,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1403,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+1175,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1404,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+1176,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1405,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+1177,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1406,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1178,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1407,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+1179,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1408,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1180,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1409,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1181,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1410,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+1182,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1411,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1183,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1412,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1184,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1413,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1185,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1414,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+1186,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1415,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1187,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1416,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1188,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1417,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1189,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1418,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1190,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1419,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1191,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1420,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+1192,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1421,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+1193,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1422,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1194,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1423,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+1195,"io_enq_valid", false,-1);
    tracep->declBit(c+1073,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1424,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+1196,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1425,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+1197,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1426,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+1198,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1427,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+1199,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1428,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+1200,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1429,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1201,"io_enq_valid", false,-1);
    tracep->declBit(c+1077,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1430,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1540,"reset", false,-1);
    tracep->declBit(c+1344,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1100,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1060,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1169,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1068,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1066,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1101,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1345,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1346,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1536,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1102,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1054,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1103,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1348,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1349,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1537,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1538,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1350,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1540,"reset", false,-1);
    tracep->declBit(c+1578,"io_interrupt", false,-1);
    tracep->declBit(c+1344,"io_master_awready", false,-1);
    tracep->declBit(c+1100,"io_master_awvalid", false,-1);
    tracep->declBus(c+1060,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1169,"io_master_wready", false,-1);
    tracep->declBit(c+1068,"io_master_wvalid", false,-1);
    tracep->declBus(c+1066,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_master_wlast", false,-1);
    tracep->declBit(c+1101,"io_master_bready", false,-1);
    tracep->declBit(c+1345,"io_master_bvalid", false,-1);
    tracep->declBus(c+1346,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1536,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"io_master_arready", false,-1);
    tracep->declBit(c+1102,"io_master_arvalid", false,-1);
    tracep->declBus(c+1054,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1103,"io_master_rready", false,-1);
    tracep->declBit(c+1348,"io_master_rvalid", false,-1);
    tracep->declBus(c+1349,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1537,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1538,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1350,"io_master_rlast", false,-1);
    tracep->declBit(c+1584,"io_slave_awready", false,-1);
    tracep->declBit(c+1578,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1585,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1586,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1587,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1579,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1569,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1588,"io_slave_wready", false,-1);
    tracep->declBit(c+1578,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1586,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1585,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1578,"io_slave_wlast", false,-1);
    tracep->declBit(c+1578,"io_slave_bready", false,-1);
    tracep->declBit(c+1589,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1590,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1591,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1592,"io_slave_arready", false,-1);
    tracep->declBit(c+1578,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1585,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1586,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1587,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1579,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1569,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1578,"io_slave_rready", false,-1);
    tracep->declBit(c+1593,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1594,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1595,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1596,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1597,"io_slave_rlast", false,-1);
    tracep->declBus(c+970,"pc", false,-1, 31,0);
    tracep->declBit(c+971,"pc_valid", false,-1);
    tracep->declBus(c+496,"snpc", false,-1, 31,0);
    tracep->declBus(c+972,"inst_if", false,-1, 31,0);
    tracep->declBus(c+341,"pc_if", false,-1, 31,0);
    tracep->declBit(c+342,"if_valid", false,-1);
    tracep->declBit(c+973,"if_ready", false,-1);
    tracep->declBus(c+974,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+837,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1587,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1585,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1598,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1579,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1569,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1599,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+975,"if_axi_arvalid", false,-1);
    tracep->declBit(c+838,"if_axi_arready", false,-1);
    tracep->declBit(c+1431,"if_axi_rvalid", false,-1);
    tracep->declBit(c+976,"if_axi_rready", false,-1);
    tracep->declBit(c+1600,"if_axi_rlast", false,-1);
    tracep->declBus(c+839,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1541,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+840,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1601,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1202,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+841,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+842,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1542,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+843,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1203,"icache_axi_arready", false,-1);
    tracep->declBit(c+1204,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+844,"icache_axi_rready", false,-1);
    tracep->declBit(c+1432,"icache_axi_rlast", false,-1);
    tracep->declBus(c+343,"inst_id", false,-1, 31,0);
    tracep->declBit(c+977,"id_valid", false,-1);
    tracep->declBit(c+978,"id_ready", false,-1);
    tracep->declBus(c+979,"prepc", false,-1, 20,0);
    tracep->declBus(c+980,"prepc_en", false,-1, 1,0);
    tracep->declBus(c+344,"pc_id", false,-1, 31,0);
    tracep->declBus(c+345,"imm_id", false,-1, 31,0);
    tracep->declBus(c+981,"op_id", false,-1, 4,0);
    tracep->declBus(c+346,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+347,"rs1_id", false,-1, 3,0);
    tracep->declBus(c+348,"rs2_id", false,-1, 3,0);
    tracep->declBus(c+349,"rd_id", false,-1, 3,0);
    tracep->declBit(c+350,"gpr_wen_id", false,-1);
    tracep->declBit(c+982,"fencei_id", false,-1);
    tracep->declBus(c+351,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+352,"inst_ex", false,-1, 31,0);
    tracep->declBit(c+983,"ex_ready", false,-1);
    tracep->declBit(c+984,"ex_valid", false,-1);
    tracep->declBus(c+353,"op_ex", false,-1, 4,0);
    tracep->declBus(c+354,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+355,"rd_ex", false,-1, 3,0);
    tracep->declBit(c+356,"gpr_wen_ex", false,-1);
    tracep->declBus(c+357,"mepc_ex", false,-1, 31,0);
    tracep->declBus(c+358,"mcause_ex", false,-1, 31,0);
    tracep->declBus(c+359,"csrsw_ex", false,-1, 31,0);
    tracep->declBus(c+360,"csrs_wen_ex", false,-1, 3,0);
    tracep->declBus(c+361,"ex_ex", false,-1, 31,0);
    tracep->declBit(c+985,"ls_wen_ex", false,-1);
    tracep->declBit(c+986,"ls_ren_ex", false,-1);
    tracep->declBus(c+362,"ls_waddr_ex", false,-1, 31,0);
    tracep->declBus(c+363,"ls_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+364,"ls_raddr_ex", false,-1, 31,0);
    tracep->declBus(c+365,"dnpc_ex", false,-1, 31,0);
    tracep->declBus(c+366,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+367,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+368,"dnpc_ls", false,-1, 31,0);
    tracep->declBit(c+987,"ls_valid", false,-1);
    tracep->declBit(c+988,"difftest", false,-1);
    tracep->declBit(c+989,"ls_ready", false,-1);
    tracep->declBus(c+369,"xrd_ls", false,-1, 31,0);
    tracep->declBus(c+370,"rd_ls", false,-1, 3,0);
    tracep->declBit(c+371,"gpr_wen_ls", false,-1);
    tracep->declBus(c+372,"mepc_ls", false,-1, 31,0);
    tracep->declBus(c+373,"mcause_ls", false,-1, 31,0);
    tracep->declBus(c+374,"csrsw_ls", false,-1, 31,0);
    tracep->declBus(c+375,"csrs_wen_ls", false,-1, 3,0);
    tracep->declBus(c+491,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+492,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1137,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1498,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+493,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1602,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1603,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1604,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1205,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1605,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1206,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+494,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+495,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1606,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1607,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1543,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1544,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+845,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1433,"ls_axi_awready", false,-1);
    tracep->declBit(c+846,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1207,"ls_axi_wready", false,-1);
    tracep->declBit(c+1434,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+847,"ls_axi_bready", false,-1);
    tracep->declBit(c+848,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1435,"ls_axi_arready", false,-1);
    tracep->declBit(c+1436,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+849,"ls_axi_rready", false,-1);
    tracep->declBit(c+846,"ls_axi_wlast", false,-1);
    tracep->declBit(c+1208,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1608,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1609,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1138,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1545,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1610,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1611,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1139,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1612,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1613,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1140,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1614,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1615,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1141,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1616,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1142,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1617,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1618,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1619,"c_axi_awvalid", false,-1);
    tracep->declBit(c+1620,"c_axi_awready", false,-1);
    tracep->declBit(c+1621,"c_axi_wvalid", false,-1);
    tracep->declBit(c+1622,"c_axi_wready", false,-1);
    tracep->declBit(c+1623,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1624,"c_axi_bready", false,-1);
    tracep->declBit(c+1143,"c_axi_arvalid", false,-1);
    tracep->declBit(c+376,"c_axi_arready", false,-1);
    tracep->declBit(c+377,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1144,"c_axi_rready", false,-1);
    tracep->declBit(c+1625,"c_axi_wlast", false,-1);
    tracep->declBit(c+1626,"c_axi_rlast", false,-1);
    tracep->declBus(c+378,"r1", false,-1, 31,0);
    tracep->declBus(c+379,"r2", false,-1, 31,0);
    tracep->declBus(c+380,"mepc", false,-1, 31,0);
    tracep->declBus(c+381,"mstatus", false,-1, 31,0);
    tracep->declBus(c+382,"mcause", false,-1, 31,0);
    tracep->declBus(c+383,"mtvec", false,-1, 31,0);
    tracep->declBus(c+384,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+385,"marchid", false,-1, 31,0);
    tracep->declBit(c+990,"isRAW", false,-1);
    tracep->declBit(c+991,"isCHazard", false,-1);
    tracep->pushNamePrefix("BTB ");
    tracep->declBus(c+1627,"n", false,-1, 31,0);
    tracep->declBus(c+1628,"w", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+970,"pc_i", false,-1, 31,0);
    tracep->declBus(c+496,"snpc_o", false,-1, 31,0);
    tracep->declBus(c+979,"prepc_i", false,-1, 20,0);
    tracep->declBus(c+341,"prepc_tag_i", false,-1, 31,0);
    tracep->declBus(c+980,"prepc_en_i", false,-1, 1,0);
    tracep->declBus(c+386,"jsnpc_reg", false,-1, 20,0);
    tracep->declBus(c+387,"jtag_reg", false,-1, 29,0);
    tracep->declBus(c+992,"jtag", false,-1, 29,0);
    tracep->declBit(c+497,"jhit", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+388+i*1,"snpc_reg", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+392+i*1,"tag_reg", true,(i+0), 27,0);
    }
    tracep->declBus(c+993,"tag", false,-1, 27,0);
    tracep->declBus(c+994,"index", false,-1, 1,0);
    tracep->declBus(c+396,"prepc_tag", false,-1, 27,0);
    tracep->declBus(c+397,"prepc_index", false,-1, 1,0);
    tracep->declBus(c+1629,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBus(c+498,"hit", false,-1, 0,0);
    tracep->declBus(c+398,"already", false,-1, 0,0);
    tracep->declBus(c+399,"enable", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+400,"a", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+376,"c_axi_arready", false,-1);
    tracep->declBit(c+1143,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1140,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1141,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1142,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1144,"c_axi_rready", false,-1);
    tracep->declBit(c+377,"c_axi_rvalid", false,-1);
    tracep->declBus(c+1614,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1545,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1618,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1626,"c_axi_rlast", false,-1);
    tracep->declBus(c+1630,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1631,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+1546,"mtime", false,-1, 63,0);
    tracep->declBus(c+1548,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+991,"flush_i", false,-1);
    tracep->declBus(c+343,"inst_i", false,-1, 31,0);
    tracep->declBus(c+351,"pc_o", false,-1, 31,0);
    tracep->declBus(c+352,"inst_o", false,-1, 31,0);
    tracep->declBit(c+977,"id_valid_i", false,-1);
    tracep->declBit(c+983,"ex_ready_o", false,-1);
    tracep->declBit(c+984,"ex_valid_o", false,-1);
    tracep->declBit(c+989,"ls_ready_i", false,-1);
    tracep->declBus(c+344,"pc_i", false,-1, 31,0);
    tracep->declBus(c+345,"imm_i", false,-1, 31,0);
    tracep->declBus(c+981,"op_i", false,-1, 4,0);
    tracep->declBus(c+346,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+378,"r1_i", false,-1, 31,0);
    tracep->declBus(c+379,"r2_i", false,-1, 31,0);
    tracep->declBus(c+349,"rd_i", false,-1, 3,0);
    tracep->declBit(c+350,"gpr_wen_i", false,-1);
    tracep->declBus(c+380,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+381,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+382,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+383,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+353,"op_o", false,-1, 4,0);
    tracep->declBus(c+354,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+355,"rd_o", false,-1, 3,0);
    tracep->declBit(c+356,"gpr_wen_o", false,-1);
    tracep->declBus(c+357,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+358,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+359,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+360,"csrs_wen_o", false,-1, 3,0);
    tracep->declBus(c+361,"ex_o", false,-1, 31,0);
    tracep->declBit(c+985,"ls_wen_o", false,-1);
    tracep->declBit(c+986,"ls_ren_o", false,-1);
    tracep->declBus(c+362,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+363,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+364,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+365,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"WAIT", false,-1, 0,0);
    tracep->declBit(c+984,"state", false,-1);
    tracep->declBus(c+1634,"al_res", false,-1, 31,0);
    tracep->declBus(c+499,"ex", false,-1, 31,0);
    tracep->declBus(c+995,"csr", false,-1, 31,0);
    tracep->declBus(c+500,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+996,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+501,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+996,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+996,"csrs_w", false,-1, 31,0);
    tracep->declBus(c+502,"csrs_wen", false,-1, 3,0);
    tracep->declBit(c+401,"funct7_i", false,-1);
    tracep->declBus(c+402,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+997,"alu_sel", false,-1, 3,0);
    tracep->declBus(c+998,"alu_res", false,-1, 31,0);
    tracep->declBus(c+999,"a", false,-1, 31,0);
    tracep->declBus(c+1000,"b", false,-1, 31,0);
    tracep->declBit(c+1001,"a_use_r1", false,-1);
    tracep->declBit(c+1002,"b_use_imm", false,-1);
    tracep->declBit(c+403,"b_use_shamt", false,-1);
    tracep->declBit(c+1003,"b_use_r2", false,-1);
    tracep->declBit(c+404,"ab_use_signed", false,-1);
    tracep->declBus(c+1635,"ADD", false,-1, 3,0);
    tracep->declBus(c+1636,"SUB", false,-1, 3,0);
    tracep->declBus(c+1637,"SLL", false,-1, 3,0);
    tracep->declBus(c+1638,"SRL", false,-1, 3,0);
    tracep->declBus(c+1639,"SRA", false,-1, 3,0);
    tracep->declBus(c+1640,"SLT", false,-1, 3,0);
    tracep->declBus(c+1641,"AND", false,-1, 3,0);
    tracep->declBus(c+1642,"OR", false,-1, 3,0);
    tracep->declBus(c+1643,"XOR", false,-1, 3,0);
    tracep->declBus(c+1644,"NULL", false,-1, 3,0);
    tracep->declBit(c+1004,"ls_valid", false,-1);
    tracep->declBit(c+1005,"ls_wen", false,-1);
    tracep->declBus(c+405,"ls_addr", false,-1, 31,0);
    tracep->declBus(c+503,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+504,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+506,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+507,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+508,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+345,"offset", false,-1, 31,0);
    tracep->declBit(c+1006,"jalen", false,-1);
    tracep->declBit(c+1007,"jalren", false,-1);
    tracep->declBit(c+509,"beqen", false,-1);
    tracep->declBit(c+510,"bneen", false,-1);
    tracep->declBit(c+511,"blten", false,-1);
    tracep->declBit(c+512,"bgeen", false,-1);
    tracep->declBit(c+513,"bltuen", false,-1);
    tracep->declBit(c+514,"bgeuen", false,-1);
    tracep->declBit(c+1008,"ecall_en", false,-1);
    tracep->declBit(c+515,"mret_en", false,-1);
    tracep->declBus(c+1009,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1645,"n", false,-1, 31,0);
    tracep->declBus(c+1645,"m", false,-1, 31,0);
    tracep->declBus(c+1646,"w", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+982,"fencei_i", false,-1);
    tracep->declBit(c+838,"m_axi_arready", false,-1);
    tracep->declBit(c+975,"m_axi_arvalid", false,-1);
    tracep->declBus(c+1585,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+974,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1587,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1579,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1569,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+976,"m_axi_rready", false,-1);
    tracep->declBit(c+1431,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1598,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+837,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1599,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1600,"m_axi_rlast", false,-1);
    tracep->declBit(c+1203,"s_axi_arready", false,-1);
    tracep->declBit(c+843,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1601,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+839,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+841,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+842,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+844,"s_axi_rready", false,-1);
    tracep->declBit(c+1204,"s_axi_rvalid", false,-1);
    tracep->declBus(c+1202,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1541,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1542,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1432,"s_axi_rlast", false,-1);
    tracep->declBus(c+1645,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1647,"CACHE_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1648,"CACHE_WAY", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+850+i*1,"valid_reg", true,(i+0), 15,0);
    }
    tracep->declBus(c+1010,"tag", false,-1, 26,0);
    tracep->declBus(c+1011,"index", false,-1, 0,0);
    tracep->declBus(c+1012,"offset", false,-1, 1,0);
    tracep->declBus(c+854,"s_tag", false,-1, 26,0);
    tracep->declBus(c+855,"s_index", false,-1, 0,0);
    tracep->declBus(c+856,"s_offset", false,-1, 1,0);
    tracep->declBus(c+1145,"access", false,-1, 7,0);
    tracep->declBus(c+857,"hit", false,-1, 7,0);
    tracep->declBus(c+1649,"log2__Vstatic__loop_var", false,-1, 31,0);
    tracep->declBit(c+1437,"axi_rvalid", false,-1);
    tracep->declBit(c+406,"axi_rvalid_enable", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"TRANS", false,-1, 0,0);
    tracep->declBit(c+858,"state", false,-1);
    tracep->declBus(c+859,"burst_counter", false,-1, 1,0);
    tracep->declBus(c+860,"burst_araddr", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+861,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+862,"f", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+863,"a", false,-1, 31,0);
    tracep->declBus(c+864,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+990,"isRAW_i", false,-1);
    tracep->declBit(c+991,"flush_i", false,-1);
    tracep->declBus(c+343,"inst_o", false,-1, 31,0);
    tracep->declBus(c+979,"prepc_o", false,-1, 20,0);
    tracep->declBus(c+980,"prepc_en_o", false,-1, 1,0);
    tracep->declBit(c+342,"if_valid_i", false,-1);
    tracep->declBit(c+978,"id_ready_o", false,-1);
    tracep->declBit(c+977,"id_valid_o", false,-1);
    tracep->declBit(c+983,"ex_ready_i", false,-1);
    tracep->declBus(c+341,"pc_i", false,-1, 31,0);
    tracep->declBus(c+972,"inst_i", false,-1, 31,0);
    tracep->declBus(c+344,"pc_o", false,-1, 31,0);
    tracep->declBus(c+345,"imm_o", false,-1, 31,0);
    tracep->declBus(c+981,"op_o", false,-1, 4,0);
    tracep->declBus(c+346,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+347,"rs1_o", false,-1, 3,0);
    tracep->declBus(c+348,"rs2_o", false,-1, 3,0);
    tracep->declBus(c+349,"rd_o", false,-1, 3,0);
    tracep->declBit(c+350,"gpr_wen_o", false,-1);
    tracep->declBit(c+982,"fencei_o", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1013,"state", false,-1);
    tracep->declBus(c+1014,"op", false,-1, 4,0);
    tracep->declBus(c+1015,"rd", false,-1, 3,0);
    tracep->declBus(c+1016,"funct3", false,-1, 2,0);
    tracep->declBus(c+1017,"rs1", false,-1, 3,0);
    tracep->declBus(c+1018,"rs2", false,-1, 3,0);
    tracep->declBus(c+1019,"immI", false,-1, 31,0);
    tracep->declBus(c+1020,"immU", false,-1, 31,0);
    tracep->declBus(c+1021,"immS", false,-1, 31,0);
    tracep->declBus(c+1022,"immB", false,-1, 31,0);
    tracep->declBus(c+1023,"immJ", false,-1, 31,0);
    tracep->declBus(c+1024,"imm", false,-1, 31,0);
    tracep->declBus(c+1025,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+991,"flush", false,-1);
    tracep->declBit(c+971,"pc_valid_i", false,-1);
    tracep->declBit(c+973,"if_ready_o", false,-1);
    tracep->declBit(c+342,"if_valid_o", false,-1);
    tracep->declBit(c+978,"id_ready_i", false,-1);
    tracep->declBus(c+970,"pc_i", false,-1, 31,0);
    tracep->declBus(c+341,"pc_o", false,-1, 31,0);
    tracep->declBus(c+972,"inst_o", false,-1, 31,0);
    tracep->declBit(c+838,"if_axi_arready_i", false,-1);
    tracep->declBit(c+975,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+1585,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+974,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+1587,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1579,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1569,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+976,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1431,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1598,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+837,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1599,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1600,"if_axi_rlast_i", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"WAIT", false,-1, 0,0);
    tracep->declBit(c+1026,"state", false,-1);
    tracep->declBit(c+1027,"ifaddr_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+351,"pc_i", false,-1, 31,0);
    tracep->declBus(c+352,"inst_i", false,-1, 31,0);
    tracep->declBus(c+365,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+366,"pc_o", false,-1, 31,0);
    tracep->declBus(c+367,"inst_o", false,-1, 31,0);
    tracep->declBus(c+368,"dnpc_o", false,-1, 31,0);
    tracep->declBit(c+987,"ls_valid_o", false,-1);
    tracep->declBit(c+988,"difftest_o", false,-1);
    tracep->declBit(c+1028,"ex_valid_i", false,-1);
    tracep->declBit(c+989,"ls_ready_o", false,-1);
    tracep->declBus(c+353,"op_i", false,-1, 4,0);
    tracep->declBus(c+354,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+355,"rd_i", false,-1, 3,0);
    tracep->declBit(c+356,"gpr_wen_i", false,-1);
    tracep->declBus(c+357,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+358,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+359,"csrsw_i", false,-1, 31,0);
    tracep->declBus(c+360,"csrs_wen_i", false,-1, 3,0);
    tracep->declBus(c+361,"ex_i", false,-1, 31,0);
    tracep->declBit(c+985,"ls_wen_i", false,-1);
    tracep->declBit(c+986,"ls_ren_i", false,-1);
    tracep->declBus(c+362,"ls_waddr_i", false,-1, 31,0);
    tracep->declBus(c+363,"ls_wdata_i", false,-1, 31,0);
    tracep->declBus(c+364,"ls_raddr_i", false,-1, 31,0);
    tracep->declBus(c+369,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+370,"rd_o", false,-1, 3,0);
    tracep->declBit(c+371,"gpr_wen_o", false,-1);
    tracep->declBus(c+372,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+373,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+374,"csrsw_o", false,-1, 31,0);
    tracep->declBus(c+375,"csrs_wen_o", false,-1, 3,0);
    tracep->declBit(c+1433,"ls_axi_awready", false,-1);
    tracep->declBit(c+845,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1604,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+491,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1602,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+494,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1606,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1207,"ls_axi_wready", false,-1);
    tracep->declBit(c+846,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+492,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+493,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+846,"ls_axi_wlast", false,-1);
    tracep->declBit(c+847,"ls_axi_bready", false,-1);
    tracep->declBit(c+1434,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+1205,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1543,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1435,"ls_axi_arready", false,-1);
    tracep->declBit(c+848,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1605,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1603,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+495,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1607,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+849,"ls_axi_rready", false,-1);
    tracep->declBit(c+1436,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+1206,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1498,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1544,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1208,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1569,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1570,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1571,"DONE", false,-1, 1,0);
    tracep->declBus(c+1572,"DIFFTEST", false,-1, 1,0);
    tracep->declBus(c+1029,"state", false,-1, 1,0);
    tracep->declBit(c+1030,"ls_valid_i", false,-1);
    tracep->declBit(c+1438,"ls_done", false,-1);
    tracep->declBus(c+1549,"xrd", false,-1, 31,0);
    tracep->declBus(c+407,"ls_wmask_i", false,-1, 3,0);
    tracep->declBus(c+1499,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+408,"ls_awsize_i", false,-1, 2,0);
    tracep->declBus(c+409,"ls_arsize_i", false,-1, 2,0);
    tracep->declBus(c+1569,"AXI_IDLE", false,-1, 1,0);
    tracep->declBus(c+1570,"AXI_READ", false,-1, 1,0);
    tracep->declBus(c+1571,"AXI_WRITE", false,-1, 1,0);
    tracep->declBus(c+1572,"AXI_DONE", false,-1, 1,0);
    tracep->declBus(c+865,"axi_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+991,"flush", false,-1);
    tracep->declBus(c+970,"pc_o", false,-1, 31,0);
    tracep->declBus(c+365,"dnpc_i", false,-1, 31,0);
    tracep->declBus(c+496,"snpc_i", false,-1, 31,0);
    tracep->declBit(c+971,"pc_valid_o", false,-1);
    tracep->declBit(c+973,"if_ready_i", false,-1);
    tracep->declBus(c+1650,"RESET_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1645,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1651,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBus(c+369,"wdata", false,-1, 31,0);
    tracep->declBus(c+370,"waddr", false,-1, 3,0);
    tracep->declBit(c+371,"wen", false,-1);
    tracep->declBus(c+347,"raddr1", false,-1, 3,0);
    tracep->declBus(c+378,"r1", false,-1, 31,0);
    tracep->declBus(c+348,"raddr2", false,-1, 3,0);
    tracep->declBus(c+379,"r2", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+410+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+426,"rdata1_low", false,-1, 31,0);
    tracep->declBus(c+427,"rdata1_high", false,-1, 31,0);
    tracep->declBus(c+428,"rdata2_low", false,-1, 31,0);
    tracep->declBus(c+429,"rdata2_high", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBit(c+1203,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+843,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1601,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+839,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+840,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+841,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+842,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+844,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1204,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+1202,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1541,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1542,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1432,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1433,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+845,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1604,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+491,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1602,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+494,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1606,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1207,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+846,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+492,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+493,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+846,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+847,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1434,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+1205,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1543,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1435,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+848,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1605,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1137,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1603,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+495,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1607,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+849,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1436,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+1206,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1498,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1544,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1208,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+1344,"io_master_awready", false,-1);
    tracep->declBit(c+1100,"io_master_awvalid", false,-1);
    tracep->declBus(c+1060,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1062,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1063,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1169,"io_master_wready", false,-1);
    tracep->declBit(c+1068,"io_master_wvalid", false,-1);
    tracep->declBus(c+1066,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1067,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_master_wlast", false,-1);
    tracep->declBit(c+1101,"io_master_bready", false,-1);
    tracep->declBit(c+1345,"io_master_bvalid", false,-1);
    tracep->declBus(c+1346,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1536,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1347,"io_master_arready", false,-1);
    tracep->declBit(c+1102,"io_master_arvalid", false,-1);
    tracep->declBus(c+1054,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1056,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1057,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1058,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1103,"io_master_rready", false,-1);
    tracep->declBit(c+1348,"io_master_rvalid", false,-1);
    tracep->declBus(c+1349,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1537,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1538,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1350,"io_master_rlast", false,-1);
    tracep->declBit(c+376,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1143,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1140,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1138,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1139,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1141,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1142,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1144,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+377,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+1614,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1545,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1618,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1626,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+384,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+385,"marchid", false,-1, 31,0);
    tracep->declBus(c+1061,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1066,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1146,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1500,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1067,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1062,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1147,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1060,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1346,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1148,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1209,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1063,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1149,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1064,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1150,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1536,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1550,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1100,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1344,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1068,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1169,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1345,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1101,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1068,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1151,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1439,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1440,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1152,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1210,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1632,"SEL_IFU", false,-1, 0,0);
    tracep->declBus(c+1633,"SEL_LSU", false,-1, 0,0);
    tracep->declBit(c+1153,"sel_m", false,-1);
    tracep->declBus(c+1569,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1570,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1571,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+430,"state", false,-1, 1,0);
    tracep->declBus(c+1630,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1631,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1154,"sel_clint", false,-1);
    tracep->declBus(c+1652,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1653,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1155,"sel_mvendorid", false,-1);
    tracep->declBit(c+1156,"sel_marchid", false,-1);
    tracep->declBit(c+1157,"sel_id", false,-1);
    tracep->declBus(c+1551,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBit(c+1583,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1583,"I_AXI_RVALID", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1654,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+1586,"din", false,-1, 31,0);
    tracep->declBus(c+385,"dout", false,-1, 31,0);
    tracep->declBit(c+1578,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1586,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+373,"din", false,-1, 31,0);
    tracep->declBus(c+382,"dout", false,-1, 31,0);
    tracep->declBit(c+431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1586,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+372,"din", false,-1, 31,0);
    tracep->declBus(c+380,"dout", false,-1, 31,0);
    tracep->declBit(c+432,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1655,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+374,"din", false,-1, 31,0);
    tracep->declBus(c+381,"dout", false,-1, 31,0);
    tracep->declBit(c+433,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1586,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+374,"din", false,-1, 31,0);
    tracep->declBus(c+383,"dout", false,-1, 31,0);
    tracep->declBit(c+434,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1656,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1540,"rst", false,-1);
    tracep->declBus(c+1586,"din", false,-1, 31,0);
    tracep->declBus(c+384,"dout", false,-1, 31,0);
    tracep->declBit(c+1578,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"io_d", false,-1);
    tracep->declBit(c+435,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"io_d", false,-1);
    tracep->declBit(c+435,"io_q", false,-1);
    tracep->declBit(c+435,"sync_0", false,-1);
    tracep->declBit(c+436,"sync_1", false,-1);
    tracep->declBit(c+437,"sync_2", false,-1);
    tracep->declBit(c+438,"sync_3", false,-1);
    tracep->declBit(c+439,"sync_4", false,-1);
    tracep->declBit(c+440,"sync_5", false,-1);
    tracep->declBit(c+441,"sync_6", false,-1);
    tracep->declBit(c+442,"sync_7", false,-1);
    tracep->declBit(c+443,"sync_8", false,-1);
    tracep->declBit(c+444,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1277,"auto_in_psel", false,-1);
    tracep->declBit(c+1278,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"auto_in_pready", false,-1);
    tracep->declBit(c+1577,"auto_in_pslverr", false,-1);
    tracep->declBus(c+537,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1503,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1504,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1505,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1506,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1507,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1508,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1509,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1510,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1511,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1512,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1277,"in_psel", false,-1);
    tracep->declBit(c+1278,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+536,"in_pready", false,-1);
    tracep->declBus(c+537,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1577,"in_pslverr", false,-1);
    tracep->declBus(c+1503,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1504,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1505,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1506,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1507,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1508,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1509,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1510,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1511,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1512,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1587,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1657,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1658,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1659,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1660,"ONE", false,-1, 7,0);
    tracep->declBus(c+1661,"TWO", false,-1, 7,0);
    tracep->declBus(c+1662,"THREE", false,-1, 7,0);
    tracep->declBus(c+1663,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1664,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1665,"SIX", false,-1, 7,0);
    tracep->declBus(c+1666,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1667,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1668,"NINE", false,-1, 7,0);
    tracep->declBus(c+1669,"A", false,-1, 7,0);
    tracep->declBus(c+1670,"B", false,-1, 7,0);
    tracep->declBus(c+1671,"C", false,-1, 7,0);
    tracep->declBus(c+1672,"D", false,-1, 7,0);
    tracep->declBus(c+1673,"E", false,-1, 7,0);
    tracep->declBus(c+1674,"F", false,-1, 7,0);
    tracep->declBus(c+568,"led_reg", false,-1, 15,0);
    tracep->declBus(c+569,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+570+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1441,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1442,"write_en", false,-1);
    tracep->declBit(c+1443,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1275,"auto_in_psel", false,-1);
    tracep->declBit(c+1276,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+534,"auto_in_pready", false,-1);
    tracep->declBit(c+1576,"auto_in_pslverr", false,-1);
    tracep->declBus(c+535,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1513,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1514,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1275,"in_psel", false,-1);
    tracep->declBit(c+1276,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+534,"in_pready", false,-1);
    tracep->declBus(c+535,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1576,"in_pslverr", false,-1);
    tracep->declBit(c+1513,"ps2_clk", false,-1);
    tracep->declBit(c+1514,"ps2_data", false,-1);
    tracep->declBus(c+1675,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1676,"EXP", false,-1, 7,0);
    tracep->declBus(c+1259,"state", false,-1, 1,0);
    tracep->declBus(c+1260,"counter", false,-1, 3,0);
    tracep->declBus(c+1261,"buffer", false,-1, 7,0);
    tracep->declBus(c+1262,"buffer1", false,-1, 7,0);
    tracep->declBus(c+1263,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1552,"ready", false,-1);
    tracep->declBus(c+1553,"rdata", false,-1, 31,0);
    tracep->declBit(c+1444,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1119,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1120,"auto_in_wvalid", false,-1);
    tracep->declBit(c+157,"auto_in_arready", false,-1);
    tracep->declBit(c+1121,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1050,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1122,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+521,"auto_in_rready", false,-1);
    tracep->declBit(c+158,"auto_in_rvalid", false,-1);
    tracep->declBus(c+159,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+158,"state", false,-1);
    tracep->declBus(c+160,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+159,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1158,"raddr", false,-1, 31,0);
    tracep->declBit(c+1159,"ren", false,-1);
    tracep->declBus(c+1160,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1279,"auto_in_psel", false,-1);
    tracep->declBit(c+1280,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1161,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1527,"auto_in_pready", false,-1);
    tracep->declBit(c+1578,"auto_in_pslverr", false,-1);
    tracep->declBus(c+968,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1494,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1495,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1524,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1161,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1279,"in_psel", false,-1);
    tracep->declBit(c+1280,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1527,"in_pready", false,-1);
    tracep->declBus(c+968,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1578,"in_pslverr", false,-1);
    tracep->declBit(c+1494,"qspi_sck", false,-1);
    tracep->declBit(c+1495,"qspi_ce_n", false,-1);
    tracep->declBus(c+1524,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1524,"din", false,-1, 3,0);
    tracep->declBus(c+1496,"dout", false,-1, 3,0);
    tracep->declBus(c+1497,"douten", false,-1, 3,0);
    tracep->declBit(c+1554,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBus(c+1161,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1268,"dat_i", false,-1, 31,0);
    tracep->declBus(c+968,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1269,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1279,"cyc_i", false,-1);
    tracep->declBit(c+1279,"stb_i", false,-1);
    tracep->declBit(c+1554,"ack_o", false,-1);
    tracep->declBit(c+1267,"we_i", false,-1);
    tracep->declBit(c+1494,"sck", false,-1);
    tracep->declBit(c+1495,"ce_n", false,-1);
    tracep->declBus(c+1524,"din", false,-1, 3,0);
    tracep->declBus(c+1496,"dout", false,-1, 3,0);
    tracep->declBus(c+1497,"douten", false,-1, 3,0);
    tracep->declBus(c+1632,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+578,"mr_sck", false,-1);
    tracep->declBit(c+579,"mr_ce_n", false,-1);
    tracep->declBus(c+1524,"mr_din", false,-1, 3,0);
    tracep->declBus(c+580,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+581,"mr_doe", false,-1);
    tracep->declBit(c+582,"mw_sck", false,-1);
    tracep->declBit(c+583,"mw_ce_n", false,-1);
    tracep->declBus(c+1524,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1445,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+584,"mw_doe", false,-1);
    tracep->declBit(c+1446,"mr_rd", false,-1);
    tracep->declBit(c+585,"mr_done", false,-1);
    tracep->declBit(c+1447,"mw_wr", false,-1);
    tracep->declBit(c+1448,"mw_done", false,-1);
    tracep->declBit(c+1279,"wb_valid", false,-1);
    tracep->declBit(c+1449,"wb_we", false,-1);
    tracep->declBit(c+1450,"wb_re", false,-1);
    tracep->declBit(c+586,"state", false,-1);
    tracep->declBit(c+1451,"nstate", false,-1);
    tracep->declBus(c+1452,"size", false,-1, 2,0);
    tracep->declBus(c+1453,"byte0", false,-1, 7,0);
    tracep->declBus(c+1454,"byte1", false,-1, 7,0);
    tracep->declBus(c+1455,"byte2", false,-1, 7,0);
    tracep->declBus(c+1456,"byte3", false,-1, 7,0);
    tracep->declBus(c+1212,"wdata", false,-1, 31,0);
    tracep->declBit(c+866,"qpi_flag", false,-1);
    tracep->declBit(c+867,"qpi_sck", false,-1);
    tracep->declBit(c+868,"qpi_ce_n", false,-1);
    tracep->declBus(c+869,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+870,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+871,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1555,"rst_n", false,-1);
    tracep->declBus(c+1213,"addr", false,-1, 23,0);
    tracep->declBit(c+1446,"rd", false,-1);
    tracep->declBus(c+1582,"size", false,-1, 2,0);
    tracep->declBit(c+585,"done", false,-1);
    tracep->declBus(c+968,"line", false,-1, 31,0);
    tracep->declBit(c+578,"sck", false,-1);
    tracep->declBit(c+579,"ce_n", false,-1);
    tracep->declBus(c+1524,"din", false,-1, 3,0);
    tracep->declBus(c+580,"dout", false,-1, 3,0);
    tracep->declBit(c+581,"douten", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"READ", false,-1, 0,0);
    tracep->declBus(c+1677,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+587,"state", false,-1);
    tracep->declBit(c+1457,"nstate", false,-1);
    tracep->declBus(c+588,"counter", false,-1, 7,0);
    tracep->declBus(c+589,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1031+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1678,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+590,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1555,"rst_n", false,-1);
    tracep->declBus(c+1214,"addr", false,-1, 23,0);
    tracep->declBus(c+1212,"line", false,-1, 31,0);
    tracep->declBus(c+1452,"size", false,-1, 2,0);
    tracep->declBit(c+1447,"wr", false,-1);
    tracep->declBit(c+1448,"done", false,-1);
    tracep->declBit(c+582,"sck", false,-1);
    tracep->declBit(c+583,"ce_n", false,-1);
    tracep->declBus(c+1524,"din", false,-1, 3,0);
    tracep->declBus(c+1445,"dout", false,-1, 3,0);
    tracep->declBit(c+584,"douten", false,-1);
    tracep->declBus(c+1632,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1633,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1458,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+591,"state", false,-1);
    tracep->declBit(c+1459,"nstate", false,-1);
    tracep->declBus(c+592,"counter", false,-1, 7,0);
    tracep->declBus(c+593,"saddr", false,-1, 23,0);
    tracep->declBus(c+1679,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1310,"auto_in_awready", false,-1);
    tracep->declBit(c+1311,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1312,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1313,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1164,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1315,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1316,"auto_in_wready", false,-1);
    tracep->declBit(c+1317,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1165,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"auto_in_wlast", false,-1);
    tracep->declBit(c+1531,"auto_in_bready", false,-1);
    tracep->declBit(c+551,"auto_in_bvalid", false,-1);
    tracep->declBus(c+548,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1569,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1303,"auto_in_arready", false,-1);
    tracep->declBit(c+1304,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1305,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1163,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1309,"auto_in_rready", false,-1);
    tracep->declBit(c+547,"auto_in_rvalid", false,-1);
    tracep->declBus(c+548,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+549,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1569,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+550,"auto_in_rlast", false,-1);
    tracep->declBit(c+1525,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+524,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1216,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1217,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1218,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1219,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1220,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1221,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+525,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1245,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1310,"in_awready", false,-1);
    tracep->declBit(c+1311,"in_awvalid", false,-1);
    tracep->declBus(c+1313,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1312,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1314,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1164,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1315,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1316,"in_wready", false,-1);
    tracep->declBit(c+1317,"in_wvalid", false,-1);
    tracep->declBus(c+1165,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"in_wlast", false,-1);
    tracep->declBit(c+1531,"in_bready", false,-1);
    tracep->declBit(c+551,"in_bvalid", false,-1);
    tracep->declBus(c+1569,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+548,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1303,"in_arready", false,-1);
    tracep->declBit(c+1304,"in_arvalid", false,-1);
    tracep->declBus(c+1306,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1307,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1163,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1308,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1309,"in_rready", false,-1);
    tracep->declBit(c+547,"in_rvalid", false,-1);
    tracep->declBus(c+1569,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+549,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+550,"in_rlast", false,-1);
    tracep->declBus(c+548,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1525,"sdram_clk", false,-1);
    tracep->declBit(c+524,"sdram_cke", false,-1);
    tracep->declBit(c+1216,"sdram_cs", false,-1);
    tracep->declBit(c+1217,"sdram_ras", false,-1);
    tracep->declBit(c+1218,"sdram_cas", false,-1);
    tracep->declBit(c+1219,"sdram_we", false,-1);
    tracep->declBus(c+1220,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1221,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+525,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1245,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+594,"sdram_dout_en", false,-1);
    tracep->declBus(c+595,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBit(c+1311,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1313,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1312,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1314,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1315,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1317,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1165,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1166,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1167,"inport_wlast_i", false,-1);
    tracep->declBit(c+1531,"inport_bready_i", false,-1);
    tracep->declBit(c+1304,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1306,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1305,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1307,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1308,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1309,"inport_rready_i", false,-1);
    tracep->declBus(c+1245,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1310,"inport_awready_o", false,-1);
    tracep->declBit(c+1316,"inport_wready_o", false,-1);
    tracep->declBit(c+551,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1569,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+548,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1303,"inport_arready_o", false,-1);
    tracep->declBit(c+547,"inport_rvalid_o", false,-1);
    tracep->declBus(c+549,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1569,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+548,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+550,"inport_rlast_o", false,-1);
    tracep->declBit(c+1525,"sdram_clk_o", false,-1);
    tracep->declBit(c+524,"sdram_cke_o", false,-1);
    tracep->declBit(c+1216,"sdram_cs_o", false,-1);
    tracep->declBit(c+1217,"sdram_ras_o", false,-1);
    tracep->declBit(c+1218,"sdram_cas_o", false,-1);
    tracep->declBit(c+1219,"sdram_we_o", false,-1);
    tracep->declBus(c+525,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1220,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1221,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+595,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+594,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1680,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1681,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1682,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1627,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1460,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1461,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1462,"ram_rd_w", false,-1);
    tracep->declBit(c+1222,"ram_accept_w", false,-1);
    tracep->declBus(c+1165,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+596,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1463,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+597,"ram_ack_w", false,-1);
    tracep->declBit(c+1578,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBit(c+1311,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1313,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1312,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1314,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1315,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1317,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1165,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1166,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1167,"axi_wlast_i", false,-1);
    tracep->declBit(c+1531,"axi_bready_i", false,-1);
    tracep->declBit(c+1304,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1306,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1305,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1307,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1308,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1309,"axi_rready_i", false,-1);
    tracep->declBit(c+1222,"ram_accept_i", false,-1);
    tracep->declBit(c+597,"ram_ack_i", false,-1);
    tracep->declBit(c+1578,"ram_error_i", false,-1);
    tracep->declBus(c+596,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1310,"axi_awready_o", false,-1);
    tracep->declBit(c+1316,"axi_wready_o", false,-1);
    tracep->declBit(c+551,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1569,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+548,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1303,"axi_arready_o", false,-1);
    tracep->declBit(c+547,"axi_rvalid_o", false,-1);
    tracep->declBus(c+549,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1569,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+548,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+550,"axi_rlast_o", false,-1);
    tracep->declBus(c+1461,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1462,"ram_rd_o", false,-1);
    tracep->declBus(c+1463,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1460,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1165,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+598,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+599,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+600,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+601,"req_rd_q", false,-1);
    tracep->declBit(c+602,"req_wr_q", false,-1);
    tracep->declBus(c+603,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+604,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+605,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+606,"req_prio_q", false,-1);
    tracep->declBit(c+607,"req_hold_rd_q", false,-1);
    tracep->declBit(c+608,"req_hold_wr_q", false,-1);
    tracep->declBit(c+609,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1464,"req_push_w", false,-1);
    tracep->declBus(c+1556,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+610,"req_out_valid_w", false,-1);
    tracep->declBus(c+611,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1465,"resp_accept_w", false,-1);
    tracep->declBit(c+612,"resp_is_write_w", false,-1);
    tracep->declBit(c+613,"resp_is_read_w", false,-1);
    tracep->declBit(c+550,"resp_is_last_w", false,-1);
    tracep->declBus(c+548,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+614,"resp_valid_w", false,-1);
    tracep->declBit(c+615,"write_prio_w", false,-1);
    tracep->declBit(c+616,"read_prio_w", false,-1);
    tracep->declBit(c+1466,"write_active_w", false,-1);
    tracep->declBit(c+1462,"read_active_w", false,-1);
    tracep->declBus(c+1460,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1467,"wr_w", false,-1);
    tracep->declBit(c+1462,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1683,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1645,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1627,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBus(c+1556,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1464,"push_i", false,-1);
    tracep->declBit(c+1465,"pop_i", false,-1);
    tracep->declBus(c+611,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+609,"accept_o", false,-1);
    tracep->declBit(c+610,"valid_o", false,-1);
    tracep->declBus(c+1646,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+617+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+621,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+622,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+623,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1651,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1645,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1627,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBus(c+596,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+597,"push_i", false,-1);
    tracep->declBit(c+1465,"pop_i", false,-1);
    tracep->declBus(c+549,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+624,"accept_o", false,-1);
    tracep->declBit(c+614,"valid_o", false,-1);
    tracep->declBus(c+1646,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+625+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+629,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+630,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+631,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBus(c+1461,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1462,"inport_rd_i", false,-1);
    tracep->declBus(c+1463,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1460,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1165,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1245,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1222,"inport_accept_o", false,-1);
    tracep->declBit(c+597,"inport_ack_o", false,-1);
    tracep->declBit(c+1578,"inport_error_o", false,-1);
    tracep->declBus(c+596,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1525,"sdram_clk_o", false,-1);
    tracep->declBit(c+524,"sdram_cke_o", false,-1);
    tracep->declBit(c+1216,"sdram_cs_o", false,-1);
    tracep->declBit(c+1217,"sdram_ras_o", false,-1);
    tracep->declBit(c+1218,"sdram_cas_o", false,-1);
    tracep->declBit(c+1219,"sdram_we_o", false,-1);
    tracep->declBus(c+525,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1220,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1221,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+595,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+594,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1680,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1681,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1682,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1627,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1646,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1645,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1648,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1684,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1685,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1686,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1687,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1645,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1641,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1637,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1639,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1638,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1640,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1636,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1635,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1585,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1688,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1645,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1585,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1635,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1636,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1637,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1638,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1639,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1640,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1641,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1642,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1643,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1689,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1689,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1651,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1689,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1627,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1627,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1683,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1460,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1461,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1462,"ram_rd_w", false,-1);
    tracep->declBit(c+1222,"ram_accept_w", false,-1);
    tracep->declBus(c+1165,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+596,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+597,"ram_ack_w", false,-1);
    tracep->declBit(c+1468,"ram_req_w", false,-1);
    tracep->declBus(c+1223,"command_q", false,-1, 3,0);
    tracep->declBus(c+1220,"addr_q", false,-1, 12,0);
    tracep->declBus(c+595,"data_q", false,-1, 31,0);
    tracep->declBit(c+632,"data_rd_en_q", false,-1);
    tracep->declBus(c+525,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+524,"cke_q", false,-1);
    tracep->declBus(c+1221,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1690,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+633,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1245,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+634,"refresh_q", false,-1);
    tracep->declBus(c+1224,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+635+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1225,"state_q", false,-1, 3,0);
    tracep->declBus(c+1469,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1470,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+643,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+644,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1471,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1472,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1473,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1645,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+645,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1474,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1691,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1226,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+646,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+596,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+647,"idx", false,-1, 31,0);
    tracep->declBus(c+648,"rd_q", false,-1, 3,0);
    tracep->declBit(c+597,"ack_q", false,-1);
    tracep->declArray(c+1227,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1285,"auto_in_psel", false,-1);
    tracep->declBit(c+1286,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1274,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1528,"auto_in_pready", false,-1);
    tracep->declBit(c+1578,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1287,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+522,"spi_bundle_sck", false,-1);
    tracep->declBus(c+523,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1215,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1523,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1650,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1692,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1648,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1475,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1285,"in_psel", false,-1);
    tracep->declBit(c+1286,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1528,"in_pready", false,-1);
    tracep->declBus(c+1287,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1578,"in_pslverr", false,-1);
    tracep->declBit(c+522,"spi_sck", false,-1);
    tracep->declBus(c+523,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1215,"spi_mosi", false,-1);
    tracep->declBit(c+1523,"spi_miso", false,-1);
    tracep->declBit(c+649,"spi_irq_out", false,-1);
    tracep->declBus(c+1476,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1477,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1478,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1479,"wb_we_i", false,-1);
    tracep->declBit(c+1480,"wb_stb_i", false,-1);
    tracep->declBit(c+1481,"wb_cyc_i", false,-1);
    tracep->declBit(c+650,"wb_ack_o", false,-1);
    tracep->declBus(c+651,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1579,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1568,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1580,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1581,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1582,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1693,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1694,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1695,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+445,"state", false,-1, 2,0);
    tracep->declBus(c+446,"next_state", false,-1, 2,0);
    tracep->declBus(c+447,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+448,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+449,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+450,"flash_pwrite", false,-1);
    tracep->declBit(c+451,"flash_psel", false,-1);
    tracep->declBit(c+452,"flash_penable", false,-1);
    tracep->declBit(c+453,"flash_pready", false,-1);
    tracep->declBus(c+454,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1696,"Tp", false,-1, 31,0);
    tracep->declBit(c+1501,"wb_clk_i", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBus(c+1476,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1477,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+651,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1478,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1479,"wb_we_i", false,-1);
    tracep->declBit(c+1480,"wb_stb_i", false,-1);
    tracep->declBit(c+1481,"wb_cyc_i", false,-1);
    tracep->declBit(c+650,"wb_ack_o", false,-1);
    tracep->declBit(c+1578,"wb_err_o", false,-1);
    tracep->declBit(c+649,"wb_int_o", false,-1);
    tracep->declBus(c+523,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+522,"sclk_pad_o", false,-1);
    tracep->declBit(c+1215,"mosi_pad_o", false,-1);
    tracep->declBit(c+1523,"miso_pad_i", false,-1);
    tracep->declBus(c+652,"divider", false,-1, 15,0);
    tracep->declBus(c+653,"ctrl", false,-1, 13,0);
    tracep->declBus(c+654,"ss", false,-1, 7,0);
    tracep->declBus(c+1482,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+655,"rx", false,-1, 127,0);
    tracep->declBit(c+659,"rx_negedge", false,-1);
    tracep->declBit(c+660,"tx_negedge", false,-1);
    tracep->declBus(c+661,"char_len", false,-1, 6,0);
    tracep->declBit(c+662,"go", false,-1);
    tracep->declBit(c+663,"lsb", false,-1);
    tracep->declBit(c+664,"ie", false,-1);
    tracep->declBit(c+665,"ass", false,-1);
    tracep->declBit(c+1483,"spi_divider_sel", false,-1);
    tracep->declBit(c+1484,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1485,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1486,"spi_ss_sel", false,-1);
    tracep->declBit(c+666,"tip", false,-1);
    tracep->declBit(c+667,"pos_edge", false,-1);
    tracep->declBit(c+668,"neg_edge", false,-1);
    tracep->declBit(c+669,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1696,"Tp", false,-1, 31,0);
    tracep->declBit(c+1501,"clk_in", false,-1);
    tracep->declBit(c+1502,"rst", false,-1);
    tracep->declBit(c+666,"enable", false,-1);
    tracep->declBit(c+662,"go", false,-1);
    tracep->declBit(c+669,"last_clk", false,-1);
    tracep->declBus(c+652,"divider", false,-1, 15,0);
    tracep->declBit(c+522,"clk_out", false,-1);
    tracep->declBit(c+667,"pos_edge", false,-1);
    tracep->declBit(c+668,"neg_edge", false,-1);
    tracep->declBus(c+670,"cnt", false,-1, 15,0);
    tracep->declBit(c+671,"cnt_zero", false,-1);
    tracep->declBit(c+672,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1696,"Tp", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"rst", false,-1);
    tracep->declBus(c+1487,"latch", false,-1, 3,0);
    tracep->declBus(c+1478,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+661,"len", false,-1, 6,0);
    tracep->declBit(c+663,"lsb", false,-1);
    tracep->declBit(c+662,"go", false,-1);
    tracep->declBit(c+667,"pos_edge", false,-1);
    tracep->declBit(c+668,"neg_edge", false,-1);
    tracep->declBit(c+659,"rx_negedge", false,-1);
    tracep->declBit(c+660,"tx_negedge", false,-1);
    tracep->declBit(c+666,"tip", false,-1);
    tracep->declBit(c+669,"last", false,-1);
    tracep->declBus(c+1477,"p_in", false,-1, 31,0);
    tracep->declArray(c+655,"p_out", false,-1, 127,0);
    tracep->declBit(c+522,"s_clk", false,-1);
    tracep->declBit(c+1523,"s_in", false,-1);
    tracep->declBit(c+1215,"s_out", false,-1);
    tracep->declBus(c+673,"cnt", false,-1, 7,0);
    tracep->declArray(c+655,"data", false,-1, 127,0);
    tracep->declBus(c+674,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+675,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+676,"rx_clk", false,-1);
    tracep->declBit(c+677,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1281,"auto_in_psel", false,-1);
    tracep->declBit(c+1282,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1162,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_in_pready", false,-1);
    tracep->declBit(c+1578,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1284,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1521,"uart_rx", false,-1);
    tracep->declBit(c+1522,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1281,"in_psel", false,-1);
    tracep->declBit(c+1282,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1283,"in_pready", false,-1);
    tracep->declBit(c+1578,"in_pslverr", false,-1);
    tracep->declBus(c+1211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1284,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1521,"uart_rx", false,-1);
    tracep->declBit(c+1522,"uart_tx", false,-1);
    tracep->declBit(c+678,"rtsn", false,-1);
    tracep->declBit(c+1578,"ctsn", false,-1);
    tracep->declBit(c+679,"dtr_pad_o", false,-1);
    tracep->declBit(c+1578,"dsr_pad_i", false,-1);
    tracep->declBit(c+1578,"ri_pad_i", false,-1);
    tracep->declBit(c+1578,"dcd_pad_i", false,-1);
    tracep->declBit(c+680,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1488,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1489,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+455,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1490,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+681,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBus(c+1488,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1491,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1490,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1522,"stx_pad_o", false,-1);
    tracep->declBit(c+1521,"srx_pad_i", false,-1);
    tracep->declBus(c+1642,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+681,"rts_pad_o", false,-1);
    tracep->declBit(c+679,"dtr_pad_o", false,-1);
    tracep->declBit(c+680,"int_o", false,-1);
    tracep->declBit(c+682,"enable", false,-1);
    tracep->declBit(c+683,"srx_pad", false,-1);
    tracep->declBus(c+684,"ier", false,-1, 3,0);
    tracep->declBus(c+685,"iir", false,-1, 3,0);
    tracep->declBus(c+686,"fcr", false,-1, 1,0);
    tracep->declBus(c+687,"mcr", false,-1, 4,0);
    tracep->declBus(c+688,"lcr", false,-1, 7,0);
    tracep->declBus(c+689,"msr", false,-1, 7,0);
    tracep->declBus(c+690,"dl", false,-1, 15,0);
    tracep->declBus(c+691,"scratch", false,-1, 7,0);
    tracep->declBit(c+692,"start_dlc", false,-1);
    tracep->declBit(c+693,"lsr_mask_d", false,-1);
    tracep->declBit(c+694,"msi_reset", false,-1);
    tracep->declBus(c+695,"dlc", false,-1, 15,0);
    tracep->declBus(c+696,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+697,"rx_reset", false,-1);
    tracep->declBit(c+698,"tx_reset", false,-1);
    tracep->declBit(c+699,"dlab", false,-1);
    tracep->declBit(c+1583,"cts_pad_i", false,-1);
    tracep->declBit(c+1578,"dsr_pad_i", false,-1);
    tracep->declBit(c+1578,"ri_pad_i", false,-1);
    tracep->declBit(c+1578,"dcd_pad_i", false,-1);
    tracep->declBit(c+700,"loopback", false,-1);
    tracep->declBit(c+1578,"cts", false,-1);
    tracep->declBit(c+1583,"dsr", false,-1);
    tracep->declBit(c+1583,"ri", false,-1);
    tracep->declBit(c+1583,"dcd", false,-1);
    tracep->declBit(c+701,"cts_c", false,-1);
    tracep->declBit(c+702,"dsr_c", false,-1);
    tracep->declBit(c+703,"ri_c", false,-1);
    tracep->declBit(c+704,"dcd_c", false,-1);
    tracep->declBus(c+705,"lsr", false,-1, 7,0);
    tracep->declBit(c+706,"lsr0", false,-1);
    tracep->declBit(c+707,"lsr1", false,-1);
    tracep->declBit(c+708,"lsr2", false,-1);
    tracep->declBit(c+709,"lsr3", false,-1);
    tracep->declBit(c+710,"lsr4", false,-1);
    tracep->declBit(c+711,"lsr5", false,-1);
    tracep->declBit(c+712,"lsr6", false,-1);
    tracep->declBit(c+713,"lsr7", false,-1);
    tracep->declBit(c+714,"lsr0r", false,-1);
    tracep->declBit(c+715,"lsr1r", false,-1);
    tracep->declBit(c+716,"lsr2r", false,-1);
    tracep->declBit(c+717,"lsr3r", false,-1);
    tracep->declBit(c+718,"lsr4r", false,-1);
    tracep->declBit(c+719,"lsr5r", false,-1);
    tracep->declBit(c+720,"lsr6r", false,-1);
    tracep->declBit(c+721,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+722,"rls_int", false,-1);
    tracep->declBit(c+723,"rda_int", false,-1);
    tracep->declBit(c+724,"ti_int", false,-1);
    tracep->declBit(c+725,"thre_int", false,-1);
    tracep->declBit(c+726,"ms_int", false,-1);
    tracep->declBit(c+727,"tf_push", false,-1);
    tracep->declBit(c+728,"rf_pop", false,-1);
    tracep->declBus(c+1557,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+729,"rf_error_bit", false,-1);
    tracep->declBit(c+707,"rf_overrun", false,-1);
    tracep->declBit(c+730,"rf_push_pulse", false,-1);
    tracep->declBus(c+731,"rf_count", false,-1, 4,0);
    tracep->declBus(c+732,"tf_count", false,-1, 4,0);
    tracep->declBus(c+733,"tstate", false,-1, 2,0);
    tracep->declBus(c+734,"rstate", false,-1, 3,0);
    tracep->declBus(c+735,"counter_t", false,-1, 9,0);
    tracep->declBit(c+736,"thre_set_en", false,-1);
    tracep->declBus(c+737,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+738,"block_value", false,-1, 7,0);
    tracep->declBit(c+739,"serial_out", false,-1);
    tracep->declBit(c+740,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+741,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+742,"lsr0_d", false,-1);
    tracep->declBit(c+743,"lsr1_d", false,-1);
    tracep->declBit(c+744,"lsr2_d", false,-1);
    tracep->declBit(c+745,"lsr3_d", false,-1);
    tracep->declBit(c+746,"lsr4_d", false,-1);
    tracep->declBit(c+747,"lsr5_d", false,-1);
    tracep->declBit(c+748,"lsr6_d", false,-1);
    tracep->declBit(c+749,"lsr7_d", false,-1);
    tracep->declBit(c+750,"rls_int_d", false,-1);
    tracep->declBit(c+751,"thre_int_d", false,-1);
    tracep->declBit(c+752,"ms_int_d", false,-1);
    tracep->declBit(c+753,"ti_int_d", false,-1);
    tracep->declBit(c+754,"rda_int_d", false,-1);
    tracep->declBit(c+755,"rls_int_rise", false,-1);
    tracep->declBit(c+756,"thre_int_rise", false,-1);
    tracep->declBit(c+757,"ms_int_rise", false,-1);
    tracep->declBit(c+758,"ti_int_rise", false,-1);
    tracep->declBit(c+759,"rda_int_rise", false,-1);
    tracep->declBit(c+760,"rls_int_pnd", false,-1);
    tracep->declBit(c+761,"rda_int_pnd", false,-1);
    tracep->declBit(c+762,"thre_int_pnd", false,-1);
    tracep->declBit(c+763,"ms_int_pnd", false,-1);
    tracep->declBit(c+764,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1696,"Tp", false,-1, 31,0);
    tracep->declBus(c+1696,"width", false,-1, 31,0);
    tracep->declBus(c+1633,"init_value", false,-1, 0,0);
    tracep->declBit(c+1502,"rst_i", false,-1);
    tracep->declBit(c+1501,"clk_i", false,-1);
    tracep->declBit(c+1578,"stage1_rst_i", false,-1);
    tracep->declBit(c+1583,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1521,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+683,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+765,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBus(c+688,"lcr", false,-1, 7,0);
    tracep->declBit(c+728,"rf_pop", false,-1);
    tracep->declBit(c+740,"srx_pad_i", false,-1);
    tracep->declBit(c+682,"enable", false,-1);
    tracep->declBit(c+697,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+735,"counter_t", false,-1, 9,0);
    tracep->declBus(c+731,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1557,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+707,"rf_overrun", false,-1);
    tracep->declBit(c+729,"rf_error_bit", false,-1);
    tracep->declBus(c+734,"rstate", false,-1, 3,0);
    tracep->declBit(c+730,"rf_push_pulse", false,-1);
    tracep->declBus(c+766,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+767,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+768,"rshift", false,-1, 7,0);
    tracep->declBit(c+769,"rparity", false,-1);
    tracep->declBit(c+770,"rparity_error", false,-1);
    tracep->declBit(c+771,"rframing_error", false,-1);
    tracep->declBit(c+772,"rbit_in", false,-1);
    tracep->declBit(c+773,"rparity_xor", false,-1);
    tracep->declBus(c+774,"counter_b", false,-1, 7,0);
    tracep->declBit(c+775,"rf_push_q", false,-1);
    tracep->declBus(c+776,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+777,"rf_push", false,-1);
    tracep->declBit(c+778,"break_error", false,-1);
    tracep->declBit(c+779,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+780,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+781,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+782,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1585,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1635,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1636,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1637,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1638,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1639,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1640,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1641,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1642,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1643,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1644,"sr_push", false,-1, 3,0);
    tracep->declBus(c+783,"toc_value", false,-1, 9,0);
    tracep->declBus(c+784,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1697,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1647,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1645,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1698,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBit(c+730,"push", false,-1);
    tracep->declBit(c+728,"pop", false,-1);
    tracep->declBus(c+776,"data_in", false,-1, 10,0);
    tracep->declBit(c+697,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1557,"data_out", false,-1, 10,0);
    tracep->declBit(c+707,"overrun", false,-1);
    tracep->declBus(c+731,"count", false,-1, 4,0);
    tracep->declBit(c+729,"error_bit", false,-1);
    tracep->declBus(c+1558,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+785+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+801,"top", false,-1, 3,0);
    tracep->declBus(c+802,"bottom", false,-1, 3,0);
    tracep->declBus(c+803,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+804,"word0", false,-1, 2,0);
    tracep->declBus(c+805,"word1", false,-1, 2,0);
    tracep->declBus(c+806,"word2", false,-1, 2,0);
    tracep->declBus(c+807,"word3", false,-1, 2,0);
    tracep->declBus(c+808,"word4", false,-1, 2,0);
    tracep->declBus(c+809,"word5", false,-1, 2,0);
    tracep->declBus(c+810,"word6", false,-1, 2,0);
    tracep->declBus(c+811,"word7", false,-1, 2,0);
    tracep->declBus(c+812,"word8", false,-1, 2,0);
    tracep->declBus(c+813,"word9", false,-1, 2,0);
    tracep->declBus(c+814,"word10", false,-1, 2,0);
    tracep->declBus(c+815,"word11", false,-1, 2,0);
    tracep->declBus(c+816,"word12", false,-1, 2,0);
    tracep->declBus(c+817,"word13", false,-1, 2,0);
    tracep->declBus(c+818,"word14", false,-1, 2,0);
    tracep->declBus(c+819,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1645,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1648,"data_width", false,-1, 31,0);
    tracep->declBus(c+1647,"depth", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+730,"we", false,-1);
    tracep->declBus(c+801,"a", false,-1, 3,0);
    tracep->declBus(c+802,"dpra", false,-1, 3,0);
    tracep->declBus(c+820,"di", false,-1, 7,0);
    tracep->declBus(c+1558,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+456+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBus(c+688,"lcr", false,-1, 7,0);
    tracep->declBit(c+727,"tf_push", false,-1);
    tracep->declBus(c+1491,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+682,"enable", false,-1);
    tracep->declBit(c+698,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+739,"stx_pad_o", false,-1);
    tracep->declBus(c+733,"tstate", false,-1, 2,0);
    tracep->declBus(c+732,"tf_count", false,-1, 4,0);
    tracep->declBus(c+821,"counter", false,-1, 4,0);
    tracep->declBus(c+822,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+823,"shift_out", false,-1, 6,0);
    tracep->declBit(c+824,"stx_o_tmp", false,-1);
    tracep->declBit(c+825,"parity_xor", false,-1);
    tracep->declBit(c+826,"tf_pop", false,-1);
    tracep->declBit(c+827,"bit_out", false,-1);
    tracep->declBus(c+1491,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1559,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+828,"tf_overrun", false,-1);
    tracep->declBus(c+1579,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1568,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1580,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1581,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1582,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1693,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1648,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1647,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1645,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1698,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+1502,"wb_rst_i", false,-1);
    tracep->declBit(c+727,"push", false,-1);
    tracep->declBit(c+826,"pop", false,-1);
    tracep->declBus(c+1491,"data_in", false,-1, 7,0);
    tracep->declBit(c+698,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1559,"data_out", false,-1, 7,0);
    tracep->declBit(c+828,"overrun", false,-1);
    tracep->declBus(c+732,"count", false,-1, 4,0);
    tracep->declBus(c+829,"top", false,-1, 3,0);
    tracep->declBus(c+830,"bottom", false,-1, 3,0);
    tracep->declBus(c+831,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1645,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1648,"data_width", false,-1, 31,0);
    tracep->declBus(c+1647,"depth", false,-1, 31,0);
    tracep->declBit(c+1501,"clk", false,-1);
    tracep->declBit(c+727,"we", false,-1);
    tracep->declBus(c+829,"a", false,-1, 3,0);
    tracep->declBus(c+830,"dpra", false,-1, 3,0);
    tracep->declBus(c+1491,"di", false,-1, 7,0);
    tracep->declBus(c+1559,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+472+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBit(c+1272,"auto_in_psel", false,-1);
    tracep->declBit(c+1273,"auto_in_penable", false,-1);
    tracep->declBit(c+1267,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1274,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1266,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1268,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+533,"auto_in_pready", false,-1);
    tracep->declBit(c+1574,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1575,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1515,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1516,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1517,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1518,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1519,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1520,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1501,"clock", false,-1);
    tracep->declBit(c+1502,"reset", false,-1);
    tracep->declBus(c+1475,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1272,"in_psel", false,-1);
    tracep->declBit(c+1273,"in_penable", false,-1);
    tracep->declBus(c+1266,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1267,"in_pwrite", false,-1);
    tracep->declBus(c+1268,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1269,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+533,"in_pready", false,-1);
    tracep->declBus(c+1575,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1574,"in_pslverr", false,-1);
    tracep->declBus(c+1515,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1516,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1517,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1518,"vga_hsync", false,-1);
    tracep->declBit(c+1519,"vga_vsync", false,-1);
    tracep->declBit(c+1520,"vga_valid", false,-1);
    tracep->declBit(c+1492,"is_write", false,-1);
    tracep->declBus(c+1493,"addr", false,-1, 31,0);
    tracep->declBit(c+533,"ready", false,-1);
    tracep->declBus(c+832,"i", false,-1, 31,0);
    tracep->declBus(c+1699,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1700,"h_active", false,-1, 31,0);
    tracep->declBus(c+1701,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1702,"h_total", false,-1, 31,0);
    tracep->declBus(c+1627,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1703,"v_active", false,-1, 31,0);
    tracep->declBus(c+1704,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1705,"v_total", false,-1, 31,0);
    tracep->declBus(c+833,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+488,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+834,"h_valid", false,-1);
    tracep->declBit(c+489,"v_valid", false,-1);
    tracep->declBus(c+835,"h_addr", false,-1, 9,0);
    tracep->declBus(c+490,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1560,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+522,"sck", false,-1);
    tracep->declBit(c+1230,"ss", false,-1);
    tracep->declBit(c+1215,"mosi", false,-1);
    tracep->declBit(c+962,"miso", false,-1);
    tracep->declBus(c+963,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+964,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+965,"counter", false,-1, 2,0);
    tracep->declBit(c+966,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+522,"sck", false,-1);
    tracep->declBit(c+836,"ss", false,-1);
    tracep->declBit(c+1215,"mosi", false,-1);
    tracep->declBit(c+1561,"miso", false,-1);
    tracep->declBit(c+836,"reset", false,-1);
    tracep->declBus(c+956,"state", false,-1, 2,0);
    tracep->declBus(c+957,"counter", false,-1, 7,0);
    tracep->declBus(c+958,"cmd", false,-1, 7,0);
    tracep->declBus(c+959,"addr", false,-1, 23,0);
    tracep->declBus(c+960,"data", false,-1, 31,0);
    tracep->declBit(c+961,"ren", false,-1);
    tracep->declBus(c+1562,"rdata", false,-1, 31,0);
    tracep->declBus(c+1563,"raddr", false,-1, 31,0);
    tracep->declBus(c+1564,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+522,"clock", false,-1);
    tracep->declBit(c+961,"valid", false,-1);
    tracep->declBus(c+958,"cmd", false,-1, 7,0);
    tracep->declBus(c+1563,"addr", false,-1, 31,0);
    tracep->declBus(c+1562,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1494,"sck", false,-1);
    tracep->declBit(c+1495,"ce_n", false,-1);
    tracep->declBus(c+1524,"dio", false,-1, 3,0);
    tracep->declBit(c+1495,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+1248,"cmd", false,-1, 7,0);
    tracep->declBus(c+1249,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1250+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1565,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1566,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+1254,"ren", false,-1);
    tracep->declBit(c+1255,"wen", false,-1);
    tracep->declBus(c+1256,"len", false,-1, 7,0);
    tracep->declBus(c+1567,"rdata", false,-1, 31,0);
    tracep->declBus(c+1257,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1494,"clock", false,-1);
    tracep->declBit(c+1254,"ren", false,-1);
    tracep->declBit(c+1255,"wen", false,-1);
    tracep->declBus(c+1248,"cmd", false,-1, 7,0);
    tracep->declBus(c+1257,"saddr", false,-1, 31,0);
    tracep->declBus(c+1567,"rdata", false,-1, 31,0);
    tracep->declBus(c+1258,"wdata", false,-1, 31,0);
    tracep->declBus(c+1256,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1525,"clk", false,-1);
    tracep->declBit(c+524,"cke", false,-1);
    tracep->declBit(c+1216,"cs", false,-1);
    tracep->declBit(c+1217,"ras", false,-1);
    tracep->declBit(c+1218,"cas", false,-1);
    tracep->declBit(c+1219,"we", false,-1);
    tracep->declBus(c+1220,"a", false,-1, 12,0);
    tracep->declBus(c+1231,"ba", false,-1, 1,0);
    tracep->declBus(c+1232,"dqm", false,-1, 1,0);
    tracep->declBus(c+1246,"dq", false,-1, 15,0);
    tracep->declBit(c+1233,"reset", false,-1);
    tracep->declBus(c+872,"state", false,-1, 2,0);
    tracep->declBus(c+873,"counter", false,-1, 7,0);
    tracep->declBus(c+874,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1706,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+875,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+876,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1234,"nop", false,-1);
    tracep->declBit(c+1235,"active", false,-1);
    tracep->declBit(c+1236,"precharge", false,-1);
    tracep->declBit(c+1237,"read", false,-1);
    tracep->declBit(c+1238,"write", false,-1);
    tracep->declBit(c+1239,"burstterm", false,-1);
    tracep->declBit(c+1240,"autorefresh", false,-1);
    tracep->declBit(c+1241,"mode", false,-1);
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
    tracep->declBit(c+1525,"clk", false,-1);
    tracep->declBit(c+524,"cke", false,-1);
    tracep->declBit(c+1216,"cs", false,-1);
    tracep->declBit(c+1217,"ras", false,-1);
    tracep->declBit(c+1218,"cas", false,-1);
    tracep->declBit(c+1219,"we", false,-1);
    tracep->declBus(c+1220,"a", false,-1, 12,0);
    tracep->declBus(c+1231,"ba", false,-1, 1,0);
    tracep->declBus(c+1242,"dqm", false,-1, 1,0);
    tracep->declBus(c+1247,"dq", false,-1, 15,0);
    tracep->declBit(c+1233,"reset", false,-1);
    tracep->declBus(c+893,"state", false,-1, 2,0);
    tracep->declBus(c+894,"counter", false,-1, 7,0);
    tracep->declBus(c+895,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1707,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+896,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+897,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1234,"nop", false,-1);
    tracep->declBit(c+1235,"active", false,-1);
    tracep->declBit(c+1236,"precharge", false,-1);
    tracep->declBit(c+1237,"read", false,-1);
    tracep->declBit(c+1238,"write", false,-1);
    tracep->declBit(c+1239,"burstterm", false,-1);
    tracep->declBit(c+1240,"autorefresh", false,-1);
    tracep->declBit(c+1241,"mode", false,-1);
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
    tracep->declBit(c+1525,"clk", false,-1);
    tracep->declBit(c+524,"cke", false,-1);
    tracep->declBit(c+1216,"cs", false,-1);
    tracep->declBit(c+1217,"ras", false,-1);
    tracep->declBit(c+1218,"cas", false,-1);
    tracep->declBit(c+1219,"we", false,-1);
    tracep->declBus(c+1220,"a", false,-1, 12,0);
    tracep->declBus(c+1231,"ba", false,-1, 1,0);
    tracep->declBus(c+1243,"dqm", false,-1, 1,0);
    tracep->declBus(c+1246,"dq", false,-1, 15,0);
    tracep->declBit(c+1233,"reset", false,-1);
    tracep->declBus(c+914,"state", false,-1, 2,0);
    tracep->declBus(c+915,"counter", false,-1, 7,0);
    tracep->declBus(c+916,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1708,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+917,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+918,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1234,"nop", false,-1);
    tracep->declBit(c+1235,"active", false,-1);
    tracep->declBit(c+1236,"precharge", false,-1);
    tracep->declBit(c+1237,"read", false,-1);
    tracep->declBit(c+1238,"write", false,-1);
    tracep->declBit(c+1239,"burstterm", false,-1);
    tracep->declBit(c+1240,"autorefresh", false,-1);
    tracep->declBit(c+1241,"mode", false,-1);
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
    tracep->declBit(c+1525,"clk", false,-1);
    tracep->declBit(c+524,"cke", false,-1);
    tracep->declBit(c+1216,"cs", false,-1);
    tracep->declBit(c+1217,"ras", false,-1);
    tracep->declBit(c+1218,"cas", false,-1);
    tracep->declBit(c+1219,"we", false,-1);
    tracep->declBus(c+1220,"a", false,-1, 12,0);
    tracep->declBus(c+1231,"ba", false,-1, 1,0);
    tracep->declBus(c+1244,"dqm", false,-1, 1,0);
    tracep->declBus(c+1247,"dq", false,-1, 15,0);
    tracep->declBit(c+1233,"reset", false,-1);
    tracep->declBus(c+935,"state", false,-1, 2,0);
    tracep->declBus(c+936,"counter", false,-1, 7,0);
    tracep->declBus(c+937,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1709,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+938,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+939,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+1234,"nop", false,-1);
    tracep->declBit(c+1235,"active", false,-1);
    tracep->declBit(c+1236,"precharge", false,-1);
    tracep->declBit(c+1237,"read", false,-1);
    tracep->declBit(c+1238,"write", false,-1);
    tracep->declBit(c+1239,"burstterm", false,-1);
    tracep->declBit(c+1240,"autorefresh", false,-1);
    tracep->declBit(c+1241,"mode", false,-1);
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
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if),32);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_id),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id),32);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id),3);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id),4);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id),4);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id),4);
    bufp->fullBit(oldp+350,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_id))));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ex),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ex),32);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex),5);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ex),4);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ex));
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ex),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ex),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ex),32);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ex),4);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr_ex),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ex),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ls),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_ls),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc_ls),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd_ls),32);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ls),4);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen_ls));
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_ls),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_ls),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrsw_ls),32);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls),4);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jsnpc_reg),21);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg),30);
    bufp->fullSData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[0]),10);
    bufp->fullSData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[1]),10);
    bufp->fullSData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[2]),10);
    bufp->fullSData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__snpc_reg[3]),10);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[0]),28);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[1]),28);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[2]),28);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg[3]),28);
    bufp->fullIData(oldp+396,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                               >> 4U)),28);
    bufp->fullCData(oldp+397,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                     >> 2U))),2);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__already));
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__enable),2);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__unnamedblk1__DOT__a),32);
    bufp->fullBit(oldp+401,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                   >> 0xaU))));
    bufp->fullCData(oldp+402,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)),5);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt));
    bufp->fullBit(oldp+404,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))));
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_addr),32);
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable));
    bufp->fullCData(oldp+407,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                                  ? 0xfU
                                                  : 
                                                 (((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h480c364a__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h480c364a__0) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                                     ? 0xcU
                                                     : 
                                                    (((3U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                      ? 8U
                                                      : 0U)))))))),4);
    bufp->fullCData(oldp+408,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+409,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                         & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)) 
                                            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex))))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+426,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
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
    bufp->fullIData(oldp+427,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_id)))) 
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
    bufp->fullIData(oldp+428,((((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [1U]) | (((- (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [2U]) | (
                                                   ((- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [3U]) 
                                                   | (((- (IData)(
                                                                  (4U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [4U]) 
                                                      | (((- (IData)(
                                                                     (5U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [5U]) 
                                                         | (((- (IData)(
                                                                        (6U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [6U]) 
                                                            | ((- (IData)(
                                                                          (7U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                               [7U])))))))),32);
    bufp->fullIData(oldp+429,((((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                [8U]) | (((- (IData)(
                                                     (9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                          [9U]) | (
                                                   ((- (IData)(
                                                               (0xaU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [0xaU]) 
                                                   | (((- (IData)(
                                                                  (0xbU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                       [0xbU]) 
                                                      | (((- (IData)(
                                                                     (0xcU 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                          [0xcU]) 
                                                         | (((- (IData)(
                                                                        (0xdU 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                             [0xdU]) 
                                                            | (((- (IData)(
                                                                           (0xeU 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                [0xeU]) 
                                                               | ((- (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_id)))) 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                                  [0xfU]))))))))),32);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+431,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 2U))));
    bufp->fullBit(oldp+432,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls))));
    bufp->fullBit(oldp+433,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 1U))));
    bufp->fullBit(oldp+434,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrs_wen_ls) 
                                   >> 3U))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+491,(((IData)(vlSelf->__VdfgTmp_hfab946d0__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex
                                : 0U)),32);
    bufp->fullIData(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wdata_ex
                                : 0U)),32);
    bufp->fullCData(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                    ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                             ? 3U : 
                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h2d77a52f__0) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                              ? 0xfU
                                              : (((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h480c364a__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                                   ? 4U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h480c364a__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                                    ? 0xcU
                                                    : 
                                                   (((3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr_ex)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                     ? 8U
                                                     : 0U)))))))
                                : 0U)),4);
    bufp->fullCData(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                                    ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)))
                                             ? 1U : 2U))
                                : 0U)),3);
    bufp->fullCData(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid)
                                ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                    & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)) 
                                       | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex))))
                                    ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_ex)) 
                                             & ((1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex)) 
                                                | (5U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_ex))))
                                             ? 1U : 2U))
                                : 0U)),3);
    bufp->fullIData(oldp+496,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
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
    bufp->fullBit(oldp+497,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 2U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__jtag_reg)));
    bufp->fullBit(oldp+498,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                              >> 4U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__tag_reg
                             [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))])));
    bufp->fullIData(oldp+499,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
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
                                                   (((0x1cU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                     & ((1U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                        | ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                           | (0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr
                                                     : 0U)))))))),32);
    bufp->fullIData(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullCData(oldp+502,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7d20678f__0) 
                                << 3U) | ((((0x1cU 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                            & ((0x342U 
                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hbd4e74d7__0))) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h45820bb5__0) 
                                            << 1U) 
                                           | ((0x1cU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & ((0x341U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hbd4e74d7__0))))))),4);
    bufp->fullIData(oldp+503,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_addr
                                : 0U)),32);
    bufp->fullIData(oldp+504,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                           << 8U) : 
                                       ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 0x10U)
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                << 0x18U)
                                             : 0U))))
                                : 0U)),32);
    bufp->fullCData(oldp+505,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h61d7bf4d__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h61d7bf4d__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h61d7bf4d__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                  ? 0xfU
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb993dc96__0))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h67c598c8__0) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h67c598c8__0) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                     ? 0xcU
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h443b72f9__0)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb993dc96__0))
                                                      ? 8U
                                                      : 0U)))))))),4);
    bufp->fullIData(oldp+506,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_addr
                                : 0U)),32);
    bufp->fullCData(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb993dc96__0)
                                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+508,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                   | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b_use_shamt))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+509,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+510,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+511,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+512,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+513,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+514,(((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+515,(((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))));
    bufp->fullCData(oldp+516,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+517,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+518,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+548,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+550,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate),3);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate),3);
    bufp->fullSData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdelay_counter),11);
    bufp->fullSData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdelay_counter),11);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rvalid_reg));
    bufp->fullSData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_reg),16);
    bufp->fullWData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_reg),128);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_reg),8);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rlast_reg),4);
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter),3);
    bufp->fullSData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+580,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+581,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+585,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+590,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+609,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+610,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+612,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+613,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+614,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+615,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+616,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+624,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullSData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+659,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+660,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+661,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+663,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+664,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+665,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+669,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+671,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+672,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+674,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+678,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+679,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+699,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+700,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+701,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+702,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+703,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+704,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+705,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+708,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+709,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+710,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+729,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+736,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+755,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+756,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+757,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+758,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+759,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+778,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+779,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+780,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+781,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+782,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+784,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+803,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+820,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+831,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata),32);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr),32);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen),8);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arsize),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arburst),2);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready));
    bufp->fullSData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[0]),16);
    bufp->fullSData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[1]),16);
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[2]),16);
    bufp->fullSData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg[3]),16);
    bufp->fullIData(oldp+854,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                               >> 5U)),27);
    bufp->fullBit(oldp+855,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                   >> 4U))));
    bufp->fullCData(oldp+856,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr 
                                     >> 2U))),2);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit),8);
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_counter),2);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__burst_araddr),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__f),32);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__a),32);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk3__DOT__b),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_state),2);
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
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+961,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+967,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+968,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+971,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)))));
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if),32);
    bufp->fullBit(oldp+973,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state)))));
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr),32);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ready));
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc),21);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en),2);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id),5);
    bufp->fullBit(oldp+982,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+983,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_wen_ex));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_ren_ex));
    bufp->fullBit(oldp+987,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+988,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+989,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isRAW));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard));
    bufp->fullIData(oldp+992,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 2U)),30);
    bufp->fullIData(oldp+993,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                               >> 4U)),28);
    bufp->fullCData(oldp+994,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 2U))),2);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel),4);
    bufp->fullIData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res),32);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a_use_r1));
    bufp->fullBit(oldp+1002,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1003,((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid));
    bufp->fullBit(oldp+1005,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1006,((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1007,((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+1010,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                >> 5U)),27);
    bufp->fullBit(oldp+1011,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                    >> 4U))));
    bufp->fullCData(oldp+1012,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_araddr 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+1014,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                         >> 2U))),5);
    bufp->fullCData(oldp+1015,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0) 
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
    bufp->fullCData(oldp+1016,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1017,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h26248598__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0))
                                 ? (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 0xfU))
                                 : 0U)),4);
    bufp->fullCData(oldp+1018,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0)
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
    bufp->fullIData(oldp+1019,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x14U))),32);
    bufp->fullIData(oldp+1020,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)),32);
    bufp->fullIData(oldp+1021,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1022,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1023,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
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
    bufp->fullIData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+1025,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                >> 0x19U)),7);
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1027,(((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                      >> 0x1cU)) | 
                              ((0xfU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                         >> 0x18U)) 
                               | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                   >> 0x1fU) & (3U 
                                                != 
                                                (3U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                                    >> 0x1dU))))))));
    bufp->fullBit(oldp+1028,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state))));
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_valid_i));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1039,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? (IData)(vlSelf->__VdfgTmp_hf2604b21__0)
                                 : 0U)),4);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullCData(oldp+1054,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))),4);
    bufp->fullIData(oldp+1055,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0)),32);
    bufp->fullCData(oldp+1056,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0))),8);
    bufp->fullCData(oldp+1057,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))),3);
    bufp->fullCData(oldp+1058,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0))),2);
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1065,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1073,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1075,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1077,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1093,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1096,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1097,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1098,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1099,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1102,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0))));
    bufp->fullBit(oldp+1103,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0))));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullSData(oldp+1108,((0xffffU & ((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0))))),16);
    bufp->fullSData(oldp+1109,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)))),16);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1122,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1127,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1129,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1130,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr),32);
    bufp->fullIData(oldp+1138,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc738152c__0 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1139,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h570f9425__0) 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1140,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h1c4b59f0__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1141,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1142,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hc7f27ace__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1143,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h045b8425__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1144,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0) 
                                    >> 1U))));
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullIData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1155,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1156,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1158,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullCData(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0)
                                 ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd9dc2966__0))
                                 : 0U)),3);
    bufp->fullCData(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize)
                                 : 0U)),3);
    bufp->fullIData(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                                 : 0U)),4);
    bufp->fullBit(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid))));
    bufp->fullBit(oldp+1168,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1171,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1172,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1173,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1174,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1175,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1176,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1177,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1179,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1180,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1181,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1182,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1183,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1184,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1185,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1186,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1187,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1188,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1189,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1190,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1191,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1192,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1193,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1194,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1196,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1197,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1198,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1199,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1200,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1201,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullCData(oldp+1202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),4);
    bufp->fullBit(oldp+1203,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1204,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID))));
    bufp->fullCData(oldp+1205,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)
                                 : 0U)),4);
    bufp->fullCData(oldp+1206,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))
                                 : 0U)),4);
    bufp->fullBit(oldp+1207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+1208,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)))));
    bufp->fullCData(oldp+1209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1210,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullIData(oldp+1211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1212,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1213,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1216,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1217,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1218,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1219,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1231,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+1236,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+1245,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+1246,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+1247,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+1258,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [0U])))),32);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1271,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1272,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1273,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1280,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1290,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1293,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))));
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+1300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid),4);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr),32);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen),8);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst),2);
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid),4);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr),32);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen),8);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst),2);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullSData(oldp+1353,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullSData(oldp+1354,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1376,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1377,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1400,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1401,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1402,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1403,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1404,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1405,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1406,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1408,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1409,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1410,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1411,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1412,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1413,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1414,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1415,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1416,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1417,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1418,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1419,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1420,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1421,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1422,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1423,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1425,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1426,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1427,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1428,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1429,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1430,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1458,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullCData(oldp+1463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen)
                                     : 0U))),8);
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1471,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1472,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1473,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1493,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata),32);
    bufp->fullIData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata),32);
    bufp->fullIData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1501,(vlSelf->clock));
    bufp->fullBit(oldp+1502,(vlSelf->reset));
    bufp->fullSData(oldp+1503,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1504,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1505,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1506,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1507,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1508,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1509,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1510,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1511,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1512,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1513,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1514,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1515,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1516,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1517,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1518,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1519,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1520,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1521,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1522,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1523,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1525,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1526,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1527,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1530,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1531,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))));
    bufp->fullBit(oldp+1532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullIData(oldp+1533,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1534,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1535,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid)))));
    bufp->fullCData(oldp+1536,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
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
    bufp->fullIData(oldp+1537,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1538,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1539,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))))));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1541,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA)),32);
    bufp->fullCData(oldp+1542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullCData(oldp+1543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullCData(oldp+1544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
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
    bufp->fullIData(oldp+1545,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h92ac1dc2__0) 
                                  >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__c_rdata
                                 : 0U)),32);
    bufp->fullQData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__c_rdata),32);
    bufp->fullIData(oldp+1549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_valid_i)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ex)),32);
    bufp->fullCData(oldp+1550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullIData(oldp+1551,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1555,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1556,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullSData(oldp+1557,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1560,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1561,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1563,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1566,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1568,(1U),3);
    bufp->fullCData(oldp+1569,(0U),2);
    bufp->fullCData(oldp+1570,(1U),2);
    bufp->fullCData(oldp+1571,(2U),2);
    bufp->fullCData(oldp+1572,(3U),2);
    bufp->fullSData(oldp+1573,(0xaU),11);
    bufp->fullBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1578,(0U));
    bufp->fullCData(oldp+1579,(0U),3);
    bufp->fullCData(oldp+1580,(2U),3);
    bufp->fullCData(oldp+1581,(3U),3);
    bufp->fullCData(oldp+1582,(4U),3);
    bufp->fullBit(oldp+1583,(1U));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1585,(0U),4);
    bufp->fullIData(oldp+1586,(0U),32);
    bufp->fullCData(oldp+1587,(0U),8);
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rid),4);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rresp),2);
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rlast));
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid),4);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen),8);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen),8);
    bufp->fullCData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid),4);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid),4);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst),2);
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst),2);
    bufp->fullIData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awaddr),32);
    bufp->fullIData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wdata),32);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wstrb),4);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awlen),8);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awid),4);
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bid),4);
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rid),4);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awsize),3);
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awburst),2);
    bufp->fullCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bresp),2);
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rresp),2);
    bufp->fullBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awvalid));
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_awready));
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wvalid));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wready));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bvalid));
    bufp->fullBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_bready));
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_wlast));
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast));
    bufp->fullIData(oldp+1627,(2U),32);
    bufp->fullIData(oldp+1628,(0U),32);
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BTB__DOT__log2__Vstatic__loop_var),32);
    bufp->fullIData(oldp+1630,(0x2000000U),32);
    bufp->fullIData(oldp+1631,(0x2000004U),32);
    bufp->fullBit(oldp+1632,(0U));
    bufp->fullBit(oldp+1633,(1U));
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullCData(oldp+1635,(1U),4);
    bufp->fullCData(oldp+1636,(2U),4);
    bufp->fullCData(oldp+1637,(3U),4);
    bufp->fullCData(oldp+1638,(4U),4);
    bufp->fullCData(oldp+1639,(5U),4);
    bufp->fullCData(oldp+1640,(6U),4);
    bufp->fullCData(oldp+1641,(7U),4);
    bufp->fullCData(oldp+1642,(8U),4);
    bufp->fullCData(oldp+1643,(9U),4);
    bufp->fullCData(oldp+1644,(0xaU),4);
    bufp->fullIData(oldp+1645,(4U),32);
    bufp->fullIData(oldp+1646,(3U),32);
    bufp->fullIData(oldp+1647,(0x10U),32);
    bufp->fullIData(oldp+1648,(8U),32);
    bufp->fullIData(oldp+1649,(8U),32);
    bufp->fullIData(oldp+1650,(0x30000000U),32);
    bufp->fullIData(oldp+1651,(0x20U),32);
    bufp->fullIData(oldp+1652,(0x1000000U),32);
    bufp->fullIData(oldp+1653,(0x1000004U),32);
    bufp->fullIData(oldp+1654,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1655,(0x1800U),32);
    bufp->fullIData(oldp+1656,(0x79737978U),32);
    bufp->fullCData(oldp+1657,(4U),8);
    bufp->fullCData(oldp+1658,(8U),8);
    bufp->fullCData(oldp+1659,(3U),8);
    bufp->fullCData(oldp+1660,(0x9fU),8);
    bufp->fullCData(oldp+1661,(0x25U),8);
    bufp->fullCData(oldp+1662,(0xdU),8);
    bufp->fullCData(oldp+1663,(0x99U),8);
    bufp->fullCData(oldp+1664,(0x49U),8);
    bufp->fullCData(oldp+1665,(0x41U),8);
    bufp->fullCData(oldp+1666,(0x1fU),8);
    bufp->fullCData(oldp+1667,(1U),8);
    bufp->fullCData(oldp+1668,(9U),8);
    bufp->fullCData(oldp+1669,(0x11U),8);
    bufp->fullCData(oldp+1670,(0xc1U),8);
    bufp->fullCData(oldp+1671,(0x63U),8);
    bufp->fullCData(oldp+1672,(0x85U),8);
    bufp->fullCData(oldp+1673,(0x61U),8);
    bufp->fullCData(oldp+1674,(0x71U),8);
    bufp->fullCData(oldp+1675,(0xf0U),8);
    bufp->fullCData(oldp+1676,(0xe0U),8);
    bufp->fullCData(oldp+1677,(0x15U),8);
    bufp->fullCData(oldp+1678,(0xebU),8);
    bufp->fullCData(oldp+1679,(0x38U),8);
    bufp->fullIData(oldp+1680,(0x64U),32);
    bufp->fullIData(oldp+1681,(0x18U),32);
    bufp->fullIData(oldp+1682,(9U),32);
    bufp->fullIData(oldp+1683,(6U),32);
    bufp->fullIData(oldp+1684,(0xdU),32);
    bufp->fullIData(oldp+1685,(0x2000U),32);
    bufp->fullIData(oldp+1686,(0x2710U),32);
    bufp->fullIData(oldp+1687,(0x30cU),32);
    bufp->fullSData(oldp+1688,(0x20U),13);
    bufp->fullIData(oldp+1689,(0xaU),32);
    bufp->fullIData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1691,(0x11U),32);
    bufp->fullIData(oldp+1692,(0x3fffffffU),32);
    bufp->fullCData(oldp+1693,(5U),3);
    bufp->fullCData(oldp+1694,(6U),3);
    bufp->fullCData(oldp+1695,(7U),3);
    bufp->fullIData(oldp+1696,(1U),32);
    bufp->fullIData(oldp+1697,(0xbU),32);
    bufp->fullIData(oldp+1698,(5U),32);
    bufp->fullIData(oldp+1699,(0x60U),32);
    bufp->fullIData(oldp+1700,(0x90U),32);
    bufp->fullIData(oldp+1701,(0x310U),32);
    bufp->fullIData(oldp+1702,(0x320U),32);
    bufp->fullIData(oldp+1703,(0x23U),32);
    bufp->fullIData(oldp+1704,(0x203U),32);
    bufp->fullIData(oldp+1705,(0x20dU),32);
    bufp->fullSData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1708,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
