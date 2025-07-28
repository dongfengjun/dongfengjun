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
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+1273,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1274,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1275,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1277,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1283,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1284,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1285,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1286,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1287,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1288,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1289,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1290,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1291,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1292,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+1273,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1274,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1275,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1276,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1277,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1283,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1284,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1285,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1286,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1287,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1288,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1289,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1290,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1291,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1292,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+418,"spi_sck", false,-1);
    tracep->declBus(c+419,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+854,"spi_mosi", false,-1);
    tracep->declBit(c+1293,"spi_miso", false,-1);
    tracep->declBit(c+1291,"uart_rx", false,-1);
    tracep->declBit(c+1292,"uart_tx", false,-1);
    tracep->declBit(c+994,"psram_sck", false,-1);
    tracep->declBit(c+995,"psram_ce_n", false,-1);
    tracep->declBus(c+1294,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1295,"sdram_clk", false,-1);
    tracep->declBit(c+420,"sdram_cke", false,-1);
    tracep->declBit(c+855,"sdram_cs", false,-1);
    tracep->declBit(c+856,"sdram_ras", false,-1);
    tracep->declBit(c+857,"sdram_cas", false,-1);
    tracep->declBit(c+858,"sdram_we", false,-1);
    tracep->declBus(c+859,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+860,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+421,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+925,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1273,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1274,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1283,"ps2_clk", false,-1);
    tracep->declBit(c+1284,"ps2_data", false,-1);
    tracep->declBus(c+1285,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1286,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1288,"vga_hsync", false,-1);
    tracep->declBit(c+1289,"vga_vsync", false,-1);
    tracep->declBit(c+1290,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+1296,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+998,"in_psel", false,-1);
    tracep->declBit(c+813,"in_penable", false,-1);
    tracep->declBus(c+1361,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+999,"in_pwrite", false,-1);
    tracep->declBus(c+1297,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+422,"in_pready", false,-1);
    tracep->declBus(c+423,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+424,"in_pslverr", false,-1);
    tracep->declBus(c+861,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+425,"out_psel", false,-1);
    tracep->declBit(c+426,"out_penable", false,-1);
    tracep->declBus(c+427,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"out_pwrite", false,-1);
    tracep->declBus(c+429,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+972,"out_pready", false,-1);
    tracep->declBus(c+1299,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+862,"out_pslverr", false,-1);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1364,"DELAY", false,-1, 1,0);
    tracep->declBus(c+863,"state", false,-1, 1,0);
    tracep->declBus(c+431,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+1365,"r", false,-1, 10,0);
    tracep->declBus(c+1364,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+425,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+426,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+861,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+427,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+862,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1299,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+682,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+683,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+861,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+427,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+432,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+433,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+684,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+685,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+864,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+427,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1367,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1368,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+686,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+865,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+866,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+435,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1369,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+436,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+687,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+688,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+866,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+437,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1370,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+438,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+867,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+689,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+861,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+427,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+814,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+868,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+869,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+866,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+870,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1300,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+691,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+871,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+428,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+864,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+427,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+872,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+873,"sel_0", false,-1);
    tracep->declBit(c+874,"sel_1", false,-1);
    tracep->declBit(c+875,"sel_2", false,-1);
    tracep->declBit(c+876,"sel_3", false,-1);
    tracep->declBit(c+877,"sel_4", false,-1);
    tracep->declBit(c+878,"sel_5", false,-1);
    tracep->declBit(c+879,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1000,"auto_in_awready", false,-1);
    tracep->declBit(c+1001,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1000,"auto_in_wready", false,-1);
    tracep->declBit(c+1005,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1178,"auto_in_bready", false,-1);
    tracep->declBit(c+1179,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1302,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1008,"auto_in_arready", false,-1);
    tracep->declBit(c+1009,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1180,"auto_in_rready", false,-1);
    tracep->declBit(c+1181,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+998,"auto_out_psel", false,-1);
    tracep->declBit(c+813,"auto_out_penable", false,-1);
    tracep->declBit(c+999,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1296,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1298,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+422,"auto_out_pready", false,-1);
    tracep->declBit(c+424,"auto_out_pslverr", false,-1);
    tracep->declBus(c+423,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+813,"nodeOut_penable", false,-1);
    tracep->declBus(c+815,"state", false,-1, 1,0);
    tracep->declBit(c+1008,"accept_read", false,-1);
    tracep->declBit(c+1000,"accept_write", false,-1);
    tracep->declBit(c+15,"is_write_r", false,-1);
    tracep->declBit(c+999,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+960,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+961,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+816,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+817,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+439,"resp", false,-1, 1,0);
    tracep->declBus(c+16,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1302,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1181,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+17,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1179,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+818,"auto_in_awready", false,-1);
    tracep->declBit(c+1013,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1014,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"auto_in_wready", false,-1);
    tracep->declBit(c+1019,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1020,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_in_wlast", false,-1);
    tracep->declBit(c+1023,"auto_in_bready", false,-1);
    tracep->declBit(c+1182,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_in_arready", false,-1);
    tracep->declBit(c+1024,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1025,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"auto_in_rready", false,-1);
    tracep->declBit(c+1184,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"auto_in_rlast", false,-1);
    tracep->declBit(c+1186,"auto_out_awready", false,-1);
    tracep->declBit(c+1031,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1032,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1187,"auto_out_wready", false,-1);
    tracep->declBit(c+1033,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_out_wlast", false,-1);
    tracep->declBit(c+1188,"auto_out_bready", false,-1);
    tracep->declBit(c+1189,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1191,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1192,"auto_out_arready", false,-1);
    tracep->declBit(c+1035,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1036,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1030,"auto_out_rready", false,-1);
    tracep->declBit(c+1184,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1193,"auto_out_rlast", false,-1);
    tracep->declBit(c+1033,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+20,"w_idle", false,-1);
    tracep->declBit(c+1194,"in_awready", false,-1);
    tracep->declBit(c+21,"busy", false,-1);
    tracep->declBus(c+22,"r_addr", false,-1, 31,0);
    tracep->declBus(c+23,"r_len", false,-1, 7,0);
    tracep->declBus(c+1037,"len", false,-1, 7,0);
    tracep->declBus(c+1038,"addr", false,-1, 31,0);
    tracep->declBit(c+24,"busy_1", false,-1);
    tracep->declBus(c+25,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+26,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1039,"len_1", false,-1, 7,0);
    tracep->declBus(c+1040,"addr_1", false,-1, 31,0);
    tracep->declBit(c+27,"wbeats_latched", false,-1);
    tracep->declBit(c+1031,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1041,"wbeats_valid", false,-1);
    tracep->declBus(c+28,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1042,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1034,"w_last", false,-1);
    tracep->declBit(c+1188,"nodeOut_bready", false,-1);
    tracep->declBus(c+29,"error_0", false,-1, 1,0);
    tracep->declBus(c+30,"error_1", false,-1, 1,0);
    tracep->declBus(c+31,"error_2", false,-1, 1,0);
    tracep->declBus(c+32,"error_3", false,-1, 1,0);
    tracep->declBus(c+33,"error_4", false,-1, 1,0);
    tracep->declBus(c+34,"error_5", false,-1, 1,0);
    tracep->declBus(c+35,"error_6", false,-1, 1,0);
    tracep->declBus(c+36,"error_7", false,-1, 1,0);
    tracep->declBus(c+37,"error_8", false,-1, 1,0);
    tracep->declBus(c+38,"error_9", false,-1, 1,0);
    tracep->declBus(c+39,"error_10", false,-1, 1,0);
    tracep->declBus(c+40,"error_11", false,-1, 1,0);
    tracep->declBus(c+41,"error_12", false,-1, 1,0);
    tracep->declBus(c+42,"error_13", false,-1, 1,0);
    tracep->declBus(c+43,"error_14", false,-1, 1,0);
    tracep->declBus(c+44,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+19,"io_enq_ready", false,-1);
    tracep->declBit(c+1024,"io_enq_valid", false,-1);
    tracep->declBus(c+1025,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1026,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1027,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1028,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1029,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1195,"io_deq_ready", false,-1);
    tracep->declBit(c+1035,"io_deq_valid", false,-1);
    tracep->declBus(c+1010,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1043,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1044,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1012,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1045,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+45,"ram", false,-1, 48,0);
    tracep->declBit(c+47,"full", false,-1);
    tracep->declBit(c+1035,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1196,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+818,"io_enq_ready", false,-1);
    tracep->declBit(c+1013,"io_enq_valid", false,-1);
    tracep->declBus(c+1014,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1015,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1016,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1017,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1018,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1197,"io_deq_ready", false,-1);
    tracep->declBit(c+1046,"io_deq_valid", false,-1);
    tracep->declBus(c+1002,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1047,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1048,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1004,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1049,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+48,"ram", false,-1, 48,0);
    tracep->declBit(c+819,"full", false,-1);
    tracep->declBit(c+1046,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1198,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+18,"io_enq_ready", false,-1);
    tracep->declBit(c+1019,"io_enq_valid", false,-1);
    tracep->declBus(c+1020,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1021,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1022,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1199,"io_deq_ready", false,-1);
    tracep->declBit(c+1050,"io_deq_valid", false,-1);
    tracep->declBus(c+1006,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1007,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1309,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+50,"ram", false,-1, 36,0);
    tracep->declBit(c+52,"full", false,-1);
    tracep->declBit(c+1050,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1200,"do_enq", false,-1);
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
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1201,"auto_in_awready", false,-1);
    tracep->declBit(c+1051,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1139,"auto_in_wready", false,-1);
    tracep->declBit(c+1053,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_in_bready", false,-1);
    tracep->declBit(c+53,"auto_in_bvalid", false,-1);
    tracep->declBus(c+54,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1203,"auto_in_arready", false,-1);
    tracep->declBit(c+1054,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1204,"auto_in_rready", false,-1);
    tracep->declBit(c+56,"auto_in_rvalid", false,-1);
    tracep->declBus(c+57,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1203,"nodeIn_arready", false,-1);
    tracep->declBit(c+1201,"nodeIn_awready", false,-1);
    tracep->declBit(c+1056,"w_sel0", false,-1);
    tracep->declBit(c+53,"w_full", false,-1);
    tracep->declBus(c+54,"w_id", false,-1, 3,0);
    tracep->declBit(c+60,"r_sel1", false,-1);
    tracep->declBit(c+61,"w_sel1", false,-1);
    tracep->declBit(c+56,"r_full", false,-1);
    tracep->declBus(c+57,"r_id", false,-1, 3,0);
    tracep->declBit(c+1205,"ren", false,-1);
    tracep->declBit(c+62,"rdata_REG", false,-1);
    tracep->declBus(c+63,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+64,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+65,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+66,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1057,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1205,"R0_en", false,-1);
    tracep->declBit(c+1271,"R0_clk", false,-1);
    tracep->declBus(c+67,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1058,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1206,"W0_en", false,-1);
    tracep->declBit(c+1271,"W0_clk", false,-1);
    tracep->declBus(c+1006,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1007,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+818,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1013,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1014,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1019,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1020,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1023,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1024,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1025,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1184,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+818,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1013,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1014,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1020,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1023,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1182,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1024,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1025,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1184,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1207,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1059,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1187,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1033,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1188,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1189,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1208,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1060,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1030,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1184,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1193,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1201,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1051,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1139,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1053,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+53,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+54,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1203,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1054,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1055,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1204,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+56,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+57,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+58,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+59,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1061,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1062,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+68,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1063,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1310,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+69,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+70,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+1000,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1001,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+1000,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1005,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1178,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1179,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1302,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+1008,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1009,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1180,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1181,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1302,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1189,"in_0_bvalid", false,-1);
    tracep->declBit(c+1184,"in_0_rvalid", false,-1);
    tracep->declBit(c+1209,"in_0_wready", false,-1);
    tracep->declBit(c+1210,"in_0_awready", false,-1);
    tracep->declBit(c+1208,"in_0_arready", false,-1);
    tracep->declBit(c+1207,"anonIn_awready", false,-1);
    tracep->declBit(c+1065,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1066,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1067,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1068,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1069,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1070,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1071,"arSel", false,-1, 15,0);
    tracep->declBus(c+1072,"awSel", false,-1, 15,0);
    tracep->declBus(c+1211,"rSel", false,-1, 15,0);
    tracep->declBus(c+1212,"bSel", false,-1, 15,0);
    tracep->declBit(c+72,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+73,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+74,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+75,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+76,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+77,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+78,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+79,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+80,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+81,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+82,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+83,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+84,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+85,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+86,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+87,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+88,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+104,"latched", false,-1);
    tracep->declBit(c+1073,"in_0_awvalid", false,-1);
    tracep->declBit(c+1074,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1075,"in_0_wvalid", false,-1);
    tracep->declBit(c+105,"idle_3", false,-1);
    tracep->declBit(c+1213,"anyValid", false,-1);
    tracep->declBus(c+1214,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+106,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1215,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1216,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1217,"prefixOR_1", false,-1);
    tracep->declBit(c+1218,"winner_3_1", false,-1);
    tracep->declBit(c+1219,"winner_3_2", false,-1);
    tracep->declBit(c+107,"state_3_0", false,-1);
    tracep->declBit(c+108,"state_3_1", false,-1);
    tracep->declBit(c+109,"state_3_2", false,-1);
    tracep->declBit(c+1220,"muxState_3_0", false,-1);
    tracep->declBit(c+1221,"muxState_3_1", false,-1);
    tracep->declBit(c+1222,"muxState_3_2", false,-1);
    tracep->declBit(c+110,"idle_4", false,-1);
    tracep->declBit(c+1223,"anyValid_1", false,-1);
    tracep->declBus(c+1224,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+111,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1225,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1226,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1227,"winner_4_0", false,-1);
    tracep->declBit(c+1228,"winner_4_2", false,-1);
    tracep->declBit(c+112,"state_4_0", false,-1);
    tracep->declBit(c+113,"state_4_2", false,-1);
    tracep->declBit(c+1229,"muxState_4_0", false,-1);
    tracep->declBit(c+1230,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+114,"io_enq_ready", false,-1);
    tracep->declBit(c+1074,"io_enq_valid", false,-1);
    tracep->declBus(c+1076,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
    tracep->declBit(c+1077,"io_deq_valid", false,-1);
    tracep->declBus(c+1078,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+115,"wrap", false,-1);
    tracep->declBit(c+116,"wrap_1", false,-1);
    tracep->declBit(c+117,"maybe_full", false,-1);
    tracep->declBit(c+118,"ptr_match", false,-1);
    tracep->declBit(c+119,"empty", false,-1);
    tracep->declBit(c+120,"full", false,-1);
    tracep->declBit(c+1077,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1232,"do_deq", false,-1);
    tracep->declBit(c+1233,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+116,"R0_addr", false,-1);
    tracep->declBit(c+1371,"R0_en", false,-1);
    tracep->declBit(c+1271,"R0_clk", false,-1);
    tracep->declBus(c+121,"R0_data", false,-1, 2,0);
    tracep->declBit(c+115,"W0_addr", false,-1);
    tracep->declBit(c+1233,"W0_en", false,-1);
    tracep->declBit(c+1271,"W0_clk", false,-1);
    tracep->declBus(c+1076,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+122+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1186,"auto_in_awready", false,-1);
    tracep->declBit(c+1031,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1032,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1187,"auto_in_wready", false,-1);
    tracep->declBit(c+1033,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_in_wlast", false,-1);
    tracep->declBit(c+1188,"auto_in_bready", false,-1);
    tracep->declBit(c+1189,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1191,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1192,"auto_in_arready", false,-1);
    tracep->declBit(c+1035,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1036,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1030,"auto_in_rready", false,-1);
    tracep->declBit(c+1184,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1193,"auto_in_rlast", false,-1);
    tracep->declBit(c+1207,"auto_out_awready", false,-1);
    tracep->declBit(c+1059,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1002,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1003,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1187,"auto_out_wready", false,-1);
    tracep->declBit(c+1033,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1006,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1007,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1034,"auto_out_wlast", false,-1);
    tracep->declBit(c+1188,"auto_out_bready", false,-1);
    tracep->declBit(c+1189,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1208,"auto_out_arready", false,-1);
    tracep->declBit(c+1060,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1011,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1030,"auto_out_rready", false,-1);
    tracep->declBit(c+1184,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1193,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+124,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+125,"io_deq_valid", false,-1);
    tracep->declBit(c+126,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+125,"full", false,-1);
    tracep->declBit(c+126,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+127,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+128,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+129,"io_deq_valid", false,-1);
    tracep->declBit(c+130,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+129,"full", false,-1);
    tracep->declBit(c+130,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+131,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+132,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+133,"io_deq_valid", false,-1);
    tracep->declBit(c+134,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+133,"full", false,-1);
    tracep->declBit(c+134,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+135,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+136,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+137,"io_deq_valid", false,-1);
    tracep->declBit(c+138,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+137,"full", false,-1);
    tracep->declBit(c+138,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+139,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+141,"io_deq_valid", false,-1);
    tracep->declBit(c+142,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+141,"full", false,-1);
    tracep->declBit(c+142,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+143,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
    tracep->declBit(c+145,"io_deq_valid", false,-1);
    tracep->declBit(c+146,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+145,"full", false,-1);
    tracep->declBit(c+146,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+147,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1146,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+149,"io_deq_valid", false,-1);
    tracep->declBit(c+150,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->declBit(c+150,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+151,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBit(c+154,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->declBit(c+154,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+155,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+1148,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBit(c+158,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+157,"full", false,-1);
    tracep->declBit(c+158,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+159,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+1149,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+161,"io_deq_valid", false,-1);
    tracep->declBit(c+162,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->declBit(c+162,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+163,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+165,"io_deq_valid", false,-1);
    tracep->declBit(c+166,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+165,"full", false,-1);
    tracep->declBit(c+166,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
    tracep->declBit(c+169,"io_deq_valid", false,-1);
    tracep->declBit(c+170,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBit(c+170,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+171,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
    tracep->declBit(c+173,"io_deq_valid", false,-1);
    tracep->declBit(c+174,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+173,"full", false,-1);
    tracep->declBit(c+174,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+175,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+1153,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+177,"io_deq_valid", false,-1);
    tracep->declBit(c+178,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+177,"full", false,-1);
    tracep->declBit(c+178,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+179,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+1154,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBit(c+182,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+181,"full", false,-1);
    tracep->declBit(c+182,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+183,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBit(c+186,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+185,"full", false,-1);
    tracep->declBit(c+186,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+187,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+1156,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBit(c+190,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+189,"full", false,-1);
    tracep->declBit(c+190,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+191,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBit(c+194,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->declBit(c+194,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+1158,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBit(c+198,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->declBit(c+198,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+1159,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1253,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBit(c+202,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->declBit(c+202,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1254,"io_deq_ready", false,-1);
    tracep->declBit(c+205,"io_deq_valid", false,-1);
    tracep->declBit(c+206,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+206,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1161,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1255,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+1162,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1257,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1258,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1165,"io_enq_valid", false,-1);
    tracep->declBit(c+1032,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+1166,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1260,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+1167,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1261,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1262,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+1169,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1263,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+1170,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1264,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+1171,"io_enq_valid", false,-1);
    tracep->declBit(c+1036,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1265,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+818,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1013,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1014,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1019,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1020,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1023,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1182,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1183,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1024,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1025,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1184,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1185,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+1366,"io_interrupt", false,-1);
    tracep->declBit(c+818,"io_master_awready", false,-1);
    tracep->declBit(c+1013,"io_master_awvalid", false,-1);
    tracep->declBus(c+1014,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"io_master_wready", false,-1);
    tracep->declBit(c+1019,"io_master_wvalid", false,-1);
    tracep->declBus(c+1020,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"io_master_wlast", false,-1);
    tracep->declBit(c+1023,"io_master_bready", false,-1);
    tracep->declBit(c+1182,"io_master_bvalid", false,-1);
    tracep->declBus(c+1183,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"io_master_arready", false,-1);
    tracep->declBit(c+1024,"io_master_arvalid", false,-1);
    tracep->declBus(c+1025,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"io_master_rready", false,-1);
    tracep->declBit(c+1184,"io_master_rvalid", false,-1);
    tracep->declBus(c+1185,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"io_master_rlast", false,-1);
    tracep->declBit(c+1372,"io_slave_awready", false,-1);
    tracep->declBit(c+1366,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1373,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1374,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1375,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1376,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1362,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1377,"io_slave_wready", false,-1);
    tracep->declBit(c+1366,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1374,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1373,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1366,"io_slave_wlast", false,-1);
    tracep->declBit(c+1366,"io_slave_bready", false,-1);
    tracep->declBit(c+1378,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1379,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1380,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1381,"io_slave_arready", false,-1);
    tracep->declBit(c+1366,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1373,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1374,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1375,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1376,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1362,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1366,"io_slave_rready", false,-1);
    tracep->declBit(c+1382,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1383,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1384,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1385,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1386,"io_slave_rlast", false,-1);
    tracep->declBit(c+252,"DIFFTEST", false,-1);
    tracep->declBus(c+1172,"pc", false,-1, 31,0);
    tracep->declBus(c+1173,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1174,"pc_valid", false,-1);
    tracep->declBit(c+1312,"if_ready", false,-1);
    tracep->declBus(c+939,"inst", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid", false,-1);
    tracep->declBit(c+962,"id_ready", false,-1);
    tracep->declBus(c+1387,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1387,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1314,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1373,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1375,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+253,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1373,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+409,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+254,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+410,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1376,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+255,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1362,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+256,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+411,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1315,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1366,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1316,"if_axi_awready", false,-1);
    tracep->declBit(c+1366,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1317,"if_axi_wready", false,-1);
    tracep->declBit(c+412,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1366,"if_axi_bready", false,-1);
    tracep->declBit(c+964,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1318,"if_axi_arready", false,-1);
    tracep->declBit(c+1266,"if_axi_rvalid", false,-1);
    tracep->declBit(c+965,"if_axi_rready", false,-1);
    tracep->declBit(c+1388,"if_axi_wlast", false,-1);
    tracep->declBit(c+413,"if_axi_rlast", false,-1);
    tracep->declBit(c+820,"id_valid", false,-1);
    tracep->declBit(c+821,"ex_ready", false,-1);
    tracep->declBus(c+822,"op", false,-1, 6,0);
    tracep->declBus(c+257,"rd", false,-1, 4,0);
    tracep->declBus(c+823,"funct3", false,-1, 2,0);
    tracep->declBus(c+258,"rs1", false,-1, 4,0);
    tracep->declBus(c+259,"rs2", false,-1, 4,0);
    tracep->declBus(c+260,"imm", false,-1, 31,0);
    tracep->declBus(c+261,"funct7", false,-1, 6,0);
    tracep->declBus(c+262,"shamt", false,-1, 4,0);
    tracep->declBit(c+824,"ls_read", false,-1);
    tracep->declBit(c+825,"ls_write", false,-1);
    tracep->declBit(c+940,"ls_done", false,-1);
    tracep->declBit(c+263,"ex_valid", false,-1);
    tracep->declBit(c+264,"wb_ready", false,-1);
    tracep->declBus(c+265,"ex", false,-1, 31,0);
    tracep->declBit(c+826,"ls_valid", false,-1);
    tracep->declBit(c+827,"ls_wen", false,-1);
    tracep->declBus(c+828,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+829,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+830,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+831,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+832,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1375,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1375,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1363,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1363,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+266,"mepc", false,-1, 31,0);
    tracep->declBus(c+267,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+268,"mstatus", false,-1, 31,0);
    tracep->declBus(c+269,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+270,"mcause", false,-1, 31,0);
    tracep->declBus(c+271,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+272,"mtvec", false,-1, 31,0);
    tracep->declBus(c+273,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+274,"gpr_wen", false,-1);
    tracep->declBit(c+275,"mepc_wen", false,-1);
    tracep->declBit(c+276,"mstatus_wen", false,-1);
    tracep->declBit(c+277,"mcause_wen", false,-1);
    tracep->declBit(c+278,"mtvec_wen", false,-1);
    tracep->declBus(c+699,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+700,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1319,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+701,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1320,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1321,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+702,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+703,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1389,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+414,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1390,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+415,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+704,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+705,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+706,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+707,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+416,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1322,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+708,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1323,"ls_axi_awready", false,-1);
    tracep->declBit(c+709,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1079,"ls_axi_wready", false,-1);
    tracep->declBit(c+1267,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+710,"ls_axi_bready", false,-1);
    tracep->declBit(c+711,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1324,"ls_axi_arready", false,-1);
    tracep->declBit(c+1268,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+712,"ls_axi_rready", false,-1);
    tracep->declBit(c+713,"ls_axi_wlast", false,-1);
    tracep->declBit(c+417,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1080,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1081,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1082,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+279,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1084,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1085,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1086,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+280,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1087,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+281,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1088,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1089,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1090,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1091,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+282,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+283,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1092,"c_axi_awvalid", false,-1);
    tracep->declBit(c+833,"c_axi_awready", false,-1);
    tracep->declBit(c+1093,"c_axi_wvalid", false,-1);
    tracep->declBit(c+284,"c_axi_wready", false,-1);
    tracep->declBit(c+285,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1094,"c_axi_bready", false,-1);
    tracep->declBit(c+1095,"c_axi_arvalid", false,-1);
    tracep->declBit(c+286,"c_axi_arready", false,-1);
    tracep->declBit(c+287,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1096,"c_axi_rready", false,-1);
    tracep->declBit(c+1097,"c_axi_wlast", false,-1);
    tracep->declBit(c+288,"c_axi_rlast", false,-1);
    tracep->declBit(c+1325,"wb_done", false,-1);
    tracep->declBit(c+252,"difftest", false,-1);
    tracep->declBus(c+289,"xrd", false,-1, 31,0);
    tracep->declBus(c+290,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+291,"rf_wen", false,-1);
    tracep->declBus(c+292,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+293,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+294,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+295,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+296,"mepc_en", false,-1);
    tracep->declBit(c+297,"mstatus_en", false,-1);
    tracep->declBit(c+298,"mcause_en", false,-1);
    tracep->declBit(c+299,"mtvec_en", false,-1);
    tracep->declBus(c+300,"r1", false,-1, 31,0);
    tracep->declBus(c+301,"r2", false,-1, 31,0);
    tracep->declBus(c+302,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+303,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+833,"c_axi_awready", false,-1);
    tracep->declBit(c+1092,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1086,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1080,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1084,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1088,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1090,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+284,"c_axi_wready", false,-1);
    tracep->declBit(c+1093,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1081,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1083,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"c_axi_wlast", false,-1);
    tracep->declBit(c+1094,"c_axi_bready", false,-1);
    tracep->declBit(c+285,"c_axi_bvalid", false,-1);
    tracep->declBus(c+280,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+282,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+286,"c_axi_arready", false,-1);
    tracep->declBit(c+1095,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1087,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1082,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1085,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1089,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1091,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1096,"c_axi_rready", false,-1);
    tracep->declBit(c+287,"c_axi_rvalid", false,-1);
    tracep->declBus(c+281,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+279,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+283,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+288,"c_axi_rlast", false,-1);
    tracep->declBit(c+833,"axi_awready", false,-1);
    tracep->declBit(c+284,"axi_wready", false,-1);
    tracep->declBit(c+285,"axi_bvalid", false,-1);
    tracep->declBit(c+286,"axi_arready", false,-1);
    tracep->declBit(c+287,"axi_rvalid", false,-1);
    tracep->declBit(c+288,"axi_rlast", false,-1);
    tracep->declBus(c+282,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+283,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+280,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+281,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+279,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+304,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1391,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1392,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+305,"mtime", false,-1, 63,0);
    tracep->declBus(c+1326,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+265,"ex_o", false,-1, 31,0);
    tracep->declBit(c+820,"id_valid_i", false,-1);
    tracep->declBit(c+821,"ex_ready_o", false,-1);
    tracep->declBit(c+263,"ex_valid_o", false,-1);
    tracep->declBit(c+264,"wb_ready_i", false,-1);
    tracep->declBus(c+822,"op_i", false,-1, 6,0);
    tracep->declBus(c+823,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+260,"imm_i", false,-1, 31,0);
    tracep->declBus(c+261,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+262,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+300,"r1_i", false,-1, 31,0);
    tracep->declBus(c+301,"r2_i", false,-1, 31,0);
    tracep->declBit(c+824,"ls_read_o", false,-1);
    tracep->declBit(c+825,"ls_write_o", false,-1);
    tracep->declBit(c+940,"ls_done_i", false,-1);
    tracep->declBit(c+826,"ls_valid_o", false,-1);
    tracep->declBit(c+827,"ls_wen_o", false,-1);
    tracep->declBus(c+828,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+829,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+830,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+831,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+832,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1375,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1375,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1363,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1363,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+699,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1173,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+266,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+268,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+270,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+272,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+267,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+269,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+271,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+273,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+274,"gpr_wen_o", false,-1);
    tracep->declBit(c+275,"mepc_wen_o", false,-1);
    tracep->declBit(c+276,"mstatus_wen_o", false,-1);
    tracep->declBit(c+277,"mcause_wen_o", false,-1);
    tracep->declBit(c+278,"mtvec_wen_o", false,-1);
    tracep->declBit(c+821,"ex_ready", false,-1);
    tracep->declBit(c+263,"ex_valid", false,-1);
    tracep->declBit(c+834,"al_start", false,-1);
    tracep->declBit(c+941,"al_done", false,-1);
    tracep->declBit(c+824,"ls_read_reg", false,-1);
    tracep->declBit(c+825,"ls_write_reg", false,-1);
    tracep->declBus(c+265,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1173,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+274,"gpr_wen_reg", false,-1);
    tracep->declBus(c+267,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+269,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+271,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+273,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+275,"mepc_wen_reg", false,-1);
    tracep->declBit(c+276,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+277,"mcause_wen_reg", false,-1);
    tracep->declBit(c+278,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+307,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1364,"READY", false,-1, 1,0);
    tracep->declBus(c+1393,"DONE", false,-1, 1,0);
    tracep->declBus(c+835,"state", false,-1, 1,0);
    tracep->declBus(c+1327,"next_state", false,-1, 1,0);
    tracep->declBit(c+836,"al_valid", false,-1);
    tracep->declBus(c+308,"al_res", false,-1, 31,0);
    tracep->declBus(c+399,"a", false,-1, 31,0);
    tracep->declBus(c+400,"b", false,-1, 31,0);
    tracep->declBus(c+1175,"ex", false,-1, 31,0);
    tracep->declBus(c+837,"sel", false,-1, 3,0);
    tracep->declBus(c+838,"x", false,-1, 31,0);
    tracep->declBus(c+839,"y", false,-1, 31,0);
    tracep->declBus(c+714,"res", false,-1, 31,0);
    tracep->declBus(c+1373,"ADD", false,-1, 3,0);
    tracep->declBus(c+1394,"SUB", false,-1, 3,0);
    tracep->declBus(c+1395,"SLL", false,-1, 3,0);
    tracep->declBus(c+1396,"SRL", false,-1, 3,0);
    tracep->declBus(c+1397,"SRA", false,-1, 3,0);
    tracep->declBus(c+1398,"SLT", false,-1, 3,0);
    tracep->declBus(c+1399,"AND", false,-1, 3,0);
    tracep->declBus(c+1400,"OR", false,-1, 3,0);
    tracep->declBus(c+1401,"XOR", false,-1, 3,0);
    tracep->declBus(c+1402,"MUL", false,-1, 3,0);
    tracep->declBus(c+1403,"MULH", false,-1, 3,0);
    tracep->declBus(c+1404,"DIV", false,-1, 3,0);
    tracep->declBus(c+1405,"REM", false,-1, 3,0);
    tracep->declBus(c+840,"csr", false,-1, 31,0);
    tracep->declBus(c+1328,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+841,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+401,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+841,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+841,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+842,"mepc_wen", false,-1);
    tracep->declBit(c+843,"mstatus_wen", false,-1);
    tracep->declBit(c+844,"mcause_wen", false,-1);
    tracep->declBit(c+845,"mtvec_wen", false,-1);
    tracep->declBus(c+1329,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"offset", false,-1, 31,0);
    tracep->declBit(c+846,"jalen", false,-1);
    tracep->declBit(c+847,"jalren", false,-1);
    tracep->declBit(c+402,"beqen", false,-1);
    tracep->declBit(c+403,"bneen", false,-1);
    tracep->declBit(c+404,"blten", false,-1);
    tracep->declBit(c+405,"bgeen", false,-1);
    tracep->declBit(c+406,"bltuen", false,-1);
    tracep->declBit(c+407,"bgeuen", false,-1);
    tracep->declBit(c+848,"ecall_en", false,-1);
    tracep->declBit(c+408,"mret_en", false,-1);
    tracep->declBus(c+1176,"dnpc", false,-1, 31,0);
    tracep->declBit(c+849,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+838,"a", false,-1, 31,0);
    tracep->declBus(c+839,"b", false,-1, 31,0);
    tracep->declBus(c+837,"opcode", false,-1, 3,0);
    tracep->declBit(c+834,"start", false,-1);
    tracep->declBus(c+714,"res", false,-1, 31,0);
    tracep->declBit(c+941,"done", false,-1);
    tracep->declBus(c+1373,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1394,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1395,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1396,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1397,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1398,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1399,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1400,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1401,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1402,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1403,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1404,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1405,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1364,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1393,"NULL", false,-1, 1,0);
    tracep->declBus(c+715,"state", false,-1, 1,0);
    tracep->declBus(c+716,"a_reg", false,-1, 31,0);
    tracep->declBus(c+717,"b_reg", false,-1, 31,0);
    tracep->declBus(c+718,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+719,"mul_result", false,-1, 63,0);
    tracep->declBus(c+721,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+722,"dividend", false,-1, 31,0);
    tracep->declBus(c+723,"divisor", false,-1, 31,0);
    tracep->declBus(c+724,"quotient", false,-1, 31,0);
    tracep->declBus(c+725,"remainder", false,-1, 31,0);
    tracep->declBus(c+726,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+939,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid_i", false,-1);
    tracep->declBit(c+962,"id_ready_o", false,-1);
    tracep->declBit(c+820,"id_valid_o", false,-1);
    tracep->declBit(c+821,"ex_ready_i", false,-1);
    tracep->declBus(c+822,"op_o", false,-1, 6,0);
    tracep->declBus(c+257,"rd_o", false,-1, 4,0);
    tracep->declBus(c+823,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+258,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+259,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+260,"imm_o", false,-1, 31,0);
    tracep->declBus(c+261,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+262,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+942,"op", false,-1, 6,0);
    tracep->declBus(c+943,"rd", false,-1, 4,0);
    tracep->declBus(c+944,"funct3", false,-1, 2,0);
    tracep->declBus(c+945,"rs1", false,-1, 4,0);
    tracep->declBus(c+946,"rs2", false,-1, 4,0);
    tracep->declBus(c+947,"immI", false,-1, 31,0);
    tracep->declBus(c+948,"immU", false,-1, 31,0);
    tracep->declBus(c+949,"immS", false,-1, 31,0);
    tracep->declBus(c+950,"immB", false,-1, 31,0);
    tracep->declBus(c+951,"immJ", false,-1, 31,0);
    tracep->declBus(c+952,"imm", false,-1, 31,0);
    tracep->declBus(c+953,"funct7", false,-1, 6,0);
    tracep->declBus(c+954,"shamt", false,-1, 4,0);
    tracep->declBit(c+962,"id_ready_reg", false,-1);
    tracep->declBit(c+820,"id_valid_reg", false,-1);
    tracep->declBus(c+822,"op_reg", false,-1, 6,0);
    tracep->declBus(c+257,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+823,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+258,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+259,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+260,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+261,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+262,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1406,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+966,"state", false,-1);
    tracep->declBit(c+1330,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+939,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1174,"pc_valid_i", false,-1);
    tracep->declBit(c+1312,"if_ready_o", false,-1);
    tracep->declBit(c+1313,"if_valid_o", false,-1);
    tracep->declBit(c+962,"id_ready_i", false,-1);
    tracep->declBit(c+1325,"wb_done_i", false,-1);
    tracep->declBit(c+1316,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1366,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1373,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1387,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1375,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1376,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1362,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1317,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1366,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1387,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1373,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1388,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1366,"if_axi_bready_o", false,-1);
    tracep->declBit(c+412,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+409,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+411,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1318,"if_axi_arready_i", false,-1);
    tracep->declBit(c+964,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+254,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+963,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+253,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+255,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+256,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+965,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1266,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+410,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1314,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1315,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+413,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1312,"if_ready_reg", false,-1);
    tracep->declBit(c+1313,"if_valid_reg", false,-1);
    tracep->declBus(c+939,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1362,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1363,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1364,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1393,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1331,"state", false,-1, 1,0);
    tracep->declBus(c+1332,"next_state", false,-1, 1,0);
    tracep->declBit(c+964,"axi_arvalid", false,-1);
    tracep->declBit(c+965,"axi_rready", false,-1);
    tracep->declBus(c+254,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+963,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+253,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+255,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+256,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1406,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"FETCH", false,-1, 0,0);
    tracep->declBit(c+967,"axi_state", false,-1);
    tracep->declBit(c+1333,"fetch_start", false,-1);
    tracep->declBus(c+968,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+824,"ls_read_i", false,-1);
    tracep->declBit(c+825,"ls_write_i", false,-1);
    tracep->declBit(c+940,"ls_done_o", false,-1);
    tracep->declBus(c+699,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+826,"valid_i", false,-1);
    tracep->declBit(c+827,"wen_i", false,-1);
    tracep->declBus(c+828,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+398,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+829,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+830,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+831,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+832,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1375,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1375,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1363,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1363,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1323,"ls_axi_awready", false,-1);
    tracep->declBit(c+708,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1389,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+700,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+702,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+704,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+706,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1079,"ls_axi_wready", false,-1);
    tracep->declBit(c+709,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1319,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1321,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+713,"ls_axi_wlast", false,-1);
    tracep->declBit(c+710,"ls_axi_bready", false,-1);
    tracep->declBit(c+1267,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+414,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+416,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1324,"ls_axi_arready", false,-1);
    tracep->declBit(c+711,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1390,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+701,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+703,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+705,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+707,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+712,"ls_axi_rready", false,-1);
    tracep->declBit(c+1268,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+415,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1320,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1322,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+417,"ls_axi_rlast", false,-1);
    tracep->declBit(c+940,"ls_done_reg", false,-1);
    tracep->declBus(c+699,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"READ", false,-1, 1,0);
    tracep->declBus(c+1364,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1393,"DONE", false,-1, 1,0);
    tracep->declBus(c+727,"state", false,-1, 1,0);
    tracep->declBit(c+708,"axi_awvalid", false,-1);
    tracep->declBit(c+709,"axi_wvalid", false,-1);
    tracep->declBus(c+1389,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+700,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+728,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+702,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+704,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+706,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+729,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+710,"axi_bready", false,-1);
    tracep->declBit(c+713,"axi_wlast", false,-1);
    tracep->declBit(c+711,"axi_arvalid", false,-1);
    tracep->declBit(c+712,"axi_rready", false,-1);
    tracep->declBus(c+1390,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+701,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+703,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+705,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+707,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1172,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1173,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1174,"pc_valid_o", false,-1);
    tracep->declBit(c+1312,"if_ready_i", false,-1);
    tracep->declBit(c+1174,"pc_valid_reg", false,-1);
    tracep->declBus(c+1172,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1406,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1177,"state", false,-1);
    tracep->declBit(c+1334,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1408,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1409,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBus(c+289,"wdata", false,-1, 31,0);
    tracep->declBus(c+290,"waddr", false,-1, 4,0);
    tracep->declBit(c+291,"wen", false,-1);
    tracep->declBus(c+258,"raddr1", false,-1, 4,0);
    tracep->declBus(c+300,"r1", false,-1, 31,0);
    tracep->declBus(c+259,"raddr2", false,-1, 4,0);
    tracep->declBus(c+301,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+309+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+263,"ex_valid_i", false,-1);
    tracep->declBit(c+264,"wb_ready_o", false,-1);
    tracep->declBit(c+1325,"wb_done_o", false,-1);
    tracep->declBit(c+252,"difftest", false,-1);
    tracep->declBus(c+289,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+265,"ex_i", false,-1, 31,0);
    tracep->declBus(c+290,"rd_o", false,-1, 4,0);
    tracep->declBus(c+257,"rd_i", false,-1, 4,0);
    tracep->declBit(c+291,"gpr_wen_o", false,-1);
    tracep->declBit(c+274,"gpr_wen_i", false,-1);
    tracep->declBus(c+267,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+269,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+271,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+273,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+292,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+293,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+294,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+295,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+275,"mepc_wen_i", false,-1);
    tracep->declBit(c+276,"mstatus_wen_i", false,-1);
    tracep->declBit(c+277,"mcause_wen_i", false,-1);
    tracep->declBit(c+278,"mtvec_wen_i", false,-1);
    tracep->declBit(c+296,"mepc_wen_o", false,-1);
    tracep->declBit(c+297,"mstatus_wen_o", false,-1);
    tracep->declBit(c+298,"mcause_wen_o", false,-1);
    tracep->declBit(c+299,"mtvec_wen_o", false,-1);
    tracep->declBit(c+264,"wb_ready_reg", false,-1);
    tracep->declBit(c+1325,"wb_done_reg", false,-1);
    tracep->declBit(c+252,"difftest_reg", false,-1);
    tracep->declBus(c+289,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+290,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+291,"gpr_wen_reg", false,-1);
    tracep->declBus(c+292,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+293,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+294,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+295,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+296,"mepc_wen_reg", false,-1);
    tracep->declBit(c+297,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+298,"mcause_wen_reg", false,-1);
    tracep->declBit(c+299,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1364,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1393,"NULL", false,-1, 1,0);
    tracep->declBus(c+1335,"state", false,-1, 1,0);
    tracep->declBus(c+1336,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+1316,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1366,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1373,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1387,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1375,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1376,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1362,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1317,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1366,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1387,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1373,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1388,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1366,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+412,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+409,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+411,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1318,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+964,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+254,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+963,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+253,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+255,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+256,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+965,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1266,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+410,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1314,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1315,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+413,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1323,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+708,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1389,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+700,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+702,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+704,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+706,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1079,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+709,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1319,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1321,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+713,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+710,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1267,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+414,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+416,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1324,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+711,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1390,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+701,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+703,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+705,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+707,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+712,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1268,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+415,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1320,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1322,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+417,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+818,"io_master_awready", false,-1);
    tracep->declBit(c+1013,"io_master_awvalid", false,-1);
    tracep->declBus(c+1014,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1015,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1016,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1017,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1018,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+18,"io_master_wready", false,-1);
    tracep->declBit(c+1019,"io_master_wvalid", false,-1);
    tracep->declBus(c+1020,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1021,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"io_master_wlast", false,-1);
    tracep->declBit(c+1023,"io_master_bready", false,-1);
    tracep->declBit(c+1182,"io_master_bvalid", false,-1);
    tracep->declBus(c+1183,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1304,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"io_master_arready", false,-1);
    tracep->declBit(c+1024,"io_master_arvalid", false,-1);
    tracep->declBus(c+1025,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1026,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1027,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1028,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1029,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1030,"io_master_rready", false,-1);
    tracep->declBit(c+1184,"io_master_rvalid", false,-1);
    tracep->declBus(c+1185,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1305,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1306,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1307,"io_master_rlast", false,-1);
    tracep->declBit(c+833,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1092,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1086,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1080,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1084,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1088,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1090,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+284,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1093,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1081,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1083,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1097,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1094,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+285,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+280,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+282,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+286,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1095,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1087,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1082,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1085,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1089,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1091,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1096,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+287,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+281,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+279,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+283,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+288,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+302,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+303,"marchid", false,-1, 31,0);
    tracep->declBus(c+1098,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1099,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1100,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1269,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1101,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1102,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1103,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+969,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1337,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+970,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1338,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1104,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1105,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1106,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1107,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1339,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1340,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1108,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+1341,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1109,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1342,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1343,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1110,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1111,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1112,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1270,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1113,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1114,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1344,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1362,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1363,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1364,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1393,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+971,"state", false,-1, 1,0);
    tracep->declBus(c+1345,"next_state", false,-1, 1,0);
    tracep->declBus(c+1391,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1392,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1115,"sel_clint", false,-1);
    tracep->declBus(c+1410,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1411,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1116,"sel_mvendorid", false,-1);
    tracep->declBit(c+1117,"sel_marchid", false,-1);
    tracep->declBit(c+1118,"sel_id", false,-1);
    tracep->declBus(c+1119,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1120,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1121,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1346,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1122,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1123,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1124,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1125,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1412,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1126,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1413,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1127,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1128,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1129,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1130,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1414,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1415,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1416,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1371,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1131,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1371,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1371,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1132,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1133,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1371,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1371,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1134,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1135,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1417,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1418,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1374,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+1366,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1374,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 31,0);
    tracep->declBus(c+270,"dout", false,-1, 31,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1374,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+292,"din", false,-1, 31,0);
    tracep->declBus(c+266,"dout", false,-1, 31,0);
    tracep->declBit(c+296,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1419,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+268,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1374,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1409,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1420,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1374,"din", false,-1, 31,0);
    tracep->declBus(c+302,"dout", false,-1, 31,0);
    tracep->declBit(c+1366,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"io_d", false,-1);
    tracep->declBit(c+341,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"io_d", false,-1);
    tracep->declBit(c+341,"io_q", false,-1);
    tracep->declBit(c+341,"sync_0", false,-1);
    tracep->declBit(c+342,"sync_1", false,-1);
    tracep->declBit(c+343,"sync_2", false,-1);
    tracep->declBit(c+344,"sync_3", false,-1);
    tracep->declBit(c+345,"sync_4", false,-1);
    tracep->declBit(c+346,"sync_5", false,-1);
    tracep->declBit(c+347,"sync_6", false,-1);
    tracep->declBit(c+348,"sync_7", false,-1);
    tracep->declBit(c+349,"sync_8", false,-1);
    tracep->declBit(c+350,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+687,"auto_in_psel", false,-1);
    tracep->declBit(c+688,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+866,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+437,"auto_in_pready", false,-1);
    tracep->declBit(c+1370,"auto_in_pslverr", false,-1);
    tracep->declBus(c+438,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1273,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1274,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+880,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+687,"in_psel", false,-1);
    tracep->declBit(c+688,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+437,"in_pready", false,-1);
    tracep->declBus(c+438,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1370,"in_pslverr", false,-1);
    tracep->declBus(c+1273,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1274,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1275,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1276,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1277,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1278,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1375,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1421,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1422,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1423,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1424,"ONE", false,-1, 7,0);
    tracep->declBus(c+1425,"TWO", false,-1, 7,0);
    tracep->declBus(c+1426,"THREE", false,-1, 7,0);
    tracep->declBus(c+1427,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1428,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1429,"SIX", false,-1, 7,0);
    tracep->declBus(c+1430,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1431,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1432,"NINE", false,-1, 7,0);
    tracep->declBus(c+1433,"A", false,-1, 7,0);
    tracep->declBus(c+1434,"B", false,-1, 7,0);
    tracep->declBus(c+1435,"C", false,-1, 7,0);
    tracep->declBus(c+1436,"D", false,-1, 7,0);
    tracep->declBus(c+1437,"E", false,-1, 7,0);
    tracep->declBus(c+1438,"F", false,-1, 7,0);
    tracep->declBus(c+440,"led_reg", false,-1, 15,0);
    tracep->declBus(c+441,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+442+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+881,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+882,"write_en", false,-1);
    tracep->declBit(c+883,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+686,"auto_in_psel", false,-1);
    tracep->declBit(c+865,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+866,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+435,"auto_in_pready", false,-1);
    tracep->declBit(c+1369,"auto_in_pslverr", false,-1);
    tracep->declBus(c+436,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1283,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1284,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+880,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+686,"in_psel", false,-1);
    tracep->declBit(c+865,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+435,"in_pready", false,-1);
    tracep->declBus(c+436,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1369,"in_pslverr", false,-1);
    tracep->declBit(c+1283,"ps2_clk", false,-1);
    tracep->declBit(c+1284,"ps2_data", false,-1);
    tracep->declBus(c+1439,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1440,"EXP", false,-1, 7,0);
    tracep->declBus(c+955,"state", false,-1, 1,0);
    tracep->declBus(c+956,"counter", false,-1, 3,0);
    tracep->declBus(c+957,"buffer", false,-1, 7,0);
    tracep->declBus(c+958,"buffer1", false,-1, 7,0);
    tracep->declBus(c+959,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1347,"ready", false,-1);
    tracep->declBus(c+1348,"rdata", false,-1, 31,0);
    tracep->declBit(c+884,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1061,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1062,"auto_in_wvalid", false,-1);
    tracep->declBit(c+68,"auto_in_arready", false,-1);
    tracep->declBit(c+1063,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1010,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1064,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1310,"auto_in_rready", false,-1);
    tracep->declBit(c+69,"auto_in_rvalid", false,-1);
    tracep->declBus(c+70,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+69,"state", false,-1);
    tracep->declBus(c+71,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+70,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1136,"raddr", false,-1, 31,0);
    tracep->declBit(c+1137,"ren", false,-1);
    tracep->declBus(c+1138,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+867,"auto_in_psel", false,-1);
    tracep->declBit(c+689,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+861,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"auto_in_pready", false,-1);
    tracep->declBit(c+1366,"auto_in_pslverr", false,-1);
    tracep->declBus(c+814,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+994,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+995,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1294,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+861,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+867,"in_psel", false,-1);
    tracep->declBit(c+689,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+690,"in_pready", false,-1);
    tracep->declBus(c+814,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1366,"in_pslverr", false,-1);
    tracep->declBit(c+994,"qspi_sck", false,-1);
    tracep->declBit(c+995,"qspi_ce_n", false,-1);
    tracep->declBus(c+1294,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1294,"din", false,-1, 3,0);
    tracep->declBus(c+996,"dout", false,-1, 3,0);
    tracep->declBus(c+997,"douten", false,-1, 3,0);
    tracep->declBit(c+692,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1271,"clk_i", false,-1);
    tracep->declBit(c+1272,"rst_i", false,-1);
    tracep->declBus(c+861,"adr_i", false,-1, 31,0);
    tracep->declBus(c+429,"dat_i", false,-1, 31,0);
    tracep->declBus(c+814,"dat_o", false,-1, 31,0);
    tracep->declBus(c+430,"sel_i", false,-1, 3,0);
    tracep->declBit(c+867,"cyc_i", false,-1);
    tracep->declBit(c+867,"stb_i", false,-1);
    tracep->declBit(c+692,"ack_o", false,-1);
    tracep->declBit(c+428,"we_i", false,-1);
    tracep->declBit(c+994,"sck", false,-1);
    tracep->declBit(c+995,"ce_n", false,-1);
    tracep->declBus(c+1294,"din", false,-1, 3,0);
    tracep->declBus(c+996,"dout", false,-1, 3,0);
    tracep->declBus(c+997,"douten", false,-1, 3,0);
    tracep->declBus(c+1406,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+450,"mr_sck", false,-1);
    tracep->declBit(c+451,"mr_ce_n", false,-1);
    tracep->declBus(c+1294,"mr_din", false,-1, 3,0);
    tracep->declBus(c+452,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+453,"mr_doe", false,-1);
    tracep->declBit(c+454,"mw_sck", false,-1);
    tracep->declBit(c+455,"mw_ce_n", false,-1);
    tracep->declBus(c+1294,"mw_din", false,-1, 3,0);
    tracep->declBus(c+456,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+457,"mw_doe", false,-1);
    tracep->declBit(c+885,"mr_rd", false,-1);
    tracep->declBit(c+458,"mr_done", false,-1);
    tracep->declBit(c+886,"mw_wr", false,-1);
    tracep->declBit(c+459,"mw_done", false,-1);
    tracep->declBit(c+867,"wb_valid", false,-1);
    tracep->declBit(c+887,"wb_we", false,-1);
    tracep->declBit(c+888,"wb_re", false,-1);
    tracep->declBit(c+460,"state", false,-1);
    tracep->declBit(c+889,"nstate", false,-1);
    tracep->declBus(c+461,"size", false,-1, 2,0);
    tracep->declBus(c+462,"byte0", false,-1, 7,0);
    tracep->declBus(c+463,"byte1", false,-1, 7,0);
    tracep->declBus(c+464,"byte2", false,-1, 7,0);
    tracep->declBus(c+465,"byte3", false,-1, 7,0);
    tracep->declBus(c+466,"wdata", false,-1, 31,0);
    tracep->declBit(c+693,"qpi_flag", false,-1);
    tracep->declBit(c+694,"qpi_sck", false,-1);
    tracep->declBit(c+695,"qpi_ce_n", false,-1);
    tracep->declBus(c+696,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+697,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+698,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1349,"rst_n", false,-1);
    tracep->declBus(c+890,"addr", false,-1, 23,0);
    tracep->declBit(c+885,"rd", false,-1);
    tracep->declBus(c+1441,"size", false,-1, 2,0);
    tracep->declBit(c+458,"done", false,-1);
    tracep->declBus(c+814,"line", false,-1, 31,0);
    tracep->declBit(c+450,"sck", false,-1);
    tracep->declBit(c+451,"ce_n", false,-1);
    tracep->declBus(c+1294,"din", false,-1, 3,0);
    tracep->declBus(c+452,"dout", false,-1, 3,0);
    tracep->declBit(c+453,"douten", false,-1);
    tracep->declBus(c+1406,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"READ", false,-1, 0,0);
    tracep->declBus(c+1442,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+467,"state", false,-1);
    tracep->declBit(c+891,"nstate", false,-1);
    tracep->declBus(c+468,"counter", false,-1, 7,0);
    tracep->declBus(c+469,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+850+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1443,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+470,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1349,"rst_n", false,-1);
    tracep->declBus(c+892,"addr", false,-1, 23,0);
    tracep->declBus(c+466,"line", false,-1, 31,0);
    tracep->declBus(c+461,"size", false,-1, 2,0);
    tracep->declBit(c+886,"wr", false,-1);
    tracep->declBit(c+459,"done", false,-1);
    tracep->declBit(c+454,"sck", false,-1);
    tracep->declBit(c+455,"ce_n", false,-1);
    tracep->declBus(c+1294,"din", false,-1, 3,0);
    tracep->declBus(c+456,"dout", false,-1, 3,0);
    tracep->declBit(c+457,"douten", false,-1);
    tracep->declBus(c+1406,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1407,"WRITE", false,-1, 0,0);
    tracep->declBus(c+471,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+472,"state", false,-1);
    tracep->declBit(c+893,"nstate", false,-1);
    tracep->declBus(c+473,"counter", false,-1, 7,0);
    tracep->declBus(c+474,"saddr", false,-1, 23,0);
    tracep->declBus(c+1444,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+682,"auto_in_psel", false,-1);
    tracep->declBit(c+683,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+861,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+432,"auto_in_pready", false,-1);
    tracep->declBit(c+1366,"auto_in_pslverr", false,-1);
    tracep->declBus(c+433,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1295,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+420,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+855,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+856,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+857,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+858,"sdram_bundle_we", false,-1);
    tracep->declBus(c+859,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+860,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+421,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+925,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+861,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+682,"in_psel", false,-1);
    tracep->declBit(c+683,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+432,"in_pready", false,-1);
    tracep->declBus(c+433,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1366,"in_pslverr", false,-1);
    tracep->declBit(c+1295,"sdram_clk", false,-1);
    tracep->declBit(c+420,"sdram_cke", false,-1);
    tracep->declBit(c+855,"sdram_cs", false,-1);
    tracep->declBit(c+856,"sdram_ras", false,-1);
    tracep->declBit(c+857,"sdram_cas", false,-1);
    tracep->declBit(c+858,"sdram_we", false,-1);
    tracep->declBus(c+859,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+860,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+421,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+925,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+475,"sdram_dout_en", false,-1);
    tracep->declBus(c+476,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+351,"state", false,-1, 1,0);
    tracep->declBit(c+894,"req_accept", false,-1);
    tracep->declBit(c+973,"is_read", false,-1);
    tracep->declBit(c+974,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1271,"clk_i", false,-1);
    tracep->declBit(c+1272,"rst_i", false,-1);
    tracep->declBus(c+975,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+973,"inport_rd_i", false,-1);
    tracep->declBus(c+1375,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+861,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+429,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+925,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+894,"inport_accept_o", false,-1);
    tracep->declBit(c+432,"inport_ack_o", false,-1);
    tracep->declBit(c+1366,"inport_error_o", false,-1);
    tracep->declBus(c+433,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1295,"sdram_clk_o", false,-1);
    tracep->declBit(c+420,"sdram_cke_o", false,-1);
    tracep->declBit(c+855,"sdram_cs_o", false,-1);
    tracep->declBit(c+856,"sdram_ras_o", false,-1);
    tracep->declBit(c+857,"sdram_cas_o", false,-1);
    tracep->declBit(c+858,"sdram_we_o", false,-1);
    tracep->declBus(c+421,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+859,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+860,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+476,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+475,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1445,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1446,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1447,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1448,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1449,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1450,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1451,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1452,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1453,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1454,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1455,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1450,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1400,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1396,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1398,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1397,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1399,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1395,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1373,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1456,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1450,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1373,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1394,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1395,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1396,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1397,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1398,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1399,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1400,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1401,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1402,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1457,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1457,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1409,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1457,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1448,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1448,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1458,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+861,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+975,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+973,"ram_rd_w", false,-1);
    tracep->declBit(c+894,"ram_accept_w", false,-1);
    tracep->declBus(c+429,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+433,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+432,"ram_ack_w", false,-1);
    tracep->declBit(c+976,"ram_req_w", false,-1);
    tracep->declBus(c+895,"command_q", false,-1, 3,0);
    tracep->declBus(c+859,"addr_q", false,-1, 12,0);
    tracep->declBus(c+476,"data_q", false,-1, 31,0);
    tracep->declBit(c+477,"data_rd_en_q", false,-1);
    tracep->declBus(c+421,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+420,"cke_q", false,-1);
    tracep->declBus(c+860,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1459,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+478,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+925,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+479,"refresh_q", false,-1);
    tracep->declBus(c+896,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+480+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+897,"state_q", false,-1, 3,0);
    tracep->declBus(c+977,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+978,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+488,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+489,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+898,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+899,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+900,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1450,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+490,"delay_q", false,-1, 3,0);
    tracep->declBus(c+979,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1460,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+901,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+491,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+433,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+492,"idx", false,-1, 31,0);
    tracep->declBus(c+493,"rd_q", false,-1, 3,0);
    tracep->declBit(c+432,"ack_q", false,-1);
    tracep->declArray(c+902,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+691,"auto_in_psel", false,-1);
    tracep->declBit(c+871,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+864,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_in_pready", false,-1);
    tracep->declBit(c+1366,"auto_in_pslverr", false,-1);
    tracep->declBus(c+872,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+418,"spi_bundle_sck", false,-1);
    tracep->declBus(c+419,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+854,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1293,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1461,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1462,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1451,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+905,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+691,"in_psel", false,-1);
    tracep->declBit(c+871,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"in_pready", false,-1);
    tracep->declBus(c+872,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1366,"in_pslverr", false,-1);
    tracep->declBit(c+418,"spi_sck", false,-1);
    tracep->declBus(c+419,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+854,"spi_mosi", false,-1);
    tracep->declBit(c+1293,"spi_miso", false,-1);
    tracep->declBit(c+494,"spi_irq_out", false,-1);
    tracep->declBus(c+980,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+981,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+982,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+983,"wb_we_i", false,-1);
    tracep->declBit(c+984,"wb_stb_i", false,-1);
    tracep->declBit(c+985,"wb_cyc_i", false,-1);
    tracep->declBit(c+495,"wb_ack_o", false,-1);
    tracep->declBus(c+496,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1376,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1361,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1463,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1464,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1441,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1465,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1466,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1467,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+352,"state", false,-1, 2,0);
    tracep->declBus(c+353,"next_state", false,-1, 2,0);
    tracep->declBus(c+354,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+355,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+356,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+357,"flash_pwrite", false,-1);
    tracep->declBit(c+358,"flash_psel", false,-1);
    tracep->declBit(c+359,"flash_penable", false,-1);
    tracep->declBit(c+360,"flash_pready", false,-1);
    tracep->declBus(c+361,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1468,"Tp", false,-1, 31,0);
    tracep->declBit(c+1271,"wb_clk_i", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBus(c+980,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+981,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+496,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+982,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+983,"wb_we_i", false,-1);
    tracep->declBit(c+984,"wb_stb_i", false,-1);
    tracep->declBit(c+985,"wb_cyc_i", false,-1);
    tracep->declBit(c+495,"wb_ack_o", false,-1);
    tracep->declBit(c+1366,"wb_err_o", false,-1);
    tracep->declBit(c+494,"wb_int_o", false,-1);
    tracep->declBus(c+419,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+418,"sclk_pad_o", false,-1);
    tracep->declBit(c+854,"mosi_pad_o", false,-1);
    tracep->declBit(c+1293,"miso_pad_i", false,-1);
    tracep->declBus(c+497,"divider", false,-1, 15,0);
    tracep->declBus(c+498,"ctrl", false,-1, 13,0);
    tracep->declBus(c+499,"ss", false,-1, 7,0);
    tracep->declBus(c+986,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+500,"rx", false,-1, 127,0);
    tracep->declBit(c+504,"rx_negedge", false,-1);
    tracep->declBit(c+505,"tx_negedge", false,-1);
    tracep->declBus(c+506,"char_len", false,-1, 6,0);
    tracep->declBit(c+507,"go", false,-1);
    tracep->declBit(c+508,"lsb", false,-1);
    tracep->declBit(c+509,"ie", false,-1);
    tracep->declBit(c+510,"ass", false,-1);
    tracep->declBit(c+987,"spi_divider_sel", false,-1);
    tracep->declBit(c+988,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+989,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+990,"spi_ss_sel", false,-1);
    tracep->declBit(c+511,"tip", false,-1);
    tracep->declBit(c+512,"pos_edge", false,-1);
    tracep->declBit(c+513,"neg_edge", false,-1);
    tracep->declBit(c+514,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1468,"Tp", false,-1, 31,0);
    tracep->declBit(c+1271,"clk_in", false,-1);
    tracep->declBit(c+1272,"rst", false,-1);
    tracep->declBit(c+511,"enable", false,-1);
    tracep->declBit(c+507,"go", false,-1);
    tracep->declBit(c+514,"last_clk", false,-1);
    tracep->declBus(c+497,"divider", false,-1, 15,0);
    tracep->declBit(c+418,"clk_out", false,-1);
    tracep->declBit(c+512,"pos_edge", false,-1);
    tracep->declBit(c+513,"neg_edge", false,-1);
    tracep->declBus(c+515,"cnt", false,-1, 15,0);
    tracep->declBit(c+516,"cnt_zero", false,-1);
    tracep->declBit(c+517,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1468,"Tp", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"rst", false,-1);
    tracep->declBus(c+991,"latch", false,-1, 3,0);
    tracep->declBus(c+982,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+506,"len", false,-1, 6,0);
    tracep->declBit(c+508,"lsb", false,-1);
    tracep->declBit(c+507,"go", false,-1);
    tracep->declBit(c+512,"pos_edge", false,-1);
    tracep->declBit(c+513,"neg_edge", false,-1);
    tracep->declBit(c+504,"rx_negedge", false,-1);
    tracep->declBit(c+505,"tx_negedge", false,-1);
    tracep->declBit(c+511,"tip", false,-1);
    tracep->declBit(c+514,"last", false,-1);
    tracep->declBus(c+981,"p_in", false,-1, 31,0);
    tracep->declArray(c+500,"p_out", false,-1, 127,0);
    tracep->declBit(c+418,"s_clk", false,-1);
    tracep->declBit(c+1293,"s_in", false,-1);
    tracep->declBit(c+854,"s_out", false,-1);
    tracep->declBus(c+518,"cnt", false,-1, 7,0);
    tracep->declArray(c+500,"data", false,-1, 127,0);
    tracep->declBus(c+519,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+520,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+521,"rx_clk", false,-1);
    tracep->declBit(c+522,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+868,"auto_in_psel", false,-1);
    tracep->declBit(c+869,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+866,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+870,"auto_in_pready", false,-1);
    tracep->declBit(c+1366,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1300,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1291,"uart_rx", false,-1);
    tracep->declBit(c+1292,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+868,"in_psel", false,-1);
    tracep->declBit(c+869,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+870,"in_pready", false,-1);
    tracep->declBit(c+1366,"in_pslverr", false,-1);
    tracep->declBus(c+880,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+1300,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1291,"uart_rx", false,-1);
    tracep->declBit(c+1292,"uart_tx", false,-1);
    tracep->declBit(c+523,"rtsn", false,-1);
    tracep->declBit(c+1366,"ctsn", false,-1);
    tracep->declBit(c+524,"dtr_pad_o", false,-1);
    tracep->declBit(c+1366,"dsr_pad_i", false,-1);
    tracep->declBit(c+1366,"ri_pad_i", false,-1);
    tracep->declBit(c+1366,"dcd_pad_i", false,-1);
    tracep->declBit(c+525,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+906,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+907,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+362,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+992,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+526,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBus(c+906,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+993,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+992,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1292,"stx_pad_o", false,-1);
    tracep->declBit(c+1291,"srx_pad_i", false,-1);
    tracep->declBus(c+1401,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+526,"rts_pad_o", false,-1);
    tracep->declBit(c+524,"dtr_pad_o", false,-1);
    tracep->declBit(c+525,"int_o", false,-1);
    tracep->declBit(c+527,"enable", false,-1);
    tracep->declBit(c+528,"srx_pad", false,-1);
    tracep->declBus(c+529,"ier", false,-1, 3,0);
    tracep->declBus(c+530,"iir", false,-1, 3,0);
    tracep->declBus(c+531,"fcr", false,-1, 1,0);
    tracep->declBus(c+532,"mcr", false,-1, 4,0);
    tracep->declBus(c+533,"lcr", false,-1, 7,0);
    tracep->declBus(c+534,"msr", false,-1, 7,0);
    tracep->declBus(c+535,"dl", false,-1, 15,0);
    tracep->declBus(c+536,"scratch", false,-1, 7,0);
    tracep->declBit(c+537,"start_dlc", false,-1);
    tracep->declBit(c+538,"lsr_mask_d", false,-1);
    tracep->declBit(c+539,"msi_reset", false,-1);
    tracep->declBus(c+540,"dlc", false,-1, 15,0);
    tracep->declBus(c+541,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+542,"rx_reset", false,-1);
    tracep->declBit(c+543,"tx_reset", false,-1);
    tracep->declBit(c+544,"dlab", false,-1);
    tracep->declBit(c+1371,"cts_pad_i", false,-1);
    tracep->declBit(c+1366,"dsr_pad_i", false,-1);
    tracep->declBit(c+1366,"ri_pad_i", false,-1);
    tracep->declBit(c+1366,"dcd_pad_i", false,-1);
    tracep->declBit(c+545,"loopback", false,-1);
    tracep->declBit(c+1366,"cts", false,-1);
    tracep->declBit(c+1371,"dsr", false,-1);
    tracep->declBit(c+1371,"ri", false,-1);
    tracep->declBit(c+1371,"dcd", false,-1);
    tracep->declBit(c+546,"cts_c", false,-1);
    tracep->declBit(c+547,"dsr_c", false,-1);
    tracep->declBit(c+548,"ri_c", false,-1);
    tracep->declBit(c+549,"dcd_c", false,-1);
    tracep->declBus(c+550,"lsr", false,-1, 7,0);
    tracep->declBit(c+551,"lsr0", false,-1);
    tracep->declBit(c+552,"lsr1", false,-1);
    tracep->declBit(c+553,"lsr2", false,-1);
    tracep->declBit(c+554,"lsr3", false,-1);
    tracep->declBit(c+555,"lsr4", false,-1);
    tracep->declBit(c+556,"lsr5", false,-1);
    tracep->declBit(c+557,"lsr6", false,-1);
    tracep->declBit(c+558,"lsr7", false,-1);
    tracep->declBit(c+559,"lsr0r", false,-1);
    tracep->declBit(c+560,"lsr1r", false,-1);
    tracep->declBit(c+561,"lsr2r", false,-1);
    tracep->declBit(c+562,"lsr3r", false,-1);
    tracep->declBit(c+563,"lsr4r", false,-1);
    tracep->declBit(c+564,"lsr5r", false,-1);
    tracep->declBit(c+565,"lsr6r", false,-1);
    tracep->declBit(c+566,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+567,"rls_int", false,-1);
    tracep->declBit(c+568,"rda_int", false,-1);
    tracep->declBit(c+569,"ti_int", false,-1);
    tracep->declBit(c+570,"thre_int", false,-1);
    tracep->declBit(c+571,"ms_int", false,-1);
    tracep->declBit(c+572,"tf_push", false,-1);
    tracep->declBit(c+573,"rf_pop", false,-1);
    tracep->declBus(c+1350,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+574,"rf_error_bit", false,-1);
    tracep->declBit(c+552,"rf_overrun", false,-1);
    tracep->declBit(c+575,"rf_push_pulse", false,-1);
    tracep->declBus(c+576,"rf_count", false,-1, 4,0);
    tracep->declBus(c+577,"tf_count", false,-1, 4,0);
    tracep->declBus(c+578,"tstate", false,-1, 2,0);
    tracep->declBus(c+579,"rstate", false,-1, 3,0);
    tracep->declBus(c+580,"counter_t", false,-1, 9,0);
    tracep->declBit(c+581,"thre_set_en", false,-1);
    tracep->declBus(c+582,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+583,"block_value", false,-1, 7,0);
    tracep->declBit(c+584,"serial_out", false,-1);
    tracep->declBit(c+585,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+586,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+587,"lsr0_d", false,-1);
    tracep->declBit(c+588,"lsr1_d", false,-1);
    tracep->declBit(c+589,"lsr2_d", false,-1);
    tracep->declBit(c+590,"lsr3_d", false,-1);
    tracep->declBit(c+591,"lsr4_d", false,-1);
    tracep->declBit(c+592,"lsr5_d", false,-1);
    tracep->declBit(c+593,"lsr6_d", false,-1);
    tracep->declBit(c+594,"lsr7_d", false,-1);
    tracep->declBit(c+595,"rls_int_d", false,-1);
    tracep->declBit(c+596,"thre_int_d", false,-1);
    tracep->declBit(c+597,"ms_int_d", false,-1);
    tracep->declBit(c+598,"ti_int_d", false,-1);
    tracep->declBit(c+599,"rda_int_d", false,-1);
    tracep->declBit(c+600,"rls_int_rise", false,-1);
    tracep->declBit(c+601,"thre_int_rise", false,-1);
    tracep->declBit(c+602,"ms_int_rise", false,-1);
    tracep->declBit(c+603,"ti_int_rise", false,-1);
    tracep->declBit(c+604,"rda_int_rise", false,-1);
    tracep->declBit(c+605,"rls_int_pnd", false,-1);
    tracep->declBit(c+606,"rda_int_pnd", false,-1);
    tracep->declBit(c+607,"thre_int_pnd", false,-1);
    tracep->declBit(c+608,"ms_int_pnd", false,-1);
    tracep->declBit(c+609,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1468,"Tp", false,-1, 31,0);
    tracep->declBus(c+1468,"width", false,-1, 31,0);
    tracep->declBus(c+1407,"init_value", false,-1, 0,0);
    tracep->declBit(c+1272,"rst_i", false,-1);
    tracep->declBit(c+1271,"clk_i", false,-1);
    tracep->declBit(c+1366,"stage1_rst_i", false,-1);
    tracep->declBit(c+1371,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1291,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+528,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+610,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBus(c+533,"lcr", false,-1, 7,0);
    tracep->declBit(c+573,"rf_pop", false,-1);
    tracep->declBit(c+585,"srx_pad_i", false,-1);
    tracep->declBit(c+527,"enable", false,-1);
    tracep->declBit(c+542,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+580,"counter_t", false,-1, 9,0);
    tracep->declBus(c+576,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1350,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+552,"rf_overrun", false,-1);
    tracep->declBit(c+574,"rf_error_bit", false,-1);
    tracep->declBus(c+579,"rstate", false,-1, 3,0);
    tracep->declBit(c+575,"rf_push_pulse", false,-1);
    tracep->declBus(c+611,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+612,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+613,"rshift", false,-1, 7,0);
    tracep->declBit(c+614,"rparity", false,-1);
    tracep->declBit(c+615,"rparity_error", false,-1);
    tracep->declBit(c+616,"rframing_error", false,-1);
    tracep->declBit(c+617,"rbit_in", false,-1);
    tracep->declBit(c+618,"rparity_xor", false,-1);
    tracep->declBus(c+619,"counter_b", false,-1, 7,0);
    tracep->declBit(c+620,"rf_push_q", false,-1);
    tracep->declBus(c+621,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+622,"rf_push", false,-1);
    tracep->declBit(c+623,"break_error", false,-1);
    tracep->declBit(c+624,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+625,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+626,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+627,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1373,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1394,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1395,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1396,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1397,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1398,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1399,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1400,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1401,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1402,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1403,"sr_push", false,-1, 3,0);
    tracep->declBus(c+628,"toc_value", false,-1, 9,0);
    tracep->declBus(c+629,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1469,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1470,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1450,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1408,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBit(c+575,"push", false,-1);
    tracep->declBit(c+573,"pop", false,-1);
    tracep->declBus(c+621,"data_in", false,-1, 10,0);
    tracep->declBit(c+542,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1350,"data_out", false,-1, 10,0);
    tracep->declBit(c+552,"overrun", false,-1);
    tracep->declBus(c+576,"count", false,-1, 4,0);
    tracep->declBit(c+574,"error_bit", false,-1);
    tracep->declBus(c+1351,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+630+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+646,"top", false,-1, 3,0);
    tracep->declBus(c+647,"bottom", false,-1, 3,0);
    tracep->declBus(c+648,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+649,"word0", false,-1, 2,0);
    tracep->declBus(c+650,"word1", false,-1, 2,0);
    tracep->declBus(c+651,"word2", false,-1, 2,0);
    tracep->declBus(c+652,"word3", false,-1, 2,0);
    tracep->declBus(c+653,"word4", false,-1, 2,0);
    tracep->declBus(c+654,"word5", false,-1, 2,0);
    tracep->declBus(c+655,"word6", false,-1, 2,0);
    tracep->declBus(c+656,"word7", false,-1, 2,0);
    tracep->declBus(c+657,"word8", false,-1, 2,0);
    tracep->declBus(c+658,"word9", false,-1, 2,0);
    tracep->declBus(c+659,"word10", false,-1, 2,0);
    tracep->declBus(c+660,"word11", false,-1, 2,0);
    tracep->declBus(c+661,"word12", false,-1, 2,0);
    tracep->declBus(c+662,"word13", false,-1, 2,0);
    tracep->declBus(c+663,"word14", false,-1, 2,0);
    tracep->declBus(c+664,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1450,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1451,"data_width", false,-1, 31,0);
    tracep->declBus(c+1470,"depth", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+575,"we", false,-1);
    tracep->declBus(c+646,"a", false,-1, 3,0);
    tracep->declBus(c+647,"dpra", false,-1, 3,0);
    tracep->declBus(c+665,"di", false,-1, 7,0);
    tracep->declBus(c+1351,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+363+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBus(c+533,"lcr", false,-1, 7,0);
    tracep->declBit(c+572,"tf_push", false,-1);
    tracep->declBus(c+993,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+527,"enable", false,-1);
    tracep->declBit(c+543,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+584,"stx_pad_o", false,-1);
    tracep->declBus(c+578,"tstate", false,-1, 2,0);
    tracep->declBus(c+577,"tf_count", false,-1, 4,0);
    tracep->declBus(c+666,"counter", false,-1, 4,0);
    tracep->declBus(c+667,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+668,"shift_out", false,-1, 6,0);
    tracep->declBit(c+669,"stx_o_tmp", false,-1);
    tracep->declBit(c+670,"parity_xor", false,-1);
    tracep->declBit(c+671,"tf_pop", false,-1);
    tracep->declBit(c+672,"bit_out", false,-1);
    tracep->declBus(c+993,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1352,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+673,"tf_overrun", false,-1);
    tracep->declBus(c+1376,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1361,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1463,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1464,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1441,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1465,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1451,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1470,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1450,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1408,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+1272,"wb_rst_i", false,-1);
    tracep->declBit(c+572,"push", false,-1);
    tracep->declBit(c+671,"pop", false,-1);
    tracep->declBus(c+993,"data_in", false,-1, 7,0);
    tracep->declBit(c+543,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1352,"data_out", false,-1, 7,0);
    tracep->declBit(c+673,"overrun", false,-1);
    tracep->declBus(c+577,"count", false,-1, 4,0);
    tracep->declBus(c+674,"top", false,-1, 3,0);
    tracep->declBus(c+675,"bottom", false,-1, 3,0);
    tracep->declBus(c+676,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1450,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1451,"data_width", false,-1, 31,0);
    tracep->declBus(c+1470,"depth", false,-1, 31,0);
    tracep->declBit(c+1271,"clk", false,-1);
    tracep->declBit(c+572,"we", false,-1);
    tracep->declBus(c+674,"a", false,-1, 3,0);
    tracep->declBus(c+675,"dpra", false,-1, 3,0);
    tracep->declBus(c+993,"di", false,-1, 7,0);
    tracep->declBus(c+1352,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+379+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBit(c+684,"auto_in_psel", false,-1);
    tracep->declBit(c+685,"auto_in_penable", false,-1);
    tracep->declBit(c+428,"auto_in_pwrite", false,-1);
    tracep->declBus(c+864,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+427,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+429,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"auto_in_pready", false,-1);
    tracep->declBit(c+1367,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1368,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1285,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1286,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1288,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1289,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1290,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1271,"clock", false,-1);
    tracep->declBit(c+1272,"reset", false,-1);
    tracep->declBus(c+905,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+684,"in_psel", false,-1);
    tracep->declBit(c+685,"in_penable", false,-1);
    tracep->declBus(c+427,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+428,"in_pwrite", false,-1);
    tracep->declBus(c+429,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+430,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+434,"in_pready", false,-1);
    tracep->declBus(c+1368,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1367,"in_pslverr", false,-1);
    tracep->declBus(c+1285,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1286,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1287,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1288,"vga_hsync", false,-1);
    tracep->declBit(c+1289,"vga_vsync", false,-1);
    tracep->declBit(c+1290,"vga_valid", false,-1);
    tracep->declBit(c+908,"is_write", false,-1);
    tracep->declBus(c+909,"addr", false,-1, 31,0);
    tracep->declBit(c+434,"ready", false,-1);
    tracep->declBus(c+677,"i", false,-1, 31,0);
    tracep->declBus(c+1471,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1472,"h_active", false,-1, 31,0);
    tracep->declBus(c+1473,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1474,"h_total", false,-1, 31,0);
    tracep->declBus(c+1448,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1475,"v_active", false,-1, 31,0);
    tracep->declBus(c+1476,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1477,"v_total", false,-1, 31,0);
    tracep->declBus(c+678,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+395,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+679,"h_valid", false,-1);
    tracep->declBit(c+396,"v_valid", false,-1);
    tracep->declBus(c+680,"h_addr", false,-1, 9,0);
    tracep->declBus(c+397,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1353,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+418,"sck", false,-1);
    tracep->declBit(c+910,"ss", false,-1);
    tracep->declBit(c+854,"mosi", false,-1);
    tracep->declBit(c+808,"miso", false,-1);
    tracep->declBus(c+809,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+810,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+811,"counter", false,-1, 2,0);
    tracep->declBit(c+812,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+418,"sck", false,-1);
    tracep->declBit(c+681,"ss", false,-1);
    tracep->declBit(c+854,"mosi", false,-1);
    tracep->declBit(c+1354,"miso", false,-1);
    tracep->declBit(c+681,"reset", false,-1);
    tracep->declBus(c+802,"state", false,-1, 2,0);
    tracep->declBus(c+803,"counter", false,-1, 7,0);
    tracep->declBus(c+804,"cmd", false,-1, 7,0);
    tracep->declBus(c+805,"addr", false,-1, 23,0);
    tracep->declBus(c+806,"data", false,-1, 31,0);
    tracep->declBit(c+807,"ren", false,-1);
    tracep->declBus(c+1355,"rdata", false,-1, 31,0);
    tracep->declBus(c+1356,"raddr", false,-1, 31,0);
    tracep->declBus(c+1357,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+418,"clock", false,-1);
    tracep->declBit(c+807,"valid", false,-1);
    tracep->declBus(c+804,"cmd", false,-1, 7,0);
    tracep->declBus(c+1356,"addr", false,-1, 31,0);
    tracep->declBus(c+1355,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+994,"sck", false,-1);
    tracep->declBit(c+995,"ce_n", false,-1);
    tracep->declBus(c+1294,"dio", false,-1, 3,0);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+9,"state", false,-1, 3,0);
    tracep->declBus(c+10,"counter", false,-1, 7,0);
    tracep->declBus(c+928,"cmd", false,-1, 7,0);
    tracep->declBus(c+929,"addr", false,-1, 23,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+930+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1358,"qpi_flag", false,-1);
    tracep->declBus(c+12,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1359,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+934,"ren", false,-1);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBus(c+936,"len", false,-1, 7,0);
    tracep->declBus(c+1360,"rdata", false,-1, 31,0);
    tracep->declBus(c+937,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+994,"clock", false,-1);
    tracep->declBit(c+934,"ren", false,-1);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBus(c+928,"cmd", false,-1, 7,0);
    tracep->declBus(c+937,"saddr", false,-1, 31,0);
    tracep->declBus(c+1360,"rdata", false,-1, 31,0);
    tracep->declBus(c+938,"wdata", false,-1, 31,0);
    tracep->declBus(c+936,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1295,"clk", false,-1);
    tracep->declBit(c+420,"cke", false,-1);
    tracep->declBit(c+855,"cs", false,-1);
    tracep->declBit(c+856,"ras", false,-1);
    tracep->declBit(c+857,"cas", false,-1);
    tracep->declBit(c+858,"we", false,-1);
    tracep->declBus(c+859,"a", false,-1, 12,0);
    tracep->declBus(c+911,"ba", false,-1, 1,0);
    tracep->declBus(c+912,"dqm", false,-1, 1,0);
    tracep->declBus(c+926,"dq", false,-1, 15,0);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+730,"state", false,-1, 2,0);
    tracep->declBus(c+731,"counter", false,-1, 7,0);
    tracep->declBus(c+732,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1478,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+733,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+734,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+914,"nop", false,-1);
    tracep->declBit(c+915,"active", false,-1);
    tracep->declBit(c+916,"precharge", false,-1);
    tracep->declBit(c+917,"read", false,-1);
    tracep->declBit(c+918,"write", false,-1);
    tracep->declBit(c+919,"burstterm", false,-1);
    tracep->declBit(c+920,"autorefresh", false,-1);
    tracep->declBit(c+921,"mode", false,-1);
    tracep->declBus(c+735,"test", false,-1, 15,0);
    tracep->declBit(c+736,"write_burst_mode", false,-1);
    tracep->declBus(c+737,"op_mode", false,-1, 1,0);
    tracep->declBus(c+738,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+739,"burst_type", false,-1);
    tracep->declBus(c+740,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+741,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+742,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+743,"bank", false,-1, 1,0);
    tracep->declBus(c+744,"row", false,-1, 12,0);
    tracep->declBus(c+745,"column", false,-1, 8,0);
    tracep->declBus(c+746,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+747,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1295,"clk", false,-1);
    tracep->declBit(c+420,"cke", false,-1);
    tracep->declBit(c+855,"cs", false,-1);
    tracep->declBit(c+856,"ras", false,-1);
    tracep->declBit(c+857,"cas", false,-1);
    tracep->declBit(c+858,"we", false,-1);
    tracep->declBus(c+859,"a", false,-1, 12,0);
    tracep->declBus(c+911,"ba", false,-1, 1,0);
    tracep->declBus(c+922,"dqm", false,-1, 1,0);
    tracep->declBus(c+927,"dq", false,-1, 15,0);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+748,"state", false,-1, 2,0);
    tracep->declBus(c+749,"counter", false,-1, 7,0);
    tracep->declBus(c+750,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1479,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+751,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+752,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+914,"nop", false,-1);
    tracep->declBit(c+915,"active", false,-1);
    tracep->declBit(c+916,"precharge", false,-1);
    tracep->declBit(c+917,"read", false,-1);
    tracep->declBit(c+918,"write", false,-1);
    tracep->declBit(c+919,"burstterm", false,-1);
    tracep->declBit(c+920,"autorefresh", false,-1);
    tracep->declBit(c+921,"mode", false,-1);
    tracep->declBus(c+753,"test", false,-1, 15,0);
    tracep->declBit(c+754,"write_burst_mode", false,-1);
    tracep->declBus(c+755,"op_mode", false,-1, 1,0);
    tracep->declBus(c+756,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+757,"burst_type", false,-1);
    tracep->declBus(c+758,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+759,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+760,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+761,"bank", false,-1, 1,0);
    tracep->declBus(c+762,"row", false,-1, 12,0);
    tracep->declBus(c+763,"column", false,-1, 8,0);
    tracep->declBus(c+764,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+765,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1295,"clk", false,-1);
    tracep->declBit(c+420,"cke", false,-1);
    tracep->declBit(c+855,"cs", false,-1);
    tracep->declBit(c+856,"ras", false,-1);
    tracep->declBit(c+857,"cas", false,-1);
    tracep->declBit(c+858,"we", false,-1);
    tracep->declBus(c+859,"a", false,-1, 12,0);
    tracep->declBus(c+911,"ba", false,-1, 1,0);
    tracep->declBus(c+923,"dqm", false,-1, 1,0);
    tracep->declBus(c+926,"dq", false,-1, 15,0);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+766,"state", false,-1, 2,0);
    tracep->declBus(c+767,"counter", false,-1, 7,0);
    tracep->declBus(c+768,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1480,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+769,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+770,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+914,"nop", false,-1);
    tracep->declBit(c+915,"active", false,-1);
    tracep->declBit(c+916,"precharge", false,-1);
    tracep->declBit(c+917,"read", false,-1);
    tracep->declBit(c+918,"write", false,-1);
    tracep->declBit(c+919,"burstterm", false,-1);
    tracep->declBit(c+920,"autorefresh", false,-1);
    tracep->declBit(c+921,"mode", false,-1);
    tracep->declBus(c+771,"test", false,-1, 15,0);
    tracep->declBit(c+772,"write_burst_mode", false,-1);
    tracep->declBus(c+773,"op_mode", false,-1, 1,0);
    tracep->declBus(c+774,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+775,"burst_type", false,-1);
    tracep->declBus(c+776,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+777,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+778,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+779,"bank", false,-1, 1,0);
    tracep->declBus(c+780,"row", false,-1, 12,0);
    tracep->declBus(c+781,"column", false,-1, 8,0);
    tracep->declBus(c+782,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+783,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1295,"clk", false,-1);
    tracep->declBit(c+420,"cke", false,-1);
    tracep->declBit(c+855,"cs", false,-1);
    tracep->declBit(c+856,"ras", false,-1);
    tracep->declBit(c+857,"cas", false,-1);
    tracep->declBit(c+858,"we", false,-1);
    tracep->declBus(c+859,"a", false,-1, 12,0);
    tracep->declBus(c+911,"ba", false,-1, 1,0);
    tracep->declBus(c+924,"dqm", false,-1, 1,0);
    tracep->declBus(c+927,"dq", false,-1, 15,0);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+784,"state", false,-1, 2,0);
    tracep->declBus(c+785,"counter", false,-1, 7,0);
    tracep->declBus(c+786,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1481,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+787,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+788,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+914,"nop", false,-1);
    tracep->declBit(c+915,"active", false,-1);
    tracep->declBit(c+916,"precharge", false,-1);
    tracep->declBit(c+917,"read", false,-1);
    tracep->declBit(c+918,"write", false,-1);
    tracep->declBit(c+919,"burstterm", false,-1);
    tracep->declBit(c+920,"autorefresh", false,-1);
    tracep->declBit(c+921,"mode", false,-1);
    tracep->declBus(c+789,"test", false,-1, 15,0);
    tracep->declBit(c+790,"write_burst_mode", false,-1);
    tracep->declBus(c+791,"op_mode", false,-1, 1,0);
    tracep->declBus(c+792,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+793,"burst_type", false,-1);
    tracep->declBus(c+794,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+795,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+796,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+797,"bank", false,-1, 1,0);
    tracep->declBus(c+798,"row", false,-1, 12,0);
    tracep->declBus(c+799,"column", false,-1, 8,0);
    tracep->declBus(c+800,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+801,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+19,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+20,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+58,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+114,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+124,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+132,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+136,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+144,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_reg));
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+397,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+399,((((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                   | ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                      | ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         | ((0x73U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                            & ((1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6febe41__0)))))))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
                                : 0U)),32);
    bufp->fullIData(oldp+400,((((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg)),32);
    bufp->fullIData(oldp+401,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+404,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+405,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+406,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+407,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+408,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+409,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+410,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+411,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+412,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullBit(oldp+413,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullCData(oldp+414,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+415,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+416,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+417,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pprot),3);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullSData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+439,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullSData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+452,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+453,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+458,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+464,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+465,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+466,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+470,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullCData(oldp+471,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+506,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+507,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+508,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+510,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+514,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+516,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+517,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+519,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+523,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+524,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+526,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+544,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+545,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+546,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+547,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+548,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+549,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+550,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+553,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+554,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+555,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+574,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+581,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+600,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+601,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+602,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+603,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+604,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+623,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+624,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+625,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+626,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+627,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+629,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+648,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+665,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+676,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+690,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+736,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+737,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+738,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+739,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+740,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+742,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+744,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+754,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+755,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+756,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+758,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+760,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+773,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+774,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+775,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+776,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+778,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+780,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+791,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+792,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+794,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+796,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+807,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+813,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+814,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullBit(oldp+818,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+827,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+830,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+831,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+832,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+842,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+844,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+846,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+847,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+849,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+855,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+856,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+857,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+858,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+862,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+864,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+866,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+870,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+880,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+881,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),8);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullIData(oldp+890,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullIData(oldp+892,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),24);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+894,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullSData(oldp+898,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+899,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                          >> 0xdU))),13);
    bufp->fullCData(oldp+900,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                     >> 0xaU))),3);
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullIData(oldp+905,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullCData(oldp+906,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+909,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                - (IData)(0x21000000U)) 
                               >> 2U)),32);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+911,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+916,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+925,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+929,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+938,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+942,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+943,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
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
    bufp->fullCData(oldp+944,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+945,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+946,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
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
    bufp->fullIData(oldp+947,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+948,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+949,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+950,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+951,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+953,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+954,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1013,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+1014,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+1016,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+1017,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+1018,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+1019,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+1021,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+1022,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                        << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                   << 1U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+1023,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+1024,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+1025,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+1027,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+1028,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+1029,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+1030,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1032,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1034,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1036,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1052,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1053,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1055,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1056,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1057,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1058,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1061,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1063,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1064,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1069,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1071,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1072,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1083,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1084,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1085,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1086,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1087,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1088,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1089,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1090,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1091,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1092,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1093,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1094,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1095,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1096,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1097,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1116,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1117,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1122,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1123,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1124,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1125,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1126,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1127,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1128,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1129,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1130,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1131,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1132,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1133,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1134,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1135,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1136,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1141,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1142,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1143,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1144,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1145,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1146,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1149,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1150,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1151,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1152,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1153,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1154,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1155,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1156,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1157,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1158,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1159,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1160,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1161,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1162,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1163,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1164,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1166,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1167,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1168,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1169,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1170,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1171,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1211,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1212,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1235,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1236,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1237,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1238,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1239,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1240,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1241,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1243,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1244,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1245,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1246,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1247,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1248,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1249,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1250,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1251,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1252,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1253,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1254,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1255,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1256,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1257,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1258,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1260,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1261,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1262,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1263,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1264,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1265,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullBit(oldp+1271,(vlSelf->clock));
    bufp->fullBit(oldp+1272,(vlSelf->reset));
    bufp->fullSData(oldp+1273,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1274,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1275,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1276,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1277,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1278,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1279,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1280,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1281,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1282,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1283,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1284,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1285,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1286,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1287,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1288,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1289,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1290,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1291,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1292,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1295,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r))),32);
    bufp->fullIData(oldp+1297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r)),32);
    bufp->fullCData(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r))
                                 : 0U)),4);
    bufp->fullIData(oldp+1299,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullIData(oldp+1300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1303,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1304,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1305,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1306,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1307,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1308,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1309,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                            << 2U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                             << 1U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST)))))));
    bufp->fullBit(oldp+1310,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+1314,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1315,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+1316,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1317,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1318,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullIData(oldp+1319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullIData(oldp+1320,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullCData(oldp+1322,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+1323,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1324,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullIData(oldp+1326,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
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
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1337,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+1338,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+1339,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1341,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1342,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                        | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullIData(oldp+1346,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                 : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                     : 0U))),32);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1349,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1350,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1353,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1354,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1356,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1359,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1361,(1U),3);
    bufp->fullCData(oldp+1362,(0U),2);
    bufp->fullCData(oldp+1363,(1U),2);
    bufp->fullCData(oldp+1364,(2U),2);
    bufp->fullSData(oldp+1365,(0xaU),11);
    bufp->fullBit(oldp+1366,(0U));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1371,(1U));
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1373,(0U),4);
    bufp->fullIData(oldp+1374,(0U),32);
    bufp->fullCData(oldp+1375,(0U),8);
    bufp->fullCData(oldp+1376,(0U),3);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1387,(0U),32);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1391,(0x2000000U),32);
    bufp->fullIData(oldp+1392,(0x2000004U),32);
    bufp->fullCData(oldp+1393,(3U),2);
    bufp->fullCData(oldp+1394,(1U),4);
    bufp->fullCData(oldp+1395,(2U),4);
    bufp->fullCData(oldp+1396,(3U),4);
    bufp->fullCData(oldp+1397,(4U),4);
    bufp->fullCData(oldp+1398,(5U),4);
    bufp->fullCData(oldp+1399,(6U),4);
    bufp->fullCData(oldp+1400,(7U),4);
    bufp->fullCData(oldp+1401,(8U),4);
    bufp->fullCData(oldp+1402,(9U),4);
    bufp->fullCData(oldp+1403,(0xaU),4);
    bufp->fullCData(oldp+1404,(0xbU),4);
    bufp->fullCData(oldp+1405,(0xcU),4);
    bufp->fullBit(oldp+1406,(0U));
    bufp->fullBit(oldp+1407,(1U));
    bufp->fullIData(oldp+1408,(5U),32);
    bufp->fullIData(oldp+1409,(0x20U),32);
    bufp->fullIData(oldp+1410,(0x1000000U),32);
    bufp->fullIData(oldp+1411,(0x1000004U),32);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1418,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1419,(0x1800U),32);
    bufp->fullIData(oldp+1420,(0x79737978U),32);
    bufp->fullCData(oldp+1421,(4U),8);
    bufp->fullCData(oldp+1422,(8U),8);
    bufp->fullCData(oldp+1423,(3U),8);
    bufp->fullCData(oldp+1424,(0x9fU),8);
    bufp->fullCData(oldp+1425,(0x25U),8);
    bufp->fullCData(oldp+1426,(0xdU),8);
    bufp->fullCData(oldp+1427,(0x99U),8);
    bufp->fullCData(oldp+1428,(0x49U),8);
    bufp->fullCData(oldp+1429,(0x41U),8);
    bufp->fullCData(oldp+1430,(0x1fU),8);
    bufp->fullCData(oldp+1431,(1U),8);
    bufp->fullCData(oldp+1432,(9U),8);
    bufp->fullCData(oldp+1433,(0x11U),8);
    bufp->fullCData(oldp+1434,(0xc1U),8);
    bufp->fullCData(oldp+1435,(0x63U),8);
    bufp->fullCData(oldp+1436,(0x85U),8);
    bufp->fullCData(oldp+1437,(0x61U),8);
    bufp->fullCData(oldp+1438,(0x71U),8);
    bufp->fullCData(oldp+1439,(0xf0U),8);
    bufp->fullCData(oldp+1440,(0xe0U),8);
    bufp->fullCData(oldp+1441,(4U),3);
    bufp->fullCData(oldp+1442,(0x15U),8);
    bufp->fullCData(oldp+1443,(0xebU),8);
    bufp->fullCData(oldp+1444,(0x38U),8);
    bufp->fullIData(oldp+1445,(0x64U),32);
    bufp->fullIData(oldp+1446,(0x18U),32);
    bufp->fullIData(oldp+1447,(9U),32);
    bufp->fullIData(oldp+1448,(2U),32);
    bufp->fullIData(oldp+1449,(3U),32);
    bufp->fullIData(oldp+1450,(4U),32);
    bufp->fullIData(oldp+1451,(8U),32);
    bufp->fullIData(oldp+1452,(0xdU),32);
    bufp->fullIData(oldp+1453,(0x2000U),32);
    bufp->fullIData(oldp+1454,(0x2710U),32);
    bufp->fullIData(oldp+1455,(0x30cU),32);
    bufp->fullSData(oldp+1456,(0x20U),13);
    bufp->fullIData(oldp+1457,(0xaU),32);
    bufp->fullIData(oldp+1458,(6U),32);
    bufp->fullIData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1460,(0x11U),32);
    bufp->fullIData(oldp+1461,(0x30000000U),32);
    bufp->fullIData(oldp+1462,(0x3fffffffU),32);
    bufp->fullCData(oldp+1463,(2U),3);
    bufp->fullCData(oldp+1464,(3U),3);
    bufp->fullCData(oldp+1465,(5U),3);
    bufp->fullCData(oldp+1466,(6U),3);
    bufp->fullCData(oldp+1467,(7U),3);
    bufp->fullIData(oldp+1468,(1U),32);
    bufp->fullIData(oldp+1469,(0xbU),32);
    bufp->fullIData(oldp+1470,(0x10U),32);
    bufp->fullIData(oldp+1471,(0x60U),32);
    bufp->fullIData(oldp+1472,(0x90U),32);
    bufp->fullIData(oldp+1473,(0x310U),32);
    bufp->fullIData(oldp+1474,(0x320U),32);
    bufp->fullIData(oldp+1475,(0x23U),32);
    bufp->fullIData(oldp+1476,(0x203U),32);
    bufp->fullIData(oldp+1477,(0x20dU),32);
    bufp->fullSData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
