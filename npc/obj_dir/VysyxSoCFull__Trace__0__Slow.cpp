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
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+1178,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1179,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1180,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1181,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1182,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1183,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1184,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1185,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1186,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1187,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1188,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1189,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1190,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1191,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1192,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1193,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1194,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1195,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1196,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1197,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+1178,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1179,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1180,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1181,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1182,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1183,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1184,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1185,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1186,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1187,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1188,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1189,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1190,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1191,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1192,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1193,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1194,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1195,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1196,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1197,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+715,"spi_mosi", false,-1);
    tracep->declBit(c+1198,"spi_miso", false,-1);
    tracep->declBit(c+1196,"uart_rx", false,-1);
    tracep->declBit(c+1197,"uart_tx", false,-1);
    tracep->declBit(c+1172,"psram_sck", false,-1);
    tracep->declBit(c+1173,"psram_ce_n", false,-1);
    tracep->declBus(c+1199,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1200,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+716,"sdram_cs", false,-1);
    tracep->declBit(c+717,"sdram_ras", false,-1);
    tracep->declBit(c+718,"sdram_cas", false,-1);
    tracep->declBit(c+719,"sdram_we", false,-1);
    tracep->declBus(c+720,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+721,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+722,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+744,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1178,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1179,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1180,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1181,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1182,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1183,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1184,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1185,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1186,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1187,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1188,"ps2_clk", false,-1);
    tracep->declBit(c+1189,"ps2_data", false,-1);
    tracep->declBus(c+1190,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1191,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1192,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1193,"vga_hsync", false,-1);
    tracep->declBit(c+1194,"vga_vsync", false,-1);
    tracep->declBit(c+1195,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+849,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+850,"in_psel", false,-1);
    tracep->declBit(c+17,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1064,"in_pready", false,-1);
    tracep->declBus(c+1065,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+854,"in_pslverr", false,-1);
    tracep->declBus(c+849,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+850,"out_psel", false,-1);
    tracep->declBit(c+17,"out_penable", false,-1);
    tracep->declBus(c+1227,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"out_pwrite", false,-1);
    tracep->declBus(c+852,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1064,"out_pready", false,-1);
    tracep->declBus(c+1065,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+854,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+850,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+17,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+849,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1064,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+854,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1065,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+855,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+416,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+849,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+430,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+431,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+856,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+857,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1229,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1230,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1231,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+858,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+418,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+859,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1232,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1233,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1234,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+860,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+419,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+859,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1236,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1237,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+861,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+420,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+849,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+18,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+862,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+863,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+859,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1030,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+865,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+866,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+851,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+857,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1066,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+867,"sel_0", false,-1);
    tracep->declBit(c+868,"sel_1", false,-1);
    tracep->declBit(c+869,"sel_2", false,-1);
    tracep->declBit(c+870,"sel_3", false,-1);
    tracep->declBit(c+871,"sel_4", false,-1);
    tracep->declBit(c+872,"sel_5", false,-1);
    tracep->declBit(c+873,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+874,"auto_in_awready", false,-1);
    tracep->declBit(c+875,"auto_in_awvalid", false,-1);
    tracep->declBus(c+876,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+874,"auto_in_wready", false,-1);
    tracep->declBit(c+879,"auto_in_wvalid", false,-1);
    tracep->declBus(c+880,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1067,"auto_in_bready", false,-1);
    tracep->declBit(c+1068,"auto_in_bvalid", false,-1);
    tracep->declBus(c+19,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+882,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_in_arready", false,-1);
    tracep->declBit(c+884,"auto_in_arvalid", false,-1);
    tracep->declBus(c+885,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1069,"auto_in_rready", false,-1);
    tracep->declBit(c+1070,"auto_in_rvalid", false,-1);
    tracep->declBus(c+20,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+882,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+850,"auto_out_psel", false,-1);
    tracep->declBit(c+17,"auto_out_penable", false,-1);
    tracep->declBit(c+851,"auto_out_pwrite", false,-1);
    tracep->declBus(c+849,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+852,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1064,"auto_out_pready", false,-1);
    tracep->declBit(c+854,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1065,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+17,"nodeOut_penable", false,-1);
    tracep->declBus(c+21,"state", false,-1, 1,0);
    tracep->declBit(c+883,"accept_read", false,-1);
    tracep->declBit(c+874,"accept_write", false,-1);
    tracep->declBit(c+22,"is_write_r", false,-1);
    tracep->declBit(c+851,"is_write", false,-1);
    tracep->declBus(c+20,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+24,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+25,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+26,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+888,"resp", false,-1, 1,0);
    tracep->declBus(c+27,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+882,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1070,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+28,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1068,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+747,"auto_in_awready", false,-1);
    tracep->declBit(c+889,"auto_in_awvalid", false,-1);
    tracep->declBus(c+890,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+891,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_wready", false,-1);
    tracep->declBit(c+895,"auto_in_wvalid", false,-1);
    tracep->declBus(c+896,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"auto_in_wlast", false,-1);
    tracep->declBit(c+899,"auto_in_bready", false,-1);
    tracep->declBit(c+1071,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+900,"auto_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"auto_in_rready", false,-1);
    tracep->declBit(c+1073,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_in_rlast", false,-1);
    tracep->declBit(c+1075,"auto_out_awready", false,-1);
    tracep->declBit(c+907,"auto_out_awvalid", false,-1);
    tracep->declBus(c+876,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+908,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1076,"auto_out_wready", false,-1);
    tracep->declBit(c+909,"auto_out_wvalid", false,-1);
    tracep->declBus(c+880,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+910,"auto_out_wlast", false,-1);
    tracep->declBit(c+1077,"auto_out_bready", false,-1);
    tracep->declBit(c+1078,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1080,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1081,"auto_out_arready", false,-1);
    tracep->declBit(c+911,"auto_out_arvalid", false,-1);
    tracep->declBus(c+885,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+912,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+906,"auto_out_rready", false,-1);
    tracep->declBit(c+1073,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1082,"auto_out_rlast", false,-1);
    tracep->declBit(c+909,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+31,"w_idle", false,-1);
    tracep->declBit(c+1083,"in_awready", false,-1);
    tracep->declBit(c+32,"busy", false,-1);
    tracep->declBus(c+33,"r_addr", false,-1, 31,0);
    tracep->declBus(c+34,"r_len", false,-1, 7,0);
    tracep->declBus(c+913,"len", false,-1, 7,0);
    tracep->declBus(c+914,"addr", false,-1, 31,0);
    tracep->declBit(c+35,"busy_1", false,-1);
    tracep->declBus(c+36,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+37,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+915,"len_1", false,-1, 7,0);
    tracep->declBus(c+916,"addr_1", false,-1, 31,0);
    tracep->declBit(c+38,"wbeats_latched", false,-1);
    tracep->declBit(c+907,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+917,"wbeats_valid", false,-1);
    tracep->declBus(c+39,"w_counter", false,-1, 8,0);
    tracep->declBus(c+918,"w_todo", false,-1, 8,0);
    tracep->declBit(c+910,"w_last", false,-1);
    tracep->declBit(c+1077,"nodeOut_bready", false,-1);
    tracep->declBus(c+40,"error_0", false,-1, 1,0);
    tracep->declBus(c+41,"error_1", false,-1, 1,0);
    tracep->declBus(c+42,"error_2", false,-1, 1,0);
    tracep->declBus(c+43,"error_3", false,-1, 1,0);
    tracep->declBus(c+44,"error_4", false,-1, 1,0);
    tracep->declBus(c+45,"error_5", false,-1, 1,0);
    tracep->declBus(c+46,"error_6", false,-1, 1,0);
    tracep->declBus(c+47,"error_7", false,-1, 1,0);
    tracep->declBus(c+48,"error_8", false,-1, 1,0);
    tracep->declBus(c+49,"error_9", false,-1, 1,0);
    tracep->declBus(c+50,"error_10", false,-1, 1,0);
    tracep->declBus(c+51,"error_11", false,-1, 1,0);
    tracep->declBus(c+52,"error_12", false,-1, 1,0);
    tracep->declBus(c+53,"error_13", false,-1, 1,0);
    tracep->declBus(c+54,"error_14", false,-1, 1,0);
    tracep->declBus(c+55,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+30,"io_enq_ready", false,-1);
    tracep->declBit(c+900,"io_enq_valid", false,-1);
    tracep->declBus(c+901,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+902,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+903,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+904,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+905,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+911,"io_deq_valid", false,-1);
    tracep->declBus(c+885,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+919,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+920,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+887,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+921,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+56,"ram", false,-1, 48,0);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+911,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1085,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+747,"io_enq_ready", false,-1);
    tracep->declBit(c+889,"io_enq_valid", false,-1);
    tracep->declBus(c+890,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+891,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+892,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+893,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+894,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+922,"io_deq_valid", false,-1);
    tracep->declBus(c+876,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+923,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+924,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+878,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+925,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+59,"ram", false,-1, 48,0);
    tracep->declBit(c+748,"full", false,-1);
    tracep->declBit(c+922,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1087,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+29,"io_enq_ready", false,-1);
    tracep->declBit(c+895,"io_enq_valid", false,-1);
    tracep->declBus(c+896,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+897,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+898,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+926,"io_deq_valid", false,-1);
    tracep->declBus(c+880,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+881,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+421,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+61,"ram", false,-1, 36,0);
    tracep->declBit(c+63,"full", false,-1);
    tracep->declBit(c+926,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1089,"do_enq", false,-1);
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
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+1090,"auto_in_awready", false,-1);
    tracep->declBit(c+927,"auto_in_awvalid", false,-1);
    tracep->declBus(c+876,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1031,"auto_in_wready", false,-1);
    tracep->declBit(c+929,"auto_in_wvalid", false,-1);
    tracep->declBus(c+880,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1091,"auto_in_bready", false,-1);
    tracep->declBit(c+64,"auto_in_bvalid", false,-1);
    tracep->declBus(c+65,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1092,"auto_in_arready", false,-1);
    tracep->declBit(c+930,"auto_in_arvalid", false,-1);
    tracep->declBus(c+885,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1093,"auto_in_rready", false,-1);
    tracep->declBit(c+67,"auto_in_rvalid", false,-1);
    tracep->declBus(c+68,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1092,"nodeIn_arready", false,-1);
    tracep->declBit(c+1090,"nodeIn_awready", false,-1);
    tracep->declBit(c+932,"w_sel0", false,-1);
    tracep->declBit(c+64,"w_full", false,-1);
    tracep->declBus(c+65,"w_id", false,-1, 3,0);
    tracep->declBit(c+71,"r_sel1", false,-1);
    tracep->declBit(c+72,"w_sel1", false,-1);
    tracep->declBit(c+67,"r_full", false,-1);
    tracep->declBus(c+68,"r_id", false,-1, 3,0);
    tracep->declBit(c+1094,"ren", false,-1);
    tracep->declBit(c+73,"rdata_REG", false,-1);
    tracep->declBus(c+74,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+75,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+76,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+77,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+933,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1094,"R0_en", false,-1);
    tracep->declBit(c+1176,"R0_clk", false,-1);
    tracep->declBus(c+78,"R0_data", false,-1, 31,0);
    tracep->declBus(c+934,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1095,"W0_en", false,-1);
    tracep->declBit(c+1176,"W0_clk", false,-1);
    tracep->declBus(c+880,"W0_data", false,-1, 31,0);
    tracep->declBus(c+881,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+747,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+889,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+890,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+891,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+895,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+896,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+899,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1071,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+900,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1073,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+747,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+889,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+890,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+891,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+895,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+896,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+899,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1071,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+900,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+901,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1073,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+1096,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+935,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+876,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1076,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+909,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+880,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+910,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1077,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1078,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1097,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+936,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+885,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+906,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1073,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1090,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+927,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+876,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1031,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+929,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+880,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1091,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+64,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+65,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1092,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+930,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+885,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1093,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+67,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+69,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+70,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+937,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+938,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+79,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+939,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+885,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1204,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+874,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+875,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+876,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+874,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+879,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+880,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1067,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1068,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+19,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+882,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+884,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+885,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1069,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1070,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+20,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+422,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+882,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1078,"in_0_bvalid", false,-1);
    tracep->declBit(c+1073,"in_0_rvalid", false,-1);
    tracep->declBit(c+1098,"in_0_wready", false,-1);
    tracep->declBit(c+1099,"in_0_awready", false,-1);
    tracep->declBit(c+1097,"in_0_arready", false,-1);
    tracep->declBit(c+1096,"anonIn_awready", false,-1);
    tracep->declBit(c+941,"requestARIO_0_0", false,-1);
    tracep->declBit(c+942,"requestARIO_0_1", false,-1);
    tracep->declBit(c+943,"requestARIO_0_2", false,-1);
    tracep->declBit(c+944,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+945,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+946,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+947,"arSel", false,-1, 15,0);
    tracep->declBus(c+948,"awSel", false,-1, 15,0);
    tracep->declBus(c+1100,"rSel", false,-1, 15,0);
    tracep->declBus(c+1101,"bSel", false,-1, 15,0);
    tracep->declBit(c+83,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+84,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+85,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+86,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+87,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+88,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+89,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+90,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+91,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+92,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+93,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+109,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+110,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+111,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+112,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+113,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+114,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+115,"latched", false,-1);
    tracep->declBit(c+949,"in_0_awvalid", false,-1);
    tracep->declBit(c+950,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+951,"in_0_wvalid", false,-1);
    tracep->declBit(c+116,"idle_3", false,-1);
    tracep->declBit(c+1102,"anyValid", false,-1);
    tracep->declBus(c+1103,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+117,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1104,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1105,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1106,"prefixOR_1", false,-1);
    tracep->declBit(c+1107,"winner_3_1", false,-1);
    tracep->declBit(c+1108,"winner_3_2", false,-1);
    tracep->declBit(c+118,"state_3_0", false,-1);
    tracep->declBit(c+119,"state_3_1", false,-1);
    tracep->declBit(c+120,"state_3_2", false,-1);
    tracep->declBit(c+1109,"muxState_3_0", false,-1);
    tracep->declBit(c+1110,"muxState_3_1", false,-1);
    tracep->declBit(c+1111,"muxState_3_2", false,-1);
    tracep->declBit(c+121,"idle_4", false,-1);
    tracep->declBit(c+1112,"anyValid_1", false,-1);
    tracep->declBus(c+1113,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1114,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1115,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1116,"winner_4_0", false,-1);
    tracep->declBit(c+1117,"winner_4_2", false,-1);
    tracep->declBit(c+123,"state_4_0", false,-1);
    tracep->declBit(c+124,"state_4_2", false,-1);
    tracep->declBit(c+1118,"muxState_4_0", false,-1);
    tracep->declBit(c+1119,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+125,"io_enq_ready", false,-1);
    tracep->declBit(c+950,"io_enq_valid", false,-1);
    tracep->declBus(c+952,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1120,"io_deq_ready", false,-1);
    tracep->declBit(c+953,"io_deq_valid", false,-1);
    tracep->declBus(c+954,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+126,"wrap", false,-1);
    tracep->declBit(c+127,"wrap_1", false,-1);
    tracep->declBit(c+128,"maybe_full", false,-1);
    tracep->declBit(c+129,"ptr_match", false,-1);
    tracep->declBit(c+130,"empty", false,-1);
    tracep->declBit(c+131,"full", false,-1);
    tracep->declBit(c+953,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1121,"do_deq", false,-1);
    tracep->declBit(c+1122,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+127,"R0_addr", false,-1);
    tracep->declBit(c+1238,"R0_en", false,-1);
    tracep->declBit(c+1176,"R0_clk", false,-1);
    tracep->declBus(c+132,"R0_data", false,-1, 2,0);
    tracep->declBit(c+126,"W0_addr", false,-1);
    tracep->declBit(c+1122,"W0_en", false,-1);
    tracep->declBit(c+1176,"W0_clk", false,-1);
    tracep->declBus(c+952,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+133+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+1075,"auto_in_awready", false,-1);
    tracep->declBit(c+907,"auto_in_awvalid", false,-1);
    tracep->declBus(c+876,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+908,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1076,"auto_in_wready", false,-1);
    tracep->declBit(c+909,"auto_in_wvalid", false,-1);
    tracep->declBus(c+880,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+910,"auto_in_wlast", false,-1);
    tracep->declBit(c+1077,"auto_in_bready", false,-1);
    tracep->declBit(c+1078,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1080,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1081,"auto_in_arready", false,-1);
    tracep->declBit(c+911,"auto_in_arvalid", false,-1);
    tracep->declBus(c+885,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+912,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+906,"auto_in_rready", false,-1);
    tracep->declBit(c+1073,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+426,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1082,"auto_in_rlast", false,-1);
    tracep->declBit(c+1096,"auto_out_awready", false,-1);
    tracep->declBit(c+935,"auto_out_awvalid", false,-1);
    tracep->declBus(c+876,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1076,"auto_out_wready", false,-1);
    tracep->declBit(c+909,"auto_out_wvalid", false,-1);
    tracep->declBus(c+880,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+881,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+910,"auto_out_wlast", false,-1);
    tracep->declBit(c+1077,"auto_out_bready", false,-1);
    tracep->declBit(c+1078,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1079,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1097,"auto_out_arready", false,-1);
    tracep->declBit(c+936,"auto_out_arvalid", false,-1);
    tracep->declBus(c+885,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+886,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+887,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+906,"auto_out_rready", false,-1);
    tracep->declBit(c+1073,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+1032,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1123,"io_deq_ready", false,-1);
    tracep->declBit(c+136,"io_deq_valid", false,-1);
    tracep->declBit(c+137,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+137,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+138,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+1033,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1124,"io_deq_ready", false,-1);
    tracep->declBit(c+140,"io_deq_valid", false,-1);
    tracep->declBit(c+141,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+140,"full", false,-1);
    tracep->declBit(c+141,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+142,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+1034,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1125,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBit(c+145,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->declBit(c+145,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+146,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1035,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1126,"io_deq_ready", false,-1);
    tracep->declBit(c+148,"io_deq_valid", false,-1);
    tracep->declBit(c+149,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+148,"full", false,-1);
    tracep->declBit(c+149,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+150,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+1036,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1127,"io_deq_ready", false,-1);
    tracep->declBit(c+152,"io_deq_valid", false,-1);
    tracep->declBit(c+153,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->declBit(c+153,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+154,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+1037,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1128,"io_deq_ready", false,-1);
    tracep->declBit(c+156,"io_deq_valid", false,-1);
    tracep->declBit(c+157,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+156,"full", false,-1);
    tracep->declBit(c+157,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+158,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+1038,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1129,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBit(c+161,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->declBit(c+161,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+162,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1039,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1130,"io_deq_ready", false,-1);
    tracep->declBit(c+164,"io_deq_valid", false,-1);
    tracep->declBit(c+165,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+164,"full", false,-1);
    tracep->declBit(c+165,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+166,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+1040,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1131,"io_deq_ready", false,-1);
    tracep->declBit(c+168,"io_deq_valid", false,-1);
    tracep->declBit(c+169,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+168,"full", false,-1);
    tracep->declBit(c+169,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+170,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+1041,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1132,"io_deq_ready", false,-1);
    tracep->declBit(c+172,"io_deq_valid", false,-1);
    tracep->declBit(c+173,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+172,"full", false,-1);
    tracep->declBit(c+173,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+174,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+1042,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1133,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBit(c+177,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+176,"full", false,-1);
    tracep->declBit(c+177,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+178,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+1043,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1134,"io_deq_ready", false,-1);
    tracep->declBit(c+180,"io_deq_valid", false,-1);
    tracep->declBit(c+181,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+180,"full", false,-1);
    tracep->declBit(c+181,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+1044,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1135,"io_deq_ready", false,-1);
    tracep->declBit(c+184,"io_deq_valid", false,-1);
    tracep->declBit(c+185,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+184,"full", false,-1);
    tracep->declBit(c+185,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+186,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+1045,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1136,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBit(c+189,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->declBit(c+189,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+190,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+1046,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1137,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBit(c+193,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+193,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+1047,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1138,"io_deq_ready", false,-1);
    tracep->declBit(c+196,"io_deq_valid", false,-1);
    tracep->declBit(c+197,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBit(c+197,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+198,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+1048,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1139,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBit(c+201,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+201,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+202,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+1049,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1140,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBit(c+205,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->declBit(c+205,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+1050,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1141,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1051,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1142,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1052,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1143,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1053,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1144,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1054,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1145,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+1055,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1146,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1056,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1147,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+1057,"io_enq_valid", false,-1);
    tracep->declBit(c+908,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1148,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+1058,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1149,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+1059,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1150,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+1060,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1151,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+1061,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1152,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+1062,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1153,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1063,"io_enq_valid", false,-1);
    tracep->declBit(c+912,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1154,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+747,"auto_master_out_awready", false,-1);
    tracep->declBit(c+889,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+890,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+891,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_master_out_wready", false,-1);
    tracep->declBit(c+895,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+896,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+899,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1071,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1072,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+423,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_master_out_arready", false,-1);
    tracep->declBit(c+900,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+901,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1073,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1074,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1228,"io_interrupt", false,-1);
    tracep->declBit(c+747,"io_master_awready", false,-1);
    tracep->declBit(c+889,"io_master_awvalid", false,-1);
    tracep->declBus(c+890,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+891,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+895,"io_master_wvalid", false,-1);
    tracep->declBus(c+896,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"io_master_wlast", false,-1);
    tracep->declBit(c+899,"io_master_bready", false,-1);
    tracep->declBit(c+1071,"io_master_bvalid", false,-1);
    tracep->declBus(c+1072,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+900,"io_master_arvalid", false,-1);
    tracep->declBus(c+901,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+902,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"io_master_rready", false,-1);
    tracep->declBit(c+1073,"io_master_rvalid", false,-1);
    tracep->declBus(c+1074,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+1239,"io_slave_awready", false,-1);
    tracep->declBit(c+1228,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1240,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1241,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1242,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1243,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1244,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1245,"io_slave_wready", false,-1);
    tracep->declBit(c+1228,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1241,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1240,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1228,"io_slave_wlast", false,-1);
    tracep->declBit(c+1228,"io_slave_bready", false,-1);
    tracep->declBit(c+1246,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1247,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1248,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1249,"io_slave_arready", false,-1);
    tracep->declBit(c+1228,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1240,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1228,"io_slave_rready", false,-1);
    tracep->declBit(c+1250,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1251,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1252,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1253,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1254,"io_slave_rlast", false,-1);
    tracep->declBit(c+263,"DIFFTEST", false,-1);
    tracep->declBus(c+749,"pc", false,-1, 31,0);
    tracep->declBus(c+750,"dnpc", false,-1, 31,0);
    tracep->declBit(c+751,"PCU_VALID", false,-1);
    tracep->declBit(c+752,"IFU_READY", false,-1);
    tracep->declBus(c+753,"inst", false,-1, 31,0);
    tracep->declBit(c+754,"IFU_VALID", false,-1);
    tracep->declBit(c+755,"IDU_READY", false,-1);
    tracep->declBus(c+1255,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1255,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+756,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1205,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1240,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1242,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1240,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+830,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+831,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1243,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1244,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1228,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+824,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1228,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1206,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+832,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1228,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+757,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+825,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1155,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+758,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1256,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+759,"IDU_VALID", false,-1);
    tracep->declBit(c+760,"EXU_READY", false,-1);
    tracep->declBus(c+761,"op", false,-1, 6,0);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->declBus(c+762,"funct3", false,-1, 2,0);
    tracep->declBus(c+269,"rs1", false,-1, 4,0);
    tracep->declBus(c+270,"rs2", false,-1, 4,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBit(c+763,"sram_lsu_read", false,-1);
    tracep->declBit(c+764,"sram_lsu_write", false,-1);
    tracep->declBit(c+1207,"LSU_DONE", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+276,"res", false,-1, 31,0);
    tracep->declBit(c+765,"ls_valid", false,-1);
    tracep->declBit(c+766,"ls_wen", false,-1);
    tracep->declBus(c+767,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+768,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+769,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+770,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+771,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1242,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1242,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1257,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1257,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+277,"mepc", false,-1, 31,0);
    tracep->declBus(c+278,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+279,"mstatus", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"mcause", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+283,"mtvec", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+285,"gpr_wen", false,-1);
    tracep->declBit(c+286,"mepc_wen", false,-1);
    tracep->declBit(c+287,"mstatus_wen", false,-1);
    tracep->declBit(c+288,"mcause_wen", false,-1);
    tracep->declBit(c+289,"mtvec_wen", false,-1);
    tracep->declBus(c+686,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+687,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1208,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+688,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1209,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+826,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+689,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+690,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1258,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+833,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1259,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+834,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+691,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+692,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+693,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+694,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+695,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+827,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+696,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+955,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1156,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+697,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+698,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+828,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1157,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+699,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+700,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+956,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+957,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+958,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+772,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+959,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+960,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+961,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+962,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+773,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+963,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+774,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+964,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+965,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+966,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+967,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+775,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+776,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+968,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+777,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+969,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+778,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+779,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+970,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+971,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+780,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+781,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+972,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+973,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+782,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+783,"wbu_done", false,-1);
    tracep->declBit(c+263,"difftest", false,-1);
    tracep->declBus(c+290,"xrd", false,-1, 31,0);
    tracep->declBus(c+291,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+292,"rf_wen", false,-1);
    tracep->declBus(c+293,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+294,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+295,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+296,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+297,"mepc_en", false,-1);
    tracep->declBit(c+298,"mstatus_en", false,-1);
    tracep->declBit(c+299,"mcause_en", false,-1);
    tracep->declBit(c+300,"mtvec_en", false,-1);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    tracep->declBus(c+303,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+304,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+763,"sram_lsu_read", false,-1);
    tracep->declBit(c+764,"sram_lsu_write", false,-1);
    tracep->declBit(c+1207,"LSU_DONE", false,-1);
    tracep->declBit(c+759,"IDU_VALID", false,-1);
    tracep->declBit(c+760,"EXU_READY", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBus(c+761,"op", false,-1, 6,0);
    tracep->declBus(c+762,"funct3", false,-1, 2,0);
    tracep->declBus(c+271,"imm", false,-1, 31,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"shamt", false,-1, 4,0);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    tracep->declBus(c+276,"res_reg", false,-1, 31,0);
    tracep->declBit(c+765,"ls_valid", false,-1);
    tracep->declBit(c+766,"ls_wen", false,-1);
    tracep->declBus(c+767,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+398,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+768,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+769,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+770,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+771,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1242,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1242,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1257,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1257,"ls_arburst", false,-1, 1,0);
    tracep->declBus(c+686,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+749,"pc", false,-1, 31,0);
    tracep->declBus(c+750,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+277,"mepc", false,-1, 31,0);
    tracep->declBus(c+279,"mstatus", false,-1, 31,0);
    tracep->declBus(c+281,"mcause", false,-1, 31,0);
    tracep->declBus(c+283,"mtvec", false,-1, 31,0);
    tracep->declBus(c+278,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+285,"gpr_wen_reg", false,-1);
    tracep->declBit(c+286,"mepc_wen_reg", false,-1);
    tracep->declBit(c+287,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+288,"mcause_wen_reg", false,-1);
    tracep->declBit(c+289,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+760,"exu_ready", false,-1);
    tracep->declBit(c+274,"exu_valid", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1257,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1260,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1261,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+784,"state", false,-1, 1,0);
    tracep->declBus(c+1210,"next_state", false,-1, 1,0);
    tracep->declBus(c+305,"s_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+785,"a", false,-1, 31,0);
    tracep->declBus(c+786,"b", false,-1, 31,0);
    tracep->declBus(c+787,"res", false,-1, 31,0);
    tracep->declBus(c+788,"csr", false,-1, 31,0);
    tracep->declBus(c+789,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+790,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+789,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+399,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+789,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+974,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1262,"ls_wsize", false,-1, 2,0);
    tracep->declBus(c+1263,"ls_rsize", false,-1, 2,0);
    tracep->declBus(c+791,"dnpc", false,-1, 31,0);
    tracep->declBus(c+271,"offset", false,-1, 31,0);
    tracep->declBit(c+792,"jalen", false,-1);
    tracep->declBit(c+793,"jalren", false,-1);
    tracep->declBit(c+400,"beqen", false,-1);
    tracep->declBit(c+401,"bneen", false,-1);
    tracep->declBit(c+402,"blten", false,-1);
    tracep->declBit(c+403,"bgeen", false,-1);
    tracep->declBit(c+404,"bltuen", false,-1);
    tracep->declBit(c+405,"bgeuen", false,-1);
    tracep->declBit(c+794,"ecall_en", false,-1);
    tracep->declBit(c+406,"mret_en", false,-1);
    tracep->declBit(c+795,"gpr_wen", false,-1);
    tracep->declBit(c+796,"mepc_wen", false,-1);
    tracep->declBit(c+797,"mstatus_wen", false,-1);
    tracep->declBit(c+798,"mcause_wen", false,-1);
    tracep->declBit(c+799,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+753,"inst", false,-1, 31,0);
    tracep->declBit(c+754,"IFU_VALID", false,-1);
    tracep->declBit(c+755,"IDU_READY", false,-1);
    tracep->declBit(c+759,"IDU_VALID", false,-1);
    tracep->declBit(c+760,"EXU_READY", false,-1);
    tracep->declBus(c+761,"op_reg", false,-1, 6,0);
    tracep->declBus(c+268,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+762,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+269,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+270,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+271,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+272,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+273,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+800,"op", false,-1, 6,0);
    tracep->declBus(c+801,"rd", false,-1, 4,0);
    tracep->declBus(c+802,"funct3", false,-1, 2,0);
    tracep->declBus(c+803,"rs1", false,-1, 4,0);
    tracep->declBus(c+804,"rs2", false,-1, 4,0);
    tracep->declBus(c+805,"immI", false,-1, 31,0);
    tracep->declBus(c+806,"immU", false,-1, 31,0);
    tracep->declBus(c+807,"immS", false,-1, 31,0);
    tracep->declBus(c+808,"immB", false,-1, 31,0);
    tracep->declBus(c+809,"immJ", false,-1, 31,0);
    tracep->declBus(c+810,"imm", false,-1, 31,0);
    tracep->declBus(c+811,"funct7", false,-1, 6,0);
    tracep->declBus(c+812,"shamt", false,-1, 4,0);
    tracep->declBit(c+755,"idu_ready", false,-1);
    tracep->declBit(c+759,"idu_valid", false,-1);
    tracep->declBus(c+1264,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+813,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+749,"pc", false,-1, 31,0);
    tracep->declBus(c+753,"inst", false,-1, 31,0);
    tracep->declBit(c+751,"PCU_VALID", false,-1);
    tracep->declBit(c+752,"IFU_READY", false,-1);
    tracep->declBit(c+754,"IFU_VALID", false,-1);
    tracep->declBit(c+755,"IDU_READY", false,-1);
    tracep->declBit(c+783,"wbu_done", false,-1);
    tracep->declBit(c+824,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1228,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1240,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1255,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1242,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1243,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1244,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1206,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1228,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1255,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1240,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1256,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1228,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+832,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+830,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+825,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+757,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+756,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+758,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1155,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+831,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1205,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+752,"ifu_ready", false,-1);
    tracep->declBit(c+754,"ifu_valid", false,-1);
    tracep->declBus(c+1244,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1257,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1260,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1261,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+814,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+757,"axi_arvalid", false,-1);
    tracep->declBit(c+758,"axi_rready", false,-1);
    tracep->declBus(c+265,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+756,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+264,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1264,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+815,"state", false,-1);
    tracep->declBit(c+816,"sram_start", false,-1);
    tracep->declBus(c+817,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+763,"sram_lsu_read", false,-1);
    tracep->declBit(c+764,"sram_lsu_write", false,-1);
    tracep->declBit(c+1207,"LSU_DONE", false,-1);
    tracep->declBus(c+686,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+765,"valid", false,-1);
    tracep->declBit(c+766,"wen", false,-1);
    tracep->declBus(c+767,"waddr", false,-1, 31,0);
    tracep->declBus(c+398,"wdata", false,-1, 31,0);
    tracep->declBus(c+768,"raddr", false,-1, 31,0);
    tracep->declBus(c+769,"wmask", false,-1, 3,0);
    tracep->declBus(c+770,"awsize", false,-1, 2,0);
    tracep->declBus(c+771,"arsize", false,-1, 2,0);
    tracep->declBus(c+1242,"awlen", false,-1, 7,0);
    tracep->declBus(c+1242,"arlen", false,-1, 7,0);
    tracep->declBus(c+1257,"awburst", false,-1, 1,0);
    tracep->declBus(c+1257,"arburst", false,-1, 1,0);
    tracep->declBit(c+827,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+695,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1258,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+687,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+689,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+691,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+693,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+955,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+696,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1208,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+826,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+700,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+697,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1156,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+833,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+828,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+698,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1259,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+688,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+690,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+692,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+694,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+699,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1157,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+834,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1209,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1257,"READ", false,-1, 1,0);
    tracep->declBus(c+1260,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1261,"DONE", false,-1, 1,0);
    tracep->declBus(c+701,"state", false,-1, 1,0);
    tracep->declBit(c+695,"axi_awvalid", false,-1);
    tracep->declBit(c+696,"axi_wvalid", false,-1);
    tracep->declBus(c+1258,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+687,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+702,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+689,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+691,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+693,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+703,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+697,"axi_bready", false,-1);
    tracep->declBit(c+700,"axi_wlast", false,-1);
    tracep->declBit(c+698,"axi_arvalid", false,-1);
    tracep->declBit(c+699,"axi_rready", false,-1);
    tracep->declBus(c+1259,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+688,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+690,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+692,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+694,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+749,"pc", false,-1, 31,0);
    tracep->declBus(c+750,"dnpc", false,-1, 31,0);
    tracep->declBit(c+751,"PCU_VALID", false,-1);
    tracep->declBit(c+752,"IFU_READY", false,-1);
    tracep->declBit(c+751,"pcu_valid", false,-1);
    tracep->declBus(c+1264,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+818,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1266,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1267,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBus(c+290,"wdata", false,-1, 31,0);
    tracep->declBus(c+291,"waddr", false,-1, 4,0);
    tracep->declBit(c+292,"wen", false,-1);
    tracep->declBus(c+269,"raddr1", false,-1, 4,0);
    tracep->declBus(c+301,"r1", false,-1, 31,0);
    tracep->declBus(c+270,"raddr2", false,-1, 4,0);
    tracep->declBus(c+302,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+306+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+274,"EXU_VALID", false,-1);
    tracep->declBit(c+275,"WBU_READY", false,-1);
    tracep->declBit(c+783,"wbu_done", false,-1);
    tracep->declBit(c+263,"difftest", false,-1);
    tracep->declBus(c+290,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+276,"res", false,-1, 31,0);
    tracep->declBus(c+291,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->declBit(c+292,"wen_reg", false,-1);
    tracep->declBit(c+285,"gpr_wen", false,-1);
    tracep->declBus(c+278,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+280,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+282,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+284,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+293,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+294,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+295,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+296,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+286,"mepc_wen", false,-1);
    tracep->declBit(c+287,"mstatus_wen", false,-1);
    tracep->declBit(c+288,"mcause_wen", false,-1);
    tracep->declBit(c+289,"mtvec_wen", false,-1);
    tracep->declBit(c+297,"mepc_wen_reg", false,-1);
    tracep->declBit(c+298,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+299,"mcause_wen_reg", false,-1);
    tracep->declBit(c+300,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+276,"xrd", false,-1, 31,0);
    tracep->declBus(c+268,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+285,"o_rf_wen", false,-1);
    tracep->declBus(c+278,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+280,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+282,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+284,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+275,"wbu_ready", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1257,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1260,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1261,"NULL", false,-1, 1,0);
    tracep->declBus(c+819,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+824,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1228,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1240,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1255,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1242,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1243,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1244,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1206,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1228,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1255,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1240,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1256,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1228,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+832,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+830,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+407,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+825,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+757,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+265,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+756,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+264,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+266,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+267,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+758,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1155,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+831,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1205,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+408,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+827,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+695,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1258,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+687,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+689,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+691,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+693,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+955,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+696,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1208,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+826,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+700,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+697,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1156,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+833,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+410,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+828,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+698,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1259,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+688,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+690,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+692,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+694,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+699,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1157,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+834,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1209,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+411,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+412,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+747,"io_master_awready", false,-1);
    tracep->declBit(c+889,"io_master_awvalid", false,-1);
    tracep->declBus(c+890,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+891,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+892,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+893,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+894,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+29,"io_master_wready", false,-1);
    tracep->declBit(c+895,"io_master_wvalid", false,-1);
    tracep->declBus(c+896,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+897,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+898,"io_master_wlast", false,-1);
    tracep->declBit(c+899,"io_master_bready", false,-1);
    tracep->declBit(c+1071,"io_master_bvalid", false,-1);
    tracep->declBus(c+1072,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+423,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"io_master_arready", false,-1);
    tracep->declBit(c+900,"io_master_arvalid", false,-1);
    tracep->declBus(c+901,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+902,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+903,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+904,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+905,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+906,"io_master_rready", false,-1);
    tracep->declBit(c+1073,"io_master_rvalid", false,-1);
    tracep->declBus(c+1074,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+424,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1203,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+425,"io_master_rlast", false,-1);
    tracep->declBit(c+777,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+968,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+962,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+956,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+960,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+964,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+966,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+778,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+969,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+957,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+959,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+973,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+970,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+779,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+773,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+775,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+780,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+971,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+963,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+958,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+961,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+965,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+967,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+972,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+781,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+774,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+772,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+776,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+782,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+975,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+976,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+977,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1158,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+978,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+979,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+980,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+820,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+835,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+821,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+836,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+981,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+982,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+983,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+984,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+413,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+414,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+985,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+829,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+986,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+1211,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+837,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+987,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+988,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+989,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1159,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+990,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+991,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+415,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1244,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1257,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1260,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1261,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+822,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1268,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1269,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+992,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1270,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1241,"din", false,-1, 31,0);
    tracep->declBus(c+304,"dout", false,-1, 31,0);
    tracep->declBit(c+1228,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1241,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 31,0);
    tracep->declBus(c+281,"dout", false,-1, 31,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1241,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+297,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1271,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 31,0);
    tracep->declBus(c+279,"dout", false,-1, 31,0);
    tracep->declBit(c+298,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1241,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+296,"din", false,-1, 31,0);
    tracep->declBus(c+283,"dout", false,-1, 31,0);
    tracep->declBit(c+300,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1267,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1272,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+1241,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+1228,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+777,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+968,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+962,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+956,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+960,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+964,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+966,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+778,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+969,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+957,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+959,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+973,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+970,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+779,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+773,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+775,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+780,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+971,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+963,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+958,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+961,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+965,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+967,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+972,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+781,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+774,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+772,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+776,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+782,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+777,"axi_awready", false,-1);
    tracep->declBit(c+778,"axi_wready", false,-1);
    tracep->declBit(c+779,"axi_bvalid", false,-1);
    tracep->declBit(c+780,"axi_arready", false,-1);
    tracep->declBit(c+781,"axi_rvalid", false,-1);
    tracep->declBit(c+782,"axi_rlast", false,-1);
    tracep->declBus(c+775,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+776,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+773,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+774,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+772,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+823,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1273,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1274,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+338,"mtime", false,-1, 63,0);
    tracep->declBus(c+1212,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"io_d", false,-1);
    tracep->declBit(c+340,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"io_d", false,-1);
    tracep->declBit(c+340,"io_q", false,-1);
    tracep->declBit(c+340,"sync_0", false,-1);
    tracep->declBit(c+341,"sync_1", false,-1);
    tracep->declBit(c+342,"sync_2", false,-1);
    tracep->declBit(c+343,"sync_3", false,-1);
    tracep->declBit(c+344,"sync_4", false,-1);
    tracep->declBit(c+345,"sync_5", false,-1);
    tracep->declBit(c+346,"sync_6", false,-1);
    tracep->declBit(c+347,"sync_7", false,-1);
    tracep->declBit(c+348,"sync_8", false,-1);
    tracep->declBit(c+349,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+860,"auto_in_psel", false,-1);
    tracep->declBit(c+419,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+859,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"auto_in_pready", false,-1);
    tracep->declBit(c+1236,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1237,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1178,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1179,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1180,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1181,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1182,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1183,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1184,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1185,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1186,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1187,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+993,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+860,"in_psel", false,-1);
    tracep->declBit(c+419,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1235,"in_pready", false,-1);
    tracep->declBus(c+1237,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1236,"in_pslverr", false,-1);
    tracep->declBus(c+1178,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1179,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1180,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1181,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1182,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1183,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1184,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1185,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1186,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1187,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+858,"auto_in_psel", false,-1);
    tracep->declBit(c+418,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+859,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1232,"auto_in_pready", false,-1);
    tracep->declBit(c+1233,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1234,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1188,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1189,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+993,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+858,"in_psel", false,-1);
    tracep->declBit(c+418,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1232,"in_pready", false,-1);
    tracep->declBus(c+1234,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1233,"in_pslverr", false,-1);
    tracep->declBit(c+1188,"ps2_clk", false,-1);
    tracep->declBit(c+1189,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+937,"auto_in_awvalid", false,-1);
    tracep->declBit(c+938,"auto_in_wvalid", false,-1);
    tracep->declBit(c+79,"auto_in_arready", false,-1);
    tracep->declBit(c+939,"auto_in_arvalid", false,-1);
    tracep->declBus(c+885,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+940,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1204,"auto_in_rready", false,-1);
    tracep->declBit(c+80,"auto_in_rvalid", false,-1);
    tracep->declBus(c+81,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+80,"state", false,-1);
    tracep->declBus(c+82,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+81,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+994,"raddr", false,-1, 31,0);
    tracep->declBit(c+995,"ren", false,-1);
    tracep->declBus(c+996,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+861,"auto_in_psel", false,-1);
    tracep->declBit(c+420,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+849,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_in_pready", false,-1);
    tracep->declBit(c+1228,"auto_in_pslverr", false,-1);
    tracep->declBus(c+18,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1172,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1173,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1199,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+849,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+861,"in_psel", false,-1);
    tracep->declBit(c+420,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"in_pready", false,-1);
    tracep->declBus(c+18,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1228,"in_pslverr", false,-1);
    tracep->declBit(c+1172,"qspi_sck", false,-1);
    tracep->declBit(c+1173,"qspi_ce_n", false,-1);
    tracep->declBus(c+1199,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1199,"din", false,-1, 3,0);
    tracep->declBus(c+1174,"dout", false,-1, 3,0);
    tracep->declBus(c+1175,"douten", false,-1, 3,0);
    tracep->declBit(c+1213,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1176,"clk_i", false,-1);
    tracep->declBit(c+1177,"rst_i", false,-1);
    tracep->declBus(c+849,"adr_i", false,-1, 31,0);
    tracep->declBus(c+852,"dat_i", false,-1, 31,0);
    tracep->declBus(c+18,"dat_o", false,-1, 31,0);
    tracep->declBus(c+853,"sel_i", false,-1, 3,0);
    tracep->declBit(c+861,"cyc_i", false,-1);
    tracep->declBit(c+861,"stb_i", false,-1);
    tracep->declBit(c+1213,"ack_o", false,-1);
    tracep->declBit(c+851,"we_i", false,-1);
    tracep->declBit(c+1172,"sck", false,-1);
    tracep->declBit(c+1173,"ce_n", false,-1);
    tracep->declBus(c+1199,"din", false,-1, 3,0);
    tracep->declBus(c+1174,"dout", false,-1, 3,0);
    tracep->declBus(c+1175,"douten", false,-1, 3,0);
    tracep->declBus(c+1264,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+432,"mr_sck", false,-1);
    tracep->declBit(c+433,"mr_ce_n", false,-1);
    tracep->declBus(c+1199,"mr_din", false,-1, 3,0);
    tracep->declBus(c+434,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+435,"mr_doe", false,-1);
    tracep->declBit(c+436,"mw_sck", false,-1);
    tracep->declBit(c+437,"mw_ce_n", false,-1);
    tracep->declBus(c+1199,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1160,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+438,"mw_doe", false,-1);
    tracep->declBit(c+1161,"mr_rd", false,-1);
    tracep->declBit(c+439,"mr_done", false,-1);
    tracep->declBit(c+1162,"mw_wr", false,-1);
    tracep->declBit(c+1163,"mw_done", false,-1);
    tracep->declBit(c+861,"wb_valid", false,-1);
    tracep->declBit(c+997,"wb_we", false,-1);
    tracep->declBit(c+998,"wb_re", false,-1);
    tracep->declBit(c+440,"state", false,-1);
    tracep->declBit(c+1164,"nstate", false,-1);
    tracep->declBus(c+999,"size", false,-1, 2,0);
    tracep->declBus(c+1000,"byte0", false,-1, 7,0);
    tracep->declBus(c+1001,"byte1", false,-1, 7,0);
    tracep->declBus(c+1002,"byte2", false,-1, 7,0);
    tracep->declBus(c+1003,"byte3", false,-1, 7,0);
    tracep->declBus(c+1004,"wdata", false,-1, 31,0);
    tracep->declBit(c+646,"qpi_flag", false,-1);
    tracep->declBit(c+647,"qpi_sck", false,-1);
    tracep->declBit(c+648,"qpi_ce_n", false,-1);
    tracep->declBus(c+649,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+650,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+651,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1214,"rst_n", false,-1);
    tracep->declBus(c+1005,"addr", false,-1, 23,0);
    tracep->declBit(c+1161,"rd", false,-1);
    tracep->declBus(c+1275,"size", false,-1, 2,0);
    tracep->declBit(c+439,"done", false,-1);
    tracep->declBus(c+18,"line", false,-1, 31,0);
    tracep->declBit(c+432,"sck", false,-1);
    tracep->declBit(c+433,"ce_n", false,-1);
    tracep->declBus(c+1199,"din", false,-1, 3,0);
    tracep->declBus(c+434,"dout", false,-1, 3,0);
    tracep->declBit(c+435,"douten", false,-1);
    tracep->declBus(c+1264,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"READ", false,-1, 0,0);
    tracep->declBus(c+1276,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+441,"state", false,-1);
    tracep->declBit(c+1165,"nstate", false,-1);
    tracep->declBus(c+442,"counter", false,-1, 7,0);
    tracep->declBus(c+443,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+350+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1277,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+444,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1214,"rst_n", false,-1);
    tracep->declBus(c+1006,"addr", false,-1, 23,0);
    tracep->declBus(c+1004,"line", false,-1, 31,0);
    tracep->declBus(c+999,"size", false,-1, 2,0);
    tracep->declBit(c+1162,"wr", false,-1);
    tracep->declBit(c+1163,"done", false,-1);
    tracep->declBit(c+436,"sck", false,-1);
    tracep->declBit(c+437,"ce_n", false,-1);
    tracep->declBus(c+1199,"din", false,-1, 3,0);
    tracep->declBus(c+1160,"dout", false,-1, 3,0);
    tracep->declBit(c+438,"douten", false,-1);
    tracep->declBus(c+1264,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1265,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1007,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+445,"state", false,-1);
    tracep->declBit(c+1166,"nstate", false,-1);
    tracep->declBus(c+446,"counter", false,-1, 7,0);
    tracep->declBus(c+447,"saddr", false,-1, 23,0);
    tracep->declBus(c+1278,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+855,"auto_in_psel", false,-1);
    tracep->declBit(c+416,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+849,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+430,"auto_in_pready", false,-1);
    tracep->declBit(c+1228,"auto_in_pslverr", false,-1);
    tracep->declBus(c+431,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1200,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+429,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+716,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+717,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+718,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+719,"sdram_bundle_we", false,-1);
    tracep->declBus(c+720,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+721,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+722,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+744,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+849,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+855,"in_psel", false,-1);
    tracep->declBit(c+416,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+430,"in_pready", false,-1);
    tracep->declBus(c+431,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1228,"in_pslverr", false,-1);
    tracep->declBit(c+1200,"sdram_clk", false,-1);
    tracep->declBit(c+429,"sdram_cke", false,-1);
    tracep->declBit(c+716,"sdram_cs", false,-1);
    tracep->declBit(c+717,"sdram_ras", false,-1);
    tracep->declBit(c+718,"sdram_cas", false,-1);
    tracep->declBit(c+719,"sdram_we", false,-1);
    tracep->declBus(c+720,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+721,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+722,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+744,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+448,"sdram_dout_en", false,-1);
    tracep->declBus(c+449,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+354,"state", false,-1, 1,0);
    tracep->declBit(c+723,"req_accept", false,-1);
    tracep->declBit(c+1008,"is_read", false,-1);
    tracep->declBit(c+1009,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1176,"clk_i", false,-1);
    tracep->declBit(c+1177,"rst_i", false,-1);
    tracep->declBus(c+1010,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1008,"inport_rd_i", false,-1);
    tracep->declBus(c+1242,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+849,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+852,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+744,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+723,"inport_accept_o", false,-1);
    tracep->declBit(c+430,"inport_ack_o", false,-1);
    tracep->declBit(c+1228,"inport_error_o", false,-1);
    tracep->declBus(c+431,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1200,"sdram_clk_o", false,-1);
    tracep->declBit(c+429,"sdram_cke_o", false,-1);
    tracep->declBit(c+716,"sdram_cs_o", false,-1);
    tracep->declBit(c+717,"sdram_ras_o", false,-1);
    tracep->declBit(c+718,"sdram_cas_o", false,-1);
    tracep->declBit(c+719,"sdram_we_o", false,-1);
    tracep->declBus(c+722,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+720,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+721,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+449,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+448,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1279,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1280,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1281,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1282,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1282,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1283,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1283,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1285,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1286,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1287,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1283,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1288,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1289,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1290,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1291,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1292,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1293,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1294,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1240,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1295,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1283,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1240,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1294,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1293,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1289,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1291,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1290,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1292,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1288,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1296,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1297,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1298,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1298,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1267,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1298,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1282,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1282,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1299,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+849,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1010,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1008,"ram_rd_w", false,-1);
    tracep->declBit(c+723,"ram_accept_w", false,-1);
    tracep->declBus(c+852,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+431,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+430,"ram_ack_w", false,-1);
    tracep->declBit(c+1011,"ram_req_w", false,-1);
    tracep->declBus(c+724,"command_q", false,-1, 3,0);
    tracep->declBus(c+720,"addr_q", false,-1, 12,0);
    tracep->declBus(c+449,"data_q", false,-1, 31,0);
    tracep->declBit(c+450,"data_rd_en_q", false,-1);
    tracep->declBus(c+722,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+429,"cke_q", false,-1);
    tracep->declBus(c+721,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1300,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+725,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+744,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+451,"refresh_q", false,-1);
    tracep->declBus(c+726,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+452+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+727,"state_q", false,-1, 3,0);
    tracep->declBus(c+1167,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1168,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+456,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+457,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1012,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1013,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1014,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1283,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+458,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1169,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1301,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+728,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+459,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+431,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+460,"idx", false,-1, 31,0);
    tracep->declBus(c+461,"rd_q", false,-1, 3,0);
    tracep->declBit(c+430,"ack_q", false,-1);
    tracep->declArray(c+729,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+865,"auto_in_psel", false,-1);
    tracep->declBit(c+866,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+857,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_in_pready", false,-1);
    tracep->declBit(c+1228,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1066,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+427,"spi_bundle_sck", false,-1);
    tracep->declBus(c+428,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+715,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1198,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1302,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1303,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1304,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+1015,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+865,"in_psel", false,-1);
    tracep->declBit(c+866,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"in_pready", false,-1);
    tracep->declBus(c+1066,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1228,"in_pslverr", false,-1);
    tracep->declBit(c+427,"spi_sck", false,-1);
    tracep->declBus(c+428,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+715,"spi_mosi", false,-1);
    tracep->declBit(c+1198,"spi_miso", false,-1);
    tracep->declBit(c+462,"spi_irq_out", false,-1);
    tracep->declBus(c+1016,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1017,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1018,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1019,"wb_we_i", false,-1);
    tracep->declBit(c+1020,"wb_stb_i", false,-1);
    tracep->declBit(c+1021,"wb_cyc_i", false,-1);
    tracep->declBit(c+463,"wb_ack_o", false,-1);
    tracep->declBus(c+464,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1243,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1227,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1305,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1306,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1275,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1307,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1308,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1309,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+355,"state", false,-1, 2,0);
    tracep->declBus(c+356,"next_state", false,-1, 2,0);
    tracep->declBus(c+357,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+358,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+359,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+360,"flash_pwrite", false,-1);
    tracep->declBit(c+361,"flash_psel", false,-1);
    tracep->declBit(c+362,"flash_penable", false,-1);
    tracep->declBit(c+363,"flash_pready", false,-1);
    tracep->declBus(c+364,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1310,"Tp", false,-1, 31,0);
    tracep->declBit(c+1176,"wb_clk_i", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBus(c+1016,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1017,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+464,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1018,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1019,"wb_we_i", false,-1);
    tracep->declBit(c+1020,"wb_stb_i", false,-1);
    tracep->declBit(c+1021,"wb_cyc_i", false,-1);
    tracep->declBit(c+463,"wb_ack_o", false,-1);
    tracep->declBit(c+1228,"wb_err_o", false,-1);
    tracep->declBit(c+462,"wb_int_o", false,-1);
    tracep->declBus(c+428,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+427,"sclk_pad_o", false,-1);
    tracep->declBit(c+715,"mosi_pad_o", false,-1);
    tracep->declBit(c+1198,"miso_pad_i", false,-1);
    tracep->declBus(c+465,"divider", false,-1, 15,0);
    tracep->declBus(c+466,"ctrl", false,-1, 13,0);
    tracep->declBus(c+467,"ss", false,-1, 7,0);
    tracep->declBus(c+1170,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+468,"rx", false,-1, 127,0);
    tracep->declBit(c+472,"rx_negedge", false,-1);
    tracep->declBit(c+473,"tx_negedge", false,-1);
    tracep->declBus(c+474,"char_len", false,-1, 6,0);
    tracep->declBit(c+475,"go", false,-1);
    tracep->declBit(c+476,"lsb", false,-1);
    tracep->declBit(c+477,"ie", false,-1);
    tracep->declBit(c+478,"ass", false,-1);
    tracep->declBit(c+1022,"spi_divider_sel", false,-1);
    tracep->declBit(c+1023,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1024,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1025,"spi_ss_sel", false,-1);
    tracep->declBit(c+479,"tip", false,-1);
    tracep->declBit(c+480,"pos_edge", false,-1);
    tracep->declBit(c+481,"neg_edge", false,-1);
    tracep->declBit(c+482,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1310,"Tp", false,-1, 31,0);
    tracep->declBit(c+1176,"clk_in", false,-1);
    tracep->declBit(c+1177,"rst", false,-1);
    tracep->declBit(c+479,"enable", false,-1);
    tracep->declBit(c+475,"go", false,-1);
    tracep->declBit(c+482,"last_clk", false,-1);
    tracep->declBus(c+465,"divider", false,-1, 15,0);
    tracep->declBit(c+427,"clk_out", false,-1);
    tracep->declBit(c+480,"pos_edge", false,-1);
    tracep->declBit(c+481,"neg_edge", false,-1);
    tracep->declBus(c+483,"cnt", false,-1, 15,0);
    tracep->declBit(c+484,"cnt_zero", false,-1);
    tracep->declBit(c+485,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1310,"Tp", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"rst", false,-1);
    tracep->declBus(c+1026,"latch", false,-1, 3,0);
    tracep->declBus(c+1018,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+474,"len", false,-1, 6,0);
    tracep->declBit(c+476,"lsb", false,-1);
    tracep->declBit(c+475,"go", false,-1);
    tracep->declBit(c+480,"pos_edge", false,-1);
    tracep->declBit(c+481,"neg_edge", false,-1);
    tracep->declBit(c+472,"rx_negedge", false,-1);
    tracep->declBit(c+473,"tx_negedge", false,-1);
    tracep->declBit(c+479,"tip", false,-1);
    tracep->declBit(c+482,"last", false,-1);
    tracep->declBus(c+1017,"p_in", false,-1, 31,0);
    tracep->declArray(c+468,"p_out", false,-1, 127,0);
    tracep->declBit(c+427,"s_clk", false,-1);
    tracep->declBit(c+1198,"s_in", false,-1);
    tracep->declBit(c+715,"s_out", false,-1);
    tracep->declBus(c+486,"cnt", false,-1, 7,0);
    tracep->declArray(c+468,"data", false,-1, 127,0);
    tracep->declBus(c+487,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+488,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+489,"rx_clk", false,-1);
    tracep->declBit(c+490,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+862,"auto_in_psel", false,-1);
    tracep->declBit(c+863,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+859,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"auto_in_pready", false,-1);
    tracep->declBit(c+1228,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1030,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1196,"uart_rx", false,-1);
    tracep->declBit(c+1197,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+862,"in_psel", false,-1);
    tracep->declBit(c+863,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+864,"in_pready", false,-1);
    tracep->declBit(c+1228,"in_pslverr", false,-1);
    tracep->declBus(c+993,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+1030,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"uart_rx", false,-1);
    tracep->declBit(c+1197,"uart_tx", false,-1);
    tracep->declBit(c+491,"rtsn", false,-1);
    tracep->declBit(c+1228,"ctsn", false,-1);
    tracep->declBit(c+492,"dtr_pad_o", false,-1);
    tracep->declBit(c+1228,"dsr_pad_i", false,-1);
    tracep->declBit(c+1228,"ri_pad_i", false,-1);
    tracep->declBit(c+1228,"dcd_pad_i", false,-1);
    tracep->declBit(c+493,"interrupt", false,-1);
    tracep->declBit(c+1215,"reg_we", false,-1);
    tracep->declBit(c+1216,"reg_re", false,-1);
    tracep->declBus(c+1027,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1028,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+365,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1171,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+494,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBus(c+1027,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1029,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1171,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1215,"wb_we_i", false,-1);
    tracep->declBit(c+1216,"wb_re_i", false,-1);
    tracep->declBit(c+1197,"stx_pad_o", false,-1);
    tracep->declBit(c+1196,"srx_pad_i", false,-1);
    tracep->declBus(c+1296,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+494,"rts_pad_o", false,-1);
    tracep->declBit(c+492,"dtr_pad_o", false,-1);
    tracep->declBit(c+493,"int_o", false,-1);
    tracep->declBit(c+495,"enable", false,-1);
    tracep->declBit(c+496,"srx_pad", false,-1);
    tracep->declBus(c+497,"ier", false,-1, 3,0);
    tracep->declBus(c+498,"iir", false,-1, 3,0);
    tracep->declBus(c+499,"fcr", false,-1, 1,0);
    tracep->declBus(c+500,"mcr", false,-1, 4,0);
    tracep->declBus(c+501,"lcr", false,-1, 7,0);
    tracep->declBus(c+502,"msr", false,-1, 7,0);
    tracep->declBus(c+503,"dl", false,-1, 15,0);
    tracep->declBus(c+504,"scratch", false,-1, 7,0);
    tracep->declBit(c+505,"start_dlc", false,-1);
    tracep->declBit(c+506,"lsr_mask_d", false,-1);
    tracep->declBit(c+507,"msi_reset", false,-1);
    tracep->declBus(c+508,"dlc", false,-1, 15,0);
    tracep->declBus(c+509,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+510,"rx_reset", false,-1);
    tracep->declBit(c+511,"tx_reset", false,-1);
    tracep->declBit(c+512,"dlab", false,-1);
    tracep->declBit(c+1238,"cts_pad_i", false,-1);
    tracep->declBit(c+1228,"dsr_pad_i", false,-1);
    tracep->declBit(c+1228,"ri_pad_i", false,-1);
    tracep->declBit(c+1228,"dcd_pad_i", false,-1);
    tracep->declBit(c+513,"loopback", false,-1);
    tracep->declBit(c+1228,"cts", false,-1);
    tracep->declBit(c+1238,"dsr", false,-1);
    tracep->declBit(c+1238,"ri", false,-1);
    tracep->declBit(c+1238,"dcd", false,-1);
    tracep->declBit(c+514,"cts_c", false,-1);
    tracep->declBit(c+515,"dsr_c", false,-1);
    tracep->declBit(c+516,"ri_c", false,-1);
    tracep->declBit(c+517,"dcd_c", false,-1);
    tracep->declBus(c+518,"lsr", false,-1, 7,0);
    tracep->declBit(c+519,"lsr0", false,-1);
    tracep->declBit(c+520,"lsr1", false,-1);
    tracep->declBit(c+521,"lsr2", false,-1);
    tracep->declBit(c+522,"lsr3", false,-1);
    tracep->declBit(c+523,"lsr4", false,-1);
    tracep->declBit(c+524,"lsr5", false,-1);
    tracep->declBit(c+525,"lsr6", false,-1);
    tracep->declBit(c+526,"lsr7", false,-1);
    tracep->declBit(c+527,"lsr0r", false,-1);
    tracep->declBit(c+528,"lsr1r", false,-1);
    tracep->declBit(c+529,"lsr2r", false,-1);
    tracep->declBit(c+530,"lsr3r", false,-1);
    tracep->declBit(c+531,"lsr4r", false,-1);
    tracep->declBit(c+532,"lsr5r", false,-1);
    tracep->declBit(c+533,"lsr6r", false,-1);
    tracep->declBit(c+534,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+535,"rls_int", false,-1);
    tracep->declBit(c+536,"rda_int", false,-1);
    tracep->declBit(c+537,"ti_int", false,-1);
    tracep->declBit(c+538,"thre_int", false,-1);
    tracep->declBit(c+539,"ms_int", false,-1);
    tracep->declBit(c+540,"tf_push", false,-1);
    tracep->declBit(c+541,"rf_pop", false,-1);
    tracep->declBus(c+1217,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+542,"rf_error_bit", false,-1);
    tracep->declBit(c+520,"rf_overrun", false,-1);
    tracep->declBit(c+543,"rf_push_pulse", false,-1);
    tracep->declBus(c+544,"rf_count", false,-1, 4,0);
    tracep->declBus(c+545,"tf_count", false,-1, 4,0);
    tracep->declBus(c+546,"tstate", false,-1, 2,0);
    tracep->declBus(c+547,"rstate", false,-1, 3,0);
    tracep->declBus(c+548,"counter_t", false,-1, 9,0);
    tracep->declBit(c+549,"thre_set_en", false,-1);
    tracep->declBus(c+550,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+551,"block_value", false,-1, 7,0);
    tracep->declBit(c+552,"serial_out", false,-1);
    tracep->declBit(c+553,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+554,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+555,"lsr0_d", false,-1);
    tracep->declBit(c+556,"lsr1_d", false,-1);
    tracep->declBit(c+557,"lsr2_d", false,-1);
    tracep->declBit(c+558,"lsr3_d", false,-1);
    tracep->declBit(c+559,"lsr4_d", false,-1);
    tracep->declBit(c+560,"lsr5_d", false,-1);
    tracep->declBit(c+561,"lsr6_d", false,-1);
    tracep->declBit(c+562,"lsr7_d", false,-1);
    tracep->declBit(c+563,"rls_int_d", false,-1);
    tracep->declBit(c+564,"thre_int_d", false,-1);
    tracep->declBit(c+565,"ms_int_d", false,-1);
    tracep->declBit(c+566,"ti_int_d", false,-1);
    tracep->declBit(c+567,"rda_int_d", false,-1);
    tracep->declBit(c+568,"rls_int_rise", false,-1);
    tracep->declBit(c+569,"thre_int_rise", false,-1);
    tracep->declBit(c+570,"ms_int_rise", false,-1);
    tracep->declBit(c+571,"ti_int_rise", false,-1);
    tracep->declBit(c+572,"rda_int_rise", false,-1);
    tracep->declBit(c+573,"rls_int_pnd", false,-1);
    tracep->declBit(c+574,"rda_int_pnd", false,-1);
    tracep->declBit(c+575,"thre_int_pnd", false,-1);
    tracep->declBit(c+576,"ms_int_pnd", false,-1);
    tracep->declBit(c+577,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1310,"Tp", false,-1, 31,0);
    tracep->declBus(c+1310,"width", false,-1, 31,0);
    tracep->declBus(c+1265,"init_value", false,-1, 0,0);
    tracep->declBit(c+1177,"rst_i", false,-1);
    tracep->declBit(c+1176,"clk_i", false,-1);
    tracep->declBit(c+1228,"stage1_rst_i", false,-1);
    tracep->declBit(c+1238,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1196,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+496,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+578,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBus(c+501,"lcr", false,-1, 7,0);
    tracep->declBit(c+541,"rf_pop", false,-1);
    tracep->declBit(c+553,"srx_pad_i", false,-1);
    tracep->declBit(c+495,"enable", false,-1);
    tracep->declBit(c+510,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+548,"counter_t", false,-1, 9,0);
    tracep->declBus(c+544,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1217,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+520,"rf_overrun", false,-1);
    tracep->declBit(c+542,"rf_error_bit", false,-1);
    tracep->declBus(c+547,"rstate", false,-1, 3,0);
    tracep->declBit(c+543,"rf_push_pulse", false,-1);
    tracep->declBus(c+579,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+580,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+581,"rshift", false,-1, 7,0);
    tracep->declBit(c+582,"rparity", false,-1);
    tracep->declBit(c+583,"rparity_error", false,-1);
    tracep->declBit(c+584,"rframing_error", false,-1);
    tracep->declBit(c+585,"rbit_in", false,-1);
    tracep->declBit(c+586,"rparity_xor", false,-1);
    tracep->declBus(c+587,"counter_b", false,-1, 7,0);
    tracep->declBit(c+588,"rf_push_q", false,-1);
    tracep->declBus(c+589,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+590,"rf_push", false,-1);
    tracep->declBit(c+591,"break_error", false,-1);
    tracep->declBit(c+592,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+593,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+594,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+595,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1294,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1293,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1289,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1291,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1290,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1292,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1288,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1296,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1297,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1311,"sr_push", false,-1, 3,0);
    tracep->declBus(c+596,"toc_value", false,-1, 9,0);
    tracep->declBus(c+597,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1312,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1313,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1283,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1266,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBit(c+543,"push", false,-1);
    tracep->declBit(c+541,"pop", false,-1);
    tracep->declBus(c+589,"data_in", false,-1, 10,0);
    tracep->declBit(c+510,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1217,"data_out", false,-1, 10,0);
    tracep->declBit(c+520,"overrun", false,-1);
    tracep->declBus(c+544,"count", false,-1, 4,0);
    tracep->declBit(c+542,"error_bit", false,-1);
    tracep->declBus(c+1218,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+598+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+614,"top", false,-1, 3,0);
    tracep->declBus(c+615,"bottom", false,-1, 3,0);
    tracep->declBus(c+616,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+617,"word0", false,-1, 2,0);
    tracep->declBus(c+618,"word1", false,-1, 2,0);
    tracep->declBus(c+619,"word2", false,-1, 2,0);
    tracep->declBus(c+620,"word3", false,-1, 2,0);
    tracep->declBus(c+621,"word4", false,-1, 2,0);
    tracep->declBus(c+622,"word5", false,-1, 2,0);
    tracep->declBus(c+623,"word6", false,-1, 2,0);
    tracep->declBus(c+624,"word7", false,-1, 2,0);
    tracep->declBus(c+625,"word8", false,-1, 2,0);
    tracep->declBus(c+626,"word9", false,-1, 2,0);
    tracep->declBus(c+627,"word10", false,-1, 2,0);
    tracep->declBus(c+628,"word11", false,-1, 2,0);
    tracep->declBus(c+629,"word12", false,-1, 2,0);
    tracep->declBus(c+630,"word13", false,-1, 2,0);
    tracep->declBus(c+631,"word14", false,-1, 2,0);
    tracep->declBus(c+632,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1283,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1304,"data_width", false,-1, 31,0);
    tracep->declBus(c+1313,"depth", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+543,"we", false,-1);
    tracep->declBus(c+614,"a", false,-1, 3,0);
    tracep->declBus(c+615,"dpra", false,-1, 3,0);
    tracep->declBus(c+633,"di", false,-1, 7,0);
    tracep->declBus(c+1218,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+366+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBus(c+501,"lcr", false,-1, 7,0);
    tracep->declBit(c+540,"tf_push", false,-1);
    tracep->declBus(c+1029,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+495,"enable", false,-1);
    tracep->declBit(c+511,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+552,"stx_pad_o", false,-1);
    tracep->declBus(c+546,"tstate", false,-1, 2,0);
    tracep->declBus(c+545,"tf_count", false,-1, 4,0);
    tracep->declBus(c+634,"counter", false,-1, 4,0);
    tracep->declBus(c+635,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+636,"shift_out", false,-1, 6,0);
    tracep->declBit(c+637,"stx_o_tmp", false,-1);
    tracep->declBit(c+638,"parity_xor", false,-1);
    tracep->declBit(c+639,"tf_pop", false,-1);
    tracep->declBit(c+640,"bit_out", false,-1);
    tracep->declBus(c+1029,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1219,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+641,"tf_overrun", false,-1);
    tracep->declBus(c+1243,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1227,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1305,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1306,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1275,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1307,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1304,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1313,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1283,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1266,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+1177,"wb_rst_i", false,-1);
    tracep->declBit(c+540,"push", false,-1);
    tracep->declBit(c+639,"pop", false,-1);
    tracep->declBus(c+1029,"data_in", false,-1, 7,0);
    tracep->declBit(c+511,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1219,"data_out", false,-1, 7,0);
    tracep->declBit(c+641,"overrun", false,-1);
    tracep->declBus(c+545,"count", false,-1, 4,0);
    tracep->declBus(c+642,"top", false,-1, 3,0);
    tracep->declBus(c+643,"bottom", false,-1, 3,0);
    tracep->declBus(c+644,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1283,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1304,"data_width", false,-1, 31,0);
    tracep->declBus(c+1313,"depth", false,-1, 31,0);
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+540,"we", false,-1);
    tracep->declBus(c+642,"a", false,-1, 3,0);
    tracep->declBus(c+643,"dpra", false,-1, 3,0);
    tracep->declBus(c+1029,"di", false,-1, 7,0);
    tracep->declBus(c+1219,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+382+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBit(c+856,"auto_in_psel", false,-1);
    tracep->declBit(c+417,"auto_in_penable", false,-1);
    tracep->declBit(c+851,"auto_in_pwrite", false,-1);
    tracep->declBus(c+857,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1227,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+852,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1229,"auto_in_pready", false,-1);
    tracep->declBit(c+1230,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1231,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1190,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1191,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1192,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1193,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1194,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1195,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1176,"clock", false,-1);
    tracep->declBit(c+1177,"reset", false,-1);
    tracep->declBus(c+1015,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+856,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+1227,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+851,"in_pwrite", false,-1);
    tracep->declBus(c+852,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+853,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1229,"in_pready", false,-1);
    tracep->declBus(c+1231,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1230,"in_pslverr", false,-1);
    tracep->declBus(c+1190,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1191,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1192,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1193,"vga_hsync", false,-1);
    tracep->declBit(c+1194,"vga_vsync", false,-1);
    tracep->declBit(c+1195,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+732,"ss", false,-1);
    tracep->declBit(c+715,"mosi", false,-1);
    tracep->declBit(c+710,"miso", false,-1);
    tracep->declBus(c+711,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+712,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+713,"counter", false,-1, 2,0);
    tracep->declBit(c+714,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+427,"sck", false,-1);
    tracep->declBit(c+645,"ss", false,-1);
    tracep->declBit(c+715,"mosi", false,-1);
    tracep->declBit(c+1220,"miso", false,-1);
    tracep->declBit(c+645,"reset", false,-1);
    tracep->declBus(c+704,"state", false,-1, 2,0);
    tracep->declBus(c+705,"counter", false,-1, 7,0);
    tracep->declBus(c+706,"cmd", false,-1, 7,0);
    tracep->declBus(c+707,"addr", false,-1, 23,0);
    tracep->declBus(c+708,"data", false,-1, 31,0);
    tracep->declBit(c+709,"ren", false,-1);
    tracep->declBus(c+1221,"rdata", false,-1, 31,0);
    tracep->declBus(c+1222,"raddr", false,-1, 31,0);
    tracep->declBus(c+1223,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+427,"clock", false,-1);
    tracep->declBit(c+709,"valid", false,-1);
    tracep->declBus(c+706,"cmd", false,-1, 7,0);
    tracep->declBus(c+1222,"addr", false,-1, 31,0);
    tracep->declBus(c+1221,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1172,"sck", false,-1);
    tracep->declBit(c+1173,"ce_n", false,-1);
    tracep->declBus(c+1199,"dio", false,-1, 3,0);
    tracep->declBit(c+1173,"reset", false,-1);
    tracep->declBus(c+13,"state", false,-1, 3,0);
    tracep->declBus(c+14,"counter", false,-1, 7,0);
    tracep->declBus(c+838,"cmd", false,-1, 7,0);
    tracep->declBus(c+839,"addr", false,-1, 23,0);
    tracep->declBus(c+15,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+840+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1224,"qpi_flag", false,-1);
    tracep->declBus(c+16,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1225,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+844,"ren", false,-1);
    tracep->declBit(c+845,"wen", false,-1);
    tracep->declBus(c+846,"len", false,-1, 7,0);
    tracep->declBus(c+1226,"rdata", false,-1, 31,0);
    tracep->declBus(c+847,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1172,"clock", false,-1);
    tracep->declBit(c+844,"ren", false,-1);
    tracep->declBit(c+845,"wen", false,-1);
    tracep->declBus(c+838,"cmd", false,-1, 7,0);
    tracep->declBus(c+847,"saddr", false,-1, 31,0);
    tracep->declBus(c+1226,"rdata", false,-1, 31,0);
    tracep->declBus(c+848,"wdata", false,-1, 31,0);
    tracep->declBus(c+846,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1200,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+716,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+720,"a", false,-1, 12,0);
    tracep->declBus(c+721,"ba", false,-1, 1,0);
    tracep->declBus(c+733,"dqm", false,-1, 1,0);
    tracep->declBus(c+745,"dq", false,-1, 15,0);
    tracep->declBit(c+734,"reset", false,-1);
    tracep->declBus(c+652,"state", false,-1, 2,0);
    tracep->declBus(c+653,"counter", false,-1, 7,0);
    tracep->declBus(c+654,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1314,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+655,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+656,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+735,"nop", false,-1);
    tracep->declBit(c+736,"active", false,-1);
    tracep->declBit(c+737,"precharge", false,-1);
    tracep->declBit(c+738,"read", false,-1);
    tracep->declBit(c+739,"write", false,-1);
    tracep->declBit(c+740,"burstterm", false,-1);
    tracep->declBit(c+741,"autorefresh", false,-1);
    tracep->declBit(c+742,"mode", false,-1);
    tracep->declBus(c+657,"test", false,-1, 15,0);
    tracep->declBit(c+658,"write_burst_mode", false,-1);
    tracep->declBus(c+659,"op_mode", false,-1, 1,0);
    tracep->declBus(c+660,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+661,"burst_type", false,-1);
    tracep->declBus(c+662,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+663,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+664,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+665,"bank", false,-1, 1,0);
    tracep->declBus(c+666,"row", false,-1, 12,0);
    tracep->declBus(c+667,"column", false,-1, 8,0);
    tracep->declBus(c+668,"dqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1200,"clk", false,-1);
    tracep->declBit(c+429,"cke", false,-1);
    tracep->declBit(c+716,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+720,"a", false,-1, 12,0);
    tracep->declBus(c+721,"ba", false,-1, 1,0);
    tracep->declBus(c+743,"dqm", false,-1, 1,0);
    tracep->declBus(c+746,"dq", false,-1, 15,0);
    tracep->declBit(c+734,"reset", false,-1);
    tracep->declBus(c+669,"state", false,-1, 2,0);
    tracep->declBus(c+670,"counter", false,-1, 7,0);
    tracep->declBus(c+671,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1315,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+672,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+673,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+735,"nop", false,-1);
    tracep->declBit(c+736,"active", false,-1);
    tracep->declBit(c+737,"precharge", false,-1);
    tracep->declBit(c+738,"read", false,-1);
    tracep->declBit(c+739,"write", false,-1);
    tracep->declBit(c+740,"burstterm", false,-1);
    tracep->declBit(c+741,"autorefresh", false,-1);
    tracep->declBit(c+742,"mode", false,-1);
    tracep->declBus(c+674,"test", false,-1, 15,0);
    tracep->declBit(c+675,"write_burst_mode", false,-1);
    tracep->declBus(c+676,"op_mode", false,-1, 1,0);
    tracep->declBus(c+677,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+678,"burst_type", false,-1);
    tracep->declBus(c+679,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+680,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+681,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+682,"bank", false,-1, 1,0);
    tracep->declBus(c+683,"row", false,-1, 12,0);
    tracep->declBus(c+684,"column", false,-1, 8,0);
    tracep->declBus(c+685,"dqm_reg", false,-1, 1,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullCData(oldp+16,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+17,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+18,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+31,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+69,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata_reg),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullQData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+398,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                       << 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                  << 0x10U)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                   << 0x18U)
                                                   : 0U))))),32);
    bufp->fullIData(oldp+399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+400,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+401,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+404,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+405,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+406,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+407,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
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
                                                    << 1U))))))
                                : 0U)),2);
    bufp->fullCData(oldp+408,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+409,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
    bufp->fullCData(oldp+410,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
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
                                                    << 1U))))))
                                : 0U)),2);
    bufp->fullCData(oldp+411,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+412,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                                 : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
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
    bufp->fullCData(oldp+413,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
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
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U))))))),2);
    bufp->fullCData(oldp+414,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U)))),2);
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast)
                              : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+420,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+421,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullIData(oldp+422,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+423,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+424,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+425,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+426,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+434,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+435,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+439,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+444,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+472,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+473,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+474,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+478,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+482,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+484,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+485,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+487,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+491,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+492,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+512,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+513,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+514,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+515,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+516,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+517,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+518,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+521,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+522,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+523,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+542,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+549,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+568,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+569,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+570,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+571,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+572,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+591,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+592,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+593,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+594,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+595,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+597,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+616,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+633,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+644,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+655,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+656,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+657,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                              [0x84U]),16);
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+659,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+660,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+661,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+662,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+664,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+667,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+671,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+672,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+673,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+674,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                              [0x84U]),16);
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+676,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+677,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+678,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+679,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+681,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+683,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+684,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
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
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+709,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+717,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+718,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+719,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+723,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+733,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+737,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+743,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+744,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+745,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullBit(oldp+747,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+766,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+769,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 0xfU
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                     & (2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                     ? 0xeU
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                       & (1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                        & (2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                          & (1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                           & (2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                           ? 8U
                                                           : 0U))))))))))))),4);
    bufp->fullCData(oldp+770,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+771,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf0b4f3eb__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf2be8e81__0))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+790,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+792,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+793,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+795,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))))))))))));
    bufp->fullBit(oldp+796,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+798,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+800,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+801,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+802,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+803,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+804,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+805,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+806,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+807,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+808,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+809,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+811,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+812,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullBit(oldp+824,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+825,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullCData(oldp+826,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                    ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                             ? 3U : 
                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                              ? 0xfU
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                   ? 6U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                    ? 0xeU
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                      & (1U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                      ? 0xcU
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0) 
                                                       & (2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                       ? 0xcU
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                         & (1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                         ? 8U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0) 
                                                          & (2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                          ? 8U
                                                          : 0U))))))))))))
                                : 0U)),4);
    bufp->fullBit(oldp+827,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+828,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+829,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullCData(oldp+830,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+831,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullBit(oldp+832,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullCData(oldp+833,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+834,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))),4);
    bufp->fullCData(oldp+836,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))),4);
    bufp->fullBit(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+848,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+857,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+859,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+860,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+864,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+865,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+889,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1c04844a__0))));
    bufp->fullCData(oldp+890,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2bd8639b__0))),4);
    bufp->fullIData(oldp+891,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7ada923a__0)),32);
    bufp->fullCData(oldp+892,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1eafd397__0))),8);
    bufp->fullCData(oldp+893,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec826d8a__0))),3);
    bufp->fullCData(oldp+894,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h320182db__0))),2);
    bufp->fullBit(oldp+895,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_head94601__0))));
    bufp->fullIData(oldp+896,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h59611efd__0)),32);
    bufp->fullCData(oldp+897,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h786a3074__0))),4);
    bufp->fullBit(oldp+898,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))));
    bufp->fullBit(oldp+899,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec051416__0))));
    bufp->fullBit(oldp+900,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0))));
    bufp->fullCData(oldp+901,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h4f065cc1__0))),4);
    bufp->fullIData(oldp+902,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0)),32);
    bufp->fullCData(oldp+903,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hd21f5624__0))),8);
    bufp->fullCData(oldp+904,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3da053fd__0))),3);
    bufp->fullCData(oldp+905,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he9f6ab13__0))),2);
    bufp->fullBit(oldp+906,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0))));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+908,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+910,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+912,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+928,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+931,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+932,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+933,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+934,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+940,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+945,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+947,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+948,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+956,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h7ada923a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+957,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h59611efd__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+958,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+959,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h786a3074__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+960,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1eafd397__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+961,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hd21f5624__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+962,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2bd8639b__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+963,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h4f065cc1__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+964,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec826d8a__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+965,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h3da053fd__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+966,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h320182db__0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+967,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he9f6ab13__0) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+968,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1c04844a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+969,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_head94601__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+970,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hec051416__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+971,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+973,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)) 
                                   >> 1U))));
    bufp->fullIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__s_rdata),32);
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+993,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+994,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1002,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1003,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1004,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1005,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1006,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1007,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1012,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1013,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1014,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1015,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1023,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1025,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1027,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1031,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1033,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1034,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1035,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1036,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1037,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1038,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1039,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1040,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1041,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1042,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1043,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1044,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1045,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1046,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1047,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1048,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1049,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1050,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1051,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1052,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1053,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1054,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1055,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1056,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1058,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1059,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1060,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1061,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1062,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1063,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1071,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1100,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1101,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1124,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1125,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1126,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1127,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1128,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1129,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1130,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1132,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1133,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1134,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1135,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1136,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1137,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1138,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1139,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1140,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1141,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1142,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1143,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1144,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1145,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1146,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1147,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1149,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1150,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1151,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1152,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1153,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1154,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1176,(vlSelf->clock));
    bufp->fullBit(oldp+1177,(vlSelf->reset));
    bufp->fullSData(oldp+1178,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1179,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1180,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1181,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1182,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1183,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1184,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1185,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1186,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1187,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1188,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1189,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1190,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1191,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1192,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1193,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1194,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1195,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1196,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1197,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1198,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1200,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1201,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1203,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1204,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hdd5ee87f__0) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1205,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1206,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1208,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h37329a91__0)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h512dd90d__0)
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                            << 8U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0991a045__0)
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                             << 0x10U)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h378fd2a4__0)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
                                                 << 0x18U)
                                              : 0U))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1209,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1211,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                     : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+1212,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb4da2811__0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready)))) 
                                 & ((- (IData)((0xa0000048U 
                                                == (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                                            >> 0x20U))))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                | ((- (IData)((0xa000004cU 
                                               == (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h554e37af__0 
                                                           >> 0x20U))))) 
                                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                              >> 0x20U))))),32);
    bufp->fullBit(oldp+1213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1214,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1217,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1220,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1222,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1225,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1227,(1U),3);
    bufp->fullBit(oldp+1228,(0U));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1238,(1U));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1240,(0U),4);
    bufp->fullIData(oldp+1241,(0U),32);
    bufp->fullCData(oldp+1242,(0U),8);
    bufp->fullCData(oldp+1243,(0U),3);
    bufp->fullCData(oldp+1244,(0U),2);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1255,(0U),32);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1257,(1U),2);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1260,(2U),2);
    bufp->fullCData(oldp+1261,(3U),2);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_wsize),3);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rsize),3);
    bufp->fullBit(oldp+1264,(0U));
    bufp->fullBit(oldp+1265,(1U));
    bufp->fullIData(oldp+1266,(5U),32);
    bufp->fullIData(oldp+1267,(0x20U),32);
    bufp->fullIData(oldp+1268,(0x2000000U),32);
    bufp->fullIData(oldp+1269,(0x2000004U),32);
    bufp->fullIData(oldp+1270,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1271,(0x1800U),32);
    bufp->fullIData(oldp+1272,(0x79737978U),32);
    bufp->fullIData(oldp+1273,(0xa0000048U),32);
    bufp->fullIData(oldp+1274,(0xa000004cU),32);
    bufp->fullCData(oldp+1275,(4U),3);
    bufp->fullCData(oldp+1276,(0x15U),8);
    bufp->fullCData(oldp+1277,(0xebU),8);
    bufp->fullCData(oldp+1278,(0x38U),8);
    bufp->fullIData(oldp+1279,(0x64U),32);
    bufp->fullIData(oldp+1280,(0x18U),32);
    bufp->fullIData(oldp+1281,(9U),32);
    bufp->fullIData(oldp+1282,(2U),32);
    bufp->fullIData(oldp+1283,(4U),32);
    bufp->fullIData(oldp+1284,(0xdU),32);
    bufp->fullIData(oldp+1285,(0x2000U),32);
    bufp->fullIData(oldp+1286,(0x2710U),32);
    bufp->fullIData(oldp+1287,(0x30cU),32);
    bufp->fullCData(oldp+1288,(7U),4);
    bufp->fullCData(oldp+1289,(3U),4);
    bufp->fullCData(oldp+1290,(5U),4);
    bufp->fullCData(oldp+1291,(4U),4);
    bufp->fullCData(oldp+1292,(6U),4);
    bufp->fullCData(oldp+1293,(2U),4);
    bufp->fullCData(oldp+1294,(1U),4);
    bufp->fullSData(oldp+1295,(0x20U),13);
    bufp->fullCData(oldp+1296,(8U),4);
    bufp->fullCData(oldp+1297,(9U),4);
    bufp->fullIData(oldp+1298,(0xaU),32);
    bufp->fullIData(oldp+1299,(6U),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1301,(0x11U),32);
    bufp->fullIData(oldp+1302,(0x30000000U),32);
    bufp->fullIData(oldp+1303,(0x3fffffffU),32);
    bufp->fullIData(oldp+1304,(8U),32);
    bufp->fullCData(oldp+1305,(2U),3);
    bufp->fullCData(oldp+1306,(3U),3);
    bufp->fullCData(oldp+1307,(5U),3);
    bufp->fullCData(oldp+1308,(6U),3);
    bufp->fullCData(oldp+1309,(7U),3);
    bufp->fullIData(oldp+1310,(1U),32);
    bufp->fullCData(oldp+1311,(0xaU),4);
    bufp->fullIData(oldp+1312,(0xbU),32);
    bufp->fullIData(oldp+1313,(0x10U),32);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
}
