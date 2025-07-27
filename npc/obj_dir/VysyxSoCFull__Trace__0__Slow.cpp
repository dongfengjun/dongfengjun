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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1286,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1297,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1298,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1302,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1303,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1304,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1305,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1286,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1297,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1298,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1302,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1303,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1304,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1305,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+454,"spi_sck", false,-1);
    tracep->declBus(c+455,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+847,"spi_mosi", false,-1);
    tracep->declBit(c+1306,"spi_miso", false,-1);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->declBit(c+1280,"psram_sck", false,-1);
    tracep->declBit(c+1281,"psram_ce_n", false,-1);
    tracep->declBus(c+1307,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1308,"sdram_clk", false,-1);
    tracep->declBit(c+456,"sdram_cke", false,-1);
    tracep->declBit(c+848,"sdram_cs", false,-1);
    tracep->declBit(c+849,"sdram_ras", false,-1);
    tracep->declBit(c+850,"sdram_cas", false,-1);
    tracep->declBit(c+851,"sdram_we", false,-1);
    tracep->declBus(c+852,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+853,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+457,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+877,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1286,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1296,"ps2_clk", false,-1);
    tracep->declBit(c+1297,"ps2_data", false,-1);
    tracep->declBus(c+1298,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_hsync", false,-1);
    tracep->declBit(c+1302,"vga_vsync", false,-1);
    tracep->declBit(c+1303,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+923,"in_psel", false,-1);
    tracep->declBit(c+11,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"in_pready", false,-1);
    tracep->declBus(c+1173,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"in_pslverr", false,-1);
    tracep->declBus(c+922,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+923,"out_psel", false,-1);
    tracep->declBit(c+11,"out_penable", false,-1);
    tracep->declBus(c+1349,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"out_pwrite", false,-1);
    tracep->declBus(c+925,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"out_pready", false,-1);
    tracep->declBus(c+1173,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+923,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+11,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1349,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+927,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+928,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+432,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1349,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+458,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+459,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+929,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+433,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+930,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1349,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+460,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1351,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1352,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+931,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+932,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+933,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+461,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1353,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+462,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+934,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+434,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+933,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+463,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1354,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+464,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+935,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+435,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+922,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1349,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1309,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+12,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+936,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+937,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+933,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+938,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1132,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+939,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+940,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+924,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+930,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1349,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1350,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1174,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+941,"sel_0", false,-1);
    tracep->declBit(c+942,"sel_1", false,-1);
    tracep->declBit(c+943,"sel_2", false,-1);
    tracep->declBit(c+944,"sel_3", false,-1);
    tracep->declBit(c+945,"sel_4", false,-1);
    tracep->declBit(c+946,"sel_5", false,-1);
    tracep->declBit(c+947,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+948,"auto_in_awready", false,-1);
    tracep->declBit(c+949,"auto_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+948,"auto_in_wready", false,-1);
    tracep->declBit(c+953,"auto_in_wvalid", false,-1);
    tracep->declBus(c+954,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+13,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+956,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+957,"auto_in_arready", false,-1);
    tracep->declBit(c+958,"auto_in_arvalid", false,-1);
    tracep->declBus(c+959,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1177,"auto_in_rready", false,-1);
    tracep->declBit(c+1178,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+449,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+956,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+923,"auto_out_psel", false,-1);
    tracep->declBit(c+11,"auto_out_penable", false,-1);
    tracep->declBit(c+924,"auto_out_pwrite", false,-1);
    tracep->declBus(c+922,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+925,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_out_pready", false,-1);
    tracep->declBit(c+927,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+11,"nodeOut_penable", false,-1);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBit(c+957,"accept_read", false,-1);
    tracep->declBit(c+948,"accept_write", false,-1);
    tracep->declBit(c+16,"is_write_r", false,-1);
    tracep->declBit(c+924,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+13,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+962,"resp", false,-1, 1,0);
    tracep->declBus(c+21,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+956,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1178,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+22,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1176,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+963,"auto_in_awvalid", false,-1);
    tracep->declBus(c+964,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+965,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+969,"auto_in_wvalid", false,-1);
    tracep->declBus(c+970,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_in_wlast", false,-1);
    tracep->declBit(c+973,"auto_in_bready", false,-1);
    tracep->declBit(c+1179,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+450,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+974,"auto_in_arvalid", false,-1);
    tracep->declBus(c+975,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+976,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"auto_in_rready", false,-1);
    tracep->declBit(c+1181,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"auto_in_rlast", false,-1);
    tracep->declBit(c+1183,"auto_out_awready", false,-1);
    tracep->declBit(c+981,"auto_out_awvalid", false,-1);
    tracep->declBus(c+950,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+982,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1184,"auto_out_wready", false,-1);
    tracep->declBit(c+983,"auto_out_wvalid", false,-1);
    tracep->declBus(c+954,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_out_wlast", false,-1);
    tracep->declBit(c+1185,"auto_out_bready", false,-1);
    tracep->declBit(c+1186,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1188,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1189,"auto_out_arready", false,-1);
    tracep->declBit(c+985,"auto_out_arvalid", false,-1);
    tracep->declBus(c+959,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+986,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+980,"auto_out_rready", false,-1);
    tracep->declBit(c+1181,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+453,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1190,"auto_out_rlast", false,-1);
    tracep->declBit(c+983,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+26,"w_idle", false,-1);
    tracep->declBit(c+1191,"in_awready", false,-1);
    tracep->declBit(c+27,"busy", false,-1);
    tracep->declBus(c+28,"r_addr", false,-1, 31,0);
    tracep->declBus(c+29,"r_len", false,-1, 7,0);
    tracep->declBus(c+987,"len", false,-1, 7,0);
    tracep->declBus(c+988,"addr", false,-1, 31,0);
    tracep->declBit(c+30,"busy_1", false,-1);
    tracep->declBus(c+31,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+32,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+989,"len_1", false,-1, 7,0);
    tracep->declBus(c+990,"addr_1", false,-1, 31,0);
    tracep->declBit(c+33,"wbeats_latched", false,-1);
    tracep->declBit(c+981,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+991,"wbeats_valid", false,-1);
    tracep->declBus(c+34,"w_counter", false,-1, 8,0);
    tracep->declBus(c+992,"w_todo", false,-1, 8,0);
    tracep->declBit(c+984,"w_last", false,-1);
    tracep->declBit(c+1185,"nodeOut_bready", false,-1);
    tracep->declBus(c+35,"error_0", false,-1, 1,0);
    tracep->declBus(c+36,"error_1", false,-1, 1,0);
    tracep->declBus(c+37,"error_2", false,-1, 1,0);
    tracep->declBus(c+38,"error_3", false,-1, 1,0);
    tracep->declBus(c+39,"error_4", false,-1, 1,0);
    tracep->declBus(c+40,"error_5", false,-1, 1,0);
    tracep->declBus(c+41,"error_6", false,-1, 1,0);
    tracep->declBus(c+42,"error_7", false,-1, 1,0);
    tracep->declBus(c+43,"error_8", false,-1, 1,0);
    tracep->declBus(c+44,"error_9", false,-1, 1,0);
    tracep->declBus(c+45,"error_10", false,-1, 1,0);
    tracep->declBus(c+46,"error_11", false,-1, 1,0);
    tracep->declBus(c+47,"error_12", false,-1, 1,0);
    tracep->declBus(c+48,"error_13", false,-1, 1,0);
    tracep->declBus(c+49,"error_14", false,-1, 1,0);
    tracep->declBus(c+50,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+974,"io_enq_valid", false,-1);
    tracep->declBus(c+975,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+976,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+977,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+978,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+979,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1192,"io_deq_ready", false,-1);
    tracep->declBit(c+985,"io_deq_valid", false,-1);
    tracep->declBus(c+959,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+993,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+994,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+961,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+995,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+51,"ram", false,-1, 48,0);
    tracep->declBit(c+53,"full", false,-1);
    tracep->declBit(c+985,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1193,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+963,"io_enq_valid", false,-1);
    tracep->declBus(c+964,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+965,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+966,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+967,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+968,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1194,"io_deq_ready", false,-1);
    tracep->declBit(c+996,"io_deq_valid", false,-1);
    tracep->declBus(c+950,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+997,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+998,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+952,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+999,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+54,"ram", false,-1, 48,0);
    tracep->declBit(c+56,"full", false,-1);
    tracep->declBit(c+996,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1195,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+969,"io_enq_valid", false,-1);
    tracep->declBus(c+970,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+971,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+972,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1196,"io_deq_ready", false,-1);
    tracep->declBit(c+1000,"io_deq_valid", false,-1);
    tracep->declBus(c+954,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+955,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+436,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+57,"ram", false,-1, 36,0);
    tracep->declBit(c+59,"full", false,-1);
    tracep->declBit(c+1000,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1197,"do_enq", false,-1);
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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1198,"auto_in_awready", false,-1);
    tracep->declBit(c+1001,"auto_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1133,"auto_in_wready", false,-1);
    tracep->declBit(c+1003,"auto_in_wvalid", false,-1);
    tracep->declBus(c+954,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_in_bready", false,-1);
    tracep->declBit(c+60,"auto_in_bvalid", false,-1);
    tracep->declBus(c+61,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"auto_in_arready", false,-1);
    tracep->declBit(c+1004,"auto_in_arvalid", false,-1);
    tracep->declBus(c+959,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1005,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1201,"auto_in_rready", false,-1);
    tracep->declBit(c+63,"auto_in_rvalid", false,-1);
    tracep->declBus(c+64,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1200,"nodeIn_arready", false,-1);
    tracep->declBit(c+1198,"nodeIn_awready", false,-1);
    tracep->declBit(c+1006,"w_sel0", false,-1);
    tracep->declBit(c+60,"w_full", false,-1);
    tracep->declBus(c+61,"w_id", false,-1, 3,0);
    tracep->declBit(c+67,"r_sel1", false,-1);
    tracep->declBit(c+68,"w_sel1", false,-1);
    tracep->declBit(c+63,"r_full", false,-1);
    tracep->declBus(c+64,"r_id", false,-1, 3,0);
    tracep->declBit(c+1202,"ren", false,-1);
    tracep->declBit(c+69,"rdata_REG", false,-1);
    tracep->declBus(c+70,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+73,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1007,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1202,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declBus(c+74,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1008,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1203,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declBus(c+954,"W0_data", false,-1, 31,0);
    tracep->declBus(c+955,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+23,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+963,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+964,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+965,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+969,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+970,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+973,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1179,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+450,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+974,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+975,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+976,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1181,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+23,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+963,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+964,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+965,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+969,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+970,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+973,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1179,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+450,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+974,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+975,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+976,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1181,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1204,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1009,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1184,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+954,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1185,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1186,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1205,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1010,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+959,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+980,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1181,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1198,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1001,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1133,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1003,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+954,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+60,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1004,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+959,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1005,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1201,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+64,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1012,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+75,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1013,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+959,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+442,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+76,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+77,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+78,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+948,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+949,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+950,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+948,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+953,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+954,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1175,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1176,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+13,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+956,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+957,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+958,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+959,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1177,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1178,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+449,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+956,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1186,"in_0_bvalid", false,-1);
    tracep->declBit(c+1181,"in_0_rvalid", false,-1);
    tracep->declBit(c+1206,"in_0_wready", false,-1);
    tracep->declBit(c+1207,"in_0_awready", false,-1);
    tracep->declBit(c+1205,"in_0_arready", false,-1);
    tracep->declBit(c+1204,"anonIn_awready", false,-1);
    tracep->declBit(c+1015,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1016,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1017,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1018,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1019,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1020,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1021,"arSel", false,-1, 15,0);
    tracep->declBus(c+1022,"awSel", false,-1, 15,0);
    tracep->declBus(c+1208,"rSel", false,-1, 15,0);
    tracep->declBus(c+1209,"bSel", false,-1, 15,0);
    tracep->declBit(c+79,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+80,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+81,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+82,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+83,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+84,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+85,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+86,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+87,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+88,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+89,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+90,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+91,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+92,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+93,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+109,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+110,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+111,"latched", false,-1);
    tracep->declBit(c+1023,"in_0_awvalid", false,-1);
    tracep->declBit(c+1024,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1025,"in_0_wvalid", false,-1);
    tracep->declBit(c+112,"idle_3", false,-1);
    tracep->declBit(c+1210,"anyValid", false,-1);
    tracep->declBus(c+1211,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+113,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1212,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1213,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1214,"prefixOR_1", false,-1);
    tracep->declBit(c+1215,"winner_3_1", false,-1);
    tracep->declBit(c+1216,"winner_3_2", false,-1);
    tracep->declBit(c+114,"state_3_0", false,-1);
    tracep->declBit(c+115,"state_3_1", false,-1);
    tracep->declBit(c+116,"state_3_2", false,-1);
    tracep->declBit(c+1217,"muxState_3_0", false,-1);
    tracep->declBit(c+1218,"muxState_3_1", false,-1);
    tracep->declBit(c+1219,"muxState_3_2", false,-1);
    tracep->declBit(c+117,"idle_4", false,-1);
    tracep->declBit(c+1220,"anyValid_1", false,-1);
    tracep->declBus(c+1221,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+118,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1222,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1223,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1224,"winner_4_0", false,-1);
    tracep->declBit(c+1225,"winner_4_2", false,-1);
    tracep->declBit(c+119,"state_4_0", false,-1);
    tracep->declBit(c+120,"state_4_2", false,-1);
    tracep->declBit(c+1226,"muxState_4_0", false,-1);
    tracep->declBit(c+1227,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+121,"io_enq_ready", false,-1);
    tracep->declBit(c+1024,"io_enq_valid", false,-1);
    tracep->declBus(c+1026,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
    tracep->declBit(c+1027,"io_deq_valid", false,-1);
    tracep->declBus(c+1028,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+122,"wrap", false,-1);
    tracep->declBit(c+123,"wrap_1", false,-1);
    tracep->declBit(c+124,"maybe_full", false,-1);
    tracep->declBit(c+125,"ptr_match", false,-1);
    tracep->declBit(c+126,"empty", false,-1);
    tracep->declBit(c+127,"full", false,-1);
    tracep->declBit(c+1027,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1229,"do_deq", false,-1);
    tracep->declBit(c+1230,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+123,"R0_addr", false,-1);
    tracep->declBit(c+1355,"R0_en", false,-1);
    tracep->declBit(c+1284,"R0_clk", false,-1);
    tracep->declBus(c+128,"R0_data", false,-1, 2,0);
    tracep->declBit(c+122,"W0_addr", false,-1);
    tracep->declBit(c+1230,"W0_en", false,-1);
    tracep->declBit(c+1284,"W0_clk", false,-1);
    tracep->declBus(c+1026,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+129+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1183,"auto_in_awready", false,-1);
    tracep->declBit(c+981,"auto_in_awvalid", false,-1);
    tracep->declBus(c+950,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+982,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1184,"auto_in_wready", false,-1);
    tracep->declBit(c+983,"auto_in_wvalid", false,-1);
    tracep->declBus(c+954,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_in_wlast", false,-1);
    tracep->declBit(c+1185,"auto_in_bready", false,-1);
    tracep->declBit(c+1186,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1188,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1189,"auto_in_arready", false,-1);
    tracep->declBit(c+985,"auto_in_arvalid", false,-1);
    tracep->declBus(c+959,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+986,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+980,"auto_in_rready", false,-1);
    tracep->declBit(c+1181,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+453,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1190,"auto_in_rlast", false,-1);
    tracep->declBit(c+1204,"auto_out_awready", false,-1);
    tracep->declBit(c+1009,"auto_out_awvalid", false,-1);
    tracep->declBus(c+950,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+951,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1184,"auto_out_wready", false,-1);
    tracep->declBit(c+983,"auto_out_wvalid", false,-1);
    tracep->declBus(c+954,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+955,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_out_wlast", false,-1);
    tracep->declBit(c+1185,"auto_out_bready", false,-1);
    tracep->declBit(c+1186,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1205,"auto_out_arready", false,-1);
    tracep->declBit(c+1010,"auto_out_arvalid", false,-1);
    tracep->declBus(c+959,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+960,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+961,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+980,"auto_out_rready", false,-1);
    tracep->declBit(c+1181,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+131,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
    tracep->declBit(c+132,"io_deq_valid", false,-1);
    tracep->declBit(c+133,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+132,"full", false,-1);
    tracep->declBit(c+133,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+134,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
    tracep->declBit(c+136,"io_deq_valid", false,-1);
    tracep->declBit(c+137,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+137,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+138,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
    tracep->declBit(c+140,"io_deq_valid", false,-1);
    tracep->declBit(c+141,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+140,"full", false,-1);
    tracep->declBit(c+141,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+142,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBit(c+145,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->declBit(c+145,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+146,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
    tracep->declBit(c+148,"io_deq_valid", false,-1);
    tracep->declBit(c+149,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+148,"full", false,-1);
    tracep->declBit(c+149,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+150,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
    tracep->declBit(c+152,"io_deq_valid", false,-1);
    tracep->declBit(c+153,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->declBit(c+153,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+154,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
    tracep->declBit(c+156,"io_deq_valid", false,-1);
    tracep->declBit(c+157,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+156,"full", false,-1);
    tracep->declBit(c+157,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+158,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBit(c+161,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->declBit(c+161,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+162,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
    tracep->declBit(c+164,"io_deq_valid", false,-1);
    tracep->declBit(c+165,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+164,"full", false,-1);
    tracep->declBit(c+165,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+166,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
    tracep->declBit(c+168,"io_deq_valid", false,-1);
    tracep->declBit(c+169,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+168,"full", false,-1);
    tracep->declBit(c+169,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+170,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
    tracep->declBit(c+172,"io_deq_valid", false,-1);
    tracep->declBit(c+173,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+172,"full", false,-1);
    tracep->declBit(c+173,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+174,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBit(c+177,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+176,"full", false,-1);
    tracep->declBit(c+177,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+178,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+1146,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
    tracep->declBit(c+180,"io_deq_valid", false,-1);
    tracep->declBit(c+181,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+180,"full", false,-1);
    tracep->declBit(c+181,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+184,"io_deq_valid", false,-1);
    tracep->declBit(c+185,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+184,"full", false,-1);
    tracep->declBit(c+185,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+186,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1148,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBit(c+189,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->declBit(c+189,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+190,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+1149,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBit(c+193,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+193,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
    tracep->declBit(c+196,"io_deq_valid", false,-1);
    tracep->declBit(c+197,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBit(c+197,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+198,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBit(c+201,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+201,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+202,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBit(c+205,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->declBit(c+205,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1153,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1154,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1156,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1253,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1254,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+1158,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1255,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1159,"io_enq_valid", false,-1);
    tracep->declBit(c+982,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1256,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+1160,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1257,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+1161,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1258,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+1162,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1259,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1260,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+1164,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1261,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1165,"io_enq_valid", false,-1);
    tracep->declBit(c+986,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1262,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+23,"auto_master_out_awready", false,-1);
    tracep->declBit(c+963,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+964,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+965,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_wready", false,-1);
    tracep->declBit(c+969,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+970,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+973,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1179,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1180,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+450,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_arready", false,-1);
    tracep->declBit(c+974,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+975,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+976,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1181,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1182,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+451,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+1350,"io_interrupt", false,-1);
    tracep->declBit(c+23,"io_master_awready", false,-1);
    tracep->declBit(c+963,"io_master_awvalid", false,-1);
    tracep->declBus(c+964,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+965,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_wready", false,-1);
    tracep->declBit(c+969,"io_master_wvalid", false,-1);
    tracep->declBus(c+970,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"io_master_wlast", false,-1);
    tracep->declBit(c+973,"io_master_bready", false,-1);
    tracep->declBit(c+1179,"io_master_bvalid", false,-1);
    tracep->declBus(c+1180,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+450,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_arready", false,-1);
    tracep->declBit(c+974,"io_master_arvalid", false,-1);
    tracep->declBus(c+975,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+976,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"io_master_rready", false,-1);
    tracep->declBit(c+1181,"io_master_rvalid", false,-1);
    tracep->declBus(c+1182,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+451,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"io_master_rlast", false,-1);
    tracep->declBit(c+1356,"io_slave_awready", false,-1);
    tracep->declBit(c+1350,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1357,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1358,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1359,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1360,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1361,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1362,"io_slave_wready", false,-1);
    tracep->declBit(c+1350,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1358,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1357,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1350,"io_slave_wlast", false,-1);
    tracep->declBit(c+1350,"io_slave_bready", false,-1);
    tracep->declBit(c+1363,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1364,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1365,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1366,"io_slave_arready", false,-1);
    tracep->declBit(c+1350,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1357,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1358,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1359,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1360,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1361,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1350,"io_slave_rready", false,-1);
    tracep->declBit(c+1367,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1368,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1369,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1370,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1371,"io_slave_rlast", false,-1);
    tracep->declBit(c+259,"DIFFTEST", false,-1);
    tracep->declBus(c+1166,"pc", false,-1, 31,0);
    tracep->declBus(c+1167,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1168,"pc_valid", false,-1);
    tracep->declBit(c+1312,"if_ready", false,-1);
    tracep->declBus(c+896,"inst", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid", false,-1);
    tracep->declBit(c+912,"id_ready", false,-1);
    tracep->declBus(c+1372,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1372,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+913,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1314,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1357,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1359,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1357,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+421,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+261,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+422,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1360,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+262,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1361,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+263,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+423,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+424,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1350,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1315,"if_axi_awready", false,-1);
    tracep->declBit(c+1350,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1316,"if_axi_wready", false,-1);
    tracep->declBit(c+425,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1350,"if_axi_bready", false,-1);
    tracep->declBit(c+914,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1029,"if_axi_arready", false,-1);
    tracep->declBit(c+1263,"if_axi_rvalid", false,-1);
    tracep->declBit(c+915,"if_axi_rready", false,-1);
    tracep->declBit(c+1373,"if_axi_wlast", false,-1);
    tracep->declBit(c+426,"if_axi_rlast", false,-1);
    tracep->declBit(c+818,"id_valid", false,-1);
    tracep->declBit(c+819,"ex_ready", false,-1);
    tracep->declBus(c+820,"op", false,-1, 6,0);
    tracep->declBus(c+264,"rd", false,-1, 4,0);
    tracep->declBus(c+821,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"rs1", false,-1, 4,0);
    tracep->declBus(c+266,"rs2", false,-1, 4,0);
    tracep->declBus(c+267,"imm", false,-1, 31,0);
    tracep->declBus(c+268,"funct7", false,-1, 6,0);
    tracep->declBus(c+269,"shamt", false,-1, 4,0);
    tracep->declBit(c+822,"ls_read", false,-1);
    tracep->declBit(c+823,"ls_write", false,-1);
    tracep->declBit(c+897,"ls_done", false,-1);
    tracep->declBit(c+270,"ex_valid", false,-1);
    tracep->declBit(c+271,"wb_ready", false,-1);
    tracep->declBus(c+272,"ex", false,-1, 31,0);
    tracep->declBit(c+824,"ls_valid", false,-1);
    tracep->declBit(c+825,"ls_wen", false,-1);
    tracep->declBus(c+826,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+410,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+828,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+829,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+830,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1359,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1359,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1374,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1374,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+273,"mepc", false,-1, 31,0);
    tracep->declBus(c+274,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus", false,-1, 31,0);
    tracep->declBus(c+276,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+277,"mcause", false,-1, 31,0);
    tracep->declBus(c+278,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec", false,-1, 31,0);
    tracep->declBus(c+280,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+281,"gpr_wen", false,-1);
    tracep->declBit(c+282,"mepc_wen", false,-1);
    tracep->declBit(c+283,"mstatus_wen", false,-1);
    tracep->declBit(c+284,"mcause_wen", false,-1);
    tracep->declBit(c+285,"mtvec_wen", false,-1);
    tracep->declBus(c+704,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+705,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1317,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+706,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1318,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1319,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+707,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+708,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1375,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+427,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1376,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+428,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+709,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+710,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+711,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+712,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+429,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+430,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+713,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1030,"ls_axi_awready", false,-1);
    tracep->declBit(c+714,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1031,"ls_axi_wready", false,-1);
    tracep->declBit(c+1264,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+715,"ls_axi_bready", false,-1);
    tracep->declBit(c+716,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1032,"ls_axi_arready", false,-1);
    tracep->declBit(c+1265,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+717,"ls_axi_rready", false,-1);
    tracep->declBit(c+718,"ls_axi_wlast", false,-1);
    tracep->declBit(c+431,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1033,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1034,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1035,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+286,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1036,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1037,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1038,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1039,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+287,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1040,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+288,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1041,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1042,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1043,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1044,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+289,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+290,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1045,"c_axi_awvalid", false,-1);
    tracep->declBit(c+291,"c_axi_awready", false,-1);
    tracep->declBit(c+1046,"c_axi_wvalid", false,-1);
    tracep->declBit(c+292,"c_axi_wready", false,-1);
    tracep->declBit(c+293,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1047,"c_axi_bready", false,-1);
    tracep->declBit(c+1048,"c_axi_arvalid", false,-1);
    tracep->declBit(c+294,"c_axi_arready", false,-1);
    tracep->declBit(c+295,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1049,"c_axi_rready", false,-1);
    tracep->declBit(c+1050,"c_axi_wlast", false,-1);
    tracep->declBit(c+296,"c_axi_rlast", false,-1);
    tracep->declBit(c+1320,"wb_done", false,-1);
    tracep->declBit(c+259,"difftest", false,-1);
    tracep->declBus(c+297,"xrd", false,-1, 31,0);
    tracep->declBus(c+298,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+299,"rf_wen", false,-1);
    tracep->declBus(c+300,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+301,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+302,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+303,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+304,"mepc_en", false,-1);
    tracep->declBit(c+305,"mstatus_en", false,-1);
    tracep->declBit(c+306,"mcause_en", false,-1);
    tracep->declBit(c+307,"mtvec_en", false,-1);
    tracep->declBus(c+308,"r1", false,-1, 31,0);
    tracep->declBus(c+309,"r2", false,-1, 31,0);
    tracep->declBus(c+310,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+311,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+291,"c_axi_awready", false,-1);
    tracep->declBit(c+1045,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1039,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1033,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1037,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1041,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1043,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+292,"c_axi_wready", false,-1);
    tracep->declBit(c+1046,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1034,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1036,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"c_axi_wlast", false,-1);
    tracep->declBit(c+1047,"c_axi_bready", false,-1);
    tracep->declBit(c+293,"c_axi_bvalid", false,-1);
    tracep->declBus(c+287,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+289,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+294,"c_axi_arready", false,-1);
    tracep->declBit(c+1048,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1040,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1035,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1038,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1042,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1044,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1049,"c_axi_rready", false,-1);
    tracep->declBit(c+295,"c_axi_rvalid", false,-1);
    tracep->declBus(c+288,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+286,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+290,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+296,"c_axi_rlast", false,-1);
    tracep->declBit(c+291,"axi_awready", false,-1);
    tracep->declBit(c+292,"axi_wready", false,-1);
    tracep->declBit(c+293,"axi_bvalid", false,-1);
    tracep->declBit(c+294,"axi_arready", false,-1);
    tracep->declBit(c+295,"axi_rvalid", false,-1);
    tracep->declBit(c+296,"axi_rlast", false,-1);
    tracep->declBus(c+289,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+290,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+287,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+288,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+286,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+312,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1377,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1378,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+313,"mtime", false,-1, 63,0);
    tracep->declBus(c+437,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+272,"ex_o", false,-1, 31,0);
    tracep->declBit(c+818,"id_valid_i", false,-1);
    tracep->declBit(c+819,"ex_ready_o", false,-1);
    tracep->declBit(c+270,"ex_valid_o", false,-1);
    tracep->declBit(c+271,"wb_ready_i", false,-1);
    tracep->declBus(c+820,"op_i", false,-1, 6,0);
    tracep->declBus(c+821,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+267,"imm_i", false,-1, 31,0);
    tracep->declBus(c+268,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+269,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+308,"r1_i", false,-1, 31,0);
    tracep->declBus(c+309,"r2_i", false,-1, 31,0);
    tracep->declBit(c+822,"ls_read_o", false,-1);
    tracep->declBit(c+823,"ls_write_o", false,-1);
    tracep->declBit(c+897,"ls_done_i", false,-1);
    tracep->declBit(c+824,"ls_valid_o", false,-1);
    tracep->declBit(c+825,"ls_wen_o", false,-1);
    tracep->declBus(c+826,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+410,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+827,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+828,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+829,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+830,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1359,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1359,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1374,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1374,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+704,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1166,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1167,"dnpc_o", false,-1, 31,0);
    tracep->declBus(c+273,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+277,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+274,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+276,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+278,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+281,"gpr_wen_o", false,-1);
    tracep->declBit(c+282,"mepc_wen_o", false,-1);
    tracep->declBit(c+283,"mstatus_wen_o", false,-1);
    tracep->declBit(c+284,"mcause_wen_o", false,-1);
    tracep->declBit(c+285,"mtvec_wen_o", false,-1);
    tracep->declBit(c+819,"ex_ready", false,-1);
    tracep->declBit(c+270,"ex_valid", false,-1);
    tracep->declBit(c+831,"al_start", false,-1);
    tracep->declBit(c+898,"al_done", false,-1);
    tracep->declBit(c+822,"ls_read_reg", false,-1);
    tracep->declBit(c+823,"ls_write_reg", false,-1);
    tracep->declBus(c+272,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1167,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+281,"gpr_wen_reg", false,-1);
    tracep->declBus(c+274,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+276,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+278,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+282,"mepc_wen_reg", false,-1);
    tracep->declBit(c+283,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+284,"mcause_wen_reg", false,-1);
    tracep->declBit(c+285,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+315,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1361,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1374,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1379,"READY", false,-1, 1,0);
    tracep->declBus(c+1380,"DONE", false,-1, 1,0);
    tracep->declBus(c+832,"state", false,-1, 1,0);
    tracep->declBus(c+1321,"next_state", false,-1, 1,0);
    tracep->declBit(c+833,"al_valid", false,-1);
    tracep->declBus(c+316,"al_res", false,-1, 31,0);
    tracep->declBus(c+411,"a", false,-1, 31,0);
    tracep->declBus(c+412,"b", false,-1, 31,0);
    tracep->declBus(c+1169,"ex", false,-1, 31,0);
    tracep->declBus(c+834,"sel", false,-1, 3,0);
    tracep->declBus(c+835,"x", false,-1, 31,0);
    tracep->declBus(c+836,"y", false,-1, 31,0);
    tracep->declBus(c+719,"res", false,-1, 31,0);
    tracep->declBus(c+1357,"ADD", false,-1, 3,0);
    tracep->declBus(c+1381,"SUB", false,-1, 3,0);
    tracep->declBus(c+1382,"SLL", false,-1, 3,0);
    tracep->declBus(c+1383,"SRL", false,-1, 3,0);
    tracep->declBus(c+1384,"SRA", false,-1, 3,0);
    tracep->declBus(c+1385,"SLT", false,-1, 3,0);
    tracep->declBus(c+1386,"AND", false,-1, 3,0);
    tracep->declBus(c+1387,"OR", false,-1, 3,0);
    tracep->declBus(c+1388,"XOR", false,-1, 3,0);
    tracep->declBus(c+1389,"MUL", false,-1, 3,0);
    tracep->declBus(c+1390,"MULH", false,-1, 3,0);
    tracep->declBus(c+1391,"DIV", false,-1, 3,0);
    tracep->declBus(c+1392,"REM", false,-1, 3,0);
    tracep->declBus(c+837,"csr", false,-1, 31,0);
    tracep->declBus(c+1322,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+838,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+413,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+838,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+838,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+839,"mepc_wen", false,-1);
    tracep->declBit(c+840,"mstatus_wen", false,-1);
    tracep->declBit(c+841,"mcause_wen", false,-1);
    tracep->declBit(c+842,"mtvec_wen", false,-1);
    tracep->declBus(c+1323,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+267,"offset", false,-1, 31,0);
    tracep->declBit(c+843,"jalen", false,-1);
    tracep->declBit(c+844,"jalren", false,-1);
    tracep->declBit(c+414,"beqen", false,-1);
    tracep->declBit(c+415,"bneen", false,-1);
    tracep->declBit(c+416,"blten", false,-1);
    tracep->declBit(c+417,"bgeen", false,-1);
    tracep->declBit(c+418,"bltuen", false,-1);
    tracep->declBit(c+419,"bgeuen", false,-1);
    tracep->declBit(c+845,"ecall_en", false,-1);
    tracep->declBit(c+420,"mret_en", false,-1);
    tracep->declBus(c+1170,"dnpc", false,-1, 31,0);
    tracep->declBit(c+846,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+835,"a", false,-1, 31,0);
    tracep->declBus(c+836,"b", false,-1, 31,0);
    tracep->declBus(c+834,"opcode", false,-1, 3,0);
    tracep->declBit(c+831,"start", false,-1);
    tracep->declBus(c+719,"res", false,-1, 31,0);
    tracep->declBit(c+898,"done", false,-1);
    tracep->declBus(c+1357,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1381,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1382,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1383,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1384,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1385,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1386,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1387,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1388,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1389,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1390,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1391,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1392,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1361,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1374,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1379,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1380,"NULL", false,-1, 1,0);
    tracep->declBus(c+720,"state", false,-1, 1,0);
    tracep->declBus(c+721,"a_reg", false,-1, 31,0);
    tracep->declBus(c+722,"b_reg", false,-1, 31,0);
    tracep->declBus(c+723,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+724,"mul_result", false,-1, 63,0);
    tracep->declBus(c+726,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+727,"dividend", false,-1, 31,0);
    tracep->declBus(c+728,"divisor", false,-1, 31,0);
    tracep->declBus(c+729,"quotient", false,-1, 31,0);
    tracep->declBus(c+730,"remainder", false,-1, 31,0);
    tracep->declBus(c+731,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+896,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid_i", false,-1);
    tracep->declBit(c+912,"id_ready_o", false,-1);
    tracep->declBit(c+818,"id_valid_o", false,-1);
    tracep->declBit(c+819,"ex_ready_i", false,-1);
    tracep->declBus(c+820,"op_o", false,-1, 6,0);
    tracep->declBus(c+264,"rd_o", false,-1, 4,0);
    tracep->declBus(c+821,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+265,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+266,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+267,"imm_o", false,-1, 31,0);
    tracep->declBus(c+268,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+269,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+899,"op", false,-1, 6,0);
    tracep->declBus(c+900,"rd", false,-1, 4,0);
    tracep->declBus(c+901,"funct3", false,-1, 2,0);
    tracep->declBus(c+902,"rs1", false,-1, 4,0);
    tracep->declBus(c+903,"rs2", false,-1, 4,0);
    tracep->declBus(c+904,"immI", false,-1, 31,0);
    tracep->declBus(c+905,"immU", false,-1, 31,0);
    tracep->declBus(c+906,"immS", false,-1, 31,0);
    tracep->declBus(c+907,"immB", false,-1, 31,0);
    tracep->declBus(c+908,"immJ", false,-1, 31,0);
    tracep->declBus(c+909,"imm", false,-1, 31,0);
    tracep->declBus(c+910,"funct7", false,-1, 6,0);
    tracep->declBus(c+911,"shamt", false,-1, 4,0);
    tracep->declBit(c+912,"id_ready_reg", false,-1);
    tracep->declBit(c+818,"id_valid_reg", false,-1);
    tracep->declBus(c+820,"op_reg", false,-1, 6,0);
    tracep->declBus(c+264,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+821,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+265,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+266,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+267,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+268,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+269,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1393,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+916,"state", false,-1);
    tracep->declBit(c+1324,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1166,"pc_i", false,-1, 31,0);
    tracep->declBus(c+896,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1168,"pc_valid_i", false,-1);
    tracep->declBit(c+1312,"if_ready_o", false,-1);
    tracep->declBit(c+1313,"if_valid_o", false,-1);
    tracep->declBit(c+912,"id_ready_i", false,-1);
    tracep->declBit(c+1320,"wb_done_i", false,-1);
    tracep->declBit(c+1315,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1350,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1357,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1372,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1359,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1360,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1361,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1316,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1350,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1372,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1357,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1373,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1350,"if_axi_bready_o", false,-1);
    tracep->declBit(c+425,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+421,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+423,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1029,"if_axi_arready_i", false,-1);
    tracep->declBit(c+914,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+261,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+913,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+260,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+262,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+263,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+915,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1263,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+422,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1314,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+424,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+426,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1312,"if_ready_reg", false,-1);
    tracep->declBit(c+1313,"if_valid_reg", false,-1);
    tracep->declBus(c+896,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1361,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1374,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1379,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1380,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1325,"state", false,-1, 1,0);
    tracep->declBus(c+1326,"next_state", false,-1, 1,0);
    tracep->declBit(c+914,"axi_arvalid", false,-1);
    tracep->declBit(c+915,"axi_rready", false,-1);
    tracep->declBus(c+261,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+913,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+260,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+262,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+263,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1393,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"FETCH", false,-1, 0,0);
    tracep->declBit(c+917,"axi_state", false,-1);
    tracep->declBit(c+1327,"fetch_start", false,-1);
    tracep->declBus(c+918,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+822,"ls_read_i", false,-1);
    tracep->declBit(c+823,"ls_write_i", false,-1);
    tracep->declBit(c+897,"ls_done_o", false,-1);
    tracep->declBus(c+704,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+824,"valid_i", false,-1);
    tracep->declBit(c+825,"wen_i", false,-1);
    tracep->declBus(c+826,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+410,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+827,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+828,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+829,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+830,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1359,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1359,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1374,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1374,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1030,"ls_axi_awready", false,-1);
    tracep->declBit(c+713,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1375,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+705,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+707,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+709,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+711,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1031,"ls_axi_wready", false,-1);
    tracep->declBit(c+714,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1317,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1319,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+718,"ls_axi_wlast", false,-1);
    tracep->declBit(c+715,"ls_axi_bready", false,-1);
    tracep->declBit(c+1264,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+427,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+429,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"ls_axi_arready", false,-1);
    tracep->declBit(c+716,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1376,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+706,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+708,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+710,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+712,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+717,"ls_axi_rready", false,-1);
    tracep->declBit(c+1265,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+428,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1318,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+430,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+431,"ls_axi_rlast", false,-1);
    tracep->declBit(c+897,"ls_done_reg", false,-1);
    tracep->declBus(c+704,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1361,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1374,"READ", false,-1, 1,0);
    tracep->declBus(c+1379,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1380,"DONE", false,-1, 1,0);
    tracep->declBus(c+732,"state", false,-1, 1,0);
    tracep->declBit(c+713,"axi_awvalid", false,-1);
    tracep->declBit(c+714,"axi_wvalid", false,-1);
    tracep->declBus(c+1375,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+705,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+733,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+707,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+709,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+711,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+734,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+715,"axi_bready", false,-1);
    tracep->declBit(c+718,"axi_wlast", false,-1);
    tracep->declBit(c+716,"axi_arvalid", false,-1);
    tracep->declBit(c+717,"axi_rready", false,-1);
    tracep->declBus(c+1376,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+706,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+708,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+710,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+712,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1166,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1167,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1168,"pc_valid_o", false,-1);
    tracep->declBit(c+1312,"if_ready_i", false,-1);
    tracep->declBit(c+1168,"pc_valid_reg", false,-1);
    tracep->declBus(c+1166,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1393,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1171,"state", false,-1);
    tracep->declBit(c+1328,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1395,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1396,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBus(c+297,"wdata", false,-1, 31,0);
    tracep->declBus(c+298,"waddr", false,-1, 4,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->declBus(c+265,"raddr1", false,-1, 4,0);
    tracep->declBus(c+308,"r1", false,-1, 31,0);
    tracep->declBus(c+266,"raddr2", false,-1, 4,0);
    tracep->declBus(c+309,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+317+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+270,"ex_valid_i", false,-1);
    tracep->declBit(c+271,"wb_ready_o", false,-1);
    tracep->declBit(c+1320,"wb_done_o", false,-1);
    tracep->declBit(c+259,"difftest", false,-1);
    tracep->declBus(c+297,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+272,"ex_i", false,-1, 31,0);
    tracep->declBus(c+298,"rd_o", false,-1, 4,0);
    tracep->declBus(c+264,"rd_i", false,-1, 4,0);
    tracep->declBit(c+299,"gpr_wen_o", false,-1);
    tracep->declBit(c+281,"gpr_wen_i", false,-1);
    tracep->declBus(c+274,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+276,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+278,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+300,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+301,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+302,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+303,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+282,"mepc_wen_i", false,-1);
    tracep->declBit(c+283,"mstatus_wen_i", false,-1);
    tracep->declBit(c+284,"mcause_wen_i", false,-1);
    tracep->declBit(c+285,"mtvec_wen_i", false,-1);
    tracep->declBit(c+304,"mepc_wen_o", false,-1);
    tracep->declBit(c+305,"mstatus_wen_o", false,-1);
    tracep->declBit(c+306,"mcause_wen_o", false,-1);
    tracep->declBit(c+307,"mtvec_wen_o", false,-1);
    tracep->declBit(c+271,"wb_ready_reg", false,-1);
    tracep->declBit(c+1320,"wb_done_reg", false,-1);
    tracep->declBit(c+259,"difftest_reg", false,-1);
    tracep->declBus(c+297,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+298,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+299,"gpr_wen_reg", false,-1);
    tracep->declBus(c+300,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+301,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+302,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+303,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+304,"mepc_wen_reg", false,-1);
    tracep->declBit(c+305,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+306,"mcause_wen_reg", false,-1);
    tracep->declBit(c+307,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1374,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1379,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1380,"NULL", false,-1, 1,0);
    tracep->declBus(c+1329,"state", false,-1, 1,0);
    tracep->declBus(c+1330,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+1315,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1350,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1357,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1372,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1359,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1360,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1361,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1316,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1350,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1372,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1357,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1373,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1350,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+425,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+421,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+423,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1029,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+914,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+261,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+913,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+260,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+262,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+263,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+915,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1263,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+422,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1314,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+424,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+426,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1030,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+713,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1375,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+705,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+707,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+709,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+711,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1031,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+714,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1317,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1319,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+718,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+715,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1264,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+427,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+429,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1032,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+716,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1376,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+706,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+708,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+710,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+712,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+717,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1265,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+428,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1318,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+430,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+431,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+23,"io_master_awready", false,-1);
    tracep->declBit(c+963,"io_master_awvalid", false,-1);
    tracep->declBus(c+964,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+965,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+966,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+967,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+968,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_wready", false,-1);
    tracep->declBit(c+969,"io_master_wvalid", false,-1);
    tracep->declBus(c+970,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+971,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"io_master_wlast", false,-1);
    tracep->declBit(c+973,"io_master_bready", false,-1);
    tracep->declBit(c+1179,"io_master_bvalid", false,-1);
    tracep->declBus(c+1180,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+450,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_arready", false,-1);
    tracep->declBit(c+974,"io_master_arvalid", false,-1);
    tracep->declBus(c+975,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+976,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+977,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+978,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+979,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+980,"io_master_rready", false,-1);
    tracep->declBit(c+1181,"io_master_rvalid", false,-1);
    tracep->declBus(c+1182,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+451,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+441,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+452,"io_master_rlast", false,-1);
    tracep->declBit(c+291,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1045,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1039,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1033,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1037,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1041,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1043,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+292,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1046,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1034,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1036,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1050,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1047,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+293,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+287,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+289,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+294,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1048,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1040,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1035,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1038,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1042,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1044,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1049,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+295,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+288,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+290,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+296,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+310,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+311,"marchid", false,-1, 31,0);
    tracep->declBus(c+1051,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1052,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1053,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1266,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1054,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1055,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1056,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+919,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+443,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+920,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+444,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1057,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1058,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1059,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1060,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+445,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+446,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1061,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+438,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1062,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+439,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+447,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1063,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1064,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1065,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1267,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1066,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1067,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+448,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1374,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1379,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1380,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+921,"state", false,-1, 1,0);
    tracep->declBus(c+1331,"next_state", false,-1, 1,0);
    tracep->declBus(c+1377,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1378,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1068,"sel_clint", false,-1);
    tracep->declBus(c+1397,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1398,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1069,"sel_mvendorid", false,-1);
    tracep->declBit(c+1070,"sel_marchid", false,-1);
    tracep->declBit(c+1071,"sel_id", false,-1);
    tracep->declBus(c+1072,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1073,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1074,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+440,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1075,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1076,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1077,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1078,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1399,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1079,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1400,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1080,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1081,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1082,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1083,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1401,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1402,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1403,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1355,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1084,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1355,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1355,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1085,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1086,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1355,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1355,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1087,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1088,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1404,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1358,"din", false,-1, 31,0);
    tracep->declBus(c+311,"dout", false,-1, 31,0);
    tracep->declBit(c+1350,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1358,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+302,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+306,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1358,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 31,0);
    tracep->declBus(c+273,"dout", false,-1, 31,0);
    tracep->declBit(c+304,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1406,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+301,"din", false,-1, 31,0);
    tracep->declBus(c+275,"dout", false,-1, 31,0);
    tracep->declBit(c+305,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1358,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+303,"din", false,-1, 31,0);
    tracep->declBus(c+279,"dout", false,-1, 31,0);
    tracep->declBit(c+307,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1396,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1407,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1358,"din", false,-1, 31,0);
    tracep->declBus(c+310,"dout", false,-1, 31,0);
    tracep->declBit(c+1350,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"io_d", false,-1);
    tracep->declBit(c+349,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"io_d", false,-1);
    tracep->declBit(c+349,"io_q", false,-1);
    tracep->declBit(c+349,"sync_0", false,-1);
    tracep->declBit(c+350,"sync_1", false,-1);
    tracep->declBit(c+351,"sync_2", false,-1);
    tracep->declBit(c+352,"sync_3", false,-1);
    tracep->declBit(c+353,"sync_4", false,-1);
    tracep->declBit(c+354,"sync_5", false,-1);
    tracep->declBit(c+355,"sync_6", false,-1);
    tracep->declBit(c+356,"sync_7", false,-1);
    tracep->declBit(c+357,"sync_8", false,-1);
    tracep->declBit(c+358,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+934,"auto_in_psel", false,-1);
    tracep->declBit(c+434,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+933,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+463,"auto_in_pready", false,-1);
    tracep->declBit(c+1354,"auto_in_pslverr", false,-1);
    tracep->declBus(c+464,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1286,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1089,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+934,"in_psel", false,-1);
    tracep->declBit(c+434,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+463,"in_pready", false,-1);
    tracep->declBus(c+464,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1354,"in_pslverr", false,-1);
    tracep->declBus(c+1286,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1289,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1359,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1408,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1409,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1410,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1411,"ONE", false,-1, 7,0);
    tracep->declBus(c+1412,"TWO", false,-1, 7,0);
    tracep->declBus(c+1413,"THREE", false,-1, 7,0);
    tracep->declBus(c+1414,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1415,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1416,"SIX", false,-1, 7,0);
    tracep->declBus(c+1417,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1418,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1419,"NINE", false,-1, 7,0);
    tracep->declBus(c+1420,"A", false,-1, 7,0);
    tracep->declBus(c+1421,"B", false,-1, 7,0);
    tracep->declBus(c+1422,"C", false,-1, 7,0);
    tracep->declBus(c+1423,"D", false,-1, 7,0);
    tracep->declBus(c+1424,"E", false,-1, 7,0);
    tracep->declBus(c+1425,"F", false,-1, 7,0);
    tracep->declBus(c+465,"led_reg", false,-1, 15,0);
    tracep->declBus(c+466,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+467+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1090,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1091,"write_en", false,-1);
    tracep->declBit(c+1092,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+931,"auto_in_psel", false,-1);
    tracep->declBit(c+932,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+933,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+461,"auto_in_pready", false,-1);
    tracep->declBit(c+1353,"auto_in_pslverr", false,-1);
    tracep->declBus(c+462,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1296,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1297,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1089,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+931,"in_psel", false,-1);
    tracep->declBit(c+932,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+461,"in_pready", false,-1);
    tracep->declBus(c+462,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1353,"in_pslverr", false,-1);
    tracep->declBit(c+1296,"ps2_clk", false,-1);
    tracep->declBit(c+1297,"ps2_data", false,-1);
    tracep->declBus(c+1426,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1427,"EXP", false,-1, 7,0);
    tracep->declBus(c+891,"state", false,-1, 1,0);
    tracep->declBus(c+892,"counter", false,-1, 3,0);
    tracep->declBus(c+893,"buffer", false,-1, 7,0);
    tracep->declBus(c+894,"buffer1", false,-1, 7,0);
    tracep->declBus(c+895,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1332,"ready", false,-1);
    tracep->declBus(c+1333,"rdata", false,-1, 31,0);
    tracep->declBit(c+1093,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1011,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1012,"auto_in_wvalid", false,-1);
    tracep->declBit(c+75,"auto_in_arready", false,-1);
    tracep->declBit(c+1013,"auto_in_arvalid", false,-1);
    tracep->declBus(c+959,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+442,"auto_in_rready", false,-1);
    tracep->declBit(c+76,"auto_in_rvalid", false,-1);
    tracep->declBus(c+77,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+78,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+76,"state", false,-1);
    tracep->declBus(c+78,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+77,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1094,"raddr", false,-1, 31,0);
    tracep->declBit(c+1095,"ren", false,-1);
    tracep->declBus(c+1096,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+935,"auto_in_psel", false,-1);
    tracep->declBit(c+435,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1309,"auto_in_pready", false,-1);
    tracep->declBit(c+1350,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1280,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1281,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1307,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+935,"in_psel", false,-1);
    tracep->declBit(c+435,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1309,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1350,"in_pslverr", false,-1);
    tracep->declBit(c+1280,"qspi_sck", false,-1);
    tracep->declBit(c+1281,"qspi_ce_n", false,-1);
    tracep->declBus(c+1307,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1307,"din", false,-1, 3,0);
    tracep->declBus(c+1282,"dout", false,-1, 3,0);
    tracep->declBus(c+1283,"douten", false,-1, 3,0);
    tracep->declBit(c+1334,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBus(c+922,"adr_i", false,-1, 31,0);
    tracep->declBus(c+925,"dat_i", false,-1, 31,0);
    tracep->declBus(c+12,"dat_o", false,-1, 31,0);
    tracep->declBus(c+926,"sel_i", false,-1, 3,0);
    tracep->declBit(c+935,"cyc_i", false,-1);
    tracep->declBit(c+935,"stb_i", false,-1);
    tracep->declBit(c+1334,"ack_o", false,-1);
    tracep->declBit(c+924,"we_i", false,-1);
    tracep->declBit(c+1280,"sck", false,-1);
    tracep->declBit(c+1281,"ce_n", false,-1);
    tracep->declBus(c+1307,"din", false,-1, 3,0);
    tracep->declBus(c+1282,"dout", false,-1, 3,0);
    tracep->declBus(c+1283,"douten", false,-1, 3,0);
    tracep->declBus(c+1393,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+475,"mr_sck", false,-1);
    tracep->declBit(c+476,"mr_ce_n", false,-1);
    tracep->declBus(c+1307,"mr_din", false,-1, 3,0);
    tracep->declBus(c+477,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+478,"mr_doe", false,-1);
    tracep->declBit(c+479,"mw_sck", false,-1);
    tracep->declBit(c+480,"mw_ce_n", false,-1);
    tracep->declBus(c+1307,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1268,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+481,"mw_doe", false,-1);
    tracep->declBit(c+1269,"mr_rd", false,-1);
    tracep->declBit(c+482,"mr_done", false,-1);
    tracep->declBit(c+1270,"mw_wr", false,-1);
    tracep->declBit(c+1271,"mw_done", false,-1);
    tracep->declBit(c+935,"wb_valid", false,-1);
    tracep->declBit(c+1097,"wb_we", false,-1);
    tracep->declBit(c+1098,"wb_re", false,-1);
    tracep->declBit(c+483,"state", false,-1);
    tracep->declBit(c+1272,"nstate", false,-1);
    tracep->declBus(c+1099,"size", false,-1, 2,0);
    tracep->declBus(c+1100,"byte0", false,-1, 7,0);
    tracep->declBus(c+1101,"byte1", false,-1, 7,0);
    tracep->declBus(c+1102,"byte2", false,-1, 7,0);
    tracep->declBus(c+1103,"byte3", false,-1, 7,0);
    tracep->declBus(c+1104,"wdata", false,-1, 31,0);
    tracep->declBit(c+698,"qpi_flag", false,-1);
    tracep->declBit(c+699,"qpi_sck", false,-1);
    tracep->declBit(c+700,"qpi_ce_n", false,-1);
    tracep->declBus(c+701,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+702,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+703,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1335,"rst_n", false,-1);
    tracep->declBus(c+1105,"addr", false,-1, 23,0);
    tracep->declBit(c+1269,"rd", false,-1);
    tracep->declBus(c+1428,"size", false,-1, 2,0);
    tracep->declBit(c+482,"done", false,-1);
    tracep->declBus(c+12,"line", false,-1, 31,0);
    tracep->declBit(c+475,"sck", false,-1);
    tracep->declBit(c+476,"ce_n", false,-1);
    tracep->declBus(c+1307,"din", false,-1, 3,0);
    tracep->declBus(c+477,"dout", false,-1, 3,0);
    tracep->declBit(c+478,"douten", false,-1);
    tracep->declBus(c+1393,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"READ", false,-1, 0,0);
    tracep->declBus(c+1429,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+484,"state", false,-1);
    tracep->declBit(c+1273,"nstate", false,-1);
    tracep->declBus(c+485,"counter", false,-1, 7,0);
    tracep->declBus(c+486,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+359+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1430,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+487,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1335,"rst_n", false,-1);
    tracep->declBus(c+1106,"addr", false,-1, 23,0);
    tracep->declBus(c+1104,"line", false,-1, 31,0);
    tracep->declBus(c+1099,"size", false,-1, 2,0);
    tracep->declBit(c+1270,"wr", false,-1);
    tracep->declBit(c+1271,"done", false,-1);
    tracep->declBit(c+479,"sck", false,-1);
    tracep->declBit(c+480,"ce_n", false,-1);
    tracep->declBus(c+1307,"din", false,-1, 3,0);
    tracep->declBus(c+1268,"dout", false,-1, 3,0);
    tracep->declBit(c+481,"douten", false,-1);
    tracep->declBus(c+1393,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1394,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1107,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+488,"state", false,-1);
    tracep->declBit(c+1274,"nstate", false,-1);
    tracep->declBus(c+489,"counter", false,-1, 7,0);
    tracep->declBus(c+490,"saddr", false,-1, 23,0);
    tracep->declBus(c+1431,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+928,"auto_in_psel", false,-1);
    tracep->declBit(c+432,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+922,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+458,"auto_in_pready", false,-1);
    tracep->declBit(c+1350,"auto_in_pslverr", false,-1);
    tracep->declBus(c+459,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+456,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+848,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+849,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+850,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+851,"sdram_bundle_we", false,-1);
    tracep->declBus(c+852,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+853,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+457,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+877,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+922,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+928,"in_psel", false,-1);
    tracep->declBit(c+432,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+458,"in_pready", false,-1);
    tracep->declBus(c+459,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1350,"in_pslverr", false,-1);
    tracep->declBit(c+1308,"sdram_clk", false,-1);
    tracep->declBit(c+456,"sdram_cke", false,-1);
    tracep->declBit(c+848,"sdram_cs", false,-1);
    tracep->declBit(c+849,"sdram_ras", false,-1);
    tracep->declBit(c+850,"sdram_cas", false,-1);
    tracep->declBit(c+851,"sdram_we", false,-1);
    tracep->declBus(c+852,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+853,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+457,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+877,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+491,"sdram_dout_en", false,-1);
    tracep->declBus(c+492,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+363,"state", false,-1, 1,0);
    tracep->declBit(c+854,"req_accept", false,-1);
    tracep->declBit(c+1108,"is_read", false,-1);
    tracep->declBit(c+1109,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBus(c+1110,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1108,"inport_rd_i", false,-1);
    tracep->declBus(c+1359,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+922,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+925,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+877,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+854,"inport_accept_o", false,-1);
    tracep->declBit(c+458,"inport_ack_o", false,-1);
    tracep->declBit(c+1350,"inport_error_o", false,-1);
    tracep->declBus(c+459,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1308,"sdram_clk_o", false,-1);
    tracep->declBit(c+456,"sdram_cke_o", false,-1);
    tracep->declBit(c+848,"sdram_cs_o", false,-1);
    tracep->declBit(c+849,"sdram_ras_o", false,-1);
    tracep->declBit(c+850,"sdram_cas_o", false,-1);
    tracep->declBit(c+851,"sdram_we_o", false,-1);
    tracep->declBus(c+457,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+852,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+853,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+492,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+491,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1432,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1433,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1434,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1435,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1436,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1437,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1438,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1439,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1440,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1441,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1442,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1437,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1387,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1383,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1385,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1384,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1386,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1382,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1381,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1357,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1443,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1437,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1357,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1381,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1382,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1383,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1384,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1385,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1386,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1387,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1388,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1389,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1444,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1444,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1396,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1444,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1435,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1435,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1445,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+922,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1110,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1108,"ram_rd_w", false,-1);
    tracep->declBit(c+854,"ram_accept_w", false,-1);
    tracep->declBus(c+925,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+459,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+458,"ram_ack_w", false,-1);
    tracep->declBit(c+1111,"ram_req_w", false,-1);
    tracep->declBus(c+855,"command_q", false,-1, 3,0);
    tracep->declBus(c+852,"addr_q", false,-1, 12,0);
    tracep->declBus(c+492,"data_q", false,-1, 31,0);
    tracep->declBit(c+493,"data_rd_en_q", false,-1);
    tracep->declBus(c+457,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+456,"cke_q", false,-1);
    tracep->declBus(c+853,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1446,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+494,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+877,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+495,"refresh_q", false,-1);
    tracep->declBus(c+856,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+496+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+857,"state_q", false,-1, 3,0);
    tracep->declBus(c+1275,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1276,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+504,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+505,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1112,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1113,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1114,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1437,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+506,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1277,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1447,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+858,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+507,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+459,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+508,"idx", false,-1, 31,0);
    tracep->declBus(c+509,"rd_q", false,-1, 3,0);
    tracep->declBit(c+458,"ack_q", false,-1);
    tracep->declArray(c+859,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+939,"auto_in_psel", false,-1);
    tracep->declBit(c+940,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+930,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"auto_in_pready", false,-1);
    tracep->declBit(c+1350,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1174,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+454,"spi_bundle_sck", false,-1);
    tracep->declBus(c+455,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+847,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1306,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1448,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1449,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1438,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1115,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+939,"in_psel", false,-1);
    tracep->declBit(c+940,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"in_pready", false,-1);
    tracep->declBus(c+1174,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1350,"in_pslverr", false,-1);
    tracep->declBit(c+454,"spi_sck", false,-1);
    tracep->declBus(c+455,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+847,"spi_mosi", false,-1);
    tracep->declBit(c+1306,"spi_miso", false,-1);
    tracep->declBit(c+510,"spi_irq_out", false,-1);
    tracep->declBus(c+1116,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1117,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1118,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1119,"wb_we_i", false,-1);
    tracep->declBit(c+1120,"wb_stb_i", false,-1);
    tracep->declBit(c+1121,"wb_cyc_i", false,-1);
    tracep->declBit(c+511,"wb_ack_o", false,-1);
    tracep->declBus(c+512,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1360,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1349,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1450,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1451,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1428,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1452,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1453,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1454,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+364,"state", false,-1, 2,0);
    tracep->declBus(c+365,"next_state", false,-1, 2,0);
    tracep->declBus(c+366,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+367,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+368,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+369,"flash_pwrite", false,-1);
    tracep->declBit(c+370,"flash_psel", false,-1);
    tracep->declBit(c+371,"flash_penable", false,-1);
    tracep->declBit(c+372,"flash_pready", false,-1);
    tracep->declBus(c+373,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1455,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"wb_clk_i", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+1116,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1117,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+512,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1118,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1119,"wb_we_i", false,-1);
    tracep->declBit(c+1120,"wb_stb_i", false,-1);
    tracep->declBit(c+1121,"wb_cyc_i", false,-1);
    tracep->declBit(c+511,"wb_ack_o", false,-1);
    tracep->declBit(c+1350,"wb_err_o", false,-1);
    tracep->declBit(c+510,"wb_int_o", false,-1);
    tracep->declBus(c+455,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+454,"sclk_pad_o", false,-1);
    tracep->declBit(c+847,"mosi_pad_o", false,-1);
    tracep->declBit(c+1306,"miso_pad_i", false,-1);
    tracep->declBus(c+513,"divider", false,-1, 15,0);
    tracep->declBus(c+514,"ctrl", false,-1, 13,0);
    tracep->declBus(c+515,"ss", false,-1, 7,0);
    tracep->declBus(c+1278,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+516,"rx", false,-1, 127,0);
    tracep->declBit(c+520,"rx_negedge", false,-1);
    tracep->declBit(c+521,"tx_negedge", false,-1);
    tracep->declBus(c+522,"char_len", false,-1, 6,0);
    tracep->declBit(c+523,"go", false,-1);
    tracep->declBit(c+524,"lsb", false,-1);
    tracep->declBit(c+525,"ie", false,-1);
    tracep->declBit(c+526,"ass", false,-1);
    tracep->declBit(c+1122,"spi_divider_sel", false,-1);
    tracep->declBit(c+1123,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1124,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1125,"spi_ss_sel", false,-1);
    tracep->declBit(c+527,"tip", false,-1);
    tracep->declBit(c+528,"pos_edge", false,-1);
    tracep->declBit(c+529,"neg_edge", false,-1);
    tracep->declBit(c+530,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1455,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"clk_in", false,-1);
    tracep->declBit(c+1285,"rst", false,-1);
    tracep->declBit(c+527,"enable", false,-1);
    tracep->declBit(c+523,"go", false,-1);
    tracep->declBit(c+530,"last_clk", false,-1);
    tracep->declBus(c+513,"divider", false,-1, 15,0);
    tracep->declBit(c+454,"clk_out", false,-1);
    tracep->declBit(c+528,"pos_edge", false,-1);
    tracep->declBit(c+529,"neg_edge", false,-1);
    tracep->declBus(c+531,"cnt", false,-1, 15,0);
    tracep->declBit(c+532,"cnt_zero", false,-1);
    tracep->declBit(c+533,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1455,"Tp", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"rst", false,-1);
    tracep->declBus(c+1126,"latch", false,-1, 3,0);
    tracep->declBus(c+1118,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+522,"len", false,-1, 6,0);
    tracep->declBit(c+524,"lsb", false,-1);
    tracep->declBit(c+523,"go", false,-1);
    tracep->declBit(c+528,"pos_edge", false,-1);
    tracep->declBit(c+529,"neg_edge", false,-1);
    tracep->declBit(c+520,"rx_negedge", false,-1);
    tracep->declBit(c+521,"tx_negedge", false,-1);
    tracep->declBit(c+527,"tip", false,-1);
    tracep->declBit(c+530,"last", false,-1);
    tracep->declBus(c+1117,"p_in", false,-1, 31,0);
    tracep->declArray(c+516,"p_out", false,-1, 127,0);
    tracep->declBit(c+454,"s_clk", false,-1);
    tracep->declBit(c+1306,"s_in", false,-1);
    tracep->declBit(c+847,"s_out", false,-1);
    tracep->declBus(c+534,"cnt", false,-1, 7,0);
    tracep->declArray(c+516,"data", false,-1, 127,0);
    tracep->declBus(c+535,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+536,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+537,"rx_clk", false,-1);
    tracep->declBit(c+538,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+936,"auto_in_psel", false,-1);
    tracep->declBit(c+937,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+933,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+938,"auto_in_pready", false,-1);
    tracep->declBit(c+1350,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1132,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+936,"in_psel", false,-1);
    tracep->declBit(c+937,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+938,"in_pready", false,-1);
    tracep->declBit(c+1350,"in_pslverr", false,-1);
    tracep->declBus(c+1089,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+1132,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"uart_rx", false,-1);
    tracep->declBit(c+1305,"uart_tx", false,-1);
    tracep->declBit(c+539,"rtsn", false,-1);
    tracep->declBit(c+1350,"ctsn", false,-1);
    tracep->declBit(c+540,"dtr_pad_o", false,-1);
    tracep->declBit(c+1350,"dsr_pad_i", false,-1);
    tracep->declBit(c+1350,"ri_pad_i", false,-1);
    tracep->declBit(c+1350,"dcd_pad_i", false,-1);
    tracep->declBit(c+541,"interrupt", false,-1);
    tracep->declBit(c+1336,"reg_we", false,-1);
    tracep->declBit(c+1337,"reg_re", false,-1);
    tracep->declBus(c+1127,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1128,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+374,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1279,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+542,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+1127,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1129,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1279,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1336,"wb_we_i", false,-1);
    tracep->declBit(c+1337,"wb_re_i", false,-1);
    tracep->declBit(c+1305,"stx_pad_o", false,-1);
    tracep->declBit(c+1304,"srx_pad_i", false,-1);
    tracep->declBus(c+1388,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+542,"rts_pad_o", false,-1);
    tracep->declBit(c+540,"dtr_pad_o", false,-1);
    tracep->declBit(c+541,"int_o", false,-1);
    tracep->declBit(c+543,"enable", false,-1);
    tracep->declBit(c+544,"srx_pad", false,-1);
    tracep->declBus(c+545,"ier", false,-1, 3,0);
    tracep->declBus(c+546,"iir", false,-1, 3,0);
    tracep->declBus(c+547,"fcr", false,-1, 1,0);
    tracep->declBus(c+548,"mcr", false,-1, 4,0);
    tracep->declBus(c+549,"lcr", false,-1, 7,0);
    tracep->declBus(c+550,"msr", false,-1, 7,0);
    tracep->declBus(c+551,"dl", false,-1, 15,0);
    tracep->declBus(c+552,"scratch", false,-1, 7,0);
    tracep->declBit(c+553,"start_dlc", false,-1);
    tracep->declBit(c+554,"lsr_mask_d", false,-1);
    tracep->declBit(c+555,"msi_reset", false,-1);
    tracep->declBus(c+556,"dlc", false,-1, 15,0);
    tracep->declBus(c+557,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+558,"rx_reset", false,-1);
    tracep->declBit(c+559,"tx_reset", false,-1);
    tracep->declBit(c+560,"dlab", false,-1);
    tracep->declBit(c+1355,"cts_pad_i", false,-1);
    tracep->declBit(c+1350,"dsr_pad_i", false,-1);
    tracep->declBit(c+1350,"ri_pad_i", false,-1);
    tracep->declBit(c+1350,"dcd_pad_i", false,-1);
    tracep->declBit(c+561,"loopback", false,-1);
    tracep->declBit(c+1350,"cts", false,-1);
    tracep->declBit(c+1355,"dsr", false,-1);
    tracep->declBit(c+1355,"ri", false,-1);
    tracep->declBit(c+1355,"dcd", false,-1);
    tracep->declBit(c+562,"cts_c", false,-1);
    tracep->declBit(c+563,"dsr_c", false,-1);
    tracep->declBit(c+564,"ri_c", false,-1);
    tracep->declBit(c+565,"dcd_c", false,-1);
    tracep->declBus(c+566,"lsr", false,-1, 7,0);
    tracep->declBit(c+567,"lsr0", false,-1);
    tracep->declBit(c+568,"lsr1", false,-1);
    tracep->declBit(c+569,"lsr2", false,-1);
    tracep->declBit(c+570,"lsr3", false,-1);
    tracep->declBit(c+571,"lsr4", false,-1);
    tracep->declBit(c+572,"lsr5", false,-1);
    tracep->declBit(c+573,"lsr6", false,-1);
    tracep->declBit(c+574,"lsr7", false,-1);
    tracep->declBit(c+575,"lsr0r", false,-1);
    tracep->declBit(c+576,"lsr1r", false,-1);
    tracep->declBit(c+577,"lsr2r", false,-1);
    tracep->declBit(c+578,"lsr3r", false,-1);
    tracep->declBit(c+579,"lsr4r", false,-1);
    tracep->declBit(c+580,"lsr5r", false,-1);
    tracep->declBit(c+581,"lsr6r", false,-1);
    tracep->declBit(c+582,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+583,"rls_int", false,-1);
    tracep->declBit(c+584,"rda_int", false,-1);
    tracep->declBit(c+585,"ti_int", false,-1);
    tracep->declBit(c+586,"thre_int", false,-1);
    tracep->declBit(c+587,"ms_int", false,-1);
    tracep->declBit(c+588,"tf_push", false,-1);
    tracep->declBit(c+589,"rf_pop", false,-1);
    tracep->declBus(c+1338,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+590,"rf_error_bit", false,-1);
    tracep->declBit(c+568,"rf_overrun", false,-1);
    tracep->declBit(c+591,"rf_push_pulse", false,-1);
    tracep->declBus(c+592,"rf_count", false,-1, 4,0);
    tracep->declBus(c+593,"tf_count", false,-1, 4,0);
    tracep->declBus(c+594,"tstate", false,-1, 2,0);
    tracep->declBus(c+595,"rstate", false,-1, 3,0);
    tracep->declBus(c+596,"counter_t", false,-1, 9,0);
    tracep->declBit(c+597,"thre_set_en", false,-1);
    tracep->declBus(c+598,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+599,"block_value", false,-1, 7,0);
    tracep->declBit(c+600,"serial_out", false,-1);
    tracep->declBit(c+601,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+602,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+603,"lsr0_d", false,-1);
    tracep->declBit(c+604,"lsr1_d", false,-1);
    tracep->declBit(c+605,"lsr2_d", false,-1);
    tracep->declBit(c+606,"lsr3_d", false,-1);
    tracep->declBit(c+607,"lsr4_d", false,-1);
    tracep->declBit(c+608,"lsr5_d", false,-1);
    tracep->declBit(c+609,"lsr6_d", false,-1);
    tracep->declBit(c+610,"lsr7_d", false,-1);
    tracep->declBit(c+611,"rls_int_d", false,-1);
    tracep->declBit(c+612,"thre_int_d", false,-1);
    tracep->declBit(c+613,"ms_int_d", false,-1);
    tracep->declBit(c+614,"ti_int_d", false,-1);
    tracep->declBit(c+615,"rda_int_d", false,-1);
    tracep->declBit(c+616,"rls_int_rise", false,-1);
    tracep->declBit(c+617,"thre_int_rise", false,-1);
    tracep->declBit(c+618,"ms_int_rise", false,-1);
    tracep->declBit(c+619,"ti_int_rise", false,-1);
    tracep->declBit(c+620,"rda_int_rise", false,-1);
    tracep->declBit(c+621,"rls_int_pnd", false,-1);
    tracep->declBit(c+622,"rda_int_pnd", false,-1);
    tracep->declBit(c+623,"thre_int_pnd", false,-1);
    tracep->declBit(c+624,"ms_int_pnd", false,-1);
    tracep->declBit(c+625,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1455,"Tp", false,-1, 31,0);
    tracep->declBus(c+1455,"width", false,-1, 31,0);
    tracep->declBus(c+1394,"init_value", false,-1, 0,0);
    tracep->declBit(c+1285,"rst_i", false,-1);
    tracep->declBit(c+1284,"clk_i", false,-1);
    tracep->declBit(c+1350,"stage1_rst_i", false,-1);
    tracep->declBit(c+1355,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1304,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+544,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+626,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+549,"lcr", false,-1, 7,0);
    tracep->declBit(c+589,"rf_pop", false,-1);
    tracep->declBit(c+601,"srx_pad_i", false,-1);
    tracep->declBit(c+543,"enable", false,-1);
    tracep->declBit(c+558,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+596,"counter_t", false,-1, 9,0);
    tracep->declBus(c+592,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1338,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+568,"rf_overrun", false,-1);
    tracep->declBit(c+590,"rf_error_bit", false,-1);
    tracep->declBus(c+595,"rstate", false,-1, 3,0);
    tracep->declBit(c+591,"rf_push_pulse", false,-1);
    tracep->declBus(c+627,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+628,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+629,"rshift", false,-1, 7,0);
    tracep->declBit(c+630,"rparity", false,-1);
    tracep->declBit(c+631,"rparity_error", false,-1);
    tracep->declBit(c+632,"rframing_error", false,-1);
    tracep->declBit(c+633,"rbit_in", false,-1);
    tracep->declBit(c+634,"rparity_xor", false,-1);
    tracep->declBus(c+635,"counter_b", false,-1, 7,0);
    tracep->declBit(c+636,"rf_push_q", false,-1);
    tracep->declBus(c+637,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+638,"rf_push", false,-1);
    tracep->declBit(c+639,"break_error", false,-1);
    tracep->declBit(c+640,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+641,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+642,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+643,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1357,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1381,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1382,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1383,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1384,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1385,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1386,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1387,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1388,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1389,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1390,"sr_push", false,-1, 3,0);
    tracep->declBus(c+644,"toc_value", false,-1, 9,0);
    tracep->declBus(c+645,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1456,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1457,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1437,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1395,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBit(c+591,"push", false,-1);
    tracep->declBit(c+589,"pop", false,-1);
    tracep->declBus(c+637,"data_in", false,-1, 10,0);
    tracep->declBit(c+558,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1338,"data_out", false,-1, 10,0);
    tracep->declBit(c+568,"overrun", false,-1);
    tracep->declBus(c+592,"count", false,-1, 4,0);
    tracep->declBit(c+590,"error_bit", false,-1);
    tracep->declBus(c+1339,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+646+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+662,"top", false,-1, 3,0);
    tracep->declBus(c+663,"bottom", false,-1, 3,0);
    tracep->declBus(c+664,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+665,"word0", false,-1, 2,0);
    tracep->declBus(c+666,"word1", false,-1, 2,0);
    tracep->declBus(c+667,"word2", false,-1, 2,0);
    tracep->declBus(c+668,"word3", false,-1, 2,0);
    tracep->declBus(c+669,"word4", false,-1, 2,0);
    tracep->declBus(c+670,"word5", false,-1, 2,0);
    tracep->declBus(c+671,"word6", false,-1, 2,0);
    tracep->declBus(c+672,"word7", false,-1, 2,0);
    tracep->declBus(c+673,"word8", false,-1, 2,0);
    tracep->declBus(c+674,"word9", false,-1, 2,0);
    tracep->declBus(c+675,"word10", false,-1, 2,0);
    tracep->declBus(c+676,"word11", false,-1, 2,0);
    tracep->declBus(c+677,"word12", false,-1, 2,0);
    tracep->declBus(c+678,"word13", false,-1, 2,0);
    tracep->declBus(c+679,"word14", false,-1, 2,0);
    tracep->declBus(c+680,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1437,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1438,"data_width", false,-1, 31,0);
    tracep->declBus(c+1457,"depth", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+591,"we", false,-1);
    tracep->declBus(c+662,"a", false,-1, 3,0);
    tracep->declBus(c+663,"dpra", false,-1, 3,0);
    tracep->declBus(c+681,"di", false,-1, 7,0);
    tracep->declBus(c+1339,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+375+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBus(c+549,"lcr", false,-1, 7,0);
    tracep->declBit(c+588,"tf_push", false,-1);
    tracep->declBus(c+1129,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+543,"enable", false,-1);
    tracep->declBit(c+559,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+600,"stx_pad_o", false,-1);
    tracep->declBus(c+594,"tstate", false,-1, 2,0);
    tracep->declBus(c+593,"tf_count", false,-1, 4,0);
    tracep->declBus(c+682,"counter", false,-1, 4,0);
    tracep->declBus(c+683,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+684,"shift_out", false,-1, 6,0);
    tracep->declBit(c+685,"stx_o_tmp", false,-1);
    tracep->declBit(c+686,"parity_xor", false,-1);
    tracep->declBit(c+687,"tf_pop", false,-1);
    tracep->declBit(c+688,"bit_out", false,-1);
    tracep->declBus(c+1129,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1340,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+689,"tf_overrun", false,-1);
    tracep->declBus(c+1360,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1349,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1450,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1451,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1428,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1452,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1438,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1457,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1437,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1395,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+1285,"wb_rst_i", false,-1);
    tracep->declBit(c+588,"push", false,-1);
    tracep->declBit(c+687,"pop", false,-1);
    tracep->declBus(c+1129,"data_in", false,-1, 7,0);
    tracep->declBit(c+559,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1340,"data_out", false,-1, 7,0);
    tracep->declBit(c+689,"overrun", false,-1);
    tracep->declBus(c+593,"count", false,-1, 4,0);
    tracep->declBus(c+690,"top", false,-1, 3,0);
    tracep->declBus(c+691,"bottom", false,-1, 3,0);
    tracep->declBus(c+692,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1437,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1438,"data_width", false,-1, 31,0);
    tracep->declBus(c+1457,"depth", false,-1, 31,0);
    tracep->declBit(c+1284,"clk", false,-1);
    tracep->declBit(c+588,"we", false,-1);
    tracep->declBus(c+690,"a", false,-1, 3,0);
    tracep->declBus(c+691,"dpra", false,-1, 3,0);
    tracep->declBus(c+1129,"di", false,-1, 7,0);
    tracep->declBus(c+1340,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+391+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBit(c+929,"auto_in_psel", false,-1);
    tracep->declBit(c+433,"auto_in_penable", false,-1);
    tracep->declBit(c+924,"auto_in_pwrite", false,-1);
    tracep->declBus(c+930,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1349,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+925,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+460,"auto_in_pready", false,-1);
    tracep->declBit(c+1351,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1352,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1298,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1302,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1303,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1284,"clock", false,-1);
    tracep->declBit(c+1285,"reset", false,-1);
    tracep->declBus(c+1115,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+929,"in_psel", false,-1);
    tracep->declBit(c+433,"in_penable", false,-1);
    tracep->declBus(c+1349,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+924,"in_pwrite", false,-1);
    tracep->declBus(c+925,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+926,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+460,"in_pready", false,-1);
    tracep->declBus(c+1352,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1351,"in_pslverr", false,-1);
    tracep->declBus(c+1298,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1300,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1301,"vga_hsync", false,-1);
    tracep->declBit(c+1302,"vga_vsync", false,-1);
    tracep->declBit(c+1303,"vga_valid", false,-1);
    tracep->declBit(c+1130,"is_write", false,-1);
    tracep->declBus(c+1131,"addr", false,-1, 31,0);
    tracep->declBit(c+460,"ready", false,-1);
    tracep->declBus(c+693,"i", false,-1, 31,0);
    tracep->declBus(c+1458,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1459,"h_active", false,-1, 31,0);
    tracep->declBus(c+1460,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1461,"h_total", false,-1, 31,0);
    tracep->declBus(c+1435,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1462,"v_active", false,-1, 31,0);
    tracep->declBus(c+1463,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1464,"v_total", false,-1, 31,0);
    tracep->declBus(c+694,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+407,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+695,"h_valid", false,-1);
    tracep->declBit(c+408,"v_valid", false,-1);
    tracep->declBus(c+696,"h_addr", false,-1, 9,0);
    tracep->declBus(c+409,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1341,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+454,"sck", false,-1);
    tracep->declBit(c+862,"ss", false,-1);
    tracep->declBit(c+847,"mosi", false,-1);
    tracep->declBit(c+813,"miso", false,-1);
    tracep->declBus(c+814,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+815,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+816,"counter", false,-1, 2,0);
    tracep->declBit(c+817,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+454,"sck", false,-1);
    tracep->declBit(c+697,"ss", false,-1);
    tracep->declBit(c+847,"mosi", false,-1);
    tracep->declBit(c+1342,"miso", false,-1);
    tracep->declBit(c+697,"reset", false,-1);
    tracep->declBus(c+807,"state", false,-1, 2,0);
    tracep->declBus(c+808,"counter", false,-1, 7,0);
    tracep->declBus(c+809,"cmd", false,-1, 7,0);
    tracep->declBus(c+810,"addr", false,-1, 23,0);
    tracep->declBus(c+811,"data", false,-1, 31,0);
    tracep->declBit(c+812,"ren", false,-1);
    tracep->declBus(c+1343,"rdata", false,-1, 31,0);
    tracep->declBus(c+1344,"raddr", false,-1, 31,0);
    tracep->declBus(c+1345,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+454,"clock", false,-1);
    tracep->declBit(c+812,"valid", false,-1);
    tracep->declBus(c+809,"cmd", false,-1, 7,0);
    tracep->declBus(c+1344,"addr", false,-1, 31,0);
    tracep->declBus(c+1343,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1280,"sck", false,-1);
    tracep->declBit(c+1281,"ce_n", false,-1);
    tracep->declBus(c+1307,"dio", false,-1, 3,0);
    tracep->declBit(c+1281,"reset", false,-1);
    tracep->declBus(c+7,"state", false,-1, 3,0);
    tracep->declBus(c+8,"counter", false,-1, 7,0);
    tracep->declBus(c+880,"cmd", false,-1, 7,0);
    tracep->declBus(c+881,"addr", false,-1, 23,0);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+882+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1346,"qpi_flag", false,-1);
    tracep->declBus(c+10,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1347,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+886,"ren", false,-1);
    tracep->declBit(c+887,"wen", false,-1);
    tracep->declBus(c+888,"len", false,-1, 7,0);
    tracep->declBus(c+1348,"rdata", false,-1, 31,0);
    tracep->declBus(c+889,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1280,"clock", false,-1);
    tracep->declBit(c+886,"ren", false,-1);
    tracep->declBit(c+887,"wen", false,-1);
    tracep->declBus(c+880,"cmd", false,-1, 7,0);
    tracep->declBus(c+889,"saddr", false,-1, 31,0);
    tracep->declBus(c+1348,"rdata", false,-1, 31,0);
    tracep->declBus(c+890,"wdata", false,-1, 31,0);
    tracep->declBus(c+888,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1308,"clk", false,-1);
    tracep->declBit(c+456,"cke", false,-1);
    tracep->declBit(c+848,"cs", false,-1);
    tracep->declBit(c+849,"ras", false,-1);
    tracep->declBit(c+850,"cas", false,-1);
    tracep->declBit(c+851,"we", false,-1);
    tracep->declBus(c+852,"a", false,-1, 12,0);
    tracep->declBus(c+863,"ba", false,-1, 1,0);
    tracep->declBus(c+864,"dqm", false,-1, 1,0);
    tracep->declBus(c+878,"dq", false,-1, 15,0);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+735,"state", false,-1, 2,0);
    tracep->declBus(c+736,"counter", false,-1, 7,0);
    tracep->declBus(c+737,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1465,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+738,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+739,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+866,"nop", false,-1);
    tracep->declBit(c+867,"active", false,-1);
    tracep->declBit(c+868,"precharge", false,-1);
    tracep->declBit(c+869,"read", false,-1);
    tracep->declBit(c+870,"write", false,-1);
    tracep->declBit(c+871,"burstterm", false,-1);
    tracep->declBit(c+872,"autorefresh", false,-1);
    tracep->declBit(c+873,"mode", false,-1);
    tracep->declBus(c+740,"test", false,-1, 15,0);
    tracep->declBit(c+741,"write_burst_mode", false,-1);
    tracep->declBus(c+742,"op_mode", false,-1, 1,0);
    tracep->declBus(c+743,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+744,"burst_type", false,-1);
    tracep->declBus(c+745,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+746,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+747,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+748,"bank", false,-1, 1,0);
    tracep->declBus(c+749,"row", false,-1, 12,0);
    tracep->declBus(c+750,"column", false,-1, 8,0);
    tracep->declBus(c+751,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+752,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1308,"clk", false,-1);
    tracep->declBit(c+456,"cke", false,-1);
    tracep->declBit(c+848,"cs", false,-1);
    tracep->declBit(c+849,"ras", false,-1);
    tracep->declBit(c+850,"cas", false,-1);
    tracep->declBit(c+851,"we", false,-1);
    tracep->declBus(c+852,"a", false,-1, 12,0);
    tracep->declBus(c+863,"ba", false,-1, 1,0);
    tracep->declBus(c+874,"dqm", false,-1, 1,0);
    tracep->declBus(c+879,"dq", false,-1, 15,0);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+753,"state", false,-1, 2,0);
    tracep->declBus(c+754,"counter", false,-1, 7,0);
    tracep->declBus(c+755,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1466,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+756,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+757,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+866,"nop", false,-1);
    tracep->declBit(c+867,"active", false,-1);
    tracep->declBit(c+868,"precharge", false,-1);
    tracep->declBit(c+869,"read", false,-1);
    tracep->declBit(c+870,"write", false,-1);
    tracep->declBit(c+871,"burstterm", false,-1);
    tracep->declBit(c+872,"autorefresh", false,-1);
    tracep->declBit(c+873,"mode", false,-1);
    tracep->declBus(c+758,"test", false,-1, 15,0);
    tracep->declBit(c+759,"write_burst_mode", false,-1);
    tracep->declBus(c+760,"op_mode", false,-1, 1,0);
    tracep->declBus(c+761,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+762,"burst_type", false,-1);
    tracep->declBus(c+763,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+764,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+765,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+766,"bank", false,-1, 1,0);
    tracep->declBus(c+767,"row", false,-1, 12,0);
    tracep->declBus(c+768,"column", false,-1, 8,0);
    tracep->declBus(c+769,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+770,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1308,"clk", false,-1);
    tracep->declBit(c+456,"cke", false,-1);
    tracep->declBit(c+848,"cs", false,-1);
    tracep->declBit(c+849,"ras", false,-1);
    tracep->declBit(c+850,"cas", false,-1);
    tracep->declBit(c+851,"we", false,-1);
    tracep->declBus(c+852,"a", false,-1, 12,0);
    tracep->declBus(c+863,"ba", false,-1, 1,0);
    tracep->declBus(c+875,"dqm", false,-1, 1,0);
    tracep->declBus(c+878,"dq", false,-1, 15,0);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+771,"state", false,-1, 2,0);
    tracep->declBus(c+772,"counter", false,-1, 7,0);
    tracep->declBus(c+773,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1467,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+774,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+775,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+866,"nop", false,-1);
    tracep->declBit(c+867,"active", false,-1);
    tracep->declBit(c+868,"precharge", false,-1);
    tracep->declBit(c+869,"read", false,-1);
    tracep->declBit(c+870,"write", false,-1);
    tracep->declBit(c+871,"burstterm", false,-1);
    tracep->declBit(c+872,"autorefresh", false,-1);
    tracep->declBit(c+873,"mode", false,-1);
    tracep->declBus(c+776,"test", false,-1, 15,0);
    tracep->declBit(c+777,"write_burst_mode", false,-1);
    tracep->declBus(c+778,"op_mode", false,-1, 1,0);
    tracep->declBus(c+779,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+780,"burst_type", false,-1);
    tracep->declBus(c+781,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+782,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+783,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+784,"bank", false,-1, 1,0);
    tracep->declBus(c+785,"row", false,-1, 12,0);
    tracep->declBus(c+786,"column", false,-1, 8,0);
    tracep->declBus(c+787,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+788,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1308,"clk", false,-1);
    tracep->declBit(c+456,"cke", false,-1);
    tracep->declBit(c+848,"cs", false,-1);
    tracep->declBit(c+849,"ras", false,-1);
    tracep->declBit(c+850,"cas", false,-1);
    tracep->declBit(c+851,"we", false,-1);
    tracep->declBus(c+852,"a", false,-1, 12,0);
    tracep->declBus(c+863,"ba", false,-1, 1,0);
    tracep->declBus(c+876,"dqm", false,-1, 1,0);
    tracep->declBus(c+879,"dq", false,-1, 15,0);
    tracep->declBit(c+865,"reset", false,-1);
    tracep->declBus(c+789,"state", false,-1, 2,0);
    tracep->declBus(c+790,"counter", false,-1, 7,0);
    tracep->declBus(c+791,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1468,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+792,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+793,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+866,"nop", false,-1);
    tracep->declBit(c+867,"active", false,-1);
    tracep->declBit(c+868,"precharge", false,-1);
    tracep->declBit(c+869,"read", false,-1);
    tracep->declBit(c+870,"write", false,-1);
    tracep->declBit(c+871,"burstterm", false,-1);
    tracep->declBit(c+872,"autorefresh", false,-1);
    tracep->declBit(c+873,"mode", false,-1);
    tracep->declBus(c+794,"test", false,-1, 15,0);
    tracep->declBit(c+795,"write_burst_mode", false,-1);
    tracep->declBus(c+796,"op_mode", false,-1, 1,0);
    tracep->declBus(c+797,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+798,"burst_type", false,-1);
    tracep->declBus(c+799,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+800,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+801,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+802,"bank", false,-1, 1,0);
    tracep->declBus(c+803,"row", false,-1, 12,0);
    tracep->declBus(c+804,"column", false,-1, 8,0);
    tracep->declBus(c+805,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+806,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+9,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+10,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+11,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+12,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+24,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+65,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+75,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+121,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+131,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__difftest_reg));
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd_reg),5);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1_reg),5);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2_reg),5);
    bufp->fullIData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg),32);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct7_reg),7);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__shamt_reg),5);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_valid));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_ready_reg));
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_reg),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__gpr_wen_reg));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+410,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+411,((((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullIData(oldp+412,((((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg)),32);
    bufp->fullIData(oldp+413,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullBit(oldp+414,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+415,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+416,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+417,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+418,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+419,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+420,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg))))));
    bufp->fullCData(oldp+421,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+422,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+423,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullCData(oldp+424,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+425,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))))));
    bufp->fullBit(oldp+426,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullCData(oldp+427,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))
                                : 0U)),4);
    bufp->fullCData(oldp+428,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))
                                : 0U)),4);
    bufp->fullCData(oldp+429,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullCData(oldp+430,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+431,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
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
    bufp->fullBit(oldp+432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+433,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+436,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                           << 2U) : 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                            << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST)))))));
    bufp->fullIData(oldp+437,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                               >> 2U)))) 
                                & ((- (IData)((0x2000000U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                               | ((- (IData)((0x2000004U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullBit(oldp+438,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullIData(oldp+440,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                    : 0U))),32);
    bufp->fullCData(oldp+441,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+442,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullCData(oldp+443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+444,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+445,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+446,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+447,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST)
                                  : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
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
    bufp->fullIData(oldp+449,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+450,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+451,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullBit(oldp+452,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+453,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullSData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+477,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+478,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+482,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+487,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+520,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+521,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+522,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+523,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+524,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+525,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+526,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+530,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+532,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+533,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+535,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+539,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+540,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+542,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+560,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+561,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+562,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+563,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+564,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+565,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+566,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+570,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+571,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+590,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+597,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+616,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+617,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+618,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+619,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+620,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+639,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+640,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+641,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+642,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+643,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+645,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+664,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+681,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+692,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+738,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+739,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+741,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+742,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+743,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+744,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+745,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+747,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+760,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+761,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+762,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+763,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+765,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+776,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+778,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+779,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+781,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+783,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+795,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+796,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+797,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+799,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+801,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+812,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+825,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+828,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+829,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+830,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+839,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+841,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+843,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+844,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+846,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+848,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+849,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+850,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+851,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+854,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+863,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+868,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+877,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+890,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+899,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+900,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
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
    bufp->fullCData(oldp+901,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+902,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+903,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
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
    bufp->fullIData(oldp+904,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+905,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+906,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+907,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+908,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+910,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+911,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+930,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+933,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+963,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+964,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+966,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+967,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+968,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+969,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+971,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+973,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+974,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+975,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+977,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+978,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+979,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+980,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+982,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+984,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+986,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1002,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1005,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1006,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1007,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1008,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1011,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1014,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1019,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1021,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1022,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1036,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1037,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1038,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1039,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1040,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1041,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1042,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1043,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1044,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1045,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1046,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1047,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1048,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1049,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1050,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1069,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1070,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1075,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1076,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1077,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1078,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1079,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1080,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1081,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1082,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1083,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1084,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1085,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1086,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1087,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1088,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1089,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1090,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullIData(oldp+1094,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1102,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1103,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1104,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1105,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1106,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1107,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1112,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1113,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1114,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1115,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1127,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1131,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullIData(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1135,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1136,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1137,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1138,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1139,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1140,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1143,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1144,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1145,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1146,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1147,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1148,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1149,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1150,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1151,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1152,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1153,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1154,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1155,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1156,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1157,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1158,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1160,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1161,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1162,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1163,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1164,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1165,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1208,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1209,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1232,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1233,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1235,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1236,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1237,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1238,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1240,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1241,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1242,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1243,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1244,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1245,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1246,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1247,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1248,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1249,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1250,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1251,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1252,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1253,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1254,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1255,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1257,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1258,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1259,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1260,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1261,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1262,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1284,(vlSelf->clock));
    bufp->fullBit(oldp+1285,(vlSelf->reset));
    bufp->fullSData(oldp+1286,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1287,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1288,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1289,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1290,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1291,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1292,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1293,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1294,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1295,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1296,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1297,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1298,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1299,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1300,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1301,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1302,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1303,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1304,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1305,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1308,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1309,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_ready_reg));
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__if_valid_reg));
    bufp->fullIData(oldp+1314,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1315,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+1316,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullIData(oldp+1317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullIData(oldp+1318,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1334,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1335,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1338,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1341,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1342,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1344,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1347,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1349,(1U),3);
    bufp->fullBit(oldp+1350,(0U));
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1355,(1U));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1357,(0U),4);
    bufp->fullIData(oldp+1358,(0U),32);
    bufp->fullCData(oldp+1359,(0U),8);
    bufp->fullCData(oldp+1360,(0U),3);
    bufp->fullCData(oldp+1361,(0U),2);
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1372,(0U),32);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullCData(oldp+1374,(1U),2);
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1377,(0x2000000U),32);
    bufp->fullIData(oldp+1378,(0x2000004U),32);
    bufp->fullCData(oldp+1379,(2U),2);
    bufp->fullCData(oldp+1380,(3U),2);
    bufp->fullCData(oldp+1381,(1U),4);
    bufp->fullCData(oldp+1382,(2U),4);
    bufp->fullCData(oldp+1383,(3U),4);
    bufp->fullCData(oldp+1384,(4U),4);
    bufp->fullCData(oldp+1385,(5U),4);
    bufp->fullCData(oldp+1386,(6U),4);
    bufp->fullCData(oldp+1387,(7U),4);
    bufp->fullCData(oldp+1388,(8U),4);
    bufp->fullCData(oldp+1389,(9U),4);
    bufp->fullCData(oldp+1390,(0xaU),4);
    bufp->fullCData(oldp+1391,(0xbU),4);
    bufp->fullCData(oldp+1392,(0xcU),4);
    bufp->fullBit(oldp+1393,(0U));
    bufp->fullBit(oldp+1394,(1U));
    bufp->fullIData(oldp+1395,(5U),32);
    bufp->fullIData(oldp+1396,(0x20U),32);
    bufp->fullIData(oldp+1397,(0x1000000U),32);
    bufp->fullIData(oldp+1398,(0x1000004U),32);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1405,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1406,(0x1800U),32);
    bufp->fullIData(oldp+1407,(0x79737978U),32);
    bufp->fullCData(oldp+1408,(4U),8);
    bufp->fullCData(oldp+1409,(8U),8);
    bufp->fullCData(oldp+1410,(3U),8);
    bufp->fullCData(oldp+1411,(0x9fU),8);
    bufp->fullCData(oldp+1412,(0x25U),8);
    bufp->fullCData(oldp+1413,(0xdU),8);
    bufp->fullCData(oldp+1414,(0x99U),8);
    bufp->fullCData(oldp+1415,(0x49U),8);
    bufp->fullCData(oldp+1416,(0x41U),8);
    bufp->fullCData(oldp+1417,(0x1fU),8);
    bufp->fullCData(oldp+1418,(1U),8);
    bufp->fullCData(oldp+1419,(9U),8);
    bufp->fullCData(oldp+1420,(0x11U),8);
    bufp->fullCData(oldp+1421,(0xc1U),8);
    bufp->fullCData(oldp+1422,(0x63U),8);
    bufp->fullCData(oldp+1423,(0x85U),8);
    bufp->fullCData(oldp+1424,(0x61U),8);
    bufp->fullCData(oldp+1425,(0x71U),8);
    bufp->fullCData(oldp+1426,(0xf0U),8);
    bufp->fullCData(oldp+1427,(0xe0U),8);
    bufp->fullCData(oldp+1428,(4U),3);
    bufp->fullCData(oldp+1429,(0x15U),8);
    bufp->fullCData(oldp+1430,(0xebU),8);
    bufp->fullCData(oldp+1431,(0x38U),8);
    bufp->fullIData(oldp+1432,(0x64U),32);
    bufp->fullIData(oldp+1433,(0x18U),32);
    bufp->fullIData(oldp+1434,(9U),32);
    bufp->fullIData(oldp+1435,(2U),32);
    bufp->fullIData(oldp+1436,(3U),32);
    bufp->fullIData(oldp+1437,(4U),32);
    bufp->fullIData(oldp+1438,(8U),32);
    bufp->fullIData(oldp+1439,(0xdU),32);
    bufp->fullIData(oldp+1440,(0x2000U),32);
    bufp->fullIData(oldp+1441,(0x2710U),32);
    bufp->fullIData(oldp+1442,(0x30cU),32);
    bufp->fullSData(oldp+1443,(0x20U),13);
    bufp->fullIData(oldp+1444,(0xaU),32);
    bufp->fullIData(oldp+1445,(6U),32);
    bufp->fullIData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1447,(0x11U),32);
    bufp->fullIData(oldp+1448,(0x30000000U),32);
    bufp->fullIData(oldp+1449,(0x3fffffffU),32);
    bufp->fullCData(oldp+1450,(2U),3);
    bufp->fullCData(oldp+1451,(3U),3);
    bufp->fullCData(oldp+1452,(5U),3);
    bufp->fullCData(oldp+1453,(6U),3);
    bufp->fullCData(oldp+1454,(7U),3);
    bufp->fullIData(oldp+1455,(1U),32);
    bufp->fullIData(oldp+1456,(0xbU),32);
    bufp->fullIData(oldp+1457,(0x10U),32);
    bufp->fullIData(oldp+1458,(0x60U),32);
    bufp->fullIData(oldp+1459,(0x90U),32);
    bufp->fullIData(oldp+1460,(0x310U),32);
    bufp->fullIData(oldp+1461,(0x320U),32);
    bufp->fullIData(oldp+1462,(0x23U),32);
    bufp->fullIData(oldp+1463,(0x203U),32);
    bufp->fullIData(oldp+1464,(0x20dU),32);
    bufp->fullSData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
