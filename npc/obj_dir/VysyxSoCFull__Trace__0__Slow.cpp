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
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1336,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1337,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1338,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1340,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1341,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1342,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1343,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1344,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1345,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1346,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1347,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1348,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1349,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1350,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1351,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1352,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1353,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1354,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1355,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1336,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1337,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1338,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1339,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1340,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1341,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1342,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1343,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1344,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1345,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1346,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1347,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1348,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1349,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1350,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1351,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1352,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1353,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1354,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1355,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+428,"spi_sck", false,-1);
    tracep->declBus(c+429,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+876,"spi_mosi", false,-1);
    tracep->declBit(c+1356,"spi_miso", false,-1);
    tracep->declBit(c+1354,"uart_rx", false,-1);
    tracep->declBit(c+1355,"uart_tx", false,-1);
    tracep->declBit(c+1330,"psram_sck", false,-1);
    tracep->declBit(c+1331,"psram_ce_n", false,-1);
    tracep->declBus(c+1357,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1358,"sdram_clk", false,-1);
    tracep->declBit(c+430,"sdram_cke", false,-1);
    tracep->declBit(c+877,"sdram_cs", false,-1);
    tracep->declBit(c+878,"sdram_ras", false,-1);
    tracep->declBit(c+879,"sdram_cas", false,-1);
    tracep->declBit(c+880,"sdram_we", false,-1);
    tracep->declBus(c+881,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+882,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+431,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+906,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1336,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1337,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1338,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1339,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1340,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1346,"ps2_clk", false,-1);
    tracep->declBit(c+1347,"ps2_data", false,-1);
    tracep->declBus(c+1348,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1349,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1350,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1351,"vga_hsync", false,-1);
    tracep->declBit(c+1352,"vga_vsync", false,-1);
    tracep->declBit(c+1353,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+964,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+965,"in_psel", false,-1);
    tracep->declBit(c+838,"in_penable", false,-1);
    tracep->declBus(c+1425,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+966,"in_pwrite", false,-1);
    tracep->declBus(c+967,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+968,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+432,"in_pready", false,-1);
    tracep->declBus(c+433,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+434,"in_pslverr", false,-1);
    tracep->declBus(c+1109,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1154,"out_psel", false,-1);
    tracep->declBit(c+1155,"out_penable", false,-1);
    tracep->declBus(c+1156,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"out_pwrite", false,-1);
    tracep->declBus(c+1158,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"out_pready", false,-1);
    tracep->declBus(c+1359,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1161,"out_pslverr", false,-1);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1428,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1429,"DELAY", false,-1, 1,0);
    tracep->declBus(c+435,"state", false,-1, 1,0);
    tracep->declBus(c+436,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+437,"prdata_reg", false,-1, 31,0);
    tracep->declBit(c+438,"pslverr_reg", false,-1);
    tracep->declBus(c+1430,"r", false,-1, 10,0);
    tracep->declBus(c+1428,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1154,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1155,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1109,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1160,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1161,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1359,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1162,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1163,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+440,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1165,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1166,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1156,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1432,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1433,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1167,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+442,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1434,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+443,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1169,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1170,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+444,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1435,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+445,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1171,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1172,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1360,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+839,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1173,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1174,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1176,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1177,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1178,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1157,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1166,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1156,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1361,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1431,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1179,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1180,"sel_0", false,-1);
    tracep->declBit(c+1181,"sel_1", false,-1);
    tracep->declBit(c+1182,"sel_2", false,-1);
    tracep->declBit(c+1183,"sel_3", false,-1);
    tracep->declBit(c+1184,"sel_4", false,-1);
    tracep->declBit(c+1185,"sel_5", false,-1);
    tracep->declBit(c+1186,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+969,"auto_in_awready", false,-1);
    tracep->declBit(c+970,"auto_in_awvalid", false,-1);
    tracep->declBus(c+971,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+969,"auto_in_wready", false,-1);
    tracep->declBit(c+974,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_in_bready", false,-1);
    tracep->declBit(c+1188,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1362,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+977,"auto_in_arready", false,-1);
    tracep->declBit(c+978,"auto_in_arvalid", false,-1);
    tracep->declBus(c+979,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1189,"auto_in_rready", false,-1);
    tracep->declBit(c+1190,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1363,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+965,"auto_out_psel", false,-1);
    tracep->declBit(c+838,"auto_out_penable", false,-1);
    tracep->declBit(c+966,"auto_out_pwrite", false,-1);
    tracep->declBus(c+964,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+967,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+968,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+432,"auto_out_pready", false,-1);
    tracep->declBit(c+434,"auto_out_pslverr", false,-1);
    tracep->declBus(c+433,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+838,"nodeOut_penable", false,-1);
    tracep->declBus(c+840,"state", false,-1, 1,0);
    tracep->declBit(c+977,"accept_read", false,-1);
    tracep->declBit(c+969,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+966,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+16,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+446,"resp", false,-1, 1,0);
    tracep->declBus(c+20,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1362,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1190,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+21,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1188,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+982,"auto_in_awvalid", false,-1);
    tracep->declBus(c+983,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+988,"auto_in_wvalid", false,-1);
    tracep->declBus(c+989,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_in_wlast", false,-1);
    tracep->declBit(c+992,"auto_in_bready", false,-1);
    tracep->declBit(c+1191,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+993,"auto_in_arvalid", false,-1);
    tracep->declBus(c+994,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"auto_in_rready", false,-1);
    tracep->declBit(c+1193,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_in_rlast", false,-1);
    tracep->declBit(c+1195,"auto_out_awready", false,-1);
    tracep->declBit(c+1000,"auto_out_awvalid", false,-1);
    tracep->declBus(c+971,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1001,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1196,"auto_out_wready", false,-1);
    tracep->declBit(c+1002,"auto_out_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_out_wlast", false,-1);
    tracep->declBit(c+1197,"auto_out_bready", false,-1);
    tracep->declBit(c+1198,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1199,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1201,"auto_out_arready", false,-1);
    tracep->declBit(c+1004,"auto_out_arvalid", false,-1);
    tracep->declBus(c+979,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1005,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+999,"auto_out_rready", false,-1);
    tracep->declBit(c+1193,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1202,"auto_out_rlast", false,-1);
    tracep->declBit(c+1002,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+25,"w_idle", false,-1);
    tracep->declBit(c+1203,"in_awready", false,-1);
    tracep->declBit(c+26,"busy", false,-1);
    tracep->declBus(c+27,"r_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_len", false,-1, 7,0);
    tracep->declBus(c+1006,"len", false,-1, 7,0);
    tracep->declBus(c+1007,"addr", false,-1, 31,0);
    tracep->declBit(c+29,"busy_1", false,-1);
    tracep->declBus(c+30,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+31,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1008,"len_1", false,-1, 7,0);
    tracep->declBus(c+1009,"addr_1", false,-1, 31,0);
    tracep->declBit(c+32,"wbeats_latched", false,-1);
    tracep->declBit(c+1000,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1010,"wbeats_valid", false,-1);
    tracep->declBus(c+33,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1011,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1003,"w_last", false,-1);
    tracep->declBit(c+1197,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+993,"io_enq_valid", false,-1);
    tracep->declBus(c+994,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+995,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+996,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+997,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+998,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1204,"io_deq_ready", false,-1);
    tracep->declBit(c+1004,"io_deq_valid", false,-1);
    tracep->declBus(c+979,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1012,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1013,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+981,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1014,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+50,"ram", false,-1, 48,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1004,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1205,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+982,"io_enq_valid", false,-1);
    tracep->declBus(c+983,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+984,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+985,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+986,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+987,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1206,"io_deq_ready", false,-1);
    tracep->declBit(c+1015,"io_deq_valid", false,-1);
    tracep->declBus(c+971,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1016,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1017,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+973,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1018,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+53,"ram", false,-1, 48,0);
    tracep->declBit(c+55,"full", false,-1);
    tracep->declBit(c+1015,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1207,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+988,"io_enq_valid", false,-1);
    tracep->declBus(c+989,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+990,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+991,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1208,"io_deq_ready", false,-1);
    tracep->declBit(c+1019,"io_deq_valid", false,-1);
    tracep->declBus(c+975,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+976,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+423,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+56,"ram", false,-1, 36,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1019,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1209,"do_enq", false,-1);
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
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1210,"auto_in_awready", false,-1);
    tracep->declBit(c+1020,"auto_in_awvalid", false,-1);
    tracep->declBus(c+971,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1111,"auto_in_wready", false,-1);
    tracep->declBit(c+1022,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1211,"auto_in_bready", false,-1);
    tracep->declBit(c+59,"auto_in_bvalid", false,-1);
    tracep->declBus(c+60,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1212,"auto_in_arready", false,-1);
    tracep->declBit(c+1023,"auto_in_arvalid", false,-1);
    tracep->declBus(c+979,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1213,"auto_in_rready", false,-1);
    tracep->declBit(c+62,"auto_in_rvalid", false,-1);
    tracep->declBus(c+63,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1212,"nodeIn_arready", false,-1);
    tracep->declBit(c+1210,"nodeIn_awready", false,-1);
    tracep->declBit(c+1025,"w_sel0", false,-1);
    tracep->declBit(c+59,"w_full", false,-1);
    tracep->declBus(c+60,"w_id", false,-1, 3,0);
    tracep->declBit(c+66,"r_sel1", false,-1);
    tracep->declBit(c+67,"w_sel1", false,-1);
    tracep->declBit(c+62,"r_full", false,-1);
    tracep->declBus(c+63,"r_id", false,-1, 3,0);
    tracep->declBit(c+1214,"ren", false,-1);
    tracep->declBit(c+68,"rdata_REG", false,-1);
    tracep->declBus(c+69,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1026,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1214,"R0_en", false,-1);
    tracep->declBit(c+1334,"R0_clk", false,-1);
    tracep->declBus(c+73,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1027,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1215,"W0_en", false,-1);
    tracep->declBit(c+1334,"W0_clk", false,-1);
    tracep->declBus(c+975,"W0_data", false,-1, 31,0);
    tracep->declBus(c+976,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+22,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+982,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+983,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+988,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+989,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+992,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1191,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+993,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+994,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1193,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+22,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+982,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+983,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+988,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+989,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+992,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1191,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+993,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+994,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1193,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1216,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1028,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1196,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1002,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1197,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1198,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1199,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1217,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1029,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+999,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1193,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1210,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1020,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1021,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1111,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1022,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+975,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1211,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+59,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+60,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1212,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1023,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1024,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1213,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+62,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+63,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+64,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+65,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1030,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1031,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+74,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1032,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1033,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1369,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+75,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+76,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+969,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+970,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+969,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+974,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+975,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1188,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1362,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+977,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+978,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1189,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1190,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1363,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1362,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1198,"in_0_bvalid", false,-1);
    tracep->declBit(c+1193,"in_0_rvalid", false,-1);
    tracep->declBit(c+1218,"in_0_wready", false,-1);
    tracep->declBit(c+1219,"in_0_awready", false,-1);
    tracep->declBit(c+1217,"in_0_arready", false,-1);
    tracep->declBit(c+1216,"anonIn_awready", false,-1);
    tracep->declBit(c+1034,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1035,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1036,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1037,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1038,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1039,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1040,"arSel", false,-1, 15,0);
    tracep->declBus(c+1041,"awSel", false,-1, 15,0);
    tracep->declBus(c+1220,"rSel", false,-1, 15,0);
    tracep->declBus(c+1221,"bSel", false,-1, 15,0);
    tracep->declBit(c+78,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+79,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+80,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+81,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+82,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+83,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+84,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+85,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+86,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+87,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+88,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+104,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+105,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+106,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+107,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+108,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+109,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+110,"latched", false,-1);
    tracep->declBit(c+1042,"in_0_awvalid", false,-1);
    tracep->declBit(c+1043,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1044,"in_0_wvalid", false,-1);
    tracep->declBit(c+111,"idle_3", false,-1);
    tracep->declBit(c+1222,"anyValid", false,-1);
    tracep->declBus(c+1223,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+112,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1224,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1225,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1226,"prefixOR_1", false,-1);
    tracep->declBit(c+1227,"winner_3_1", false,-1);
    tracep->declBit(c+1228,"winner_3_2", false,-1);
    tracep->declBit(c+113,"state_3_0", false,-1);
    tracep->declBit(c+114,"state_3_1", false,-1);
    tracep->declBit(c+115,"state_3_2", false,-1);
    tracep->declBit(c+1229,"muxState_3_0", false,-1);
    tracep->declBit(c+1230,"muxState_3_1", false,-1);
    tracep->declBit(c+1231,"muxState_3_2", false,-1);
    tracep->declBit(c+116,"idle_4", false,-1);
    tracep->declBit(c+1232,"anyValid_1", false,-1);
    tracep->declBus(c+1233,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+117,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1234,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1235,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1236,"winner_4_0", false,-1);
    tracep->declBit(c+1237,"winner_4_2", false,-1);
    tracep->declBit(c+118,"state_4_0", false,-1);
    tracep->declBit(c+119,"state_4_2", false,-1);
    tracep->declBit(c+1238,"muxState_4_0", false,-1);
    tracep->declBit(c+1239,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+120,"io_enq_ready", false,-1);
    tracep->declBit(c+1043,"io_enq_valid", false,-1);
    tracep->declBus(c+1045,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+1046,"io_deq_valid", false,-1);
    tracep->declBus(c+1047,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+121,"wrap", false,-1);
    tracep->declBit(c+122,"wrap_1", false,-1);
    tracep->declBit(c+123,"maybe_full", false,-1);
    tracep->declBit(c+124,"ptr_match", false,-1);
    tracep->declBit(c+125,"empty", false,-1);
    tracep->declBit(c+126,"full", false,-1);
    tracep->declBit(c+1046,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1241,"do_deq", false,-1);
    tracep->declBit(c+1242,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+122,"R0_addr", false,-1);
    tracep->declBit(c+1436,"R0_en", false,-1);
    tracep->declBit(c+1334,"R0_clk", false,-1);
    tracep->declBus(c+127,"R0_data", false,-1, 2,0);
    tracep->declBit(c+121,"W0_addr", false,-1);
    tracep->declBit(c+1242,"W0_en", false,-1);
    tracep->declBit(c+1334,"W0_clk", false,-1);
    tracep->declBus(c+1045,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+128+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1195,"auto_in_awready", false,-1);
    tracep->declBit(c+1000,"auto_in_awvalid", false,-1);
    tracep->declBus(c+971,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1001,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1196,"auto_in_wready", false,-1);
    tracep->declBit(c+1002,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_in_wlast", false,-1);
    tracep->declBit(c+1197,"auto_in_bready", false,-1);
    tracep->declBit(c+1198,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1199,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1201,"auto_in_arready", false,-1);
    tracep->declBit(c+1004,"auto_in_arvalid", false,-1);
    tracep->declBus(c+979,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1005,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+999,"auto_in_rready", false,-1);
    tracep->declBit(c+1193,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1368,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1202,"auto_in_rlast", false,-1);
    tracep->declBit(c+1216,"auto_out_awready", false,-1);
    tracep->declBit(c+1028,"auto_out_awvalid", false,-1);
    tracep->declBus(c+971,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+972,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+973,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1196,"auto_out_wready", false,-1);
    tracep->declBit(c+1002,"auto_out_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_out_wlast", false,-1);
    tracep->declBit(c+1197,"auto_out_bready", false,-1);
    tracep->declBit(c+1198,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1199,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1217,"auto_out_arready", false,-1);
    tracep->declBit(c+1029,"auto_out_arvalid", false,-1);
    tracep->declBus(c+979,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+981,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+999,"auto_out_rready", false,-1);
    tracep->declBit(c+1193,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+130,"io_enq_ready", false,-1);
    tracep->declBit(c+1112,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+131,"io_deq_valid", false,-1);
    tracep->declBit(c+132,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+131,"full", false,-1);
    tracep->declBit(c+132,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+133,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+134,"io_enq_ready", false,-1);
    tracep->declBit(c+1113,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+135,"io_deq_valid", false,-1);
    tracep->declBit(c+136,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+135,"full", false,-1);
    tracep->declBit(c+136,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+137,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+1114,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
    tracep->declBit(c+139,"io_deq_valid", false,-1);
    tracep->declBit(c+140,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+139,"full", false,-1);
    tracep->declBit(c+140,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+141,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+142,"io_enq_ready", false,-1);
    tracep->declBit(c+1115,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
    tracep->declBit(c+143,"io_deq_valid", false,-1);
    tracep->declBit(c+144,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+143,"full", false,-1);
    tracep->declBit(c+144,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+145,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+146,"io_enq_ready", false,-1);
    tracep->declBit(c+1116,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+147,"io_deq_valid", false,-1);
    tracep->declBit(c+148,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+147,"full", false,-1);
    tracep->declBit(c+148,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+149,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+150,"io_enq_ready", false,-1);
    tracep->declBit(c+1117,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
    tracep->declBit(c+151,"io_deq_valid", false,-1);
    tracep->declBit(c+152,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+151,"full", false,-1);
    tracep->declBit(c+152,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+153,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+154,"io_enq_ready", false,-1);
    tracep->declBit(c+1118,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBit(c+156,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+155,"full", false,-1);
    tracep->declBit(c+156,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+157,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+158,"io_enq_ready", false,-1);
    tracep->declBit(c+1119,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
    tracep->declBit(c+159,"io_deq_valid", false,-1);
    tracep->declBit(c+160,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+159,"full", false,-1);
    tracep->declBit(c+160,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+161,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+162,"io_enq_ready", false,-1);
    tracep->declBit(c+1120,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
    tracep->declBit(c+163,"io_deq_valid", false,-1);
    tracep->declBit(c+164,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+163,"full", false,-1);
    tracep->declBit(c+164,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+165,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+166,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
    tracep->declBit(c+167,"io_deq_valid", false,-1);
    tracep->declBit(c+168,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+167,"full", false,-1);
    tracep->declBit(c+168,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+169,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+1122,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1253,"io_deq_ready", false,-1);
    tracep->declBit(c+171,"io_deq_valid", false,-1);
    tracep->declBit(c+172,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+171,"full", false,-1);
    tracep->declBit(c+172,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+173,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+174,"io_enq_ready", false,-1);
    tracep->declBit(c+1123,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1254,"io_deq_ready", false,-1);
    tracep->declBit(c+175,"io_deq_valid", false,-1);
    tracep->declBit(c+176,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+176,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+177,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+178,"io_enq_ready", false,-1);
    tracep->declBit(c+1124,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1255,"io_deq_ready", false,-1);
    tracep->declBit(c+179,"io_deq_valid", false,-1);
    tracep->declBit(c+180,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+179,"full", false,-1);
    tracep->declBit(c+180,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+181,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+182,"io_enq_ready", false,-1);
    tracep->declBit(c+1125,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+183,"io_deq_valid", false,-1);
    tracep->declBit(c+184,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+183,"full", false,-1);
    tracep->declBit(c+184,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+185,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+186,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1257,"io_deq_ready", false,-1);
    tracep->declBit(c+187,"io_deq_valid", false,-1);
    tracep->declBit(c+188,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+187,"full", false,-1);
    tracep->declBit(c+188,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+189,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1258,"io_deq_ready", false,-1);
    tracep->declBit(c+191,"io_deq_valid", false,-1);
    tracep->declBit(c+192,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+191,"full", false,-1);
    tracep->declBit(c+192,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+193,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
    tracep->declBit(c+195,"io_deq_valid", false,-1);
    tracep->declBit(c+196,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+195,"full", false,-1);
    tracep->declBit(c+196,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+197,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1260,"io_deq_ready", false,-1);
    tracep->declBit(c+199,"io_deq_valid", false,-1);
    tracep->declBit(c+200,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+200,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+201,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+202,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1261,"io_deq_ready", false,-1);
    tracep->declBit(c+203,"io_deq_valid", false,-1);
    tracep->declBit(c+204,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+203,"full", false,-1);
    tracep->declBit(c+204,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+205,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1262,"io_deq_ready", false,-1);
    tracep->declBit(c+207,"io_deq_valid", false,-1);
    tracep->declBit(c+208,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+207,"full", false,-1);
    tracep->declBit(c+208,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+209,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1263,"io_deq_ready", false,-1);
    tracep->declBit(c+211,"io_deq_valid", false,-1);
    tracep->declBit(c+212,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+211,"full", false,-1);
    tracep->declBit(c+212,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+213,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+214,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1264,"io_deq_ready", false,-1);
    tracep->declBit(c+215,"io_deq_valid", false,-1);
    tracep->declBit(c+216,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+216,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+217,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1265,"io_deq_ready", false,-1);
    tracep->declBit(c+219,"io_deq_valid", false,-1);
    tracep->declBit(c+220,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+220,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+221,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1266,"io_deq_ready", false,-1);
    tracep->declBit(c+223,"io_deq_valid", false,-1);
    tracep->declBit(c+224,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+224,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+225,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1267,"io_deq_ready", false,-1);
    tracep->declBit(c+227,"io_deq_valid", false,-1);
    tracep->declBit(c+228,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+228,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+1001,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1268,"io_deq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBit(c+232,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+232,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+233,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+234,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1269,"io_deq_ready", false,-1);
    tracep->declBit(c+235,"io_deq_valid", false,-1);
    tracep->declBit(c+236,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+236,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+237,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1270,"io_deq_ready", false,-1);
    tracep->declBit(c+239,"io_deq_valid", false,-1);
    tracep->declBit(c+240,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+239,"full", false,-1);
    tracep->declBit(c+240,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+241,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1271,"io_deq_ready", false,-1);
    tracep->declBit(c+243,"io_deq_valid", false,-1);
    tracep->declBit(c+244,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"full", false,-1);
    tracep->declBit(c+244,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+246,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1272,"io_deq_ready", false,-1);
    tracep->declBit(c+247,"io_deq_valid", false,-1);
    tracep->declBit(c+248,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+248,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1273,"io_deq_ready", false,-1);
    tracep->declBit(c+251,"io_deq_valid", false,-1);
    tracep->declBit(c+252,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+252,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+253,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+1005,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1274,"io_deq_ready", false,-1);
    tracep->declBit(c+255,"io_deq_valid", false,-1);
    tracep->declBit(c+256,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+255,"full", false,-1);
    tracep->declBit(c+256,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+257,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1370,"reset", false,-1);
    tracep->declBit(c+22,"auto_master_out_awready", false,-1);
    tracep->declBit(c+982,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+983,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"auto_master_out_wready", false,-1);
    tracep->declBit(c+988,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+989,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+992,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1191,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1192,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_arready", false,-1);
    tracep->declBit(c+993,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+994,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1193,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1194,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1370,"reset", false,-1);
    tracep->declBit(c+1431,"io_interrupt", false,-1);
    tracep->declBit(c+22,"io_master_awready", false,-1);
    tracep->declBit(c+982,"io_master_awvalid", false,-1);
    tracep->declBus(c+983,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+984,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_wready", false,-1);
    tracep->declBit(c+988,"io_master_wvalid", false,-1);
    tracep->declBus(c+989,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"io_master_wlast", false,-1);
    tracep->declBit(c+992,"io_master_bready", false,-1);
    tracep->declBit(c+1191,"io_master_bvalid", false,-1);
    tracep->declBus(c+1192,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_arready", false,-1);
    tracep->declBit(c+993,"io_master_arvalid", false,-1);
    tracep->declBus(c+994,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+995,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"io_master_rready", false,-1);
    tracep->declBit(c+1193,"io_master_rvalid", false,-1);
    tracep->declBus(c+1194,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"io_master_rlast", false,-1);
    tracep->declBit(c+1437,"io_slave_awready", false,-1);
    tracep->declBit(c+1431,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1438,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1439,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1440,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1441,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1426,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1442,"io_slave_wready", false,-1);
    tracep->declBit(c+1431,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1439,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1438,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1431,"io_slave_wlast", false,-1);
    tracep->declBit(c+1431,"io_slave_bready", false,-1);
    tracep->declBit(c+1443,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1444,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1445,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1446,"io_slave_arready", false,-1);
    tracep->declBit(c+1431,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1438,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1439,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1440,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1441,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1426,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1431,"io_slave_rready", false,-1);
    tracep->declBit(c+1447,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1448,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1449,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1450,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1451,"io_slave_rlast", false,-1);
    tracep->declBit(c+258,"DIFFTEST", false,-1);
    tracep->declBus(c+1148,"pc", false,-1, 31,0);
    tracep->declBus(c+1149,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1150,"pc_valid", false,-1);
    tracep->declBit(c+1371,"if_ready", false,-1);
    tracep->declBus(c+920,"inst", false,-1, 31,0);
    tracep->declBit(c+958,"if_valid", false,-1);
    tracep->declBit(c+948,"id_ready", false,-1);
    tracep->declBus(c+1452,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1452,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1372,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1438,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1440,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+259,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1438,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1373,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+260,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1374,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1441,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+261,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1426,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+262,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1375,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1376,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1431,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1377,"if_axi_awready", false,-1);
    tracep->declBit(c+1431,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1378,"if_axi_wready", false,-1);
    tracep->declBit(c+1379,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1431,"if_axi_bready", false,-1);
    tracep->declBit(c+950,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1048,"if_axi_arready", false,-1);
    tracep->declBit(c+1275,"if_axi_rvalid", false,-1);
    tracep->declBit(c+951,"if_axi_rready", false,-1);
    tracep->declBit(c+1453,"if_axi_wlast", false,-1);
    tracep->declBit(c+1380,"if_axi_rlast", false,-1);
    tracep->declBus(c+959,"icache_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+959,"icache_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1381,"icache_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1276,"icache_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1438,"icache_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1440,"icache_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1382,"icache_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1438,"icache_axi_awid", false,-1, 3,0);
    tracep->declBus(c+414,"icache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1383,"icache_axi_arid", false,-1, 3,0);
    tracep->declBus(c+415,"icache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1441,"icache_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1384,"icache_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1426,"icache_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1385,"icache_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+416,"icache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1386,"icache_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1454,"icache_axi_awvalid", false,-1);
    tracep->declBit(c+1387,"icache_axi_awready", false,-1);
    tracep->declBit(c+1454,"icache_axi_wvalid", false,-1);
    tracep->declBit(c+1388,"icache_axi_wready", false,-1);
    tracep->declBit(c+417,"icache_axi_bvalid", false,-1);
    tracep->declBit(c+1454,"icache_axi_bready", false,-1);
    tracep->declBit(c+1049,"icache_axi_arvalid", false,-1);
    tracep->declBit(c+1389,"icache_axi_arready", false,-1);
    tracep->declBit(c+1277,"icache_axi_rvalid", false,-1);
    tracep->declBit(c+1050,"icache_axi_rready", false,-1);
    tracep->declBit(c+960,"icache_axi_wlast", false,-1);
    tracep->declBit(c+418,"icache_axi_rlast", false,-1);
    tracep->declBit(c+841,"id_valid", false,-1);
    tracep->declBit(c+842,"ex_ready", false,-1);
    tracep->declBus(c+843,"op", false,-1, 6,0);
    tracep->declBus(c+263,"rd", false,-1, 4,0);
    tracep->declBus(c+844,"funct3", false,-1, 2,0);
    tracep->declBus(c+264,"rs1", false,-1, 4,0);
    tracep->declBus(c+265,"rs2", false,-1, 4,0);
    tracep->declBus(c+266,"imm", false,-1, 31,0);
    tracep->declBus(c+267,"funct7", false,-1, 6,0);
    tracep->declBus(c+268,"shamt", false,-1, 4,0);
    tracep->declBit(c+845,"ls_read", false,-1);
    tracep->declBit(c+846,"ls_write", false,-1);
    tracep->declBit(c+921,"ls_done", false,-1);
    tracep->declBit(c+269,"ex_valid", false,-1);
    tracep->declBit(c+270,"wb_ready", false,-1);
    tracep->declBus(c+271,"ex", false,-1, 31,0);
    tracep->declBit(c+847,"ls_valid", false,-1);
    tracep->declBit(c+848,"ls_wen", false,-1);
    tracep->declBus(c+849,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+405,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+850,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+851,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+852,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+853,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1440,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1440,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1427,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1427,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+272,"mepc", false,-1, 31,0);
    tracep->declBus(c+273,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+274,"mstatus", false,-1, 31,0);
    tracep->declBus(c+275,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+276,"mcause", false,-1, 31,0);
    tracep->declBus(c+277,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+278,"mtvec", false,-1, 31,0);
    tracep->declBus(c+279,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+280,"gpr_wen", false,-1);
    tracep->declBit(c+281,"mepc_wen", false,-1);
    tracep->declBit(c+282,"mstatus_wen", false,-1);
    tracep->declBit(c+283,"mcause_wen", false,-1);
    tracep->declBit(c+284,"mtvec_wen", false,-1);
    tracep->declBus(c+686,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+687,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1390,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+688,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1391,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1392,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+689,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+690,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1455,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+419,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1456,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+420,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+691,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+692,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+693,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+694,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+421,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1393,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+695,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1051,"ls_axi_awready", false,-1);
    tracep->declBit(c+696,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1052,"ls_axi_wready", false,-1);
    tracep->declBit(c+1278,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+697,"ls_axi_bready", false,-1);
    tracep->declBit(c+698,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1053,"ls_axi_arready", false,-1);
    tracep->declBit(c+1279,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+699,"ls_axi_rready", false,-1);
    tracep->declBit(c+700,"ls_axi_wlast", false,-1);
    tracep->declBit(c+422,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1054,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1055,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1056,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+285,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1057,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1058,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1060,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+286,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1061,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+287,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1062,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1063,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1064,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1065,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+288,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+289,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1066,"c_axi_awvalid", false,-1);
    tracep->declBit(c+290,"c_axi_awready", false,-1);
    tracep->declBit(c+1067,"c_axi_wvalid", false,-1);
    tracep->declBit(c+291,"c_axi_wready", false,-1);
    tracep->declBit(c+292,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1068,"c_axi_bready", false,-1);
    tracep->declBit(c+1069,"c_axi_arvalid", false,-1);
    tracep->declBit(c+293,"c_axi_arready", false,-1);
    tracep->declBit(c+294,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1070,"c_axi_rready", false,-1);
    tracep->declBit(c+1071,"c_axi_wlast", false,-1);
    tracep->declBit(c+295,"c_axi_rlast", false,-1);
    tracep->declBit(c+1394,"wb_done", false,-1);
    tracep->declBit(c+258,"difftest", false,-1);
    tracep->declBus(c+296,"xrd", false,-1, 31,0);
    tracep->declBus(c+297,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+298,"rf_wen", false,-1);
    tracep->declBus(c+299,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+300,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+301,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+302,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+303,"mepc_en", false,-1);
    tracep->declBit(c+304,"mstatus_en", false,-1);
    tracep->declBit(c+305,"mcause_en", false,-1);
    tracep->declBit(c+306,"mtvec_en", false,-1);
    tracep->declBus(c+307,"r1", false,-1, 31,0);
    tracep->declBus(c+308,"r2", false,-1, 31,0);
    tracep->declBus(c+309,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+310,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBit(c+290,"c_axi_awready", false,-1);
    tracep->declBit(c+1066,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1060,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1054,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1058,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1062,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1064,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+291,"c_axi_wready", false,-1);
    tracep->declBit(c+1067,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1055,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1057,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1071,"c_axi_wlast", false,-1);
    tracep->declBit(c+1068,"c_axi_bready", false,-1);
    tracep->declBit(c+292,"c_axi_bvalid", false,-1);
    tracep->declBus(c+286,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+288,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+293,"c_axi_arready", false,-1);
    tracep->declBit(c+1069,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1061,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1056,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1059,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1063,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1065,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1070,"c_axi_rready", false,-1);
    tracep->declBit(c+294,"c_axi_rvalid", false,-1);
    tracep->declBus(c+287,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+285,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+289,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+295,"c_axi_rlast", false,-1);
    tracep->declBit(c+290,"axi_awready", false,-1);
    tracep->declBit(c+291,"axi_wready", false,-1);
    tracep->declBit(c+292,"axi_bvalid", false,-1);
    tracep->declBit(c+293,"axi_arready", false,-1);
    tracep->declBit(c+294,"axi_rvalid", false,-1);
    tracep->declBit(c+295,"axi_rlast", false,-1);
    tracep->declBus(c+288,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+289,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+286,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+287,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+285,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+311,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1457,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1458,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+312,"mtime", false,-1, 63,0);
    tracep->declBus(c+424,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+271,"ex_o", false,-1, 31,0);
    tracep->declBit(c+841,"id_valid_i", false,-1);
    tracep->declBit(c+842,"ex_ready_o", false,-1);
    tracep->declBit(c+269,"ex_valid_o", false,-1);
    tracep->declBit(c+270,"wb_ready_i", false,-1);
    tracep->declBus(c+843,"op_i", false,-1, 6,0);
    tracep->declBus(c+844,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+266,"imm_i", false,-1, 31,0);
    tracep->declBus(c+267,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+268,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+307,"r1_i", false,-1, 31,0);
    tracep->declBus(c+308,"r2_i", false,-1, 31,0);
    tracep->declBit(c+845,"ls_read_o", false,-1);
    tracep->declBit(c+846,"ls_write_o", false,-1);
    tracep->declBit(c+921,"ls_done_i", false,-1);
    tracep->declBit(c+847,"ls_valid_o", false,-1);
    tracep->declBit(c+848,"ls_wen_o", false,-1);
    tracep->declBus(c+849,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+405,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+850,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+851,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+852,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+853,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1440,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1440,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1427,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1427,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+686,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1149,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+272,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+274,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+276,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+278,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+273,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+277,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+280,"gpr_wen_o", false,-1);
    tracep->declBit(c+281,"mepc_wen_o", false,-1);
    tracep->declBit(c+282,"mstatus_wen_o", false,-1);
    tracep->declBit(c+283,"mcause_wen_o", false,-1);
    tracep->declBit(c+284,"mtvec_wen_o", false,-1);
    tracep->declBit(c+842,"ex_ready", false,-1);
    tracep->declBit(c+269,"ex_valid", false,-1);
    tracep->declBit(c+854,"al_start", false,-1);
    tracep->declBit(c+922,"al_done", false,-1);
    tracep->declBit(c+845,"ls_read_reg", false,-1);
    tracep->declBit(c+846,"ls_write_reg", false,-1);
    tracep->declBus(c+271,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1149,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+280,"gpr_wen_reg", false,-1);
    tracep->declBus(c+273,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+277,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+281,"mepc_wen_reg", false,-1);
    tracep->declBit(c+282,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+283,"mcause_wen_reg", false,-1);
    tracep->declBit(c+284,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+314,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1428,"READY", false,-1, 1,0);
    tracep->declBus(c+1429,"DONE", false,-1, 1,0);
    tracep->declBus(c+855,"state", false,-1, 1,0);
    tracep->declBus(c+1395,"next_state", false,-1, 1,0);
    tracep->declBit(c+856,"al_valid", false,-1);
    tracep->declBus(c+315,"al_res", false,-1, 31,0);
    tracep->declBus(c+1459,"a", false,-1, 31,0);
    tracep->declBus(c+1460,"b", false,-1, 31,0);
    tracep->declBus(c+1151,"ex", false,-1, 31,0);
    tracep->declBus(c+857,"sel", false,-1, 3,0);
    tracep->declBus(c+858,"x", false,-1, 31,0);
    tracep->declBus(c+859,"y", false,-1, 31,0);
    tracep->declBus(c+701,"res", false,-1, 31,0);
    tracep->declBus(c+1438,"ADD", false,-1, 3,0);
    tracep->declBus(c+1461,"SUB", false,-1, 3,0);
    tracep->declBus(c+1462,"SLL", false,-1, 3,0);
    tracep->declBus(c+1463,"SRL", false,-1, 3,0);
    tracep->declBus(c+1464,"SRA", false,-1, 3,0);
    tracep->declBus(c+1465,"SLT", false,-1, 3,0);
    tracep->declBus(c+1466,"AND", false,-1, 3,0);
    tracep->declBus(c+1467,"OR", false,-1, 3,0);
    tracep->declBus(c+1468,"XOR", false,-1, 3,0);
    tracep->declBus(c+1469,"MUL", false,-1, 3,0);
    tracep->declBus(c+1470,"MULH", false,-1, 3,0);
    tracep->declBus(c+1471,"DIV", false,-1, 3,0);
    tracep->declBus(c+1472,"REM", false,-1, 3,0);
    tracep->declBus(c+860,"csr", false,-1, 31,0);
    tracep->declBus(c+1396,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+861,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+406,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+861,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+861,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+862,"mepc_wen", false,-1);
    tracep->declBit(c+863,"mstatus_wen", false,-1);
    tracep->declBit(c+864,"mcause_wen", false,-1);
    tracep->declBit(c+865,"mtvec_wen", false,-1);
    tracep->declBus(c+936,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"offset", false,-1, 31,0);
    tracep->declBit(c+866,"jalen", false,-1);
    tracep->declBit(c+867,"jalren", false,-1);
    tracep->declBit(c+407,"beqen", false,-1);
    tracep->declBit(c+408,"bneen", false,-1);
    tracep->declBit(c+409,"blten", false,-1);
    tracep->declBit(c+410,"bgeen", false,-1);
    tracep->declBit(c+411,"bltuen", false,-1);
    tracep->declBit(c+412,"bgeuen", false,-1);
    tracep->declBit(c+868,"ecall_en", false,-1);
    tracep->declBit(c+413,"mret_en", false,-1);
    tracep->declBus(c+1152,"dnpc", false,-1, 31,0);
    tracep->declBit(c+869,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+858,"a", false,-1, 31,0);
    tracep->declBus(c+859,"b", false,-1, 31,0);
    tracep->declBus(c+857,"opcode", false,-1, 3,0);
    tracep->declBit(c+854,"start", false,-1);
    tracep->declBus(c+701,"res", false,-1, 31,0);
    tracep->declBit(c+922,"done", false,-1);
    tracep->declBus(c+1438,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1461,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1462,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1463,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1464,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1465,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1466,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1467,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1468,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1469,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1470,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1471,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1472,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1428,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1429,"NULL", false,-1, 1,0);
    tracep->declBus(c+702,"state", false,-1, 1,0);
    tracep->declBus(c+703,"a_reg", false,-1, 31,0);
    tracep->declBus(c+704,"b_reg", false,-1, 31,0);
    tracep->declBus(c+705,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+706,"mul_result", false,-1, 63,0);
    tracep->declBus(c+708,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+709,"dividend", false,-1, 31,0);
    tracep->declBus(c+710,"divisor", false,-1, 31,0);
    tracep->declBus(c+711,"quotient", false,-1, 31,0);
    tracep->declBus(c+712,"remainder", false,-1, 31,0);
    tracep->declBus(c+713,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ICACHE ");
    tracep->declBus(c+1473,"n", false,-1, 31,0);
    tracep->declBus(c+1474,"m", false,-1, 31,0);
    tracep->declBus(c+1475,"w", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBit(c+1377,"m_axi_awready", false,-1);
    tracep->declBit(c+1431,"m_axi_awvalid", false,-1);
    tracep->declBus(c+1438,"m_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1452,"m_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1440,"m_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1441,"m_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1426,"m_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1378,"m_axi_wready", false,-1);
    tracep->declBit(c+1431,"m_axi_wvalid", false,-1);
    tracep->declBus(c+1452,"m_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1438,"m_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1453,"m_axi_wlast", false,-1);
    tracep->declBit(c+1431,"m_axi_bready", false,-1);
    tracep->declBit(c+1379,"m_axi_bvalid", false,-1);
    tracep->declBus(c+1373,"m_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1375,"m_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1048,"m_axi_arready", false,-1);
    tracep->declBit(c+950,"m_axi_arvalid", false,-1);
    tracep->declBus(c+260,"m_axi_arid", false,-1, 3,0);
    tracep->declBus(c+949,"m_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+259,"m_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+261,"m_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+262,"m_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+951,"m_axi_rready", false,-1);
    tracep->declBit(c+1275,"m_axi_rvalid", false,-1);
    tracep->declBus(c+1374,"m_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1372,"m_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1376,"m_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1380,"m_axi_rlast", false,-1);
    tracep->declBit(c+1387,"s_axi_awready", false,-1);
    tracep->declBit(c+1454,"s_axi_awvalid", false,-1);
    tracep->declBus(c+1438,"s_axi_awid", false,-1, 3,0);
    tracep->declBus(c+959,"s_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1440,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1441,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1426,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1388,"s_axi_wready", false,-1);
    tracep->declBit(c+1454,"s_axi_wvalid", false,-1);
    tracep->declBus(c+959,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1438,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+960,"s_axi_wlast", false,-1);
    tracep->declBit(c+1454,"s_axi_bready", false,-1);
    tracep->declBit(c+417,"s_axi_bvalid", false,-1);
    tracep->declBus(c+414,"s_axi_bid", false,-1, 3,0);
    tracep->declBus(c+416,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1389,"s_axi_arready", false,-1);
    tracep->declBit(c+1049,"s_axi_arvalid", false,-1);
    tracep->declBus(c+1383,"s_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1381,"s_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1382,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1384,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1385,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1050,"s_axi_rready", false,-1);
    tracep->declBit(c+1277,"s_axi_rvalid", false,-1);
    tracep->declBus(c+415,"s_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1276,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1386,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+418,"s_axi_rlast", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+714+i*1,"cache_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+730+i*1,"tag_reg", true,(i+0), 25,0);
    }
    tracep->declBus(c+746,"valid_reg", false,-1, 15,0);
    tracep->declBus(c+952,"tag", false,-1, 28,0);
    tracep->declBus(c+953,"index", false,-1, 0,0);
    tracep->declBus(c+954,"offset", false,-1, 1,0);
    tracep->declBus(c+1072,"access", false,-1, 7,0);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"TRANS", false,-1, 1,0);
    tracep->declBus(c+1428,"RETURN", false,-1, 1,0);
    tracep->declBus(c+961,"state", false,-1, 1,0);
    tracep->declBit(c+1476,"cache_axi_awready", false,-1);
    tracep->declBit(c+1477,"cache_axi_wready", false,-1);
    tracep->declBit(c+1478,"cache_axi_bvalid", false,-1);
    tracep->declBit(c+747,"cache_axi_arready", false,-1);
    tracep->declBit(c+748,"cache_axi_rvalid", false,-1);
    tracep->declBit(c+1479,"cache_axi_rlast", false,-1);
    tracep->declBus(c+1480,"cache_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+749,"cache_axi_rresp", false,-1, 1,0);
    tracep->declBus(c+1481,"cache_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1482,"cache_axi_rid", false,-1, 3,0);
    tracep->declBus(c+962,"cache_axi_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+750,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+751,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+920,"inst_i", false,-1, 31,0);
    tracep->declBit(c+958,"if_valid_i", false,-1);
    tracep->declBit(c+948,"id_ready_o", false,-1);
    tracep->declBit(c+841,"id_valid_o", false,-1);
    tracep->declBit(c+842,"ex_ready_i", false,-1);
    tracep->declBus(c+843,"op_o", false,-1, 6,0);
    tracep->declBus(c+263,"rd_o", false,-1, 4,0);
    tracep->declBus(c+844,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+264,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+265,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+266,"imm_o", false,-1, 31,0);
    tracep->declBus(c+267,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+268,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+923,"op", false,-1, 6,0);
    tracep->declBus(c+924,"rd", false,-1, 4,0);
    tracep->declBus(c+925,"funct3", false,-1, 2,0);
    tracep->declBus(c+926,"rs1", false,-1, 4,0);
    tracep->declBus(c+927,"rs2", false,-1, 4,0);
    tracep->declBus(c+928,"immI", false,-1, 31,0);
    tracep->declBus(c+929,"immU", false,-1, 31,0);
    tracep->declBus(c+930,"immS", false,-1, 31,0);
    tracep->declBus(c+931,"immB", false,-1, 31,0);
    tracep->declBus(c+932,"immJ", false,-1, 31,0);
    tracep->declBus(c+933,"imm", false,-1, 31,0);
    tracep->declBus(c+934,"funct7", false,-1, 6,0);
    tracep->declBus(c+935,"shamt", false,-1, 4,0);
    tracep->declBit(c+948,"id_ready_reg", false,-1);
    tracep->declBit(c+841,"id_valid_reg", false,-1);
    tracep->declBus(c+843,"op_reg", false,-1, 6,0);
    tracep->declBus(c+263,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+844,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+264,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+265,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+266,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+267,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+268,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1483,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+955,"state", false,-1);
    tracep->declBit(c+1397,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+1148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+920,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1150,"pc_valid_i", false,-1);
    tracep->declBit(c+1371,"if_ready_o", false,-1);
    tracep->declBit(c+958,"if_valid_o", false,-1);
    tracep->declBit(c+948,"id_ready_i", false,-1);
    tracep->declBit(c+1394,"wb_done_i", false,-1);
    tracep->declBit(c+1377,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1431,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1438,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1452,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1440,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1441,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1426,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1378,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1431,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1452,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1438,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1453,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1431,"if_axi_bready_o", false,-1);
    tracep->declBit(c+1379,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+1373,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+1375,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1048,"if_axi_arready_i", false,-1);
    tracep->declBit(c+950,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+260,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+949,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+259,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+261,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+262,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+951,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1275,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+1374,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1372,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1376,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+1380,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1371,"if_ready_reg", false,-1);
    tracep->declBit(c+958,"if_valid_reg", false,-1);
    tracep->declBus(c+920,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1426,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1427,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1428,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1429,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1398,"state", false,-1, 1,0);
    tracep->declBus(c+1399,"next_state", false,-1, 1,0);
    tracep->declBit(c+950,"axi_arvalid", false,-1);
    tracep->declBit(c+951,"axi_rready", false,-1);
    tracep->declBus(c+260,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+949,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+259,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+261,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+262,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1483,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"FETCH", false,-1, 0,0);
    tracep->declBit(c+956,"axi_state", false,-1);
    tracep->declBit(c+963,"fetch_start", false,-1);
    tracep->declBus(c+957,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBit(c+845,"ls_read_i", false,-1);
    tracep->declBit(c+846,"ls_write_i", false,-1);
    tracep->declBit(c+921,"ls_done_o", false,-1);
    tracep->declBus(c+686,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+847,"valid_i", false,-1);
    tracep->declBit(c+848,"wen_i", false,-1);
    tracep->declBus(c+849,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+405,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+850,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+851,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+852,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+853,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1440,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1440,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1427,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1427,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1051,"ls_axi_awready", false,-1);
    tracep->declBit(c+695,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1455,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+687,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+689,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+691,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+693,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1052,"ls_axi_wready", false,-1);
    tracep->declBit(c+696,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1390,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1392,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+700,"ls_axi_wlast", false,-1);
    tracep->declBit(c+697,"ls_axi_bready", false,-1);
    tracep->declBit(c+1278,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+419,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+421,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1053,"ls_axi_arready", false,-1);
    tracep->declBit(c+698,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1456,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+688,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+690,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+692,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+694,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+699,"ls_axi_rready", false,-1);
    tracep->declBit(c+1279,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+420,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1391,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1393,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+422,"ls_axi_rlast", false,-1);
    tracep->declBit(c+921,"ls_done_reg", false,-1);
    tracep->declBus(c+686,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"READ", false,-1, 1,0);
    tracep->declBus(c+1428,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1429,"DONE", false,-1, 1,0);
    tracep->declBus(c+752,"state", false,-1, 1,0);
    tracep->declBit(c+695,"axi_awvalid", false,-1);
    tracep->declBit(c+696,"axi_wvalid", false,-1);
    tracep->declBus(c+1455,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+687,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+753,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+689,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+691,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+693,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+754,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+697,"axi_bready", false,-1);
    tracep->declBit(c+700,"axi_wlast", false,-1);
    tracep->declBit(c+698,"axi_arvalid", false,-1);
    tracep->declBit(c+699,"axi_rready", false,-1);
    tracep->declBus(c+1456,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+688,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+690,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+692,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+694,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+1148,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1149,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1150,"pc_valid_o", false,-1);
    tracep->declBit(c+1371,"if_ready_i", false,-1);
    tracep->declBit(c+1150,"pc_valid_reg", false,-1);
    tracep->declBus(c+1148,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1483,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1153,"state", false,-1);
    tracep->declBit(c+1400,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1485,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1486,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBus(c+296,"wdata", false,-1, 31,0);
    tracep->declBus(c+297,"waddr", false,-1, 4,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->declBus(c+264,"raddr1", false,-1, 4,0);
    tracep->declBus(c+307,"r1", false,-1, 31,0);
    tracep->declBus(c+265,"raddr2", false,-1, 4,0);
    tracep->declBus(c+308,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+316+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBit(c+269,"ex_valid_i", false,-1);
    tracep->declBit(c+270,"wb_ready_o", false,-1);
    tracep->declBit(c+1394,"wb_done_o", false,-1);
    tracep->declBit(c+258,"difftest", false,-1);
    tracep->declBus(c+296,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+271,"ex_i", false,-1, 31,0);
    tracep->declBus(c+297,"rd_o", false,-1, 4,0);
    tracep->declBus(c+263,"rd_i", false,-1, 4,0);
    tracep->declBit(c+298,"gpr_wen_o", false,-1);
    tracep->declBit(c+280,"gpr_wen_i", false,-1);
    tracep->declBus(c+273,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+277,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+299,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+300,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+301,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+302,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+281,"mepc_wen_i", false,-1);
    tracep->declBit(c+282,"mstatus_wen_i", false,-1);
    tracep->declBit(c+283,"mcause_wen_i", false,-1);
    tracep->declBit(c+284,"mtvec_wen_i", false,-1);
    tracep->declBit(c+303,"mepc_wen_o", false,-1);
    tracep->declBit(c+304,"mstatus_wen_o", false,-1);
    tracep->declBit(c+305,"mcause_wen_o", false,-1);
    tracep->declBit(c+306,"mtvec_wen_o", false,-1);
    tracep->declBit(c+270,"wb_ready_reg", false,-1);
    tracep->declBit(c+1394,"wb_done_reg", false,-1);
    tracep->declBit(c+258,"difftest_reg", false,-1);
    tracep->declBus(c+296,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+297,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+298,"gpr_wen_reg", false,-1);
    tracep->declBus(c+299,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+300,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+301,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+302,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+303,"mepc_wen_reg", false,-1);
    tracep->declBit(c+304,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+305,"mcause_wen_reg", false,-1);
    tracep->declBit(c+306,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1428,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1429,"NULL", false,-1, 1,0);
    tracep->declBus(c+1401,"state", false,-1, 1,0);
    tracep->declBus(c+1402,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBit(c+1387,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1454,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1438,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+959,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1440,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1441,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1426,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1388,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1454,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+959,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1438,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+960,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1454,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+417,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+414,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+416,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1389,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1049,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1383,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1381,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1382,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1384,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1385,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1050,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1277,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+415,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1276,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1386,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+418,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1051,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+695,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1455,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+687,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+689,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+691,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+693,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1052,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+696,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1390,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1392,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+700,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+697,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1278,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+419,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+421,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1053,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+698,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1456,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+688,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+690,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+692,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+694,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+699,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1279,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+420,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1391,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1393,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+422,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+22,"io_master_awready", false,-1);
    tracep->declBit(c+982,"io_master_awvalid", false,-1);
    tracep->declBus(c+983,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+984,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+985,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+986,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+987,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+23,"io_master_wready", false,-1);
    tracep->declBit(c+988,"io_master_wvalid", false,-1);
    tracep->declBus(c+989,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+990,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"io_master_wlast", false,-1);
    tracep->declBit(c+992,"io_master_bready", false,-1);
    tracep->declBit(c+1191,"io_master_bvalid", false,-1);
    tracep->declBus(c+1192,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1364,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_arready", false,-1);
    tracep->declBit(c+993,"io_master_arvalid", false,-1);
    tracep->declBus(c+994,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+995,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+996,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+997,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+998,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+999,"io_master_rready", false,-1);
    tracep->declBit(c+1193,"io_master_rvalid", false,-1);
    tracep->declBus(c+1194,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1365,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1366,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1367,"io_master_rlast", false,-1);
    tracep->declBit(c+290,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1066,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1060,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1054,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1058,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1062,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1064,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1067,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1055,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1057,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1071,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1068,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+286,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+288,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1069,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1061,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1056,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1059,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1063,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1065,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1070,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+294,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+287,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+285,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+289,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+295,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+309,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+310,"marchid", false,-1, 31,0);
    tracep->declBus(c+1073,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1074,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1075,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1280,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1076,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+937,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1077,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+870,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1403,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1078,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1404,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+938,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1079,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+939,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1080,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1405,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1406,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+940,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+425,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+941,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+426,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1407,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+942,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1081,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1082,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1281,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1083,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1084,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1408,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1426,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1427,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1428,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1429,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+871,"state", false,-1, 1,0);
    tracep->declBus(c+1409,"next_state", false,-1, 1,0);
    tracep->declBus(c+1457,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1458,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1085,"sel_clint", false,-1);
    tracep->declBus(c+1487,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1488,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1086,"sel_mvendorid", false,-1);
    tracep->declBit(c+1087,"sel_marchid", false,-1);
    tracep->declBit(c+1088,"sel_id", false,-1);
    tracep->declBus(c+1089,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1090,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1091,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+427,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1092,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1093,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1094,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1095,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1489,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1096,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1490,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1097,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1098,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1099,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1100,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1491,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1492,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1493,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1436,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1101,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1436,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1436,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1102,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1103,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1436,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1436,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1104,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1105,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1494,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1495,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+1439,"din", false,-1, 31,0);
    tracep->declBus(c+310,"dout", false,-1, 31,0);
    tracep->declBit(c+1431,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1439,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+301,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+305,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1439,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+303,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1496,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 31,0);
    tracep->declBus(c+274,"dout", false,-1, 31,0);
    tracep->declBit(c+304,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1439,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+302,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+306,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1486,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1497,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1370,"rst", false,-1);
    tracep->declBus(c+1439,"din", false,-1, 31,0);
    tracep->declBus(c+309,"dout", false,-1, 31,0);
    tracep->declBit(c+1431,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"io_d", false,-1);
    tracep->declBit(c+348,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"io_d", false,-1);
    tracep->declBit(c+348,"io_q", false,-1);
    tracep->declBit(c+348,"sync_0", false,-1);
    tracep->declBit(c+349,"sync_1", false,-1);
    tracep->declBit(c+350,"sync_2", false,-1);
    tracep->declBit(c+351,"sync_3", false,-1);
    tracep->declBit(c+352,"sync_4", false,-1);
    tracep->declBit(c+353,"sync_5", false,-1);
    tracep->declBit(c+354,"sync_6", false,-1);
    tracep->declBit(c+355,"sync_7", false,-1);
    tracep->declBit(c+356,"sync_8", false,-1);
    tracep->declBit(c+357,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1169,"auto_in_psel", false,-1);
    tracep->declBit(c+1170,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+444,"auto_in_pready", false,-1);
    tracep->declBit(c+1435,"auto_in_pslverr", false,-1);
    tracep->declBus(c+445,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1336,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1337,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1338,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1339,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1340,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1144,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1169,"in_psel", false,-1);
    tracep->declBit(c+1170,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+444,"in_pready", false,-1);
    tracep->declBus(c+445,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1435,"in_pslverr", false,-1);
    tracep->declBus(c+1336,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1337,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1338,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1339,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1340,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1341,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1342,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1343,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1344,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1345,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1440,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1498,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1499,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1500,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1501,"ONE", false,-1, 7,0);
    tracep->declBus(c+1502,"TWO", false,-1, 7,0);
    tracep->declBus(c+1503,"THREE", false,-1, 7,0);
    tracep->declBus(c+1504,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1505,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1506,"SIX", false,-1, 7,0);
    tracep->declBus(c+1507,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1508,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1509,"NINE", false,-1, 7,0);
    tracep->declBus(c+1510,"A", false,-1, 7,0);
    tracep->declBus(c+1511,"B", false,-1, 7,0);
    tracep->declBus(c+1512,"C", false,-1, 7,0);
    tracep->declBus(c+1513,"D", false,-1, 7,0);
    tracep->declBus(c+1514,"E", false,-1, 7,0);
    tracep->declBus(c+1515,"F", false,-1, 7,0);
    tracep->declBus(c+447,"led_reg", false,-1, 15,0);
    tracep->declBus(c+448,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+449+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1282,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1283,"write_en", false,-1);
    tracep->declBit(c+1284,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1167,"auto_in_psel", false,-1);
    tracep->declBit(c+1168,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+442,"auto_in_pready", false,-1);
    tracep->declBit(c+1434,"auto_in_pslverr", false,-1);
    tracep->declBus(c+443,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1346,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1347,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1144,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1167,"in_psel", false,-1);
    tracep->declBit(c+1168,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+442,"in_pready", false,-1);
    tracep->declBus(c+443,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1434,"in_pslverr", false,-1);
    tracep->declBit(c+1346,"ps2_clk", false,-1);
    tracep->declBit(c+1347,"ps2_data", false,-1);
    tracep->declBus(c+1516,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1517,"EXP", false,-1, 7,0);
    tracep->declBus(c+943,"state", false,-1, 1,0);
    tracep->declBus(c+944,"counter", false,-1, 3,0);
    tracep->declBus(c+945,"buffer", false,-1, 7,0);
    tracep->declBus(c+946,"buffer1", false,-1, 7,0);
    tracep->declBus(c+947,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1410,"ready", false,-1);
    tracep->declBus(c+1411,"rdata", false,-1, 31,0);
    tracep->declBit(c+1285,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1030,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1031,"auto_in_wvalid", false,-1);
    tracep->declBit(c+74,"auto_in_arready", false,-1);
    tracep->declBit(c+1032,"auto_in_arvalid", false,-1);
    tracep->declBus(c+979,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1033,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1369,"auto_in_rready", false,-1);
    tracep->declBit(c+75,"auto_in_rvalid", false,-1);
    tracep->declBus(c+76,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+75,"state", false,-1);
    tracep->declBus(c+77,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+76,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1106,"raddr", false,-1, 31,0);
    tracep->declBit(c+1107,"ren", false,-1);
    tracep->declBus(c+1108,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1171,"auto_in_psel", false,-1);
    tracep->declBit(c+1172,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1109,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1360,"auto_in_pready", false,-1);
    tracep->declBit(c+1431,"auto_in_pslverr", false,-1);
    tracep->declBus(c+839,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1331,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1357,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1109,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1171,"in_psel", false,-1);
    tracep->declBit(c+1172,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1360,"in_pready", false,-1);
    tracep->declBus(c+839,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1431,"in_pslverr", false,-1);
    tracep->declBit(c+1330,"qspi_sck", false,-1);
    tracep->declBit(c+1331,"qspi_ce_n", false,-1);
    tracep->declBus(c+1357,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1357,"din", false,-1, 3,0);
    tracep->declBus(c+1332,"dout", false,-1, 3,0);
    tracep->declBus(c+1333,"douten", false,-1, 3,0);
    tracep->declBit(c+1412,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1334,"clk_i", false,-1);
    tracep->declBit(c+1335,"rst_i", false,-1);
    tracep->declBus(c+1109,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1158,"dat_i", false,-1, 31,0);
    tracep->declBus(c+839,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1171,"cyc_i", false,-1);
    tracep->declBit(c+1171,"stb_i", false,-1);
    tracep->declBit(c+1412,"ack_o", false,-1);
    tracep->declBit(c+1157,"we_i", false,-1);
    tracep->declBit(c+1330,"sck", false,-1);
    tracep->declBit(c+1331,"ce_n", false,-1);
    tracep->declBus(c+1357,"din", false,-1, 3,0);
    tracep->declBus(c+1332,"dout", false,-1, 3,0);
    tracep->declBus(c+1333,"douten", false,-1, 3,0);
    tracep->declBus(c+1483,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+457,"mr_sck", false,-1);
    tracep->declBit(c+458,"mr_ce_n", false,-1);
    tracep->declBus(c+1357,"mr_din", false,-1, 3,0);
    tracep->declBus(c+459,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+460,"mr_doe", false,-1);
    tracep->declBit(c+461,"mw_sck", false,-1);
    tracep->declBit(c+462,"mw_ce_n", false,-1);
    tracep->declBus(c+1357,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1286,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+463,"mw_doe", false,-1);
    tracep->declBit(c+1287,"mr_rd", false,-1);
    tracep->declBit(c+464,"mr_done", false,-1);
    tracep->declBit(c+1288,"mw_wr", false,-1);
    tracep->declBit(c+1289,"mw_done", false,-1);
    tracep->declBit(c+1171,"wb_valid", false,-1);
    tracep->declBit(c+1290,"wb_we", false,-1);
    tracep->declBit(c+1291,"wb_re", false,-1);
    tracep->declBit(c+465,"state", false,-1);
    tracep->declBit(c+1292,"nstate", false,-1);
    tracep->declBus(c+1293,"size", false,-1, 2,0);
    tracep->declBus(c+1294,"byte0", false,-1, 7,0);
    tracep->declBus(c+1295,"byte1", false,-1, 7,0);
    tracep->declBus(c+1296,"byte2", false,-1, 7,0);
    tracep->declBus(c+1297,"byte3", false,-1, 7,0);
    tracep->declBus(c+1145,"wdata", false,-1, 31,0);
    tracep->declBit(c+680,"qpi_flag", false,-1);
    tracep->declBit(c+681,"qpi_sck", false,-1);
    tracep->declBit(c+682,"qpi_ce_n", false,-1);
    tracep->declBus(c+683,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+684,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+685,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1413,"rst_n", false,-1);
    tracep->declBus(c+1146,"addr", false,-1, 23,0);
    tracep->declBit(c+1287,"rd", false,-1);
    tracep->declBus(c+1518,"size", false,-1, 2,0);
    tracep->declBit(c+464,"done", false,-1);
    tracep->declBus(c+839,"line", false,-1, 31,0);
    tracep->declBit(c+457,"sck", false,-1);
    tracep->declBit(c+458,"ce_n", false,-1);
    tracep->declBus(c+1357,"din", false,-1, 3,0);
    tracep->declBus(c+459,"dout", false,-1, 3,0);
    tracep->declBit(c+460,"douten", false,-1);
    tracep->declBus(c+1483,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"READ", false,-1, 0,0);
    tracep->declBus(c+1519,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+466,"state", false,-1);
    tracep->declBit(c+1298,"nstate", false,-1);
    tracep->declBus(c+467,"counter", false,-1, 7,0);
    tracep->declBus(c+468,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+872+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1520,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+469,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1413,"rst_n", false,-1);
    tracep->declBus(c+1147,"addr", false,-1, 23,0);
    tracep->declBus(c+1145,"line", false,-1, 31,0);
    tracep->declBus(c+1293,"size", false,-1, 2,0);
    tracep->declBit(c+1288,"wr", false,-1);
    tracep->declBit(c+1289,"done", false,-1);
    tracep->declBit(c+461,"sck", false,-1);
    tracep->declBit(c+462,"ce_n", false,-1);
    tracep->declBus(c+1357,"din", false,-1, 3,0);
    tracep->declBus(c+1286,"dout", false,-1, 3,0);
    tracep->declBit(c+463,"douten", false,-1);
    tracep->declBus(c+1483,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1484,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1299,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+470,"state", false,-1);
    tracep->declBit(c+1300,"nstate", false,-1);
    tracep->declBus(c+471,"counter", false,-1, 7,0);
    tracep->declBus(c+472,"saddr", false,-1, 23,0);
    tracep->declBus(c+1521,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1162,"auto_in_psel", false,-1);
    tracep->declBit(c+1163,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1109,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"auto_in_pready", false,-1);
    tracep->declBit(c+1431,"auto_in_pslverr", false,-1);
    tracep->declBus(c+440,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1358,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+430,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+877,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+878,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+879,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+880,"sdram_bundle_we", false,-1);
    tracep->declBus(c+881,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+882,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+431,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+906,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1109,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1162,"in_psel", false,-1);
    tracep->declBit(c+1163,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"in_pready", false,-1);
    tracep->declBus(c+440,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1431,"in_pslverr", false,-1);
    tracep->declBit(c+1358,"sdram_clk", false,-1);
    tracep->declBit(c+430,"sdram_cke", false,-1);
    tracep->declBit(c+877,"sdram_cs", false,-1);
    tracep->declBit(c+878,"sdram_ras", false,-1);
    tracep->declBit(c+879,"sdram_cas", false,-1);
    tracep->declBit(c+880,"sdram_we", false,-1);
    tracep->declBus(c+881,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+882,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+431,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+906,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+473,"sdram_dout_en", false,-1);
    tracep->declBus(c+474,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+358,"state", false,-1, 1,0);
    tracep->declBit(c+883,"req_accept", false,-1);
    tracep->declBit(c+1301,"is_read", false,-1);
    tracep->declBit(c+1302,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1334,"clk_i", false,-1);
    tracep->declBit(c+1335,"rst_i", false,-1);
    tracep->declBus(c+1303,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1301,"inport_rd_i", false,-1);
    tracep->declBus(c+1440,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1109,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1158,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+906,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+883,"inport_accept_o", false,-1);
    tracep->declBit(c+439,"inport_ack_o", false,-1);
    tracep->declBit(c+1431,"inport_error_o", false,-1);
    tracep->declBus(c+440,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1358,"sdram_clk_o", false,-1);
    tracep->declBit(c+430,"sdram_cke_o", false,-1);
    tracep->declBit(c+877,"sdram_cs_o", false,-1);
    tracep->declBit(c+878,"sdram_ras_o", false,-1);
    tracep->declBit(c+879,"sdram_cas_o", false,-1);
    tracep->declBit(c+880,"sdram_we_o", false,-1);
    tracep->declBus(c+431,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+881,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+882,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+474,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+473,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1522,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1523,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1524,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1474,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1473,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1525,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1526,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1527,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1528,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1529,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1473,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1467,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1463,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1465,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1464,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1466,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1462,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1461,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1438,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1530,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1473,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1438,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1461,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1462,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1463,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1464,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1465,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1466,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1467,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1468,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1469,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1531,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1531,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1486,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1531,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1474,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1474,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1532,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1109,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1303,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1301,"ram_rd_w", false,-1);
    tracep->declBit(c+883,"ram_accept_w", false,-1);
    tracep->declBus(c+1158,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+440,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+439,"ram_ack_w", false,-1);
    tracep->declBit(c+1304,"ram_req_w", false,-1);
    tracep->declBus(c+884,"command_q", false,-1, 3,0);
    tracep->declBus(c+881,"addr_q", false,-1, 12,0);
    tracep->declBus(c+474,"data_q", false,-1, 31,0);
    tracep->declBit(c+475,"data_rd_en_q", false,-1);
    tracep->declBus(c+431,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+430,"cke_q", false,-1);
    tracep->declBus(c+882,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1533,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+476,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+906,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+477,"refresh_q", false,-1);
    tracep->declBus(c+885,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+478+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+886,"state_q", false,-1, 3,0);
    tracep->declBus(c+1305,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1306,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+486,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+487,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1307,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1308,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1309,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1473,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+488,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1310,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1534,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+887,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+489,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+440,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+490,"idx", false,-1, 31,0);
    tracep->declBus(c+491,"rd_q", false,-1, 3,0);
    tracep->declBit(c+439,"ack_q", false,-1);
    tracep->declArray(c+888,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1177,"auto_in_psel", false,-1);
    tracep->declBit(c+1178,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1166,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1361,"auto_in_pready", false,-1);
    tracep->declBit(c+1431,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1179,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+428,"spi_bundle_sck", false,-1);
    tracep->declBus(c+429,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+876,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1356,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1535,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1536,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1525,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1311,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1177,"in_psel", false,-1);
    tracep->declBit(c+1178,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1361,"in_pready", false,-1);
    tracep->declBus(c+1179,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1431,"in_pslverr", false,-1);
    tracep->declBit(c+428,"spi_sck", false,-1);
    tracep->declBus(c+429,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+876,"spi_mosi", false,-1);
    tracep->declBit(c+1356,"spi_miso", false,-1);
    tracep->declBit(c+492,"spi_irq_out", false,-1);
    tracep->declBus(c+1312,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1313,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1314,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1315,"wb_we_i", false,-1);
    tracep->declBit(c+1316,"wb_stb_i", false,-1);
    tracep->declBit(c+1317,"wb_cyc_i", false,-1);
    tracep->declBit(c+493,"wb_ack_o", false,-1);
    tracep->declBus(c+494,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1441,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1425,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1537,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1538,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1518,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1539,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1540,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1541,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+359,"state", false,-1, 2,0);
    tracep->declBus(c+360,"next_state", false,-1, 2,0);
    tracep->declBus(c+361,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+362,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+363,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+364,"flash_pwrite", false,-1);
    tracep->declBit(c+365,"flash_psel", false,-1);
    tracep->declBit(c+366,"flash_penable", false,-1);
    tracep->declBit(c+367,"flash_pready", false,-1);
    tracep->declBus(c+368,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1542,"Tp", false,-1, 31,0);
    tracep->declBit(c+1334,"wb_clk_i", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBus(c+1312,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1313,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+494,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1314,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1315,"wb_we_i", false,-1);
    tracep->declBit(c+1316,"wb_stb_i", false,-1);
    tracep->declBit(c+1317,"wb_cyc_i", false,-1);
    tracep->declBit(c+493,"wb_ack_o", false,-1);
    tracep->declBit(c+1431,"wb_err_o", false,-1);
    tracep->declBit(c+492,"wb_int_o", false,-1);
    tracep->declBus(c+429,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+428,"sclk_pad_o", false,-1);
    tracep->declBit(c+876,"mosi_pad_o", false,-1);
    tracep->declBit(c+1356,"miso_pad_i", false,-1);
    tracep->declBus(c+495,"divider", false,-1, 15,0);
    tracep->declBus(c+496,"ctrl", false,-1, 13,0);
    tracep->declBus(c+497,"ss", false,-1, 7,0);
    tracep->declBus(c+1318,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+498,"rx", false,-1, 127,0);
    tracep->declBit(c+502,"rx_negedge", false,-1);
    tracep->declBit(c+503,"tx_negedge", false,-1);
    tracep->declBus(c+504,"char_len", false,-1, 6,0);
    tracep->declBit(c+505,"go", false,-1);
    tracep->declBit(c+506,"lsb", false,-1);
    tracep->declBit(c+507,"ie", false,-1);
    tracep->declBit(c+508,"ass", false,-1);
    tracep->declBit(c+1319,"spi_divider_sel", false,-1);
    tracep->declBit(c+1320,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1321,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1322,"spi_ss_sel", false,-1);
    tracep->declBit(c+509,"tip", false,-1);
    tracep->declBit(c+510,"pos_edge", false,-1);
    tracep->declBit(c+511,"neg_edge", false,-1);
    tracep->declBit(c+512,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1542,"Tp", false,-1, 31,0);
    tracep->declBit(c+1334,"clk_in", false,-1);
    tracep->declBit(c+1335,"rst", false,-1);
    tracep->declBit(c+509,"enable", false,-1);
    tracep->declBit(c+505,"go", false,-1);
    tracep->declBit(c+512,"last_clk", false,-1);
    tracep->declBus(c+495,"divider", false,-1, 15,0);
    tracep->declBit(c+428,"clk_out", false,-1);
    tracep->declBit(c+510,"pos_edge", false,-1);
    tracep->declBit(c+511,"neg_edge", false,-1);
    tracep->declBus(c+513,"cnt", false,-1, 15,0);
    tracep->declBit(c+514,"cnt_zero", false,-1);
    tracep->declBit(c+515,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1542,"Tp", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"rst", false,-1);
    tracep->declBus(c+1323,"latch", false,-1, 3,0);
    tracep->declBus(c+1314,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+504,"len", false,-1, 6,0);
    tracep->declBit(c+506,"lsb", false,-1);
    tracep->declBit(c+505,"go", false,-1);
    tracep->declBit(c+510,"pos_edge", false,-1);
    tracep->declBit(c+511,"neg_edge", false,-1);
    tracep->declBit(c+502,"rx_negedge", false,-1);
    tracep->declBit(c+503,"tx_negedge", false,-1);
    tracep->declBit(c+509,"tip", false,-1);
    tracep->declBit(c+512,"last", false,-1);
    tracep->declBus(c+1313,"p_in", false,-1, 31,0);
    tracep->declArray(c+498,"p_out", false,-1, 127,0);
    tracep->declBit(c+428,"s_clk", false,-1);
    tracep->declBit(c+1356,"s_in", false,-1);
    tracep->declBit(c+876,"s_out", false,-1);
    tracep->declBus(c+516,"cnt", false,-1, 7,0);
    tracep->declArray(c+498,"data", false,-1, 127,0);
    tracep->declBus(c+517,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+518,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+519,"rx_clk", false,-1);
    tracep->declBit(c+520,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1173,"auto_in_psel", false,-1);
    tracep->declBit(c+1174,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1110,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_in_pready", false,-1);
    tracep->declBit(c+1431,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1176,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"uart_rx", false,-1);
    tracep->declBit(c+1355,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1173,"in_psel", false,-1);
    tracep->declBit(c+1174,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1175,"in_pready", false,-1);
    tracep->declBit(c+1431,"in_pslverr", false,-1);
    tracep->declBus(c+1144,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1176,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1354,"uart_rx", false,-1);
    tracep->declBit(c+1355,"uart_tx", false,-1);
    tracep->declBit(c+521,"rtsn", false,-1);
    tracep->declBit(c+1431,"ctsn", false,-1);
    tracep->declBit(c+522,"dtr_pad_o", false,-1);
    tracep->declBit(c+1431,"dsr_pad_i", false,-1);
    tracep->declBit(c+1431,"ri_pad_i", false,-1);
    tracep->declBit(c+1431,"dcd_pad_i", false,-1);
    tracep->declBit(c+523,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1324,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1325,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+369,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1326,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+524,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBus(c+1324,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1327,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1326,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1355,"stx_pad_o", false,-1);
    tracep->declBit(c+1354,"srx_pad_i", false,-1);
    tracep->declBus(c+1468,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+524,"rts_pad_o", false,-1);
    tracep->declBit(c+522,"dtr_pad_o", false,-1);
    tracep->declBit(c+523,"int_o", false,-1);
    tracep->declBit(c+525,"enable", false,-1);
    tracep->declBit(c+526,"srx_pad", false,-1);
    tracep->declBus(c+527,"ier", false,-1, 3,0);
    tracep->declBus(c+528,"iir", false,-1, 3,0);
    tracep->declBus(c+529,"fcr", false,-1, 1,0);
    tracep->declBus(c+530,"mcr", false,-1, 4,0);
    tracep->declBus(c+531,"lcr", false,-1, 7,0);
    tracep->declBus(c+532,"msr", false,-1, 7,0);
    tracep->declBus(c+533,"dl", false,-1, 15,0);
    tracep->declBus(c+534,"scratch", false,-1, 7,0);
    tracep->declBit(c+535,"start_dlc", false,-1);
    tracep->declBit(c+536,"lsr_mask_d", false,-1);
    tracep->declBit(c+537,"msi_reset", false,-1);
    tracep->declBus(c+538,"dlc", false,-1, 15,0);
    tracep->declBus(c+539,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+540,"rx_reset", false,-1);
    tracep->declBit(c+541,"tx_reset", false,-1);
    tracep->declBit(c+542,"dlab", false,-1);
    tracep->declBit(c+1436,"cts_pad_i", false,-1);
    tracep->declBit(c+1431,"dsr_pad_i", false,-1);
    tracep->declBit(c+1431,"ri_pad_i", false,-1);
    tracep->declBit(c+1431,"dcd_pad_i", false,-1);
    tracep->declBit(c+543,"loopback", false,-1);
    tracep->declBit(c+1431,"cts", false,-1);
    tracep->declBit(c+1436,"dsr", false,-1);
    tracep->declBit(c+1436,"ri", false,-1);
    tracep->declBit(c+1436,"dcd", false,-1);
    tracep->declBit(c+544,"cts_c", false,-1);
    tracep->declBit(c+545,"dsr_c", false,-1);
    tracep->declBit(c+546,"ri_c", false,-1);
    tracep->declBit(c+547,"dcd_c", false,-1);
    tracep->declBus(c+548,"lsr", false,-1, 7,0);
    tracep->declBit(c+549,"lsr0", false,-1);
    tracep->declBit(c+550,"lsr1", false,-1);
    tracep->declBit(c+551,"lsr2", false,-1);
    tracep->declBit(c+552,"lsr3", false,-1);
    tracep->declBit(c+553,"lsr4", false,-1);
    tracep->declBit(c+554,"lsr5", false,-1);
    tracep->declBit(c+555,"lsr6", false,-1);
    tracep->declBit(c+556,"lsr7", false,-1);
    tracep->declBit(c+557,"lsr0r", false,-1);
    tracep->declBit(c+558,"lsr1r", false,-1);
    tracep->declBit(c+559,"lsr2r", false,-1);
    tracep->declBit(c+560,"lsr3r", false,-1);
    tracep->declBit(c+561,"lsr4r", false,-1);
    tracep->declBit(c+562,"lsr5r", false,-1);
    tracep->declBit(c+563,"lsr6r", false,-1);
    tracep->declBit(c+564,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+565,"rls_int", false,-1);
    tracep->declBit(c+566,"rda_int", false,-1);
    tracep->declBit(c+567,"ti_int", false,-1);
    tracep->declBit(c+568,"thre_int", false,-1);
    tracep->declBit(c+569,"ms_int", false,-1);
    tracep->declBit(c+570,"tf_push", false,-1);
    tracep->declBit(c+571,"rf_pop", false,-1);
    tracep->declBus(c+1414,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+572,"rf_error_bit", false,-1);
    tracep->declBit(c+550,"rf_overrun", false,-1);
    tracep->declBit(c+573,"rf_push_pulse", false,-1);
    tracep->declBus(c+574,"rf_count", false,-1, 4,0);
    tracep->declBus(c+575,"tf_count", false,-1, 4,0);
    tracep->declBus(c+576,"tstate", false,-1, 2,0);
    tracep->declBus(c+577,"rstate", false,-1, 3,0);
    tracep->declBus(c+578,"counter_t", false,-1, 9,0);
    tracep->declBit(c+579,"thre_set_en", false,-1);
    tracep->declBus(c+580,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+581,"block_value", false,-1, 7,0);
    tracep->declBit(c+582,"serial_out", false,-1);
    tracep->declBit(c+583,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+584,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+585,"lsr0_d", false,-1);
    tracep->declBit(c+586,"lsr1_d", false,-1);
    tracep->declBit(c+587,"lsr2_d", false,-1);
    tracep->declBit(c+588,"lsr3_d", false,-1);
    tracep->declBit(c+589,"lsr4_d", false,-1);
    tracep->declBit(c+590,"lsr5_d", false,-1);
    tracep->declBit(c+591,"lsr6_d", false,-1);
    tracep->declBit(c+592,"lsr7_d", false,-1);
    tracep->declBit(c+593,"rls_int_d", false,-1);
    tracep->declBit(c+594,"thre_int_d", false,-1);
    tracep->declBit(c+595,"ms_int_d", false,-1);
    tracep->declBit(c+596,"ti_int_d", false,-1);
    tracep->declBit(c+597,"rda_int_d", false,-1);
    tracep->declBit(c+598,"rls_int_rise", false,-1);
    tracep->declBit(c+599,"thre_int_rise", false,-1);
    tracep->declBit(c+600,"ms_int_rise", false,-1);
    tracep->declBit(c+601,"ti_int_rise", false,-1);
    tracep->declBit(c+602,"rda_int_rise", false,-1);
    tracep->declBit(c+603,"rls_int_pnd", false,-1);
    tracep->declBit(c+604,"rda_int_pnd", false,-1);
    tracep->declBit(c+605,"thre_int_pnd", false,-1);
    tracep->declBit(c+606,"ms_int_pnd", false,-1);
    tracep->declBit(c+607,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1542,"Tp", false,-1, 31,0);
    tracep->declBus(c+1542,"width", false,-1, 31,0);
    tracep->declBus(c+1484,"init_value", false,-1, 0,0);
    tracep->declBit(c+1335,"rst_i", false,-1);
    tracep->declBit(c+1334,"clk_i", false,-1);
    tracep->declBit(c+1431,"stage1_rst_i", false,-1);
    tracep->declBit(c+1436,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1354,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+526,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+608,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBus(c+531,"lcr", false,-1, 7,0);
    tracep->declBit(c+571,"rf_pop", false,-1);
    tracep->declBit(c+583,"srx_pad_i", false,-1);
    tracep->declBit(c+525,"enable", false,-1);
    tracep->declBit(c+540,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+578,"counter_t", false,-1, 9,0);
    tracep->declBus(c+574,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1414,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+550,"rf_overrun", false,-1);
    tracep->declBit(c+572,"rf_error_bit", false,-1);
    tracep->declBus(c+577,"rstate", false,-1, 3,0);
    tracep->declBit(c+573,"rf_push_pulse", false,-1);
    tracep->declBus(c+609,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+610,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+611,"rshift", false,-1, 7,0);
    tracep->declBit(c+612,"rparity", false,-1);
    tracep->declBit(c+613,"rparity_error", false,-1);
    tracep->declBit(c+614,"rframing_error", false,-1);
    tracep->declBit(c+615,"rbit_in", false,-1);
    tracep->declBit(c+616,"rparity_xor", false,-1);
    tracep->declBus(c+617,"counter_b", false,-1, 7,0);
    tracep->declBit(c+618,"rf_push_q", false,-1);
    tracep->declBus(c+619,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+620,"rf_push", false,-1);
    tracep->declBit(c+621,"break_error", false,-1);
    tracep->declBit(c+622,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+623,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+624,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+625,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1438,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1461,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1462,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1463,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1464,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1465,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1466,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1467,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1468,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1469,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1470,"sr_push", false,-1, 3,0);
    tracep->declBus(c+626,"toc_value", false,-1, 9,0);
    tracep->declBus(c+627,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1543,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1544,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1473,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1485,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBit(c+573,"push", false,-1);
    tracep->declBit(c+571,"pop", false,-1);
    tracep->declBus(c+619,"data_in", false,-1, 10,0);
    tracep->declBit(c+540,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1414,"data_out", false,-1, 10,0);
    tracep->declBit(c+550,"overrun", false,-1);
    tracep->declBus(c+574,"count", false,-1, 4,0);
    tracep->declBit(c+572,"error_bit", false,-1);
    tracep->declBus(c+1415,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+628+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+644,"top", false,-1, 3,0);
    tracep->declBus(c+645,"bottom", false,-1, 3,0);
    tracep->declBus(c+646,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+647,"word0", false,-1, 2,0);
    tracep->declBus(c+648,"word1", false,-1, 2,0);
    tracep->declBus(c+649,"word2", false,-1, 2,0);
    tracep->declBus(c+650,"word3", false,-1, 2,0);
    tracep->declBus(c+651,"word4", false,-1, 2,0);
    tracep->declBus(c+652,"word5", false,-1, 2,0);
    tracep->declBus(c+653,"word6", false,-1, 2,0);
    tracep->declBus(c+654,"word7", false,-1, 2,0);
    tracep->declBus(c+655,"word8", false,-1, 2,0);
    tracep->declBus(c+656,"word9", false,-1, 2,0);
    tracep->declBus(c+657,"word10", false,-1, 2,0);
    tracep->declBus(c+658,"word11", false,-1, 2,0);
    tracep->declBus(c+659,"word12", false,-1, 2,0);
    tracep->declBus(c+660,"word13", false,-1, 2,0);
    tracep->declBus(c+661,"word14", false,-1, 2,0);
    tracep->declBus(c+662,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1473,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1525,"data_width", false,-1, 31,0);
    tracep->declBus(c+1544,"depth", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+573,"we", false,-1);
    tracep->declBus(c+644,"a", false,-1, 3,0);
    tracep->declBus(c+645,"dpra", false,-1, 3,0);
    tracep->declBus(c+663,"di", false,-1, 7,0);
    tracep->declBus(c+1415,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+370+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBus(c+531,"lcr", false,-1, 7,0);
    tracep->declBit(c+570,"tf_push", false,-1);
    tracep->declBus(c+1327,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+525,"enable", false,-1);
    tracep->declBit(c+541,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+582,"stx_pad_o", false,-1);
    tracep->declBus(c+576,"tstate", false,-1, 2,0);
    tracep->declBus(c+575,"tf_count", false,-1, 4,0);
    tracep->declBus(c+664,"counter", false,-1, 4,0);
    tracep->declBus(c+665,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+666,"shift_out", false,-1, 6,0);
    tracep->declBit(c+667,"stx_o_tmp", false,-1);
    tracep->declBit(c+668,"parity_xor", false,-1);
    tracep->declBit(c+669,"tf_pop", false,-1);
    tracep->declBit(c+670,"bit_out", false,-1);
    tracep->declBus(c+1327,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1416,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+671,"tf_overrun", false,-1);
    tracep->declBus(c+1441,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1425,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1537,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1538,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1518,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1539,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1525,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1544,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1473,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1485,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+1335,"wb_rst_i", false,-1);
    tracep->declBit(c+570,"push", false,-1);
    tracep->declBit(c+669,"pop", false,-1);
    tracep->declBus(c+1327,"data_in", false,-1, 7,0);
    tracep->declBit(c+541,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1416,"data_out", false,-1, 7,0);
    tracep->declBit(c+671,"overrun", false,-1);
    tracep->declBus(c+575,"count", false,-1, 4,0);
    tracep->declBus(c+672,"top", false,-1, 3,0);
    tracep->declBus(c+673,"bottom", false,-1, 3,0);
    tracep->declBus(c+674,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1473,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1525,"data_width", false,-1, 31,0);
    tracep->declBus(c+1544,"depth", false,-1, 31,0);
    tracep->declBit(c+1334,"clk", false,-1);
    tracep->declBit(c+570,"we", false,-1);
    tracep->declBus(c+672,"a", false,-1, 3,0);
    tracep->declBus(c+673,"dpra", false,-1, 3,0);
    tracep->declBus(c+1327,"di", false,-1, 7,0);
    tracep->declBus(c+1416,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+386+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBit(c+1164,"auto_in_psel", false,-1);
    tracep->declBit(c+1165,"auto_in_penable", false,-1);
    tracep->declBit(c+1157,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1166,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1156,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1158,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"auto_in_pready", false,-1);
    tracep->declBit(c+1432,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1433,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1348,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1349,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1350,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1351,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1352,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1353,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1334,"clock", false,-1);
    tracep->declBit(c+1335,"reset", false,-1);
    tracep->declBus(c+1311,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1164,"in_psel", false,-1);
    tracep->declBit(c+1165,"in_penable", false,-1);
    tracep->declBus(c+1156,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1157,"in_pwrite", false,-1);
    tracep->declBus(c+1158,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1159,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"in_pready", false,-1);
    tracep->declBus(c+1433,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1432,"in_pslverr", false,-1);
    tracep->declBus(c+1348,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1349,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1350,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1351,"vga_hsync", false,-1);
    tracep->declBit(c+1352,"vga_vsync", false,-1);
    tracep->declBit(c+1353,"vga_valid", false,-1);
    tracep->declBit(c+1328,"is_write", false,-1);
    tracep->declBus(c+1329,"addr", false,-1, 31,0);
    tracep->declBit(c+441,"ready", false,-1);
    tracep->declBus(c+675,"i", false,-1, 31,0);
    tracep->declBus(c+1545,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1546,"h_active", false,-1, 31,0);
    tracep->declBus(c+1547,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1548,"h_total", false,-1, 31,0);
    tracep->declBus(c+1474,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1549,"v_active", false,-1, 31,0);
    tracep->declBus(c+1550,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1551,"v_total", false,-1, 31,0);
    tracep->declBus(c+676,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+402,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+677,"h_valid", false,-1);
    tracep->declBit(c+403,"v_valid", false,-1);
    tracep->declBus(c+678,"h_addr", false,-1, 9,0);
    tracep->declBus(c+404,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1417,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+428,"sck", false,-1);
    tracep->declBit(c+891,"ss", false,-1);
    tracep->declBit(c+876,"mosi", false,-1);
    tracep->declBit(c+833,"miso", false,-1);
    tracep->declBus(c+834,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+835,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+836,"counter", false,-1, 2,0);
    tracep->declBit(c+837,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+428,"sck", false,-1);
    tracep->declBit(c+679,"ss", false,-1);
    tracep->declBit(c+876,"mosi", false,-1);
    tracep->declBit(c+1418,"miso", false,-1);
    tracep->declBit(c+679,"reset", false,-1);
    tracep->declBus(c+827,"state", false,-1, 2,0);
    tracep->declBus(c+828,"counter", false,-1, 7,0);
    tracep->declBus(c+829,"cmd", false,-1, 7,0);
    tracep->declBus(c+830,"addr", false,-1, 23,0);
    tracep->declBus(c+831,"data", false,-1, 31,0);
    tracep->declBit(c+832,"ren", false,-1);
    tracep->declBus(c+1419,"rdata", false,-1, 31,0);
    tracep->declBus(c+1420,"raddr", false,-1, 31,0);
    tracep->declBus(c+1421,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+428,"clock", false,-1);
    tracep->declBit(c+832,"valid", false,-1);
    tracep->declBus(c+829,"cmd", false,-1, 7,0);
    tracep->declBus(c+1420,"addr", false,-1, 31,0);
    tracep->declBus(c+1419,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1330,"sck", false,-1);
    tracep->declBit(c+1331,"ce_n", false,-1);
    tracep->declBus(c+1357,"dio", false,-1, 3,0);
    tracep->declBit(c+1331,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+909,"cmd", false,-1, 7,0);
    tracep->declBus(c+910,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+911+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1422,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1423,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+915,"ren", false,-1);
    tracep->declBit(c+916,"wen", false,-1);
    tracep->declBus(c+917,"len", false,-1, 7,0);
    tracep->declBus(c+1424,"rdata", false,-1, 31,0);
    tracep->declBus(c+918,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1330,"clock", false,-1);
    tracep->declBit(c+915,"ren", false,-1);
    tracep->declBit(c+916,"wen", false,-1);
    tracep->declBus(c+909,"cmd", false,-1, 7,0);
    tracep->declBus(c+918,"saddr", false,-1, 31,0);
    tracep->declBus(c+1424,"rdata", false,-1, 31,0);
    tracep->declBus(c+919,"wdata", false,-1, 31,0);
    tracep->declBus(c+917,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1358,"clk", false,-1);
    tracep->declBit(c+430,"cke", false,-1);
    tracep->declBit(c+877,"cs", false,-1);
    tracep->declBit(c+878,"ras", false,-1);
    tracep->declBit(c+879,"cas", false,-1);
    tracep->declBit(c+880,"we", false,-1);
    tracep->declBus(c+881,"a", false,-1, 12,0);
    tracep->declBus(c+892,"ba", false,-1, 1,0);
    tracep->declBus(c+893,"dqm", false,-1, 1,0);
    tracep->declBus(c+907,"dq", false,-1, 15,0);
    tracep->declBit(c+894,"reset", false,-1);
    tracep->declBus(c+755,"state", false,-1, 2,0);
    tracep->declBus(c+756,"counter", false,-1, 7,0);
    tracep->declBus(c+757,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1552,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+758,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+759,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+895,"nop", false,-1);
    tracep->declBit(c+896,"active", false,-1);
    tracep->declBit(c+897,"precharge", false,-1);
    tracep->declBit(c+898,"read", false,-1);
    tracep->declBit(c+899,"write", false,-1);
    tracep->declBit(c+900,"burstterm", false,-1);
    tracep->declBit(c+901,"autorefresh", false,-1);
    tracep->declBit(c+902,"mode", false,-1);
    tracep->declBus(c+760,"test", false,-1, 15,0);
    tracep->declBit(c+761,"write_burst_mode", false,-1);
    tracep->declBus(c+762,"op_mode", false,-1, 1,0);
    tracep->declBus(c+763,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+764,"burst_type", false,-1);
    tracep->declBus(c+765,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+766,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+767,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+768,"bank", false,-1, 1,0);
    tracep->declBus(c+769,"row", false,-1, 12,0);
    tracep->declBus(c+770,"column", false,-1, 8,0);
    tracep->declBus(c+771,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+772,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1358,"clk", false,-1);
    tracep->declBit(c+430,"cke", false,-1);
    tracep->declBit(c+877,"cs", false,-1);
    tracep->declBit(c+878,"ras", false,-1);
    tracep->declBit(c+879,"cas", false,-1);
    tracep->declBit(c+880,"we", false,-1);
    tracep->declBus(c+881,"a", false,-1, 12,0);
    tracep->declBus(c+892,"ba", false,-1, 1,0);
    tracep->declBus(c+903,"dqm", false,-1, 1,0);
    tracep->declBus(c+908,"dq", false,-1, 15,0);
    tracep->declBit(c+894,"reset", false,-1);
    tracep->declBus(c+773,"state", false,-1, 2,0);
    tracep->declBus(c+774,"counter", false,-1, 7,0);
    tracep->declBus(c+775,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1553,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+776,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+777,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+895,"nop", false,-1);
    tracep->declBit(c+896,"active", false,-1);
    tracep->declBit(c+897,"precharge", false,-1);
    tracep->declBit(c+898,"read", false,-1);
    tracep->declBit(c+899,"write", false,-1);
    tracep->declBit(c+900,"burstterm", false,-1);
    tracep->declBit(c+901,"autorefresh", false,-1);
    tracep->declBit(c+902,"mode", false,-1);
    tracep->declBus(c+778,"test", false,-1, 15,0);
    tracep->declBit(c+779,"write_burst_mode", false,-1);
    tracep->declBus(c+780,"op_mode", false,-1, 1,0);
    tracep->declBus(c+781,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+782,"burst_type", false,-1);
    tracep->declBus(c+783,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+784,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+785,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+786,"bank", false,-1, 1,0);
    tracep->declBus(c+787,"row", false,-1, 12,0);
    tracep->declBus(c+788,"column", false,-1, 8,0);
    tracep->declBus(c+789,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+790,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1358,"clk", false,-1);
    tracep->declBit(c+430,"cke", false,-1);
    tracep->declBit(c+877,"cs", false,-1);
    tracep->declBit(c+878,"ras", false,-1);
    tracep->declBit(c+879,"cas", false,-1);
    tracep->declBit(c+880,"we", false,-1);
    tracep->declBus(c+881,"a", false,-1, 12,0);
    tracep->declBus(c+892,"ba", false,-1, 1,0);
    tracep->declBus(c+904,"dqm", false,-1, 1,0);
    tracep->declBus(c+907,"dq", false,-1, 15,0);
    tracep->declBit(c+894,"reset", false,-1);
    tracep->declBus(c+791,"state", false,-1, 2,0);
    tracep->declBus(c+792,"counter", false,-1, 7,0);
    tracep->declBus(c+793,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1554,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+794,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+795,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+895,"nop", false,-1);
    tracep->declBit(c+896,"active", false,-1);
    tracep->declBit(c+897,"precharge", false,-1);
    tracep->declBit(c+898,"read", false,-1);
    tracep->declBit(c+899,"write", false,-1);
    tracep->declBit(c+900,"burstterm", false,-1);
    tracep->declBit(c+901,"autorefresh", false,-1);
    tracep->declBit(c+902,"mode", false,-1);
    tracep->declBus(c+796,"test", false,-1, 15,0);
    tracep->declBit(c+797,"write_burst_mode", false,-1);
    tracep->declBus(c+798,"op_mode", false,-1, 1,0);
    tracep->declBus(c+799,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+800,"burst_type", false,-1);
    tracep->declBus(c+801,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+802,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+803,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+804,"bank", false,-1, 1,0);
    tracep->declBus(c+805,"row", false,-1, 12,0);
    tracep->declBus(c+806,"column", false,-1, 8,0);
    tracep->declBus(c+807,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+808,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1358,"clk", false,-1);
    tracep->declBit(c+430,"cke", false,-1);
    tracep->declBit(c+877,"cs", false,-1);
    tracep->declBit(c+878,"ras", false,-1);
    tracep->declBit(c+879,"cas", false,-1);
    tracep->declBit(c+880,"we", false,-1);
    tracep->declBus(c+881,"a", false,-1, 12,0);
    tracep->declBus(c+892,"ba", false,-1, 1,0);
    tracep->declBus(c+905,"dqm", false,-1, 1,0);
    tracep->declBus(c+908,"dq", false,-1, 15,0);
    tracep->declBit(c+894,"reset", false,-1);
    tracep->declBus(c+809,"state", false,-1, 2,0);
    tracep->declBus(c+810,"counter", false,-1, 7,0);
    tracep->declBus(c+811,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1555,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+812,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+813,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+895,"nop", false,-1);
    tracep->declBit(c+896,"active", false,-1);
    tracep->declBit(c+897,"precharge", false,-1);
    tracep->declBit(c+898,"read", false,-1);
    tracep->declBit(c+899,"write", false,-1);
    tracep->declBit(c+900,"burstterm", false,-1);
    tracep->declBit(c+901,"autorefresh", false,-1);
    tracep->declBit(c+902,"mode", false,-1);
    tracep->declBus(c+814,"test", false,-1, 15,0);
    tracep->declBit(c+815,"write_burst_mode", false,-1);
    tracep->declBus(c+816,"op_mode", false,-1, 1,0);
    tracep->declBus(c+817,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+818,"burst_type", false,-1);
    tracep->declBus(c+819,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+820,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+821,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+822,"bank", false,-1, 1,0);
    tracep->declBus(c+823,"row", false,-1, 12,0);
    tracep->declBus(c+824,"column", false,-1, 8,0);
    tracep->declBus(c+825,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+826,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+120,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+130,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+142,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+146,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+186,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+202,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_reg));
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+407,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+408,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+409,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+410,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+411,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+412,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+413,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+414,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+415,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+416,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+417,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullBit(oldp+418,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullCData(oldp+419,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+420,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+421,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+422,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullBit(oldp+423,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                           << 2U) : 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                            << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST)))))));
    bufp->fullIData(oldp+424,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                               >> 2U)))) 
                                & ((- (IData)((0x2000000U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                               | ((- (IData)((0x2000004U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullBit(oldp+425,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+426,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullIData(oldp+427,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                    : 0U))),32);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+446,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullSData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+459,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+460,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+464,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+469,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+504,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+506,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+507,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+508,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+512,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+514,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+515,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+517,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+521,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+522,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+524,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+542,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+543,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+544,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+545,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+546,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+547,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+548,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+551,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+552,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+553,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+572,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+579,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+598,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+599,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+600,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+601,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+602,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+621,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+622,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+623,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+624,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+625,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+627,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+646,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+663,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+674,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[0]),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[1]),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[2]),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[3]),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[4]),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[5]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[6]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[7]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[8]),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[9]),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[10]),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[11]),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[12]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[13]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[14]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg[15]),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[0]),26);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[1]),26);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[2]),26);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[3]),26);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[4]),26);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[5]),26);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[6]),26);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[7]),26);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[8]),26);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[9]),26);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[10]),26);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[11]),26);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[12]),26);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[13]),26);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[14]),26);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg[15]),26);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg),16);
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_arready));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rvalid));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rresp),2);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unnamedblk2__DOT__k),32);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+760,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+762,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+763,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+765,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+767,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+776,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+777,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+779,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+780,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+781,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+783,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+785,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+797,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+798,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+799,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+801,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+803,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+815,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+816,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+817,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+818,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+819,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+821,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+832,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+838,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+839,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+848,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+851,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+852,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+853,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+866,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+867,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+869,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+877,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+878,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+879,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+880,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+883,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+892,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+897,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+906,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+908,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+919,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+923,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+924,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
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
    bufp->fullCData(oldp+925,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+926,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+927,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
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
    bufp->fullIData(oldp+928,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+929,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+930,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+931,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+932,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+934,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+935,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+952,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                               >> 3U)),29);
    bufp->fullBit(oldp+953,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr 
                                   >> 2U))));
    bufp->fullCData(oldp+954,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr)),2);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+959,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                ? 0U : 0U)),32);
    bufp->fullBit(oldp+960,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast))));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state),2);
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata),32);
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? (IData)(vlSelf->__VdfgTmp_h467a54a1__0)
                                : 0U)),4);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+982,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+983,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+985,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+986,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+987,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+988,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+990,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+991,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+992,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+993,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+994,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+996,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+997,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+998,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+999,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1001,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1003,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1005,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1021,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1023,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1024,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1025,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1026,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1027,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1031,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1033,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1038,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1040,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1041,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1057,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1058,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1059,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1060,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1061,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1062,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1063,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1064,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1065,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1066,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1067,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1068,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1069,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1070,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1071,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__access),8);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1086,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1087,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1092,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1093,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1094,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1095,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1096,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1097,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1098,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1099,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1100,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1101,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1103,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1104,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1105,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1106,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                                 : 0U)),32);
    bufp->fullIData(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),29);
    bufp->fullBit(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1113,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1114,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1115,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1116,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1117,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1118,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1121,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1122,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1123,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1124,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1125,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1126,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1127,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1128,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1129,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1130,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1131,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1132,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1133,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1134,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1135,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1136,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1138,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1139,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1140,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1141,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1142,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1143,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1144,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),32);
    bufp->fullIData(oldp+1145,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                      >> 0x10U) : 0U) 
                                 << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                               << 8U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1146,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                  ? (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 2U))
                                  : 0U) << 2U)),24);
    bufp->fullIData(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U)),24);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? 1U : 0U)),3);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1161,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1164,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),30);
    bufp->fullBit(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1176,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1177,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1191,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1220,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1221,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1244,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1245,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1246,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1247,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1248,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1249,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1250,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1252,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1253,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1254,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1255,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1256,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1257,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1258,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1259,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1260,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1261,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1262,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1263,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1264,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1265,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1266,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1267,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1269,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1270,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1271,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1272,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1273,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1274,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),32);
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr),8);
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2),8);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3),8);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1299,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullSData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_col_w),13);
    bufp->fullSData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w),13);
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w),3);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr),32);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1320,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr),3);
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1329,(((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1334,(vlSelf->clock));
    bufp->fullBit(oldp+1335,(vlSelf->reset));
    bufp->fullSData(oldp+1336,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1337,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1338,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1339,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1340,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1341,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1342,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1343,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1344,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1345,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1346,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1347,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1348,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1349,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1350,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1351,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1352,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1353,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1354,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1355,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1356,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1358,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1359,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1360,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1363,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1364,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1365,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1366,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1367,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1368,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1369,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullIData(oldp+1372,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rdata
                                     : 0U))),32);
    bufp->fullCData(oldp+1373,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1374,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                     : 0U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid)
                                               : 0U))),4);
    bufp->fullCData(oldp+1375,((3U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
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
    bufp->fullCData(oldp+1376,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
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
    bufp->fullBit(oldp+1377,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready)))));
    bufp->fullBit(oldp+1378,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready)))));
    bufp->fullBit(oldp+1379,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid)))));
    bufp->fullBit(oldp+1380,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
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
    bufp->fullIData(oldp+1381,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr
                                 : 0U)),32);
    bufp->fullCData(oldp+1382,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                 : 0U)),8);
    bufp->fullCData(oldp+1383,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                 : 0U)),4);
    bufp->fullCData(oldp+1384,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                 : 0U)),3);
    bufp->fullCData(oldp+1385,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                 : 0U)),2);
    bufp->fullCData(oldp+1386,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+1387,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1388,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1389,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullIData(oldp+1391,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1392,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullCData(oldp+1393,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1403,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+1404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+1405,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1408,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1412,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1413,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1414,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1417,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1418,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1420,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1423,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1425,(1U),3);
    bufp->fullCData(oldp+1426,(0U),2);
    bufp->fullCData(oldp+1427,(1U),2);
    bufp->fullCData(oldp+1428,(2U),2);
    bufp->fullCData(oldp+1429,(3U),2);
    bufp->fullSData(oldp+1430,(0xaU),11);
    bufp->fullBit(oldp+1431,(0U));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1436,(1U));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1438,(0U),4);
    bufp->fullIData(oldp+1439,(0U),32);
    bufp->fullCData(oldp+1440,(0U),8);
    bufp->fullCData(oldp+1441,(0U),3);
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1452,(0U),32);
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullBit(oldp+1454,(0U));
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1457,(0x2000000U),32);
    bufp->fullIData(oldp+1458,(0x2000004U),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullCData(oldp+1461,(1U),4);
    bufp->fullCData(oldp+1462,(2U),4);
    bufp->fullCData(oldp+1463,(3U),4);
    bufp->fullCData(oldp+1464,(4U),4);
    bufp->fullCData(oldp+1465,(5U),4);
    bufp->fullCData(oldp+1466,(6U),4);
    bufp->fullCData(oldp+1467,(7U),4);
    bufp->fullCData(oldp+1468,(8U),4);
    bufp->fullCData(oldp+1469,(9U),4);
    bufp->fullCData(oldp+1470,(0xaU),4);
    bufp->fullCData(oldp+1471,(0xbU),4);
    bufp->fullCData(oldp+1472,(0xcU),4);
    bufp->fullIData(oldp+1473,(4U),32);
    bufp->fullIData(oldp+1474,(2U),32);
    bufp->fullIData(oldp+1475,(3U),32);
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_awready));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_wready));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bvalid));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rlast));
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bresp),2);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_bid),4);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_axi_rid),4);
    bufp->fullBit(oldp+1483,(0U));
    bufp->fullBit(oldp+1484,(1U));
    bufp->fullIData(oldp+1485,(5U),32);
    bufp->fullIData(oldp+1486,(0x20U),32);
    bufp->fullIData(oldp+1487,(0x1000000U),32);
    bufp->fullIData(oldp+1488,(0x1000004U),32);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1495,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1496,(0x1800U),32);
    bufp->fullIData(oldp+1497,(0x79737978U),32);
    bufp->fullCData(oldp+1498,(4U),8);
    bufp->fullCData(oldp+1499,(8U),8);
    bufp->fullCData(oldp+1500,(3U),8);
    bufp->fullCData(oldp+1501,(0x9fU),8);
    bufp->fullCData(oldp+1502,(0x25U),8);
    bufp->fullCData(oldp+1503,(0xdU),8);
    bufp->fullCData(oldp+1504,(0x99U),8);
    bufp->fullCData(oldp+1505,(0x49U),8);
    bufp->fullCData(oldp+1506,(0x41U),8);
    bufp->fullCData(oldp+1507,(0x1fU),8);
    bufp->fullCData(oldp+1508,(1U),8);
    bufp->fullCData(oldp+1509,(9U),8);
    bufp->fullCData(oldp+1510,(0x11U),8);
    bufp->fullCData(oldp+1511,(0xc1U),8);
    bufp->fullCData(oldp+1512,(0x63U),8);
    bufp->fullCData(oldp+1513,(0x85U),8);
    bufp->fullCData(oldp+1514,(0x61U),8);
    bufp->fullCData(oldp+1515,(0x71U),8);
    bufp->fullCData(oldp+1516,(0xf0U),8);
    bufp->fullCData(oldp+1517,(0xe0U),8);
    bufp->fullCData(oldp+1518,(4U),3);
    bufp->fullCData(oldp+1519,(0x15U),8);
    bufp->fullCData(oldp+1520,(0xebU),8);
    bufp->fullCData(oldp+1521,(0x38U),8);
    bufp->fullIData(oldp+1522,(0x64U),32);
    bufp->fullIData(oldp+1523,(0x18U),32);
    bufp->fullIData(oldp+1524,(9U),32);
    bufp->fullIData(oldp+1525,(8U),32);
    bufp->fullIData(oldp+1526,(0xdU),32);
    bufp->fullIData(oldp+1527,(0x2000U),32);
    bufp->fullIData(oldp+1528,(0x2710U),32);
    bufp->fullIData(oldp+1529,(0x30cU),32);
    bufp->fullSData(oldp+1530,(0x20U),13);
    bufp->fullIData(oldp+1531,(0xaU),32);
    bufp->fullIData(oldp+1532,(6U),32);
    bufp->fullIData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1534,(0x11U),32);
    bufp->fullIData(oldp+1535,(0x30000000U),32);
    bufp->fullIData(oldp+1536,(0x3fffffffU),32);
    bufp->fullCData(oldp+1537,(2U),3);
    bufp->fullCData(oldp+1538,(3U),3);
    bufp->fullCData(oldp+1539,(5U),3);
    bufp->fullCData(oldp+1540,(6U),3);
    bufp->fullCData(oldp+1541,(7U),3);
    bufp->fullIData(oldp+1542,(1U),32);
    bufp->fullIData(oldp+1543,(0xbU),32);
    bufp->fullIData(oldp+1544,(0x10U),32);
    bufp->fullIData(oldp+1545,(0x60U),32);
    bufp->fullIData(oldp+1546,(0x90U),32);
    bufp->fullIData(oldp+1547,(0x310U),32);
    bufp->fullIData(oldp+1548,(0x320U),32);
    bufp->fullIData(oldp+1549,(0x23U),32);
    bufp->fullIData(oldp+1550,(0x203U),32);
    bufp->fullIData(oldp+1551,(0x20dU),32);
    bufp->fullSData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
