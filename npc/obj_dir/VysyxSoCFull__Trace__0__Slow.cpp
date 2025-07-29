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
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1325,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1326,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1327,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1328,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1329,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1330,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1331,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1332,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1333,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1334,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1335,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1336,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1337,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1338,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1340,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1341,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1342,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1343,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1344,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1325,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1326,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1327,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1328,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1329,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1330,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1331,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1332,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1333,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1334,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1335,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1336,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1337,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1338,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1340,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1341,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1342,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1343,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1344,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+420,"spi_sck", false,-1);
    tracep->declBus(c+421,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+867,"spi_mosi", false,-1);
    tracep->declBit(c+1345,"spi_miso", false,-1);
    tracep->declBit(c+1343,"uart_rx", false,-1);
    tracep->declBit(c+1344,"uart_tx", false,-1);
    tracep->declBit(c+1319,"psram_sck", false,-1);
    tracep->declBit(c+1320,"psram_ce_n", false,-1);
    tracep->declBus(c+1346,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1347,"sdram_clk", false,-1);
    tracep->declBit(c+422,"sdram_cke", false,-1);
    tracep->declBit(c+868,"sdram_cs", false,-1);
    tracep->declBit(c+869,"sdram_ras", false,-1);
    tracep->declBit(c+870,"sdram_cas", false,-1);
    tracep->declBit(c+871,"sdram_we", false,-1);
    tracep->declBus(c+872,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+873,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+423,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+897,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1325,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1326,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1328,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1335,"ps2_clk", false,-1);
    tracep->declBit(c+1336,"ps2_data", false,-1);
    tracep->declBus(c+1337,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1338,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1340,"vga_hsync", false,-1);
    tracep->declBit(c+1341,"vga_vsync", false,-1);
    tracep->declBit(c+1342,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+955,"in_psel", false,-1);
    tracep->declBit(c+828,"in_penable", false,-1);
    tracep->declBus(c+1423,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+956,"in_pwrite", false,-1);
    tracep->declBus(c+957,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+958,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+424,"in_pready", false,-1);
    tracep->declBus(c+425,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+426,"in_pslverr", false,-1);
    tracep->declBus(c+1101,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1143,"out_psel", false,-1);
    tracep->declBit(c+1144,"out_penable", false,-1);
    tracep->declBus(c+1145,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"out_pwrite", false,-1);
    tracep->declBus(c+1147,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"out_pready", false,-1);
    tracep->declBus(c+1348,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1150,"out_pslverr", false,-1);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1426,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1427,"DELAY", false,-1, 1,0);
    tracep->declBus(c+427,"state", false,-1, 1,0);
    tracep->declBus(c+428,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+429,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+430,"pslverr_reg", false,-1);
    tracep->declBus(c+1428,"r", false,-1, 10,0);
    tracep->declBus(c+1426,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1143,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1144,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1101,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1150,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1348,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1151,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1152,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1429,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+432,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1153,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1154,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1155,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1145,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1430,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1431,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1156,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1432,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+435,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1158,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1159,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1433,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+437,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1160,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1161,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1101,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1349,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1429,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+829,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1162,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1163,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1429,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1165,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1167,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1146,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1155,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1145,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1429,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1168,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1169,"sel_0", false,-1);
    tracep->declBit(c+1170,"sel_1", false,-1);
    tracep->declBit(c+1171,"sel_2", false,-1);
    tracep->declBit(c+1172,"sel_3", false,-1);
    tracep->declBit(c+1173,"sel_4", false,-1);
    tracep->declBit(c+1174,"sel_5", false,-1);
    tracep->declBit(c+1175,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+959,"auto_in_awready", false,-1);
    tracep->declBit(c+960,"auto_in_awvalid", false,-1);
    tracep->declBus(c+961,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+959,"auto_in_wready", false,-1);
    tracep->declBit(c+964,"auto_in_wvalid", false,-1);
    tracep->declBus(c+965,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1176,"auto_in_bready", false,-1);
    tracep->declBit(c+1177,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+967,"auto_in_arready", false,-1);
    tracep->declBit(c+968,"auto_in_arvalid", false,-1);
    tracep->declBus(c+969,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1178,"auto_in_rready", false,-1);
    tracep->declBit(c+1179,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1352,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+955,"auto_out_psel", false,-1);
    tracep->declBit(c+828,"auto_out_penable", false,-1);
    tracep->declBit(c+956,"auto_out_pwrite", false,-1);
    tracep->declBus(c+954,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+957,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+958,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+424,"auto_out_pready", false,-1);
    tracep->declBit(c+426,"auto_out_pslverr", false,-1);
    tracep->declBus(c+425,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+828,"nodeOut_penable", false,-1);
    tracep->declBus(c+830,"state", false,-1, 1,0);
    tracep->declBit(c+967,"accept_read", false,-1);
    tracep->declBit(c+959,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+956,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+438,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1351,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1179,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1177,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+831,"auto_in_awready", false,-1);
    tracep->declBit(c+972,"auto_in_awvalid", false,-1);
    tracep->declBus(c+973,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+974,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_wready", false,-1);
    tracep->declBit(c+978,"auto_in_wvalid", false,-1);
    tracep->declBus(c+979,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_in_wlast", false,-1);
    tracep->declBit(c+982,"auto_in_bready", false,-1);
    tracep->declBit(c+1180,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_arready", false,-1);
    tracep->declBit(c+983,"auto_in_arvalid", false,-1);
    tracep->declBus(c+984,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+985,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"auto_in_rready", false,-1);
    tracep->declBit(c+1182,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"auto_in_rlast", false,-1);
    tracep->declBit(c+1184,"auto_out_awready", false,-1);
    tracep->declBit(c+990,"auto_out_awvalid", false,-1);
    tracep->declBus(c+961,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+991,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1185,"auto_out_wready", false,-1);
    tracep->declBit(c+992,"auto_out_wvalid", false,-1);
    tracep->declBus(c+965,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_out_wlast", false,-1);
    tracep->declBit(c+1186,"auto_out_bready", false,-1);
    tracep->declBit(c+1187,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1188,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1189,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1190,"auto_out_arready", false,-1);
    tracep->declBit(c+994,"auto_out_arvalid", false,-1);
    tracep->declBus(c+969,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+995,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+989,"auto_out_rready", false,-1);
    tracep->declBit(c+1182,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1357,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1191,"auto_out_rlast", false,-1);
    tracep->declBit(c+992,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+24,"w_idle", false,-1);
    tracep->declBit(c+1192,"in_awready", false,-1);
    tracep->declBit(c+25,"busy", false,-1);
    tracep->declBus(c+26,"r_addr", false,-1, 31,0);
    tracep->declBus(c+27,"r_len", false,-1, 7,0);
    tracep->declBus(c+996,"len", false,-1, 7,0);
    tracep->declBus(c+997,"addr", false,-1, 31,0);
    tracep->declBit(c+28,"busy_1", false,-1);
    tracep->declBus(c+29,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+30,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+998,"len_1", false,-1, 7,0);
    tracep->declBus(c+999,"addr_1", false,-1, 31,0);
    tracep->declBit(c+31,"wbeats_latched", false,-1);
    tracep->declBit(c+990,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1000,"wbeats_valid", false,-1);
    tracep->declBus(c+32,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1001,"w_todo", false,-1, 8,0);
    tracep->declBit(c+993,"w_last", false,-1);
    tracep->declBit(c+1186,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+983,"io_enq_valid", false,-1);
    tracep->declBus(c+984,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+985,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+986,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+987,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+988,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1193,"io_deq_ready", false,-1);
    tracep->declBit(c+994,"io_deq_valid", false,-1);
    tracep->declBus(c+969,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1002,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1003,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+971,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1004,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+49,"ram", false,-1, 48,0);
    tracep->declBit(c+51,"full", false,-1);
    tracep->declBit(c+994,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1194,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+831,"io_enq_ready", false,-1);
    tracep->declBit(c+972,"io_enq_valid", false,-1);
    tracep->declBus(c+973,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+974,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+975,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+976,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+977,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1195,"io_deq_ready", false,-1);
    tracep->declBit(c+1005,"io_deq_valid", false,-1);
    tracep->declBus(c+961,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1006,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1007,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+963,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1008,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+52,"ram", false,-1, 48,0);
    tracep->declBit(c+832,"full", false,-1);
    tracep->declBit(c+1005,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1196,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+978,"io_enq_valid", false,-1);
    tracep->declBus(c+979,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+980,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+981,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1197,"io_deq_ready", false,-1);
    tracep->declBit(c+1009,"io_deq_valid", false,-1);
    tracep->declBus(c+965,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+966,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1358,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+54,"ram", false,-1, 36,0);
    tracep->declBit(c+56,"full", false,-1);
    tracep->declBit(c+1009,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1198,"do_enq", false,-1);
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
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1199,"auto_in_awready", false,-1);
    tracep->declBit(c+1010,"auto_in_awvalid", false,-1);
    tracep->declBus(c+961,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1103,"auto_in_wready", false,-1);
    tracep->declBit(c+1012,"auto_in_wvalid", false,-1);
    tracep->declBus(c+965,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1200,"auto_in_bready", false,-1);
    tracep->declBit(c+57,"auto_in_bvalid", false,-1);
    tracep->declBus(c+58,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_in_arready", false,-1);
    tracep->declBit(c+1013,"auto_in_arvalid", false,-1);
    tracep->declBus(c+969,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1202,"auto_in_rready", false,-1);
    tracep->declBit(c+60,"auto_in_rvalid", false,-1);
    tracep->declBus(c+61,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1201,"nodeIn_arready", false,-1);
    tracep->declBit(c+1199,"nodeIn_awready", false,-1);
    tracep->declBit(c+1015,"w_sel0", false,-1);
    tracep->declBit(c+57,"w_full", false,-1);
    tracep->declBus(c+58,"w_id", false,-1, 3,0);
    tracep->declBit(c+64,"r_sel1", false,-1);
    tracep->declBit(c+65,"w_sel1", false,-1);
    tracep->declBit(c+60,"r_full", false,-1);
    tracep->declBus(c+61,"r_id", false,-1, 3,0);
    tracep->declBit(c+1203,"ren", false,-1);
    tracep->declBit(c+66,"rdata_REG", false,-1);
    tracep->declBus(c+67,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+68,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+69,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1016,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1203,"R0_en", false,-1);
    tracep->declBit(c+1323,"R0_clk", false,-1);
    tracep->declBus(c+71,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1017,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1204,"W0_en", false,-1);
    tracep->declBit(c+1323,"W0_clk", false,-1);
    tracep->declBus(c+965,"W0_data", false,-1, 31,0);
    tracep->declBus(c+966,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+831,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+972,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+973,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+974,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+978,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+982,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1180,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+984,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+985,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+831,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+972,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+973,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+974,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+978,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+982,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1180,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+983,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+984,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+985,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1182,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1205,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1018,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+961,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1185,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+992,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+965,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1186,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1187,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1188,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1206,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1019,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+969,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+989,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1191,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1010,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+961,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1103,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1012,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+965,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1200,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+58,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1201,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1013,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+969,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1202,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+60,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1020,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1021,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+72,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+969,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1023,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1359,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+73,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+74,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+959,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+960,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+961,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+959,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+964,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+965,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1176,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1177,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+967,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+968,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+969,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1178,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1179,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1352,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1187,"in_0_bvalid", false,-1);
    tracep->declBit(c+1182,"in_0_rvalid", false,-1);
    tracep->declBit(c+1207,"in_0_wready", false,-1);
    tracep->declBit(c+1208,"in_0_awready", false,-1);
    tracep->declBit(c+1206,"in_0_arready", false,-1);
    tracep->declBit(c+1205,"anonIn_awready", false,-1);
    tracep->declBit(c+1024,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1025,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1026,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1027,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1028,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1029,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1030,"arSel", false,-1, 15,0);
    tracep->declBus(c+1031,"awSel", false,-1, 15,0);
    tracep->declBus(c+1209,"rSel", false,-1, 15,0);
    tracep->declBus(c+1210,"bSel", false,-1, 15,0);
    tracep->declBit(c+76,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+77,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+78,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+79,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+80,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+81,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+82,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+83,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+84,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+85,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+86,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+87,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+88,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+104,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+105,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+106,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+107,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+108,"latched", false,-1);
    tracep->declBit(c+1032,"in_0_awvalid", false,-1);
    tracep->declBit(c+1033,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1034,"in_0_wvalid", false,-1);
    tracep->declBit(c+109,"idle_3", false,-1);
    tracep->declBit(c+1211,"anyValid", false,-1);
    tracep->declBus(c+1212,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+110,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1213,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1214,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1215,"prefixOR_1", false,-1);
    tracep->declBit(c+1216,"winner_3_1", false,-1);
    tracep->declBit(c+1217,"winner_3_2", false,-1);
    tracep->declBit(c+111,"state_3_0", false,-1);
    tracep->declBit(c+112,"state_3_1", false,-1);
    tracep->declBit(c+113,"state_3_2", false,-1);
    tracep->declBit(c+1218,"muxState_3_0", false,-1);
    tracep->declBit(c+1219,"muxState_3_1", false,-1);
    tracep->declBit(c+1220,"muxState_3_2", false,-1);
    tracep->declBit(c+114,"idle_4", false,-1);
    tracep->declBit(c+1221,"anyValid_1", false,-1);
    tracep->declBus(c+1222,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+115,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1223,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1224,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1225,"winner_4_0", false,-1);
    tracep->declBit(c+1226,"winner_4_2", false,-1);
    tracep->declBit(c+116,"state_4_0", false,-1);
    tracep->declBit(c+117,"state_4_2", false,-1);
    tracep->declBit(c+1227,"muxState_4_0", false,-1);
    tracep->declBit(c+1228,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+118,"io_enq_ready", false,-1);
    tracep->declBit(c+1033,"io_enq_valid", false,-1);
    tracep->declBus(c+1035,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
    tracep->declBit(c+1036,"io_deq_valid", false,-1);
    tracep->declBus(c+1037,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+119,"wrap", false,-1);
    tracep->declBit(c+120,"wrap_1", false,-1);
    tracep->declBit(c+121,"maybe_full", false,-1);
    tracep->declBit(c+122,"ptr_match", false,-1);
    tracep->declBit(c+123,"empty", false,-1);
    tracep->declBit(c+124,"full", false,-1);
    tracep->declBit(c+1036,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1230,"do_deq", false,-1);
    tracep->declBit(c+1231,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+120,"R0_addr", false,-1);
    tracep->declBit(c+1434,"R0_en", false,-1);
    tracep->declBit(c+1323,"R0_clk", false,-1);
    tracep->declBus(c+125,"R0_data", false,-1, 2,0);
    tracep->declBit(c+119,"W0_addr", false,-1);
    tracep->declBit(c+1231,"W0_en", false,-1);
    tracep->declBit(c+1323,"W0_clk", false,-1);
    tracep->declBus(c+1035,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+126+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1184,"auto_in_awready", false,-1);
    tracep->declBit(c+990,"auto_in_awvalid", false,-1);
    tracep->declBus(c+961,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+991,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1185,"auto_in_wready", false,-1);
    tracep->declBit(c+992,"auto_in_wvalid", false,-1);
    tracep->declBus(c+965,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_in_wlast", false,-1);
    tracep->declBit(c+1186,"auto_in_bready", false,-1);
    tracep->declBit(c+1187,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1188,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1189,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1190,"auto_in_arready", false,-1);
    tracep->declBit(c+994,"auto_in_arvalid", false,-1);
    tracep->declBus(c+969,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+995,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+989,"auto_in_rready", false,-1);
    tracep->declBit(c+1182,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1357,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1191,"auto_in_rlast", false,-1);
    tracep->declBit(c+1205,"auto_out_awready", false,-1);
    tracep->declBit(c+1018,"auto_out_awvalid", false,-1);
    tracep->declBus(c+961,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+962,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1185,"auto_out_wready", false,-1);
    tracep->declBit(c+992,"auto_out_wvalid", false,-1);
    tracep->declBus(c+965,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+966,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_out_wlast", false,-1);
    tracep->declBit(c+1186,"auto_out_bready", false,-1);
    tracep->declBit(c+1187,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1188,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1206,"auto_out_arready", false,-1);
    tracep->declBit(c+1019,"auto_out_arvalid", false,-1);
    tracep->declBus(c+969,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+970,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+989,"auto_out_rready", false,-1);
    tracep->declBit(c+1182,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1191,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+128,"io_enq_ready", false,-1);
    tracep->declBit(c+1104,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
    tracep->declBit(c+129,"io_deq_valid", false,-1);
    tracep->declBit(c+130,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+129,"full", false,-1);
    tracep->declBit(c+130,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+131,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+132,"io_enq_ready", false,-1);
    tracep->declBit(c+1105,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
    tracep->declBit(c+133,"io_deq_valid", false,-1);
    tracep->declBit(c+134,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+133,"full", false,-1);
    tracep->declBit(c+134,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+135,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+136,"io_enq_ready", false,-1);
    tracep->declBit(c+1106,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+137,"io_deq_valid", false,-1);
    tracep->declBit(c+138,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+137,"full", false,-1);
    tracep->declBit(c+138,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+139,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+1107,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+141,"io_deq_valid", false,-1);
    tracep->declBit(c+142,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+141,"full", false,-1);
    tracep->declBit(c+142,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+143,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+1108,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+145,"io_deq_valid", false,-1);
    tracep->declBit(c+146,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+145,"full", false,-1);
    tracep->declBit(c+146,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+147,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1109,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+149,"io_deq_valid", false,-1);
    tracep->declBit(c+150,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->declBit(c+150,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+151,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1110,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBit(c+154,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+154,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+155,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+1111,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBit(c+158,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+157,"full", false,-1);
    tracep->declBit(c+158,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+159,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+1112,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+161,"io_deq_valid", false,-1);
    tracep->declBit(c+162,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->declBit(c+162,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+163,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+1113,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
    tracep->declBit(c+165,"io_deq_valid", false,-1);
    tracep->declBit(c+166,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+165,"full", false,-1);
    tracep->declBit(c+166,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+1114,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
    tracep->declBit(c+169,"io_deq_valid", false,-1);
    tracep->declBit(c+170,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBit(c+170,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+171,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1115,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+173,"io_deq_valid", false,-1);
    tracep->declBit(c+174,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+173,"full", false,-1);
    tracep->declBit(c+174,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+175,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+1116,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+177,"io_deq_valid", false,-1);
    tracep->declBit(c+178,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+177,"full", false,-1);
    tracep->declBit(c+178,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+179,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+1117,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBit(c+182,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+181,"full", false,-1);
    tracep->declBit(c+182,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+183,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1118,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBit(c+186,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+185,"full", false,-1);
    tracep->declBit(c+186,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+187,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+1119,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBit(c+190,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+189,"full", false,-1);
    tracep->declBit(c+190,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+191,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+1120,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBit(c+194,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->declBit(c+194,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBit(c+198,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->declBit(c+198,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+1122,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBit(c+202,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->declBit(c+202,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
    tracep->declBit(c+205,"io_deq_valid", false,-1);
    tracep->declBit(c+206,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+206,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1124,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1253,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1254,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1255,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+991,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1257,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1258,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1260,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1261,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1262,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+995,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1263,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1360,"reset", false,-1);
    tracep->declBit(c+831,"auto_master_out_awready", false,-1);
    tracep->declBit(c+972,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+973,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+974,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"auto_master_out_wready", false,-1);
    tracep->declBit(c+978,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+979,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+982,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1180,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1181,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"auto_master_out_arready", false,-1);
    tracep->declBit(c+983,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+984,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+985,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1182,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1183,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1360,"reset", false,-1);
    tracep->declBit(c+1429,"io_interrupt", false,-1);
    tracep->declBit(c+831,"io_master_awready", false,-1);
    tracep->declBit(c+972,"io_master_awvalid", false,-1);
    tracep->declBus(c+973,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+974,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"io_master_wready", false,-1);
    tracep->declBit(c+978,"io_master_wvalid", false,-1);
    tracep->declBus(c+979,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"io_master_wlast", false,-1);
    tracep->declBit(c+982,"io_master_bready", false,-1);
    tracep->declBit(c+1180,"io_master_bvalid", false,-1);
    tracep->declBus(c+1181,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_arready", false,-1);
    tracep->declBit(c+983,"io_master_arvalid", false,-1);
    tracep->declBus(c+984,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+985,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"io_master_rready", false,-1);
    tracep->declBit(c+1182,"io_master_rvalid", false,-1);
    tracep->declBus(c+1183,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"io_master_rlast", false,-1);
    tracep->declBit(c+1435,"io_slave_awready", false,-1);
    tracep->declBit(c+1429,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1436,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1437,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1438,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1439,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1424,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1440,"io_slave_wready", false,-1);
    tracep->declBit(c+1429,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1437,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1436,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1429,"io_slave_wlast", false,-1);
    tracep->declBit(c+1429,"io_slave_bready", false,-1);
    tracep->declBit(c+1441,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1442,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1443,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1444,"io_slave_arready", false,-1);
    tracep->declBit(c+1429,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1436,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1437,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1438,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1439,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1424,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1429,"io_slave_rready", false,-1);
    tracep->declBit(c+1445,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1446,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1447,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1448,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1449,"io_slave_rlast", false,-1);
    tracep->declBit(c+256,"DIFFTEST", false,-1);
    tracep->declBus(c+932,"pc", false,-1, 31,0);
    tracep->declBus(c+1140,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1141,"pc_valid", false,-1);
    tracep->declBit(c+1361,"if_ready", false,-1);
    tracep->declBus(c+911,"inst", false,-1, 31,0);
    tracep->declBit(c+947,"if_valid", false,-1);
    tracep->declBit(c+933,"id_ready", false,-1);
    tracep->declBus(c+1450,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1450,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+934,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1362,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1436,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1438,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+257,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1436,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1363,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+258,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1364,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1439,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+259,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1424,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+260,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1365,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1366,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1429,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1367,"if_axi_awready", false,-1);
    tracep->declBit(c+1429,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1368,"if_axi_wready", false,-1);
    tracep->declBit(c+1369,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1429,"if_axi_bready", false,-1);
    tracep->declBit(c+935,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1370,"if_axi_arready", false,-1);
    tracep->declBit(c+1264,"if_axi_rvalid", false,-1);
    tracep->declBit(c+936,"if_axi_rready", false,-1);
    tracep->declBit(c+1451,"if_axi_wlast", false,-1);
    tracep->declBit(c+1371,"if_axi_rlast", false,-1);
    tracep->declBus(c+948,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+948,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1372,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1265,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1436,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1438,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1373,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1436,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+411,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1374,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+412,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1439,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1375,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1424,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1376,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+413,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1377,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1452,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1378,"icache_axi_awready", false,-1);
    tracep->declBit(c+1452,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1379,"icache_axi_wready", false,-1);
    tracep->declBit(c+414,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1452,"icache_axi_bready", false,-1);
    tracep->declBit(c+1038,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1380,"icache_axi_arready", false,-1);
    tracep->declBit(c+1266,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1039,"icache_axi_rready", false,-1);
    tracep->declBit(c+949,"icache_axi_wlast", false,-1);
    tracep->declBit(c+415,"icache_axi_rlast", false,-1);
    tracep->declBit(c+833,"id_valid", false,-1);
    tracep->declBit(c+834,"ex_ready", false,-1);
    tracep->declBus(c+835,"op", false,-1, 6,0);
    tracep->declBus(c+261,"rd", false,-1, 4,0);
    tracep->declBus(c+836,"funct3", false,-1, 2,0);
    tracep->declBus(c+262,"rs1", false,-1, 4,0);
    tracep->declBus(c+263,"rs2", false,-1, 4,0);
    tracep->declBus(c+264,"imm", false,-1, 31,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->declBus(c+266,"shamt", false,-1, 4,0);
    tracep->declBit(c+837,"ls_read", false,-1);
    tracep->declBit(c+838,"ls_write", false,-1);
    tracep->declBit(c+912,"ls_done", false,-1);
    tracep->declBit(c+267,"ex_valid", false,-1);
    tracep->declBit(c+268,"wb_ready", false,-1);
    tracep->declBus(c+269,"ex", false,-1, 31,0);
    tracep->declBit(c+839,"ls_valid", false,-1);
    tracep->declBit(c+840,"ls_wen", false,-1);
    tracep->declBus(c+841,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+402,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+842,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+843,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+844,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+845,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1438,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1438,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1425,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1425,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+270,"mepc", false,-1, 31,0);
    tracep->declBus(c+271,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+272,"mstatus", false,-1, 31,0);
    tracep->declBus(c+273,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+274,"mcause", false,-1, 31,0);
    tracep->declBus(c+275,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+276,"mtvec", false,-1, 31,0);
    tracep->declBus(c+277,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+278,"gpr_wen", false,-1);
    tracep->declBit(c+279,"mepc_wen", false,-1);
    tracep->declBit(c+280,"mstatus_wen", false,-1);
    tracep->declBit(c+281,"mcause_wen", false,-1);
    tracep->declBit(c+282,"mtvec_wen", false,-1);
    tracep->declBus(c+678,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+679,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1381,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+680,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1382,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1383,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+681,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+682,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1453,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+416,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1454,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+417,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+683,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+684,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+685,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+686,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+418,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1384,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+687,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1385,"ls_axi_awready", false,-1);
    tracep->declBit(c+688,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1040,"ls_axi_wready", false,-1);
    tracep->declBit(c+1267,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+689,"ls_axi_bready", false,-1);
    tracep->declBit(c+690,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1386,"ls_axi_arready", false,-1);
    tracep->declBit(c+1268,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+691,"ls_axi_rready", false,-1);
    tracep->declBit(c+692,"ls_axi_wlast", false,-1);
    tracep->declBit(c+419,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1041,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1042,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1043,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+283,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1044,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1045,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1046,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1047,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+284,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1048,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+285,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1049,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1050,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1051,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1052,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+286,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+287,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1053,"c_axi_awvalid", false,-1);
    tracep->declBit(c+846,"c_axi_awready", false,-1);
    tracep->declBit(c+1054,"c_axi_wvalid", false,-1);
    tracep->declBit(c+288,"c_axi_wready", false,-1);
    tracep->declBit(c+289,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1055,"c_axi_bready", false,-1);
    tracep->declBit(c+1056,"c_axi_arvalid", false,-1);
    tracep->declBit(c+290,"c_axi_arready", false,-1);
    tracep->declBit(c+291,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1057,"c_axi_rready", false,-1);
    tracep->declBit(c+1058,"c_axi_wlast", false,-1);
    tracep->declBit(c+292,"c_axi_rlast", false,-1);
    tracep->declBit(c+1387,"wb_done", false,-1);
    tracep->declBit(c+256,"difftest", false,-1);
    tracep->declBus(c+293,"xrd", false,-1, 31,0);
    tracep->declBus(c+294,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+295,"rf_wen", false,-1);
    tracep->declBus(c+296,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+297,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+298,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+299,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+300,"mepc_en", false,-1);
    tracep->declBit(c+301,"mstatus_en", false,-1);
    tracep->declBit(c+302,"mcause_en", false,-1);
    tracep->declBit(c+303,"mtvec_en", false,-1);
    tracep->declBus(c+304,"r1", false,-1, 31,0);
    tracep->declBus(c+305,"r2", false,-1, 31,0);
    tracep->declBus(c+306,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+307,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBit(c+846,"c_axi_awready", false,-1);
    tracep->declBit(c+1053,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1047,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1041,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1049,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1051,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+288,"c_axi_wready", false,-1);
    tracep->declBit(c+1054,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1042,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1044,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1058,"c_axi_wlast", false,-1);
    tracep->declBit(c+1055,"c_axi_bready", false,-1);
    tracep->declBit(c+289,"c_axi_bvalid", false,-1);
    tracep->declBus(c+284,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+286,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+290,"c_axi_arready", false,-1);
    tracep->declBit(c+1056,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1048,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1043,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1046,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1050,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1052,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1057,"c_axi_rready", false,-1);
    tracep->declBit(c+291,"c_axi_rvalid", false,-1);
    tracep->declBus(c+285,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+283,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+287,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+292,"c_axi_rlast", false,-1);
    tracep->declBit(c+846,"axi_awready", false,-1);
    tracep->declBit(c+288,"axi_wready", false,-1);
    tracep->declBit(c+289,"axi_bvalid", false,-1);
    tracep->declBit(c+290,"axi_arready", false,-1);
    tracep->declBit(c+291,"axi_rvalid", false,-1);
    tracep->declBit(c+292,"axi_rlast", false,-1);
    tracep->declBus(c+286,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+287,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+284,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+285,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+283,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+308,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1455,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1456,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+309,"mtime", false,-1, 63,0);
    tracep->declBus(c+1388,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+269,"ex_o", false,-1, 31,0);
    tracep->declBit(c+833,"id_valid_i", false,-1);
    tracep->declBit(c+834,"ex_ready_o", false,-1);
    tracep->declBit(c+267,"ex_valid_o", false,-1);
    tracep->declBit(c+268,"wb_ready_i", false,-1);
    tracep->declBus(c+835,"op_i", false,-1, 6,0);
    tracep->declBus(c+836,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+264,"imm_i", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+304,"r1_i", false,-1, 31,0);
    tracep->declBus(c+305,"r2_i", false,-1, 31,0);
    tracep->declBit(c+837,"ls_read_o", false,-1);
    tracep->declBit(c+838,"ls_write_o", false,-1);
    tracep->declBit(c+912,"ls_done_i", false,-1);
    tracep->declBit(c+839,"ls_valid_o", false,-1);
    tracep->declBit(c+840,"ls_wen_o", false,-1);
    tracep->declBus(c+841,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+402,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+842,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+843,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+844,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+845,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1438,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1438,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1425,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1425,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+678,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+932,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1140,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+270,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+272,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+274,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+276,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+271,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+278,"gpr_wen_o", false,-1);
    tracep->declBit(c+279,"mepc_wen_o", false,-1);
    tracep->declBit(c+280,"mstatus_wen_o", false,-1);
    tracep->declBit(c+281,"mcause_wen_o", false,-1);
    tracep->declBit(c+282,"mtvec_wen_o", false,-1);
    tracep->declBit(c+834,"ex_ready", false,-1);
    tracep->declBit(c+267,"ex_valid", false,-1);
    tracep->declBit(c+847,"al_start", false,-1);
    tracep->declBit(c+913,"al_done", false,-1);
    tracep->declBit(c+837,"ls_read_reg", false,-1);
    tracep->declBit(c+838,"ls_write_reg", false,-1);
    tracep->declBus(c+269,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1140,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+278,"gpr_wen_reg", false,-1);
    tracep->declBus(c+271,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+279,"mepc_wen_reg", false,-1);
    tracep->declBit(c+280,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+281,"mcause_wen_reg", false,-1);
    tracep->declBit(c+282,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+311,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1426,"READY", false,-1, 1,0);
    tracep->declBus(c+1427,"DONE", false,-1, 1,0);
    tracep->declBus(c+848,"state", false,-1, 1,0);
    tracep->declBus(c+1389,"next_state", false,-1, 1,0);
    tracep->declBit(c+849,"al_valid", false,-1);
    tracep->declBus(c+312,"al_res", false,-1, 31,0);
    tracep->declBus(c+1457,"a", false,-1, 31,0);
    tracep->declBus(c+1458,"b", false,-1, 31,0);
    tracep->declBus(c+937,"ex", false,-1, 31,0);
    tracep->declBus(c+850,"sel", false,-1, 3,0);
    tracep->declBus(c+851,"x", false,-1, 31,0);
    tracep->declBus(c+852,"y", false,-1, 31,0);
    tracep->declBus(c+693,"res", false,-1, 31,0);
    tracep->declBus(c+1436,"ADD", false,-1, 3,0);
    tracep->declBus(c+1459,"SUB", false,-1, 3,0);
    tracep->declBus(c+1460,"SLL", false,-1, 3,0);
    tracep->declBus(c+1461,"SRL", false,-1, 3,0);
    tracep->declBus(c+1462,"SRA", false,-1, 3,0);
    tracep->declBus(c+1463,"SLT", false,-1, 3,0);
    tracep->declBus(c+1464,"AND", false,-1, 3,0);
    tracep->declBus(c+1465,"OR", false,-1, 3,0);
    tracep->declBus(c+1466,"XOR", false,-1, 3,0);
    tracep->declBus(c+1467,"MUL", false,-1, 3,0);
    tracep->declBus(c+1468,"MULH", false,-1, 3,0);
    tracep->declBus(c+1469,"DIV", false,-1, 3,0);
    tracep->declBus(c+1470,"REM", false,-1, 3,0);
    tracep->declBus(c+853,"csr", false,-1, 31,0);
    tracep->declBus(c+1390,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+854,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+403,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+854,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+854,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+855,"mepc_wen", false,-1);
    tracep->declBit(c+856,"mstatus_wen", false,-1);
    tracep->declBit(c+857,"mcause_wen", false,-1);
    tracep->declBit(c+858,"mtvec_wen", false,-1);
    tracep->declBus(c+1391,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+264,"offset", false,-1, 31,0);
    tracep->declBit(c+859,"jalen", false,-1);
    tracep->declBit(c+860,"jalren", false,-1);
    tracep->declBit(c+404,"beqen", false,-1);
    tracep->declBit(c+405,"bneen", false,-1);
    tracep->declBit(c+406,"blten", false,-1);
    tracep->declBit(c+407,"bgeen", false,-1);
    tracep->declBit(c+408,"bltuen", false,-1);
    tracep->declBit(c+409,"bgeuen", false,-1);
    tracep->declBit(c+861,"ecall_en", false,-1);
    tracep->declBit(c+410,"mret_en", false,-1);
    tracep->declBus(c+938,"dnpc", false,-1, 31,0);
    tracep->declBit(c+862,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+851,"a", false,-1, 31,0);
    tracep->declBus(c+852,"b", false,-1, 31,0);
    tracep->declBus(c+850,"opcode", false,-1, 3,0);
    tracep->declBit(c+847,"start", false,-1);
    tracep->declBus(c+693,"res", false,-1, 31,0);
    tracep->declBit(c+913,"done", false,-1);
    tracep->declBus(c+1436,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1459,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1460,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1461,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1462,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1463,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1464,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1465,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1466,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1467,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1468,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1469,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1470,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1426,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1427,"NULL", false,-1, 1,0);
    tracep->declBus(c+694,"state", false,-1, 1,0);
    tracep->declBus(c+695,"a_reg", false,-1, 31,0);
    tracep->declBus(c+696,"b_reg", false,-1, 31,0);
    tracep->declBus(c+697,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+698,"mul_result", false,-1, 63,0);
    tracep->declBus(c+700,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+701,"dividend", false,-1, 31,0);
    tracep->declBus(c+702,"divisor", false,-1, 31,0);
    tracep->declBus(c+703,"quotient", false,-1, 31,0);
    tracep->declBus(c+704,"remainder", false,-1, 31,0);
    tracep->declBus(c+705,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1471,"n", false,-1, 31,0);
    tracep->declBus(c+1472,"m", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBit(c+1367,"m_axi_awready", false,-1);
    tracep->declBit(c+1429,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1436,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1450,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1438,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1439,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1424,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1368,"m_axi_wready", false,-1);
    tracep->declBit(c+1429,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1450,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1436,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1451,"m_axi_wlast", false,-1);
    tracep->declBit(c+1429,"m_axi_bready", false,-1);
    tracep->declBit(c+1369,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1363,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1370,"m_axi_arready", false,-1);
    tracep->declBit(c+935,"m_axi_arvalid", false,-1);
    tracep->declBus(c+258,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+934,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+257,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+259,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+260,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+936,"m_axi_rready", false,-1);
    tracep->declBit(c+1264,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1364,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1362,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1371,"m_axi_rlast", false,-1);
    tracep->declBit(c+1378,"s_axi_awready", false,-1);
    tracep->declBit(c+1452,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1436,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+948,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1438,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1439,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1424,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1379,"s_axi_wready", false,-1);
    tracep->declBit(c+1452,"s_axi_wvalid", false,-1);
    tracep->declBus(c+948,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1436,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+949,"s_axi_wlast", false,-1);
    tracep->declBit(c+1452,"s_axi_bready", false,-1);
    tracep->declBit(c+414,"s_axi_bvalid", false,-1);
    tracep->declBus(c+411,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+413,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1380,"s_axi_arready", false,-1);
    tracep->declBit(c+1038,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1374,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1372,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1373,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1375,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1376,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1039,"s_axi_rready", false,-1);
    tracep->declBit(c+1266,"s_axi_rvalid", false,-1);
    tracep->declBus(c+412,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1265,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1377,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+415,"s_axi_rlast", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+706+i*1,"cache_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+722+i*1,"tag_reg", true,(i+0), 25,0);
    }
    tracep->declBus(c+738,"valid_reg", false,-1, 15,0);
    tracep->declBus(c+939,"tag", false,-1, 25,0);
    tracep->declBus(c+940,"index", false,-1, 3,0);
    tracep->declBus(c+941,"offset", false,-1, 1,0);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1426,"RETURN", false,-1, 1,0);
    tracep->declBus(c+950,"state", false,-1, 1,0);
    tracep->declBit(c+1473,"cache_axi_awready", false,-1);
    tracep->declBit(c+1474,"cache_axi_wready", false,-1);
    tracep->declBit(c+1475,"cache_axi_bvalid", false,-1);
    tracep->declBit(c+951,"cache_axi_arready", false,-1);
    tracep->declBit(c+739,"cache_axi_rvalid", false,-1);
    tracep->declBit(c+1476,"cache_axi_rlast", false,-1);
    tracep->declBus(c+1477,"cache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+740,"cache_axi_rresp", false,-1, 1,0);
    tracep->declBus(c+1478,"cache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1479,"cache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+952,"cache_axi_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+741,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+911,"inst_i", false,-1, 31,0);
    tracep->declBit(c+947,"if_valid_i", false,-1);
    tracep->declBit(c+933,"id_ready_o", false,-1);
    tracep->declBit(c+833,"id_valid_o", false,-1);
    tracep->declBit(c+834,"ex_ready_i", false,-1);
    tracep->declBus(c+835,"op_o", false,-1, 6,0);
    tracep->declBus(c+261,"rd_o", false,-1, 4,0);
    tracep->declBus(c+836,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+262,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+263,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+264,"imm_o", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+914,"op", false,-1, 6,0);
    tracep->declBus(c+915,"rd", false,-1, 4,0);
    tracep->declBus(c+916,"funct3", false,-1, 2,0);
    tracep->declBus(c+917,"rs1", false,-1, 4,0);
    tracep->declBus(c+918,"rs2", false,-1, 4,0);
    tracep->declBus(c+919,"immI", false,-1, 31,0);
    tracep->declBus(c+920,"immU", false,-1, 31,0);
    tracep->declBus(c+921,"immS", false,-1, 31,0);
    tracep->declBus(c+922,"immB", false,-1, 31,0);
    tracep->declBus(c+923,"immJ", false,-1, 31,0);
    tracep->declBus(c+924,"imm", false,-1, 31,0);
    tracep->declBus(c+925,"funct7", false,-1, 6,0);
    tracep->declBus(c+926,"shamt", false,-1, 4,0);
    tracep->declBit(c+933,"id_ready_reg", false,-1);
    tracep->declBit(c+833,"id_valid_reg", false,-1);
    tracep->declBus(c+835,"op_reg", false,-1, 6,0);
    tracep->declBus(c+261,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+836,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+262,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+263,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+264,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1480,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+942,"state", false,-1);
    tracep->declBit(c+1392,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+932,"pc_i", false,-1, 31,0);
    tracep->declBus(c+911,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1141,"pc_valid_i", false,-1);
    tracep->declBit(c+1361,"if_ready_o", false,-1);
    tracep->declBit(c+947,"if_valid_o", false,-1);
    tracep->declBit(c+933,"id_ready_i", false,-1);
    tracep->declBit(c+1387,"wb_done_i", false,-1);
    tracep->declBit(c+1367,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1429,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1436,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1450,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1438,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1439,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1424,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1368,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1429,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1450,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1436,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1451,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1429,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1369,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1363,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1365,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1370,"if_axi_arready_i", false,-1);
    tracep->declBit(c+935,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+258,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+934,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+257,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+259,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+260,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+936,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1264,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1364,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1362,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1366,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1371,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1361,"if_ready_reg", false,-1);
    tracep->declBit(c+947,"if_valid_reg", false,-1);
    tracep->declBus(c+911,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1424,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1425,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1426,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1427,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1393,"state", false,-1, 1,0);
    tracep->declBus(c+1394,"next_state", false,-1, 1,0);
    tracep->declBit(c+935,"axi_arvalid", false,-1);
    tracep->declBit(c+936,"axi_rready", false,-1);
    tracep->declBus(c+258,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+934,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+257,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+259,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+260,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1480,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"FETCH", false,-1, 0,0);
    tracep->declBit(c+943,"axi_state", false,-1);
    tracep->declBit(c+953,"fetch_start", false,-1);
    tracep->declBus(c+944,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBit(c+837,"ls_read_i", false,-1);
    tracep->declBit(c+838,"ls_write_i", false,-1);
    tracep->declBit(c+912,"ls_done_o", false,-1);
    tracep->declBus(c+678,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+839,"valid_i", false,-1);
    tracep->declBit(c+840,"wen_i", false,-1);
    tracep->declBus(c+841,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+402,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+842,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+843,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+844,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+845,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1438,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1438,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1425,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1425,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1385,"ls_axi_awready", false,-1);
    tracep->declBit(c+687,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1453,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+679,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+681,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+683,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+685,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1040,"ls_axi_wready", false,-1);
    tracep->declBit(c+688,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1381,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1383,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+692,"ls_axi_wlast", false,-1);
    tracep->declBit(c+689,"ls_axi_bready", false,-1);
    tracep->declBit(c+1267,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+416,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+418,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1386,"ls_axi_arready", false,-1);
    tracep->declBit(c+690,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1454,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+680,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+682,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+684,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+686,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+691,"ls_axi_rready", false,-1);
    tracep->declBit(c+1268,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+417,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1382,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1384,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+419,"ls_axi_rlast", false,-1);
    tracep->declBit(c+912,"ls_done_reg", false,-1);
    tracep->declBus(c+678,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"READ", false,-1, 1,0);
    tracep->declBus(c+1426,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1427,"DONE", false,-1, 1,0);
    tracep->declBus(c+742,"state", false,-1, 1,0);
    tracep->declBit(c+687,"axi_awvalid", false,-1);
    tracep->declBit(c+688,"axi_wvalid", false,-1);
    tracep->declBus(c+1453,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+679,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+743,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+681,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+683,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+685,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+744,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+689,"axi_bready", false,-1);
    tracep->declBit(c+692,"axi_wlast", false,-1);
    tracep->declBit(c+690,"axi_arvalid", false,-1);
    tracep->declBit(c+691,"axi_rready", false,-1);
    tracep->declBus(c+1454,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+680,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+682,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+684,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+686,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+932,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1140,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1141,"pc_valid_o", false,-1);
    tracep->declBit(c+1361,"if_ready_i", false,-1);
    tracep->declBit(c+1141,"pc_valid_reg", false,-1);
    tracep->declBus(c+932,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1480,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1142,"state", false,-1);
    tracep->declBit(c+1395,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1482,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1483,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBus(c+293,"wdata", false,-1, 31,0);
    tracep->declBus(c+294,"waddr", false,-1, 4,0);
    tracep->declBit(c+295,"wen", false,-1);
    tracep->declBus(c+262,"raddr1", false,-1, 4,0);
    tracep->declBus(c+304,"r1", false,-1, 31,0);
    tracep->declBus(c+263,"raddr2", false,-1, 4,0);
    tracep->declBus(c+305,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+313+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBit(c+267,"ex_valid_i", false,-1);
    tracep->declBit(c+268,"wb_ready_o", false,-1);
    tracep->declBit(c+1387,"wb_done_o", false,-1);
    tracep->declBit(c+256,"difftest", false,-1);
    tracep->declBus(c+293,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+269,"ex_i", false,-1, 31,0);
    tracep->declBus(c+294,"rd_o", false,-1, 4,0);
    tracep->declBus(c+261,"rd_i", false,-1, 4,0);
    tracep->declBit(c+295,"gpr_wen_o", false,-1);
    tracep->declBit(c+278,"gpr_wen_i", false,-1);
    tracep->declBus(c+271,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+296,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+297,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+298,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+299,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+279,"mepc_wen_i", false,-1);
    tracep->declBit(c+280,"mstatus_wen_i", false,-1);
    tracep->declBit(c+281,"mcause_wen_i", false,-1);
    tracep->declBit(c+282,"mtvec_wen_i", false,-1);
    tracep->declBit(c+300,"mepc_wen_o", false,-1);
    tracep->declBit(c+301,"mstatus_wen_o", false,-1);
    tracep->declBit(c+302,"mcause_wen_o", false,-1);
    tracep->declBit(c+303,"mtvec_wen_o", false,-1);
    tracep->declBit(c+268,"wb_ready_reg", false,-1);
    tracep->declBit(c+1387,"wb_done_reg", false,-1);
    tracep->declBit(c+256,"difftest_reg", false,-1);
    tracep->declBus(c+293,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+294,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+295,"gpr_wen_reg", false,-1);
    tracep->declBus(c+296,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+297,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+298,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+299,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+300,"mepc_wen_reg", false,-1);
    tracep->declBit(c+301,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+302,"mcause_wen_reg", false,-1);
    tracep->declBit(c+303,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1426,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1427,"NULL", false,-1, 1,0);
    tracep->declBus(c+1396,"state", false,-1, 1,0);
    tracep->declBus(c+1397,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBit(c+1378,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1452,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1436,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+948,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1438,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1439,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1424,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1379,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1452,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+948,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1436,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+949,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1452,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+414,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+411,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+413,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1380,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1038,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1374,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1372,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1373,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1375,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1376,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1039,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1266,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+412,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1265,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1377,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+415,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1385,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+687,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1453,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+679,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+681,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+683,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+685,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1040,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+688,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1381,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1383,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+692,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+689,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1267,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+416,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+418,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1386,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+690,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1454,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+680,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+682,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+684,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+686,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+691,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1268,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+417,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1382,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1384,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+419,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+831,"io_master_awready", false,-1);
    tracep->declBit(c+972,"io_master_awvalid", false,-1);
    tracep->declBus(c+973,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+974,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+975,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+976,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+977,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+22,"io_master_wready", false,-1);
    tracep->declBit(c+978,"io_master_wvalid", false,-1);
    tracep->declBus(c+979,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+980,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+981,"io_master_wlast", false,-1);
    tracep->declBit(c+982,"io_master_bready", false,-1);
    tracep->declBit(c+1180,"io_master_bvalid", false,-1);
    tracep->declBus(c+1181,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1353,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_arready", false,-1);
    tracep->declBit(c+983,"io_master_arvalid", false,-1);
    tracep->declBus(c+984,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+985,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+986,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+987,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+989,"io_master_rready", false,-1);
    tracep->declBit(c+1182,"io_master_rvalid", false,-1);
    tracep->declBus(c+1183,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1354,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1355,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1356,"io_master_rlast", false,-1);
    tracep->declBit(c+846,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1053,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1047,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1041,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1045,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1049,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1051,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+288,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1054,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1042,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1044,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1058,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1055,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+289,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+284,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+290,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1056,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1048,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1043,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1046,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1050,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1052,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1057,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+291,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+285,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+283,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+287,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+292,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+306,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+307,"marchid", false,-1, 31,0);
    tracep->declBus(c+1059,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1060,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1061,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1269,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1062,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1063,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1064,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+945,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1398,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1065,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1399,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1066,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1067,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1068,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1069,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1400,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1401,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1070,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1402,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1071,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1403,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1404,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1072,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1073,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1074,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1270,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1075,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1076,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1405,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1424,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1425,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1426,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1427,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+946,"state", false,-1, 1,0);
    tracep->declBus(c+1406,"next_state", false,-1, 1,0);
    tracep->declBus(c+1455,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1456,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1077,"sel_clint", false,-1);
    tracep->declBus(c+1484,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1485,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1078,"sel_mvendorid", false,-1);
    tracep->declBit(c+1079,"sel_marchid", false,-1);
    tracep->declBit(c+1080,"sel_id", false,-1);
    tracep->declBus(c+1081,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1082,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1083,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1407,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1084,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1085,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1086,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1087,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1486,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1088,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1487,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1089,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1090,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1091,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1092,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1488,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1489,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1490,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1434,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1093,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1434,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1434,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1094,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1095,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1434,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1434,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1096,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1097,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1491,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1492,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+1437,"din", false,-1, 31,0);
    tracep->declBus(c+307,"dout", false,-1, 31,0);
    tracep->declBit(c+1429,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1437,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+298,"din", false,-1, 31,0);
    tracep->declBus(c+274,"dout", false,-1, 31,0);
    tracep->declBit(c+302,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1437,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+296,"din", false,-1, 31,0);
    tracep->declBus(c+270,"dout", false,-1, 31,0);
    tracep->declBit(c+300,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1493,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+297,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+301,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1437,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+303,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1483,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1494,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1360,"rst", false,-1);
    tracep->declBus(c+1437,"din", false,-1, 31,0);
    tracep->declBus(c+306,"dout", false,-1, 31,0);
    tracep->declBit(c+1429,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"io_d", false,-1);
    tracep->declBit(c+345,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"io_d", false,-1);
    tracep->declBit(c+345,"io_q", false,-1);
    tracep->declBit(c+345,"sync_0", false,-1);
    tracep->declBit(c+346,"sync_1", false,-1);
    tracep->declBit(c+347,"sync_2", false,-1);
    tracep->declBit(c+348,"sync_3", false,-1);
    tracep->declBit(c+349,"sync_4", false,-1);
    tracep->declBit(c+350,"sync_5", false,-1);
    tracep->declBit(c+351,"sync_6", false,-1);
    tracep->declBit(c+352,"sync_7", false,-1);
    tracep->declBit(c+353,"sync_8", false,-1);
    tracep->declBit(c+354,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1158,"auto_in_psel", false,-1);
    tracep->declBit(c+1159,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"auto_in_pready", false,-1);
    tracep->declBit(c+1433,"auto_in_pslverr", false,-1);
    tracep->declBus(c+437,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1325,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1326,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1328,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1136,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1158,"in_psel", false,-1);
    tracep->declBit(c+1159,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"in_pready", false,-1);
    tracep->declBus(c+437,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1433,"in_pslverr", false,-1);
    tracep->declBus(c+1325,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1326,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1327,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1328,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1329,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1330,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1331,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1332,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1333,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1334,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1438,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1495,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1496,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1497,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1498,"ONE", false,-1, 7,0);
    tracep->declBus(c+1499,"TWO", false,-1, 7,0);
    tracep->declBus(c+1500,"THREE", false,-1, 7,0);
    tracep->declBus(c+1501,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1502,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1503,"SIX", false,-1, 7,0);
    tracep->declBus(c+1504,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1505,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1506,"NINE", false,-1, 7,0);
    tracep->declBus(c+1507,"A", false,-1, 7,0);
    tracep->declBus(c+1508,"B", false,-1, 7,0);
    tracep->declBus(c+1509,"C", false,-1, 7,0);
    tracep->declBus(c+1510,"D", false,-1, 7,0);
    tracep->declBus(c+1511,"E", false,-1, 7,0);
    tracep->declBus(c+1512,"F", false,-1, 7,0);
    tracep->declBus(c+439,"led_reg", false,-1, 15,0);
    tracep->declBus(c+440,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+441+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1271,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1272,"write_en", false,-1);
    tracep->declBit(c+1273,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1156,"auto_in_psel", false,-1);
    tracep->declBit(c+1157,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"auto_in_pready", false,-1);
    tracep->declBit(c+1432,"auto_in_pslverr", false,-1);
    tracep->declBus(c+435,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1335,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1336,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1136,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1156,"in_psel", false,-1);
    tracep->declBit(c+1157,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"in_pready", false,-1);
    tracep->declBus(c+435,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1432,"in_pslverr", false,-1);
    tracep->declBit(c+1335,"ps2_clk", false,-1);
    tracep->declBit(c+1336,"ps2_data", false,-1);
    tracep->declBus(c+1513,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1514,"EXP", false,-1, 7,0);
    tracep->declBus(c+927,"state", false,-1, 1,0);
    tracep->declBus(c+928,"counter", false,-1, 3,0);
    tracep->declBus(c+929,"buffer", false,-1, 7,0);
    tracep->declBus(c+930,"buffer1", false,-1, 7,0);
    tracep->declBus(c+931,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1408,"ready", false,-1);
    tracep->declBus(c+1409,"rdata", false,-1, 31,0);
    tracep->declBit(c+1274,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1020,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1021,"auto_in_wvalid", false,-1);
    tracep->declBit(c+72,"auto_in_arready", false,-1);
    tracep->declBit(c+1022,"auto_in_arvalid", false,-1);
    tracep->declBus(c+969,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1023,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1359,"auto_in_rready", false,-1);
    tracep->declBit(c+73,"auto_in_rvalid", false,-1);
    tracep->declBus(c+74,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+73,"state", false,-1);
    tracep->declBus(c+75,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+74,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1098,"raddr", false,-1, 31,0);
    tracep->declBit(c+1099,"ren", false,-1);
    tracep->declBus(c+1100,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1160,"auto_in_psel", false,-1);
    tracep->declBit(c+1161,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1101,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1349,"auto_in_pready", false,-1);
    tracep->declBit(c+1429,"auto_in_pslverr", false,-1);
    tracep->declBus(c+829,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1319,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1320,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1346,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1101,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1160,"in_psel", false,-1);
    tracep->declBit(c+1161,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1349,"in_pready", false,-1);
    tracep->declBus(c+829,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1429,"in_pslverr", false,-1);
    tracep->declBit(c+1319,"qspi_sck", false,-1);
    tracep->declBit(c+1320,"qspi_ce_n", false,-1);
    tracep->declBus(c+1346,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1346,"din", false,-1, 3,0);
    tracep->declBus(c+1321,"dout", false,-1, 3,0);
    tracep->declBus(c+1322,"douten", false,-1, 3,0);
    tracep->declBit(c+1410,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1323,"clk_i", false,-1);
    tracep->declBit(c+1324,"rst_i", false,-1);
    tracep->declBus(c+1101,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1147,"dat_i", false,-1, 31,0);
    tracep->declBus(c+829,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1148,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1160,"cyc_i", false,-1);
    tracep->declBit(c+1160,"stb_i", false,-1);
    tracep->declBit(c+1410,"ack_o", false,-1);
    tracep->declBit(c+1146,"we_i", false,-1);
    tracep->declBit(c+1319,"sck", false,-1);
    tracep->declBit(c+1320,"ce_n", false,-1);
    tracep->declBus(c+1346,"din", false,-1, 3,0);
    tracep->declBus(c+1321,"dout", false,-1, 3,0);
    tracep->declBus(c+1322,"douten", false,-1, 3,0);
    tracep->declBus(c+1480,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+449,"mr_sck", false,-1);
    tracep->declBit(c+450,"mr_ce_n", false,-1);
    tracep->declBus(c+1346,"mr_din", false,-1, 3,0);
    tracep->declBus(c+451,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+452,"mr_doe", false,-1);
    tracep->declBit(c+453,"mw_sck", false,-1);
    tracep->declBit(c+454,"mw_ce_n", false,-1);
    tracep->declBus(c+1346,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1275,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+455,"mw_doe", false,-1);
    tracep->declBit(c+1276,"mr_rd", false,-1);
    tracep->declBit(c+456,"mr_done", false,-1);
    tracep->declBit(c+1277,"mw_wr", false,-1);
    tracep->declBit(c+1278,"mw_done", false,-1);
    tracep->declBit(c+1160,"wb_valid", false,-1);
    tracep->declBit(c+1279,"wb_we", false,-1);
    tracep->declBit(c+1280,"wb_re", false,-1);
    tracep->declBit(c+457,"state", false,-1);
    tracep->declBit(c+1281,"nstate", false,-1);
    tracep->declBus(c+1282,"size", false,-1, 2,0);
    tracep->declBus(c+1283,"byte0", false,-1, 7,0);
    tracep->declBus(c+1284,"byte1", false,-1, 7,0);
    tracep->declBus(c+1285,"byte2", false,-1, 7,0);
    tracep->declBus(c+1286,"byte3", false,-1, 7,0);
    tracep->declBus(c+1137,"wdata", false,-1, 31,0);
    tracep->declBit(c+672,"qpi_flag", false,-1);
    tracep->declBit(c+673,"qpi_sck", false,-1);
    tracep->declBit(c+674,"qpi_ce_n", false,-1);
    tracep->declBus(c+675,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+676,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+677,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1411,"rst_n", false,-1);
    tracep->declBus(c+1138,"addr", false,-1, 23,0);
    tracep->declBit(c+1276,"rd", false,-1);
    tracep->declBus(c+1515,"size", false,-1, 2,0);
    tracep->declBit(c+456,"done", false,-1);
    tracep->declBus(c+829,"line", false,-1, 31,0);
    tracep->declBit(c+449,"sck", false,-1);
    tracep->declBit(c+450,"ce_n", false,-1);
    tracep->declBus(c+1346,"din", false,-1, 3,0);
    tracep->declBus(c+451,"dout", false,-1, 3,0);
    tracep->declBit(c+452,"douten", false,-1);
    tracep->declBus(c+1480,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"READ", false,-1, 0,0);
    tracep->declBus(c+1516,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+458,"state", false,-1);
    tracep->declBit(c+1287,"nstate", false,-1);
    tracep->declBus(c+459,"counter", false,-1, 7,0);
    tracep->declBus(c+460,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+863+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1517,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+461,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1411,"rst_n", false,-1);
    tracep->declBus(c+1139,"addr", false,-1, 23,0);
    tracep->declBus(c+1137,"line", false,-1, 31,0);
    tracep->declBus(c+1282,"size", false,-1, 2,0);
    tracep->declBit(c+1277,"wr", false,-1);
    tracep->declBit(c+1278,"done", false,-1);
    tracep->declBit(c+453,"sck", false,-1);
    tracep->declBit(c+454,"ce_n", false,-1);
    tracep->declBus(c+1346,"din", false,-1, 3,0);
    tracep->declBus(c+1275,"dout", false,-1, 3,0);
    tracep->declBit(c+455,"douten", false,-1);
    tracep->declBus(c+1480,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1481,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1288,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+462,"state", false,-1);
    tracep->declBit(c+1289,"nstate", false,-1);
    tracep->declBus(c+463,"counter", false,-1, 7,0);
    tracep->declBus(c+464,"saddr", false,-1, 23,0);
    tracep->declBus(c+1518,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1151,"auto_in_psel", false,-1);
    tracep->declBit(c+1152,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1101,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"auto_in_pready", false,-1);
    tracep->declBit(c+1429,"auto_in_pslverr", false,-1);
    tracep->declBus(c+432,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1347,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+422,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+868,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+869,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+870,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+871,"sdram_bundle_we", false,-1);
    tracep->declBus(c+872,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+873,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+423,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+897,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1101,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1151,"in_psel", false,-1);
    tracep->declBit(c+1152,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+431,"in_pready", false,-1);
    tracep->declBus(c+432,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1429,"in_pslverr", false,-1);
    tracep->declBit(c+1347,"sdram_clk", false,-1);
    tracep->declBit(c+422,"sdram_cke", false,-1);
    tracep->declBit(c+868,"sdram_cs", false,-1);
    tracep->declBit(c+869,"sdram_ras", false,-1);
    tracep->declBit(c+870,"sdram_cas", false,-1);
    tracep->declBit(c+871,"sdram_we", false,-1);
    tracep->declBus(c+872,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+873,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+423,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+897,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+465,"sdram_dout_en", false,-1);
    tracep->declBus(c+466,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+355,"state", false,-1, 1,0);
    tracep->declBit(c+874,"req_accept", false,-1);
    tracep->declBit(c+1290,"is_read", false,-1);
    tracep->declBit(c+1291,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1323,"clk_i", false,-1);
    tracep->declBit(c+1324,"rst_i", false,-1);
    tracep->declBus(c+1292,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1290,"inport_rd_i", false,-1);
    tracep->declBus(c+1438,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1101,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1147,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+897,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+874,"inport_accept_o", false,-1);
    tracep->declBit(c+431,"inport_ack_o", false,-1);
    tracep->declBit(c+1429,"inport_error_o", false,-1);
    tracep->declBus(c+432,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1347,"sdram_clk_o", false,-1);
    tracep->declBit(c+422,"sdram_cke_o", false,-1);
    tracep->declBit(c+868,"sdram_cs_o", false,-1);
    tracep->declBit(c+869,"sdram_ras_o", false,-1);
    tracep->declBit(c+870,"sdram_cas_o", false,-1);
    tracep->declBit(c+871,"sdram_we_o", false,-1);
    tracep->declBus(c+423,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+872,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+873,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+466,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+465,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1519,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1520,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1521,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1472,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1522,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1471,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1523,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1524,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1525,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1526,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1527,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1471,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1465,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1461,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1462,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1464,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1460,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1459,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1436,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1528,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1471,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1436,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1459,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1460,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1461,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1462,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1463,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1464,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1465,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1466,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1467,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1529,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1529,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1483,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1529,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1472,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1472,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1530,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1101,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1292,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1290,"ram_rd_w", false,-1);
    tracep->declBit(c+874,"ram_accept_w", false,-1);
    tracep->declBus(c+1147,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+432,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+431,"ram_ack_w", false,-1);
    tracep->declBit(c+1293,"ram_req_w", false,-1);
    tracep->declBus(c+875,"command_q", false,-1, 3,0);
    tracep->declBus(c+872,"addr_q", false,-1, 12,0);
    tracep->declBus(c+466,"data_q", false,-1, 31,0);
    tracep->declBit(c+467,"data_rd_en_q", false,-1);
    tracep->declBus(c+423,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+422,"cke_q", false,-1);
    tracep->declBus(c+873,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1531,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+468,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+897,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+469,"refresh_q", false,-1);
    tracep->declBus(c+876,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+470+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+877,"state_q", false,-1, 3,0);
    tracep->declBus(c+1294,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1295,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+478,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+479,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1296,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1297,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1298,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1471,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+480,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1299,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1532,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+878,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+481,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+432,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+482,"idx", false,-1, 31,0);
    tracep->declBus(c+483,"rd_q", false,-1, 3,0);
    tracep->declBit(c+431,"ack_q", false,-1);
    tracep->declArray(c+879,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1166,"auto_in_psel", false,-1);
    tracep->declBit(c+1167,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1155,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"auto_in_pready", false,-1);
    tracep->declBit(c+1429,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1168,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+420,"spi_bundle_sck", false,-1);
    tracep->declBus(c+421,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+867,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1345,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1533,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1534,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1523,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1300,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1166,"in_psel", false,-1);
    tracep->declBit(c+1167,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"in_pready", false,-1);
    tracep->declBus(c+1168,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1429,"in_pslverr", false,-1);
    tracep->declBit(c+420,"spi_sck", false,-1);
    tracep->declBus(c+421,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+867,"spi_mosi", false,-1);
    tracep->declBit(c+1345,"spi_miso", false,-1);
    tracep->declBit(c+484,"spi_irq_out", false,-1);
    tracep->declBus(c+1301,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1302,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1303,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1304,"wb_we_i", false,-1);
    tracep->declBit(c+1305,"wb_stb_i", false,-1);
    tracep->declBit(c+1306,"wb_cyc_i", false,-1);
    tracep->declBit(c+485,"wb_ack_o", false,-1);
    tracep->declBus(c+486,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1439,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1423,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1535,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1536,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1515,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1537,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1538,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1539,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+356,"state", false,-1, 2,0);
    tracep->declBus(c+357,"next_state", false,-1, 2,0);
    tracep->declBus(c+358,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+359,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+360,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+361,"flash_pwrite", false,-1);
    tracep->declBit(c+362,"flash_psel", false,-1);
    tracep->declBit(c+363,"flash_penable", false,-1);
    tracep->declBit(c+364,"flash_pready", false,-1);
    tracep->declBus(c+365,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1540,"Tp", false,-1, 31,0);
    tracep->declBit(c+1323,"wb_clk_i", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBus(c+1301,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1302,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+486,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1303,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1304,"wb_we_i", false,-1);
    tracep->declBit(c+1305,"wb_stb_i", false,-1);
    tracep->declBit(c+1306,"wb_cyc_i", false,-1);
    tracep->declBit(c+485,"wb_ack_o", false,-1);
    tracep->declBit(c+1429,"wb_err_o", false,-1);
    tracep->declBit(c+484,"wb_int_o", false,-1);
    tracep->declBus(c+421,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+420,"sclk_pad_o", false,-1);
    tracep->declBit(c+867,"mosi_pad_o", false,-1);
    tracep->declBit(c+1345,"miso_pad_i", false,-1);
    tracep->declBus(c+487,"divider", false,-1, 15,0);
    tracep->declBus(c+488,"ctrl", false,-1, 13,0);
    tracep->declBus(c+489,"ss", false,-1, 7,0);
    tracep->declBus(c+1307,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+490,"rx", false,-1, 127,0);
    tracep->declBit(c+494,"rx_negedge", false,-1);
    tracep->declBit(c+495,"tx_negedge", false,-1);
    tracep->declBus(c+496,"char_len", false,-1, 6,0);
    tracep->declBit(c+497,"go", false,-1);
    tracep->declBit(c+498,"lsb", false,-1);
    tracep->declBit(c+499,"ie", false,-1);
    tracep->declBit(c+500,"ass", false,-1);
    tracep->declBit(c+1308,"spi_divider_sel", false,-1);
    tracep->declBit(c+1309,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1310,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1311,"spi_ss_sel", false,-1);
    tracep->declBit(c+501,"tip", false,-1);
    tracep->declBit(c+502,"pos_edge", false,-1);
    tracep->declBit(c+503,"neg_edge", false,-1);
    tracep->declBit(c+504,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1540,"Tp", false,-1, 31,0);
    tracep->declBit(c+1323,"clk_in", false,-1);
    tracep->declBit(c+1324,"rst", false,-1);
    tracep->declBit(c+501,"enable", false,-1);
    tracep->declBit(c+497,"go", false,-1);
    tracep->declBit(c+504,"last_clk", false,-1);
    tracep->declBus(c+487,"divider", false,-1, 15,0);
    tracep->declBit(c+420,"clk_out", false,-1);
    tracep->declBit(c+502,"pos_edge", false,-1);
    tracep->declBit(c+503,"neg_edge", false,-1);
    tracep->declBus(c+505,"cnt", false,-1, 15,0);
    tracep->declBit(c+506,"cnt_zero", false,-1);
    tracep->declBit(c+507,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1540,"Tp", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"rst", false,-1);
    tracep->declBus(c+1312,"latch", false,-1, 3,0);
    tracep->declBus(c+1303,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+496,"len", false,-1, 6,0);
    tracep->declBit(c+498,"lsb", false,-1);
    tracep->declBit(c+497,"go", false,-1);
    tracep->declBit(c+502,"pos_edge", false,-1);
    tracep->declBit(c+503,"neg_edge", false,-1);
    tracep->declBit(c+494,"rx_negedge", false,-1);
    tracep->declBit(c+495,"tx_negedge", false,-1);
    tracep->declBit(c+501,"tip", false,-1);
    tracep->declBit(c+504,"last", false,-1);
    tracep->declBus(c+1302,"p_in", false,-1, 31,0);
    tracep->declArray(c+490,"p_out", false,-1, 127,0);
    tracep->declBit(c+420,"s_clk", false,-1);
    tracep->declBit(c+1345,"s_in", false,-1);
    tracep->declBit(c+867,"s_out", false,-1);
    tracep->declBus(c+508,"cnt", false,-1, 7,0);
    tracep->declArray(c+490,"data", false,-1, 127,0);
    tracep->declBus(c+509,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+510,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+511,"rx_clk", false,-1);
    tracep->declBit(c+512,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1162,"auto_in_psel", false,-1);
    tracep->declBit(c+1163,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_in_pready", false,-1);
    tracep->declBit(c+1429,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1165,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1343,"uart_rx", false,-1);
    tracep->declBit(c+1344,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1162,"in_psel", false,-1);
    tracep->declBit(c+1163,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1164,"in_pready", false,-1);
    tracep->declBit(c+1429,"in_pslverr", false,-1);
    tracep->declBus(c+1136,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1165,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1343,"uart_rx", false,-1);
    tracep->declBit(c+1344,"uart_tx", false,-1);
    tracep->declBit(c+513,"rtsn", false,-1);
    tracep->declBit(c+1429,"ctsn", false,-1);
    tracep->declBit(c+514,"dtr_pad_o", false,-1);
    tracep->declBit(c+1429,"dsr_pad_i", false,-1);
    tracep->declBit(c+1429,"ri_pad_i", false,-1);
    tracep->declBit(c+1429,"dcd_pad_i", false,-1);
    tracep->declBit(c+515,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1313,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1314,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+366,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1315,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+516,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBus(c+1313,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1316,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1315,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1344,"stx_pad_o", false,-1);
    tracep->declBit(c+1343,"srx_pad_i", false,-1);
    tracep->declBus(c+1466,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+516,"rts_pad_o", false,-1);
    tracep->declBit(c+514,"dtr_pad_o", false,-1);
    tracep->declBit(c+515,"int_o", false,-1);
    tracep->declBit(c+517,"enable", false,-1);
    tracep->declBit(c+518,"srx_pad", false,-1);
    tracep->declBus(c+519,"ier", false,-1, 3,0);
    tracep->declBus(c+520,"iir", false,-1, 3,0);
    tracep->declBus(c+521,"fcr", false,-1, 1,0);
    tracep->declBus(c+522,"mcr", false,-1, 4,0);
    tracep->declBus(c+523,"lcr", false,-1, 7,0);
    tracep->declBus(c+524,"msr", false,-1, 7,0);
    tracep->declBus(c+525,"dl", false,-1, 15,0);
    tracep->declBus(c+526,"scratch", false,-1, 7,0);
    tracep->declBit(c+527,"start_dlc", false,-1);
    tracep->declBit(c+528,"lsr_mask_d", false,-1);
    tracep->declBit(c+529,"msi_reset", false,-1);
    tracep->declBus(c+530,"dlc", false,-1, 15,0);
    tracep->declBus(c+531,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+532,"rx_reset", false,-1);
    tracep->declBit(c+533,"tx_reset", false,-1);
    tracep->declBit(c+534,"dlab", false,-1);
    tracep->declBit(c+1434,"cts_pad_i", false,-1);
    tracep->declBit(c+1429,"dsr_pad_i", false,-1);
    tracep->declBit(c+1429,"ri_pad_i", false,-1);
    tracep->declBit(c+1429,"dcd_pad_i", false,-1);
    tracep->declBit(c+535,"loopback", false,-1);
    tracep->declBit(c+1429,"cts", false,-1);
    tracep->declBit(c+1434,"dsr", false,-1);
    tracep->declBit(c+1434,"ri", false,-1);
    tracep->declBit(c+1434,"dcd", false,-1);
    tracep->declBit(c+536,"cts_c", false,-1);
    tracep->declBit(c+537,"dsr_c", false,-1);
    tracep->declBit(c+538,"ri_c", false,-1);
    tracep->declBit(c+539,"dcd_c", false,-1);
    tracep->declBus(c+540,"lsr", false,-1, 7,0);
    tracep->declBit(c+541,"lsr0", false,-1);
    tracep->declBit(c+542,"lsr1", false,-1);
    tracep->declBit(c+543,"lsr2", false,-1);
    tracep->declBit(c+544,"lsr3", false,-1);
    tracep->declBit(c+545,"lsr4", false,-1);
    tracep->declBit(c+546,"lsr5", false,-1);
    tracep->declBit(c+547,"lsr6", false,-1);
    tracep->declBit(c+548,"lsr7", false,-1);
    tracep->declBit(c+549,"lsr0r", false,-1);
    tracep->declBit(c+550,"lsr1r", false,-1);
    tracep->declBit(c+551,"lsr2r", false,-1);
    tracep->declBit(c+552,"lsr3r", false,-1);
    tracep->declBit(c+553,"lsr4r", false,-1);
    tracep->declBit(c+554,"lsr5r", false,-1);
    tracep->declBit(c+555,"lsr6r", false,-1);
    tracep->declBit(c+556,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+557,"rls_int", false,-1);
    tracep->declBit(c+558,"rda_int", false,-1);
    tracep->declBit(c+559,"ti_int", false,-1);
    tracep->declBit(c+560,"thre_int", false,-1);
    tracep->declBit(c+561,"ms_int", false,-1);
    tracep->declBit(c+562,"tf_push", false,-1);
    tracep->declBit(c+563,"rf_pop", false,-1);
    tracep->declBus(c+1412,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+564,"rf_error_bit", false,-1);
    tracep->declBit(c+542,"rf_overrun", false,-1);
    tracep->declBit(c+565,"rf_push_pulse", false,-1);
    tracep->declBus(c+566,"rf_count", false,-1, 4,0);
    tracep->declBus(c+567,"tf_count", false,-1, 4,0);
    tracep->declBus(c+568,"tstate", false,-1, 2,0);
    tracep->declBus(c+569,"rstate", false,-1, 3,0);
    tracep->declBus(c+570,"counter_t", false,-1, 9,0);
    tracep->declBit(c+571,"thre_set_en", false,-1);
    tracep->declBus(c+572,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+573,"block_value", false,-1, 7,0);
    tracep->declBit(c+574,"serial_out", false,-1);
    tracep->declBit(c+575,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+576,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+577,"lsr0_d", false,-1);
    tracep->declBit(c+578,"lsr1_d", false,-1);
    tracep->declBit(c+579,"lsr2_d", false,-1);
    tracep->declBit(c+580,"lsr3_d", false,-1);
    tracep->declBit(c+581,"lsr4_d", false,-1);
    tracep->declBit(c+582,"lsr5_d", false,-1);
    tracep->declBit(c+583,"lsr6_d", false,-1);
    tracep->declBit(c+584,"lsr7_d", false,-1);
    tracep->declBit(c+585,"rls_int_d", false,-1);
    tracep->declBit(c+586,"thre_int_d", false,-1);
    tracep->declBit(c+587,"ms_int_d", false,-1);
    tracep->declBit(c+588,"ti_int_d", false,-1);
    tracep->declBit(c+589,"rda_int_d", false,-1);
    tracep->declBit(c+590,"rls_int_rise", false,-1);
    tracep->declBit(c+591,"thre_int_rise", false,-1);
    tracep->declBit(c+592,"ms_int_rise", false,-1);
    tracep->declBit(c+593,"ti_int_rise", false,-1);
    tracep->declBit(c+594,"rda_int_rise", false,-1);
    tracep->declBit(c+595,"rls_int_pnd", false,-1);
    tracep->declBit(c+596,"rda_int_pnd", false,-1);
    tracep->declBit(c+597,"thre_int_pnd", false,-1);
    tracep->declBit(c+598,"ms_int_pnd", false,-1);
    tracep->declBit(c+599,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1540,"Tp", false,-1, 31,0);
    tracep->declBus(c+1540,"width", false,-1, 31,0);
    tracep->declBus(c+1481,"init_value", false,-1, 0,0);
    tracep->declBit(c+1324,"rst_i", false,-1);
    tracep->declBit(c+1323,"clk_i", false,-1);
    tracep->declBit(c+1429,"stage1_rst_i", false,-1);
    tracep->declBit(c+1434,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1343,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+518,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+600,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBus(c+523,"lcr", false,-1, 7,0);
    tracep->declBit(c+563,"rf_pop", false,-1);
    tracep->declBit(c+575,"srx_pad_i", false,-1);
    tracep->declBit(c+517,"enable", false,-1);
    tracep->declBit(c+532,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+570,"counter_t", false,-1, 9,0);
    tracep->declBus(c+566,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1412,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+542,"rf_overrun", false,-1);
    tracep->declBit(c+564,"rf_error_bit", false,-1);
    tracep->declBus(c+569,"rstate", false,-1, 3,0);
    tracep->declBit(c+565,"rf_push_pulse", false,-1);
    tracep->declBus(c+601,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+602,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+603,"rshift", false,-1, 7,0);
    tracep->declBit(c+604,"rparity", false,-1);
    tracep->declBit(c+605,"rparity_error", false,-1);
    tracep->declBit(c+606,"rframing_error", false,-1);
    tracep->declBit(c+607,"rbit_in", false,-1);
    tracep->declBit(c+608,"rparity_xor", false,-1);
    tracep->declBus(c+609,"counter_b", false,-1, 7,0);
    tracep->declBit(c+610,"rf_push_q", false,-1);
    tracep->declBus(c+611,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+612,"rf_push", false,-1);
    tracep->declBit(c+613,"break_error", false,-1);
    tracep->declBit(c+614,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+615,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+616,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+617,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1436,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1459,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1460,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1461,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1462,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1463,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1464,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1465,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1466,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1467,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1468,"sr_push", false,-1, 3,0);
    tracep->declBus(c+618,"toc_value", false,-1, 9,0);
    tracep->declBus(c+619,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1541,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1542,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1471,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1482,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBit(c+565,"push", false,-1);
    tracep->declBit(c+563,"pop", false,-1);
    tracep->declBus(c+611,"data_in", false,-1, 10,0);
    tracep->declBit(c+532,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1412,"data_out", false,-1, 10,0);
    tracep->declBit(c+542,"overrun", false,-1);
    tracep->declBus(c+566,"count", false,-1, 4,0);
    tracep->declBit(c+564,"error_bit", false,-1);
    tracep->declBus(c+1413,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+620+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+636,"top", false,-1, 3,0);
    tracep->declBus(c+637,"bottom", false,-1, 3,0);
    tracep->declBus(c+638,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+639,"word0", false,-1, 2,0);
    tracep->declBus(c+640,"word1", false,-1, 2,0);
    tracep->declBus(c+641,"word2", false,-1, 2,0);
    tracep->declBus(c+642,"word3", false,-1, 2,0);
    tracep->declBus(c+643,"word4", false,-1, 2,0);
    tracep->declBus(c+644,"word5", false,-1, 2,0);
    tracep->declBus(c+645,"word6", false,-1, 2,0);
    tracep->declBus(c+646,"word7", false,-1, 2,0);
    tracep->declBus(c+647,"word8", false,-1, 2,0);
    tracep->declBus(c+648,"word9", false,-1, 2,0);
    tracep->declBus(c+649,"word10", false,-1, 2,0);
    tracep->declBus(c+650,"word11", false,-1, 2,0);
    tracep->declBus(c+651,"word12", false,-1, 2,0);
    tracep->declBus(c+652,"word13", false,-1, 2,0);
    tracep->declBus(c+653,"word14", false,-1, 2,0);
    tracep->declBus(c+654,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1471,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1523,"data_width", false,-1, 31,0);
    tracep->declBus(c+1542,"depth", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+565,"we", false,-1);
    tracep->declBus(c+636,"a", false,-1, 3,0);
    tracep->declBus(c+637,"dpra", false,-1, 3,0);
    tracep->declBus(c+655,"di", false,-1, 7,0);
    tracep->declBus(c+1413,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+367+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBus(c+523,"lcr", false,-1, 7,0);
    tracep->declBit(c+562,"tf_push", false,-1);
    tracep->declBus(c+1316,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+517,"enable", false,-1);
    tracep->declBit(c+533,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+574,"stx_pad_o", false,-1);
    tracep->declBus(c+568,"tstate", false,-1, 2,0);
    tracep->declBus(c+567,"tf_count", false,-1, 4,0);
    tracep->declBus(c+656,"counter", false,-1, 4,0);
    tracep->declBus(c+657,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+658,"shift_out", false,-1, 6,0);
    tracep->declBit(c+659,"stx_o_tmp", false,-1);
    tracep->declBit(c+660,"parity_xor", false,-1);
    tracep->declBit(c+661,"tf_pop", false,-1);
    tracep->declBit(c+662,"bit_out", false,-1);
    tracep->declBus(c+1316,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1414,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+663,"tf_overrun", false,-1);
    tracep->declBus(c+1439,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1423,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1535,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1536,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1515,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1537,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1523,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1542,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1471,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1482,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+1324,"wb_rst_i", false,-1);
    tracep->declBit(c+562,"push", false,-1);
    tracep->declBit(c+661,"pop", false,-1);
    tracep->declBus(c+1316,"data_in", false,-1, 7,0);
    tracep->declBit(c+533,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1414,"data_out", false,-1, 7,0);
    tracep->declBit(c+663,"overrun", false,-1);
    tracep->declBus(c+567,"count", false,-1, 4,0);
    tracep->declBus(c+664,"top", false,-1, 3,0);
    tracep->declBus(c+665,"bottom", false,-1, 3,0);
    tracep->declBus(c+666,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1471,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1523,"data_width", false,-1, 31,0);
    tracep->declBus(c+1542,"depth", false,-1, 31,0);
    tracep->declBit(c+1323,"clk", false,-1);
    tracep->declBit(c+562,"we", false,-1);
    tracep->declBus(c+664,"a", false,-1, 3,0);
    tracep->declBus(c+665,"dpra", false,-1, 3,0);
    tracep->declBus(c+1316,"di", false,-1, 7,0);
    tracep->declBus(c+1414,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+383+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBit(c+1153,"auto_in_psel", false,-1);
    tracep->declBit(c+1154,"auto_in_penable", false,-1);
    tracep->declBit(c+1146,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1155,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1145,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1147,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"auto_in_pready", false,-1);
    tracep->declBit(c+1430,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1431,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1337,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1338,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1340,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1341,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1342,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1323,"clock", false,-1);
    tracep->declBit(c+1324,"reset", false,-1);
    tracep->declBus(c+1300,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1153,"in_psel", false,-1);
    tracep->declBit(c+1154,"in_penable", false,-1);
    tracep->declBus(c+1145,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1146,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1148,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+433,"in_pready", false,-1);
    tracep->declBus(c+1431,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1430,"in_pslverr", false,-1);
    tracep->declBus(c+1337,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1338,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1339,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1340,"vga_hsync", false,-1);
    tracep->declBit(c+1341,"vga_vsync", false,-1);
    tracep->declBit(c+1342,"vga_valid", false,-1);
    tracep->declBit(c+1317,"is_write", false,-1);
    tracep->declBus(c+1318,"addr", false,-1, 31,0);
    tracep->declBit(c+433,"ready", false,-1);
    tracep->declBus(c+667,"i", false,-1, 31,0);
    tracep->declBus(c+1543,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1544,"h_active", false,-1, 31,0);
    tracep->declBus(c+1545,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1546,"h_total", false,-1, 31,0);
    tracep->declBus(c+1472,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1547,"v_active", false,-1, 31,0);
    tracep->declBus(c+1548,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1549,"v_total", false,-1, 31,0);
    tracep->declBus(c+668,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+399,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+669,"h_valid", false,-1);
    tracep->declBit(c+400,"v_valid", false,-1);
    tracep->declBus(c+670,"h_addr", false,-1, 9,0);
    tracep->declBus(c+401,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1415,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+420,"sck", false,-1);
    tracep->declBit(c+882,"ss", false,-1);
    tracep->declBit(c+867,"mosi", false,-1);
    tracep->declBit(c+823,"miso", false,-1);
    tracep->declBus(c+824,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+825,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+826,"counter", false,-1, 2,0);
    tracep->declBit(c+827,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+420,"sck", false,-1);
    tracep->declBit(c+671,"ss", false,-1);
    tracep->declBit(c+867,"mosi", false,-1);
    tracep->declBit(c+1416,"miso", false,-1);
    tracep->declBit(c+671,"reset", false,-1);
    tracep->declBus(c+817,"state", false,-1, 2,0);
    tracep->declBus(c+818,"counter", false,-1, 7,0);
    tracep->declBus(c+819,"cmd", false,-1, 7,0);
    tracep->declBus(c+820,"addr", false,-1, 23,0);
    tracep->declBus(c+821,"data", false,-1, 31,0);
    tracep->declBit(c+822,"ren", false,-1);
    tracep->declBus(c+1417,"rdata", false,-1, 31,0);
    tracep->declBus(c+1418,"raddr", false,-1, 31,0);
    tracep->declBus(c+1419,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+420,"clock", false,-1);
    tracep->declBit(c+822,"valid", false,-1);
    tracep->declBus(c+819,"cmd", false,-1, 7,0);
    tracep->declBus(c+1418,"addr", false,-1, 31,0);
    tracep->declBus(c+1417,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1319,"sck", false,-1);
    tracep->declBit(c+1320,"ce_n", false,-1);
    tracep->declBus(c+1346,"dio", false,-1, 3,0);
    tracep->declBit(c+1320,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+900,"cmd", false,-1, 7,0);
    tracep->declBus(c+901,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+902+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1420,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1421,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+906,"ren", false,-1);
    tracep->declBit(c+907,"wen", false,-1);
    tracep->declBus(c+908,"len", false,-1, 7,0);
    tracep->declBus(c+1422,"rdata", false,-1, 31,0);
    tracep->declBus(c+909,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1319,"clock", false,-1);
    tracep->declBit(c+906,"ren", false,-1);
    tracep->declBit(c+907,"wen", false,-1);
    tracep->declBus(c+900,"cmd", false,-1, 7,0);
    tracep->declBus(c+909,"saddr", false,-1, 31,0);
    tracep->declBus(c+1422,"rdata", false,-1, 31,0);
    tracep->declBus(c+910,"wdata", false,-1, 31,0);
    tracep->declBus(c+908,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1347,"clk", false,-1);
    tracep->declBit(c+422,"cke", false,-1);
    tracep->declBit(c+868,"cs", false,-1);
    tracep->declBit(c+869,"ras", false,-1);
    tracep->declBit(c+870,"cas", false,-1);
    tracep->declBit(c+871,"we", false,-1);
    tracep->declBus(c+872,"a", false,-1, 12,0);
    tracep->declBus(c+883,"ba", false,-1, 1,0);
    tracep->declBus(c+884,"dqm", false,-1, 1,0);
    tracep->declBus(c+898,"dq", false,-1, 15,0);
    tracep->declBit(c+885,"reset", false,-1);
    tracep->declBus(c+745,"state", false,-1, 2,0);
    tracep->declBus(c+746,"counter", false,-1, 7,0);
    tracep->declBus(c+747,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1550,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+748,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+749,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+886,"nop", false,-1);
    tracep->declBit(c+887,"active", false,-1);
    tracep->declBit(c+888,"precharge", false,-1);
    tracep->declBit(c+889,"read", false,-1);
    tracep->declBit(c+890,"write", false,-1);
    tracep->declBit(c+891,"burstterm", false,-1);
    tracep->declBit(c+892,"autorefresh", false,-1);
    tracep->declBit(c+893,"mode", false,-1);
    tracep->declBus(c+750,"test", false,-1, 15,0);
    tracep->declBit(c+751,"write_burst_mode", false,-1);
    tracep->declBus(c+752,"op_mode", false,-1, 1,0);
    tracep->declBus(c+753,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+754,"burst_type", false,-1);
    tracep->declBus(c+755,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+756,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+757,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+758,"bank", false,-1, 1,0);
    tracep->declBus(c+759,"row", false,-1, 12,0);
    tracep->declBus(c+760,"column", false,-1, 8,0);
    tracep->declBus(c+761,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+762,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1347,"clk", false,-1);
    tracep->declBit(c+422,"cke", false,-1);
    tracep->declBit(c+868,"cs", false,-1);
    tracep->declBit(c+869,"ras", false,-1);
    tracep->declBit(c+870,"cas", false,-1);
    tracep->declBit(c+871,"we", false,-1);
    tracep->declBus(c+872,"a", false,-1, 12,0);
    tracep->declBus(c+883,"ba", false,-1, 1,0);
    tracep->declBus(c+894,"dqm", false,-1, 1,0);
    tracep->declBus(c+899,"dq", false,-1, 15,0);
    tracep->declBit(c+885,"reset", false,-1);
    tracep->declBus(c+763,"state", false,-1, 2,0);
    tracep->declBus(c+764,"counter", false,-1, 7,0);
    tracep->declBus(c+765,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1551,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+766,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+767,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+886,"nop", false,-1);
    tracep->declBit(c+887,"active", false,-1);
    tracep->declBit(c+888,"precharge", false,-1);
    tracep->declBit(c+889,"read", false,-1);
    tracep->declBit(c+890,"write", false,-1);
    tracep->declBit(c+891,"burstterm", false,-1);
    tracep->declBit(c+892,"autorefresh", false,-1);
    tracep->declBit(c+893,"mode", false,-1);
    tracep->declBus(c+768,"test", false,-1, 15,0);
    tracep->declBit(c+769,"write_burst_mode", false,-1);
    tracep->declBus(c+770,"op_mode", false,-1, 1,0);
    tracep->declBus(c+771,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+772,"burst_type", false,-1);
    tracep->declBus(c+773,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+774,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+775,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+776,"bank", false,-1, 1,0);
    tracep->declBus(c+777,"row", false,-1, 12,0);
    tracep->declBus(c+778,"column", false,-1, 8,0);
    tracep->declBus(c+779,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+780,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1347,"clk", false,-1);
    tracep->declBit(c+422,"cke", false,-1);
    tracep->declBit(c+868,"cs", false,-1);
    tracep->declBit(c+869,"ras", false,-1);
    tracep->declBit(c+870,"cas", false,-1);
    tracep->declBit(c+871,"we", false,-1);
    tracep->declBus(c+872,"a", false,-1, 12,0);
    tracep->declBus(c+883,"ba", false,-1, 1,0);
    tracep->declBus(c+895,"dqm", false,-1, 1,0);
    tracep->declBus(c+898,"dq", false,-1, 15,0);
    tracep->declBit(c+885,"reset", false,-1);
    tracep->declBus(c+781,"state", false,-1, 2,0);
    tracep->declBus(c+782,"counter", false,-1, 7,0);
    tracep->declBus(c+783,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1552,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+784,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+785,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+886,"nop", false,-1);
    tracep->declBit(c+887,"active", false,-1);
    tracep->declBit(c+888,"precharge", false,-1);
    tracep->declBit(c+889,"read", false,-1);
    tracep->declBit(c+890,"write", false,-1);
    tracep->declBit(c+891,"burstterm", false,-1);
    tracep->declBit(c+892,"autorefresh", false,-1);
    tracep->declBit(c+893,"mode", false,-1);
    tracep->declBus(c+786,"test", false,-1, 15,0);
    tracep->declBit(c+787,"write_burst_mode", false,-1);
    tracep->declBus(c+788,"op_mode", false,-1, 1,0);
    tracep->declBus(c+789,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+790,"burst_type", false,-1);
    tracep->declBus(c+791,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+792,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+793,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+794,"bank", false,-1, 1,0);
    tracep->declBus(c+795,"row", false,-1, 12,0);
    tracep->declBus(c+796,"column", false,-1, 8,0);
    tracep->declBus(c+797,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+798,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1347,"clk", false,-1);
    tracep->declBit(c+422,"cke", false,-1);
    tracep->declBit(c+868,"cs", false,-1);
    tracep->declBit(c+869,"ras", false,-1);
    tracep->declBit(c+870,"cas", false,-1);
    tracep->declBit(c+871,"we", false,-1);
    tracep->declBus(c+872,"a", false,-1, 12,0);
    tracep->declBus(c+883,"ba", false,-1, 1,0);
    tracep->declBus(c+896,"dqm", false,-1, 1,0);
    tracep->declBus(c+899,"dq", false,-1, 15,0);
    tracep->declBit(c+885,"reset", false,-1);
    tracep->declBus(c+799,"state", false,-1, 2,0);
    tracep->declBus(c+800,"counter", false,-1, 7,0);
    tracep->declBus(c+801,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1553,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+802,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+803,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+886,"nop", false,-1);
    tracep->declBit(c+887,"active", false,-1);
    tracep->declBit(c+888,"precharge", false,-1);
    tracep->declBit(c+889,"read", false,-1);
    tracep->declBit(c+890,"write", false,-1);
    tracep->declBit(c+891,"burstterm", false,-1);
    tracep->declBit(c+892,"autorefresh", false,-1);
    tracep->declBit(c+893,"mode", false,-1);
    tracep->declBus(c+804,"test", false,-1, 15,0);
    tracep->declBit(c+805,"write_burst_mode", false,-1);
    tracep->declBus(c+806,"op_mode", false,-1, 1,0);
    tracep->declBus(c+807,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+808,"burst_type", false,-1);
    tracep->declBus(c+809,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+810,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+811,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+812,"bank", false,-1, 1,0);
    tracep->declBus(c+813,"row", false,-1, 12,0);
    tracep->declBus(c+814,"column", false,-1, 8,0);
    tracep->declBus(c+815,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+816,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullQData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+62,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+72,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+144,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_reg));
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+401,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+402,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+403,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+404,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+405,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+406,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+407,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+408,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+409,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+410,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+411,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+412,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+413,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                        << 1U)))))))
                                : 0U)),2);
    bufp->fullBit(oldp+414,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullBit(oldp+415,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullCData(oldp+416,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+417,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+418,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                        << 1U)))))))
                                : 0U)),2);
    bufp->fullBit(oldp+419,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                     : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+438,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullSData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+451,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+452,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+456,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+461,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+496,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+499,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+504,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+506,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+507,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+509,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+513,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+514,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+534,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+535,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+536,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+537,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+538,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+539,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+540,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+543,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+544,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+545,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+564,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+571,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+590,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+591,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+592,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+593,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+594,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+613,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+614,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+615,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+616,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+617,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+619,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+638,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+655,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+666,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+670,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[0]),32);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[1]),32);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[2]),32);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[3]),32);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[4]),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[5]),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[6]),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[7]),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[8]),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[9]),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[10]),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[11]),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[12]),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[13]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[14]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[15]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[0]),26);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[1]),26);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[2]),26);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[3]),26);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[4]),26);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[5]),26);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[6]),26);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[7]),26);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[8]),26);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[9]),26);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[10]),26);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[11]),26);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[12]),26);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[13]),26);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[14]),26);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[15]),26);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg),16);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rvalid));
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rresp),2);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+751,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+752,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+753,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+754,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+755,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+757,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+769,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+770,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+771,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+773,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+775,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+777,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+787,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+788,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+789,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+791,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+793,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+806,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+807,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+808,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+809,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+811,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+822,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+828,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+829,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+831,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+840,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+843,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+844,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+845,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+857,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+859,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+860,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+862,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))))))))))));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+868,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+869,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+870,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+871,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+874,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+883,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+888,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+897,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+898,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+899,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+910,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+914,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+915,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
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
    bufp->fullCData(oldp+916,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+917,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+918,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
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
    bufp->fullIData(oldp+919,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+920,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+921,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+922,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+923,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+925,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+926,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullIData(oldp+939,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                               >> 6U)),26);
    bufp->fullCData(oldp+940,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                                       >> 2U))),4);
    bufp->fullCData(oldp+941,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr)),2);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+948,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                ? 0U : 0U)),32);
    bufp->fullBit(oldp+949,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast))));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_arready));
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata),32);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullIData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+958,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h467a54a1__0)
                                : 0U)),4);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+972,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+973,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+975,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+976,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+977,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+978,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+980,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+981,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+982,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+983,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+984,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+986,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+987,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+988,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+989,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+991,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+993,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+995,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1011,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1014,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1015,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1016,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1017,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1020,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1021,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1023,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1028,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1030,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1031,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1044,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1045,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1046,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1047,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1048,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1049,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1050,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1051,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1052,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1053,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1054,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1055,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1056,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1057,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1058,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1078,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1079,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1084,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1085,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1086,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1087,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1088,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1089,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1090,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1091,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1092,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1093,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1094,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1095,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1096,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1097,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1098,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1105,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1106,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1107,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1108,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1109,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1110,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1113,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1114,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1115,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1116,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1117,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1118,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1119,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1120,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1121,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1122,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1123,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1124,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1125,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1126,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1127,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1128,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1130,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1131,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1132,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1133,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1134,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1135,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1137,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1138,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullIData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1145,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1150,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1180,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1209,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1210,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1233,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1235,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1236,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1237,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1238,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1239,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1241,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1242,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1243,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1244,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1245,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1246,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1247,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1248,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1249,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1250,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1251,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1252,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1253,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1254,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1255,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1256,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1258,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1259,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1260,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1261,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1262,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1263,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid));
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1288,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_col_w),13);
    bufp->fullSData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w),13);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w),3);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1318,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1323,(vlSelf->clock));
    bufp->fullBit(oldp+1324,(vlSelf->reset));
    bufp->fullSData(oldp+1325,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1326,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1327,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1328,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1329,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1330,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1331,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1332,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1333,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1334,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1335,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1336,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1337,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1338,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1339,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1340,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1341,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1342,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1343,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1344,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1345,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1347,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1348,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
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
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                         : 0U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                           : 0U)))))))),32);
    bufp->fullBit(oldp+1349,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1350,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1352,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1353,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1354,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1355,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1356,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1357,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1358,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                            << 2U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                             << 1U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST)))))));
    bufp->fullBit(oldp+1359,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullIData(oldp+1362,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata
                                     : 0U))),32);
    bufp->fullCData(oldp+1363,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1364,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1365,((3U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                       ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                                   : 
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
                                                          << 1U))))))
                                           : 0U) : 
                                      ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bresp)
                                        : 0U)))),2);
    bufp->fullCData(oldp+1366,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U))))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rresp)
                                               : 0U))),2);
    bufp->fullBit(oldp+1367,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready)))));
    bufp->fullBit(oldp+1368,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready)))));
    bufp->fullBit(oldp+1369,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid)))));
    bufp->fullBit(oldp+1370,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_arready)))));
    bufp->fullBit(oldp+1371,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                          : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                << 0xfU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rlast)))));
    bufp->fullIData(oldp+1372,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr
                                 : 0U)),32);
    bufp->fullCData(oldp+1373,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                 : 0U)),8);
    bufp->fullCData(oldp+1374,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                 : 0U)),4);
    bufp->fullCData(oldp+1375,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                 : 0U)),3);
    bufp->fullCData(oldp+1376,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                 : 0U)),2);
    bufp->fullCData(oldp+1377,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U))))
                                 : 0U)),2);
    bufp->fullBit(oldp+1378,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1379,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1380,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1381,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullIData(oldp+1382,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1383,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullCData(oldp+1384,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U))))
                                 : 0U)),2);
    bufp->fullBit(oldp+1385,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1386,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullIData(oldp+1388,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+1399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+1400,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                     << 1U)))))))),2);
    bufp->fullCData(oldp+1401,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP)
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                          : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U))))),2);
    bufp->fullBit(oldp+1402,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1403,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                   : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullIData(oldp+1407,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1410,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1411,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1412,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1415,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1416,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1418,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1421,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1423,(1U),3);
    bufp->fullCData(oldp+1424,(0U),2);
    bufp->fullCData(oldp+1425,(1U),2);
    bufp->fullCData(oldp+1426,(2U),2);
    bufp->fullCData(oldp+1427,(3U),2);
    bufp->fullSData(oldp+1428,(0xaU),11);
    bufp->fullBit(oldp+1429,(0U));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1434,(1U));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1436,(0U),4);
    bufp->fullIData(oldp+1437,(0U),32);
    bufp->fullCData(oldp+1438,(0U),8);
    bufp->fullCData(oldp+1439,(0U),3);
    bufp->fullBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1450,(0U),32);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1452,(0U));
    bufp->fullCData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1455,(0x2000000U),32);
    bufp->fullIData(oldp+1456,(0x2000004U),32);
    bufp->fullIData(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullCData(oldp+1459,(1U),4);
    bufp->fullCData(oldp+1460,(2U),4);
    bufp->fullCData(oldp+1461,(3U),4);
    bufp->fullCData(oldp+1462,(4U),4);
    bufp->fullCData(oldp+1463,(5U),4);
    bufp->fullCData(oldp+1464,(6U),4);
    bufp->fullCData(oldp+1465,(7U),4);
    bufp->fullCData(oldp+1466,(8U),4);
    bufp->fullCData(oldp+1467,(9U),4);
    bufp->fullCData(oldp+1468,(0xaU),4);
    bufp->fullCData(oldp+1469,(0xbU),4);
    bufp->fullCData(oldp+1470,(0xcU),4);
    bufp->fullIData(oldp+1471,(4U),32);
    bufp->fullIData(oldp+1472,(2U),32);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rlast));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bresp),2);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid),4);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid),4);
    bufp->fullBit(oldp+1480,(0U));
    bufp->fullBit(oldp+1481,(1U));
    bufp->fullIData(oldp+1482,(5U),32);
    bufp->fullIData(oldp+1483,(0x20U),32);
    bufp->fullIData(oldp+1484,(0x1000000U),32);
    bufp->fullIData(oldp+1485,(0x1000004U),32);
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1492,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1493,(0x1800U),32);
    bufp->fullIData(oldp+1494,(0x79737978U),32);
    bufp->fullCData(oldp+1495,(4U),8);
    bufp->fullCData(oldp+1496,(8U),8);
    bufp->fullCData(oldp+1497,(3U),8);
    bufp->fullCData(oldp+1498,(0x9fU),8);
    bufp->fullCData(oldp+1499,(0x25U),8);
    bufp->fullCData(oldp+1500,(0xdU),8);
    bufp->fullCData(oldp+1501,(0x99U),8);
    bufp->fullCData(oldp+1502,(0x49U),8);
    bufp->fullCData(oldp+1503,(0x41U),8);
    bufp->fullCData(oldp+1504,(0x1fU),8);
    bufp->fullCData(oldp+1505,(1U),8);
    bufp->fullCData(oldp+1506,(9U),8);
    bufp->fullCData(oldp+1507,(0x11U),8);
    bufp->fullCData(oldp+1508,(0xc1U),8);
    bufp->fullCData(oldp+1509,(0x63U),8);
    bufp->fullCData(oldp+1510,(0x85U),8);
    bufp->fullCData(oldp+1511,(0x61U),8);
    bufp->fullCData(oldp+1512,(0x71U),8);
    bufp->fullCData(oldp+1513,(0xf0U),8);
    bufp->fullCData(oldp+1514,(0xe0U),8);
    bufp->fullCData(oldp+1515,(4U),3);
    bufp->fullCData(oldp+1516,(0x15U),8);
    bufp->fullCData(oldp+1517,(0xebU),8);
    bufp->fullCData(oldp+1518,(0x38U),8);
    bufp->fullIData(oldp+1519,(0x64U),32);
    bufp->fullIData(oldp+1520,(0x18U),32);
    bufp->fullIData(oldp+1521,(9U),32);
    bufp->fullIData(oldp+1522,(3U),32);
    bufp->fullIData(oldp+1523,(8U),32);
    bufp->fullIData(oldp+1524,(0xdU),32);
    bufp->fullIData(oldp+1525,(0x2000U),32);
    bufp->fullIData(oldp+1526,(0x2710U),32);
    bufp->fullIData(oldp+1527,(0x30cU),32);
    bufp->fullSData(oldp+1528,(0x20U),13);
    bufp->fullIData(oldp+1529,(0xaU),32);
    bufp->fullIData(oldp+1530,(6U),32);
    bufp->fullIData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1532,(0x11U),32);
    bufp->fullIData(oldp+1533,(0x30000000U),32);
    bufp->fullIData(oldp+1534,(0x3fffffffU),32);
    bufp->fullCData(oldp+1535,(2U),3);
    bufp->fullCData(oldp+1536,(3U),3);
    bufp->fullCData(oldp+1537,(5U),3);
    bufp->fullCData(oldp+1538,(6U),3);
    bufp->fullCData(oldp+1539,(7U),3);
    bufp->fullIData(oldp+1540,(1U),32);
    bufp->fullIData(oldp+1541,(0xbU),32);
    bufp->fullIData(oldp+1542,(0x10U),32);
    bufp->fullIData(oldp+1543,(0x60U),32);
    bufp->fullIData(oldp+1544,(0x90U),32);
    bufp->fullIData(oldp+1545,(0x310U),32);
    bufp->fullIData(oldp+1546,(0x320U),32);
    bufp->fullIData(oldp+1547,(0x23U),32);
    bufp->fullIData(oldp+1548,(0x203U),32);
    bufp->fullIData(oldp+1549,(0x20dU),32);
    bufp->fullSData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
