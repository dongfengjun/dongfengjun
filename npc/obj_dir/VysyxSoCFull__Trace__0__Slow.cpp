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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+1081,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1082,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1083,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1084,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1088,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1091,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1092,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1093,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1094,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1095,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1096,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1097,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1098,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1099,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1100,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+1081,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1082,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1083,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1084,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1088,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1091,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1092,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1093,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1094,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1095,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1096,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1097,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1098,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1099,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1100,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+436,"spi_sck", false,-1);
    tracep->declBus(c+437,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1101,"spi_mosi", false,-1);
    tracep->declBit(c+1102,"spi_miso", false,-1);
    tracep->declBit(c+1099,"uart_rx", false,-1);
    tracep->declBit(c+1100,"uart_tx", false,-1);
    tracep->declBit(c+1103,"psram_sck", false,-1);
    tracep->declBit(c+1104,"psram_ce_n", false,-1);
    tracep->declBus(c+969,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1105,"sdram_clk", false,-1);
    tracep->declBit(c+438,"sdram_cke", false,-1);
    tracep->declBit(c+439,"sdram_cs", false,-1);
    tracep->declBit(c+440,"sdram_ras", false,-1);
    tracep->declBit(c+441,"sdram_cas", false,-1);
    tracep->declBit(c+442,"sdram_we", false,-1);
    tracep->declBus(c+443,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+444,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+445,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+446,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1081,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1082,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1083,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1091,"ps2_clk", false,-1);
    tracep->declBit(c+1092,"ps2_data", false,-1);
    tracep->declBus(c+1093,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1094,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1095,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1096,"vga_hsync", false,-1);
    tracep->declBit(c+1097,"vga_vsync", false,-1);
    tracep->declBit(c+1098,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+765,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+766,"in_psel", false,-1);
    tracep->declBit(c+13,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+970,"in_pready", false,-1);
    tracep->declBus(c+971,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+770,"in_pslverr", false,-1);
    tracep->declBus(c+765,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+766,"out_psel", false,-1);
    tracep->declBit(c+13,"out_penable", false,-1);
    tracep->declBus(c+1124,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"out_pwrite", false,-1);
    tracep->declBus(c+768,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+970,"out_pready", false,-1);
    tracep->declBus(c+971,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+770,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+766,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+13,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+765,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1124,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+770,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+971,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+771,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+415,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+765,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1124,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+447,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+448,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+772,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+416,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+773,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1124,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1127,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1128,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+774,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+775,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1129,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1130,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1131,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+776,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+418,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+775,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1132,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1133,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1134,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+777,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+419,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+765,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1124,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1106,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+14,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+778,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+779,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+775,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+780,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+935,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+781,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+782,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+767,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+773,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1124,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+449,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1125,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+450,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+783,"sel_0", false,-1);
    tracep->declBit(c+784,"sel_1", false,-1);
    tracep->declBit(c+785,"sel_2", false,-1);
    tracep->declBit(c+786,"sel_3", false,-1);
    tracep->declBit(c+787,"sel_4", false,-1);
    tracep->declBit(c+788,"sel_5", false,-1);
    tracep->declBit(c+789,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+790,"auto_in_awready", false,-1);
    tracep->declBit(c+791,"auto_in_awvalid", false,-1);
    tracep->declBus(c+792,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+790,"auto_in_wready", false,-1);
    tracep->declBit(c+795,"auto_in_wvalid", false,-1);
    tracep->declBus(c+796,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_in_bready", false,-1);
    tracep->declBit(c+973,"auto_in_bvalid", false,-1);
    tracep->declBus(c+15,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+799,"auto_in_arready", false,-1);
    tracep->declBit(c+800,"auto_in_arvalid", false,-1);
    tracep->declBus(c+801,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_in_rready", false,-1);
    tracep->declBit(c+975,"auto_in_rvalid", false,-1);
    tracep->declBus(c+16,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+431,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+798,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+766,"auto_out_psel", false,-1);
    tracep->declBit(c+13,"auto_out_penable", false,-1);
    tracep->declBit(c+767,"auto_out_pwrite", false,-1);
    tracep->declBus(c+765,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+768,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+970,"auto_out_pready", false,-1);
    tracep->declBit(c+770,"auto_out_pslverr", false,-1);
    tracep->declBus(c+971,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+13,"nodeOut_penable", false,-1);
    tracep->declBus(c+17,"state", false,-1, 1,0);
    tracep->declBit(c+799,"accept_read", false,-1);
    tracep->declBit(c+790,"accept_write", false,-1);
    tracep->declBit(c+18,"is_write_r", false,-1);
    tracep->declBit(c+767,"is_write", false,-1);
    tracep->declBus(c+16,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+15,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+19,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+21,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+22,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+804,"resp", false,-1, 1,0);
    tracep->declBus(c+23,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+798,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+975,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+24,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+973,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+694,"auto_in_awready", false,-1);
    tracep->declBit(c+805,"auto_in_awvalid", false,-1);
    tracep->declBus(c+806,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+807,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_wready", false,-1);
    tracep->declBit(c+811,"auto_in_wvalid", false,-1);
    tracep->declBus(c+812,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_in_wlast", false,-1);
    tracep->declBit(c+815,"auto_in_bready", false,-1);
    tracep->declBit(c+976,"auto_in_bvalid", false,-1);
    tracep->declBus(c+977,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_in_arready", false,-1);
    tracep->declBit(c+816,"auto_in_arvalid", false,-1);
    tracep->declBus(c+817,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"auto_in_rready", false,-1);
    tracep->declBit(c+978,"auto_in_rvalid", false,-1);
    tracep->declBus(c+979,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"auto_in_rlast", false,-1);
    tracep->declBit(c+980,"auto_out_awready", false,-1);
    tracep->declBit(c+823,"auto_out_awvalid", false,-1);
    tracep->declBus(c+792,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+824,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+981,"auto_out_wready", false,-1);
    tracep->declBit(c+825,"auto_out_wvalid", false,-1);
    tracep->declBus(c+796,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+826,"auto_out_wlast", false,-1);
    tracep->declBit(c+982,"auto_out_bready", false,-1);
    tracep->declBit(c+983,"auto_out_bvalid", false,-1);
    tracep->declBus(c+977,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+985,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+986,"auto_out_arready", false,-1);
    tracep->declBit(c+827,"auto_out_arvalid", false,-1);
    tracep->declBus(c+801,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+828,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+822,"auto_out_rready", false,-1);
    tracep->declBit(c+978,"auto_out_rvalid", false,-1);
    tracep->declBus(c+979,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+435,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+987,"auto_out_rlast", false,-1);
    tracep->declBit(c+825,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+27,"w_idle", false,-1);
    tracep->declBit(c+988,"in_awready", false,-1);
    tracep->declBit(c+28,"busy", false,-1);
    tracep->declBus(c+29,"r_addr", false,-1, 31,0);
    tracep->declBus(c+30,"r_len", false,-1, 7,0);
    tracep->declBus(c+829,"len", false,-1, 7,0);
    tracep->declBus(c+830,"addr", false,-1, 31,0);
    tracep->declBit(c+31,"busy_1", false,-1);
    tracep->declBus(c+32,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+33,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+831,"len_1", false,-1, 7,0);
    tracep->declBus(c+832,"addr_1", false,-1, 31,0);
    tracep->declBit(c+34,"wbeats_latched", false,-1);
    tracep->declBit(c+823,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+833,"wbeats_valid", false,-1);
    tracep->declBus(c+35,"w_counter", false,-1, 8,0);
    tracep->declBus(c+834,"w_todo", false,-1, 8,0);
    tracep->declBit(c+826,"w_last", false,-1);
    tracep->declBit(c+982,"nodeOut_bready", false,-1);
    tracep->declBus(c+36,"error_0", false,-1, 1,0);
    tracep->declBus(c+37,"error_1", false,-1, 1,0);
    tracep->declBus(c+38,"error_2", false,-1, 1,0);
    tracep->declBus(c+39,"error_3", false,-1, 1,0);
    tracep->declBus(c+40,"error_4", false,-1, 1,0);
    tracep->declBus(c+41,"error_5", false,-1, 1,0);
    tracep->declBus(c+42,"error_6", false,-1, 1,0);
    tracep->declBus(c+43,"error_7", false,-1, 1,0);
    tracep->declBus(c+44,"error_8", false,-1, 1,0);
    tracep->declBus(c+45,"error_9", false,-1, 1,0);
    tracep->declBus(c+46,"error_10", false,-1, 1,0);
    tracep->declBus(c+47,"error_11", false,-1, 1,0);
    tracep->declBus(c+48,"error_12", false,-1, 1,0);
    tracep->declBus(c+49,"error_13", false,-1, 1,0);
    tracep->declBus(c+50,"error_14", false,-1, 1,0);
    tracep->declBus(c+51,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+26,"io_enq_ready", false,-1);
    tracep->declBit(c+816,"io_enq_valid", false,-1);
    tracep->declBus(c+817,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+818,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+819,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+820,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+821,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
    tracep->declBit(c+827,"io_deq_valid", false,-1);
    tracep->declBus(c+801,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+835,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+836,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+803,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+837,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+52,"ram", false,-1, 48,0);
    tracep->declBit(c+54,"full", false,-1);
    tracep->declBit(c+827,"io_deq_valid_0", false,-1);
    tracep->declBit(c+990,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+694,"io_enq_ready", false,-1);
    tracep->declBit(c+805,"io_enq_valid", false,-1);
    tracep->declBus(c+806,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+807,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+808,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+809,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+810,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
    tracep->declBit(c+838,"io_deq_valid", false,-1);
    tracep->declBus(c+792,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+839,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+840,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+794,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+841,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+55,"ram", false,-1, 48,0);
    tracep->declBit(c+695,"full", false,-1);
    tracep->declBit(c+838,"io_deq_valid_0", false,-1);
    tracep->declBit(c+992,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+811,"io_enq_valid", false,-1);
    tracep->declBus(c+812,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+813,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+814,"io_enq_bits_last", false,-1);
    tracep->declBit(c+993,"io_deq_ready", false,-1);
    tracep->declBit(c+842,"io_deq_valid", false,-1);
    tracep->declBus(c+796,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+797,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+420,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+57,"ram", false,-1, 36,0);
    tracep->declBit(c+59,"full", false,-1);
    tracep->declBit(c+842,"io_deq_valid_0", false,-1);
    tracep->declBit(c+994,"do_enq", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+995,"auto_in_awready", false,-1);
    tracep->declBit(c+843,"auto_in_awvalid", false,-1);
    tracep->declBus(c+792,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+936,"auto_in_wready", false,-1);
    tracep->declBit(c+845,"auto_in_wvalid", false,-1);
    tracep->declBus(c+796,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+996,"auto_in_bready", false,-1);
    tracep->declBit(c+60,"auto_in_bvalid", false,-1);
    tracep->declBus(c+61,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+997,"auto_in_arready", false,-1);
    tracep->declBit(c+846,"auto_in_arvalid", false,-1);
    tracep->declBus(c+801,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+847,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+998,"auto_in_rready", false,-1);
    tracep->declBit(c+63,"auto_in_rvalid", false,-1);
    tracep->declBus(c+64,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+997,"nodeIn_arready", false,-1);
    tracep->declBit(c+995,"nodeIn_awready", false,-1);
    tracep->declBit(c+848,"w_sel0", false,-1);
    tracep->declBit(c+60,"w_full", false,-1);
    tracep->declBus(c+61,"w_id", false,-1, 3,0);
    tracep->declBit(c+67,"r_sel1", false,-1);
    tracep->declBit(c+68,"w_sel1", false,-1);
    tracep->declBit(c+63,"r_full", false,-1);
    tracep->declBus(c+64,"r_id", false,-1, 3,0);
    tracep->declBit(c+999,"ren", false,-1);
    tracep->declBit(c+69,"rdata_REG", false,-1);
    tracep->declBus(c+70,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+71,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+72,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+73,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+849,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+999,"R0_en", false,-1);
    tracep->declBit(c+1079,"R0_clk", false,-1);
    tracep->declBus(c+74,"R0_data", false,-1, 31,0);
    tracep->declBus(c+850,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1000,"W0_en", false,-1);
    tracep->declBit(c+1079,"W0_clk", false,-1);
    tracep->declBus(c+796,"W0_data", false,-1, 31,0);
    tracep->declBus(c+797,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+694,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+805,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+806,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+807,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+811,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+812,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+815,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+976,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+816,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+817,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+978,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+694,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+805,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+806,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+807,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+811,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+812,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+815,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+976,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+816,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+817,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+978,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+1001,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+851,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+792,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+981,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+825,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+796,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+826,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+982,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+983,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+977,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+852,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+801,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+822,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+978,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+979,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+987,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+995,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+843,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+792,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+844,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+936,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+845,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+796,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+996,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+60,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+997,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+846,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+801,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+847,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+998,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+63,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+64,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+853,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+854,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+75,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+855,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+801,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+856,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+424,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+76,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+77,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+78,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+790,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+791,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+792,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+790,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+795,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+796,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+972,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+973,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+15,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+799,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+800,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+801,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+975,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+16,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+431,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+798,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+983,"in_0_bvalid", false,-1);
    tracep->declBit(c+978,"in_0_rvalid", false,-1);
    tracep->declBit(c+1003,"in_0_wready", false,-1);
    tracep->declBit(c+1004,"in_0_awready", false,-1);
    tracep->declBit(c+1002,"in_0_arready", false,-1);
    tracep->declBit(c+1001,"anonIn_awready", false,-1);
    tracep->declBit(c+857,"requestARIO_0_0", false,-1);
    tracep->declBit(c+858,"requestARIO_0_1", false,-1);
    tracep->declBit(c+859,"requestARIO_0_2", false,-1);
    tracep->declBit(c+860,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+861,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+862,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+863,"arSel", false,-1, 15,0);
    tracep->declBus(c+864,"awSel", false,-1, 15,0);
    tracep->declBus(c+1005,"rSel", false,-1, 15,0);
    tracep->declBus(c+1006,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+865,"in_0_awvalid", false,-1);
    tracep->declBit(c+866,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+867,"in_0_wvalid", false,-1);
    tracep->declBit(c+112,"idle_3", false,-1);
    tracep->declBit(c+1007,"anyValid", false,-1);
    tracep->declBus(c+1008,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+113,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1009,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1010,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1011,"prefixOR_1", false,-1);
    tracep->declBit(c+1012,"winner_3_1", false,-1);
    tracep->declBit(c+1013,"winner_3_2", false,-1);
    tracep->declBit(c+114,"state_3_0", false,-1);
    tracep->declBit(c+115,"state_3_1", false,-1);
    tracep->declBit(c+116,"state_3_2", false,-1);
    tracep->declBit(c+1014,"muxState_3_0", false,-1);
    tracep->declBit(c+1015,"muxState_3_1", false,-1);
    tracep->declBit(c+1016,"muxState_3_2", false,-1);
    tracep->declBit(c+117,"idle_4", false,-1);
    tracep->declBit(c+1017,"anyValid_1", false,-1);
    tracep->declBus(c+1018,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+118,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1019,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1020,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1021,"winner_4_0", false,-1);
    tracep->declBit(c+1022,"winner_4_2", false,-1);
    tracep->declBit(c+119,"state_4_0", false,-1);
    tracep->declBit(c+120,"state_4_2", false,-1);
    tracep->declBit(c+1023,"muxState_4_0", false,-1);
    tracep->declBit(c+1024,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+121,"io_enq_ready", false,-1);
    tracep->declBit(c+866,"io_enq_valid", false,-1);
    tracep->declBus(c+868,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1025,"io_deq_ready", false,-1);
    tracep->declBit(c+869,"io_deq_valid", false,-1);
    tracep->declBus(c+870,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+122,"wrap", false,-1);
    tracep->declBit(c+123,"wrap_1", false,-1);
    tracep->declBit(c+124,"maybe_full", false,-1);
    tracep->declBit(c+125,"ptr_match", false,-1);
    tracep->declBit(c+126,"empty", false,-1);
    tracep->declBit(c+127,"full", false,-1);
    tracep->declBit(c+869,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1026,"do_deq", false,-1);
    tracep->declBit(c+1027,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+123,"R0_addr", false,-1);
    tracep->declBit(c+1135,"R0_en", false,-1);
    tracep->declBit(c+1079,"R0_clk", false,-1);
    tracep->declBus(c+128,"R0_data", false,-1, 2,0);
    tracep->declBit(c+122,"W0_addr", false,-1);
    tracep->declBit(c+1027,"W0_en", false,-1);
    tracep->declBit(c+1079,"W0_clk", false,-1);
    tracep->declBus(c+868,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+980,"auto_in_awready", false,-1);
    tracep->declBit(c+823,"auto_in_awvalid", false,-1);
    tracep->declBus(c+792,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+824,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+981,"auto_in_wready", false,-1);
    tracep->declBit(c+825,"auto_in_wvalid", false,-1);
    tracep->declBus(c+796,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+826,"auto_in_wlast", false,-1);
    tracep->declBit(c+982,"auto_in_bready", false,-1);
    tracep->declBit(c+983,"auto_in_bvalid", false,-1);
    tracep->declBus(c+977,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+985,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+986,"auto_in_arready", false,-1);
    tracep->declBit(c+827,"auto_in_arvalid", false,-1);
    tracep->declBus(c+801,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+828,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+822,"auto_in_rready", false,-1);
    tracep->declBit(c+978,"auto_in_rvalid", false,-1);
    tracep->declBus(c+979,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+435,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+987,"auto_in_rlast", false,-1);
    tracep->declBit(c+1001,"auto_out_awready", false,-1);
    tracep->declBit(c+851,"auto_out_awvalid", false,-1);
    tracep->declBus(c+792,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+793,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+794,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+981,"auto_out_wready", false,-1);
    tracep->declBit(c+825,"auto_out_wvalid", false,-1);
    tracep->declBus(c+796,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+797,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+826,"auto_out_wlast", false,-1);
    tracep->declBit(c+982,"auto_out_bready", false,-1);
    tracep->declBit(c+983,"auto_out_bvalid", false,-1);
    tracep->declBus(c+977,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+984,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1002,"auto_out_arready", false,-1);
    tracep->declBit(c+852,"auto_out_arvalid", false,-1);
    tracep->declBus(c+801,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+803,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+822,"auto_out_rready", false,-1);
    tracep->declBit(c+978,"auto_out_rvalid", false,-1);
    tracep->declBus(c+979,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+987,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+131,"io_enq_ready", false,-1);
    tracep->declBit(c+937,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1028,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+135,"io_enq_ready", false,-1);
    tracep->declBit(c+938,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1029,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+139,"io_enq_ready", false,-1);
    tracep->declBit(c+939,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1030,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+940,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+941,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1032,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+942,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+943,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1034,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+944,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+945,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+946,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+947,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+948,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+949,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+950,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+951,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1042,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+952,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+953,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+954,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+955,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+956,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1047,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+957,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+958,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1049,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+959,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+960,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1051,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+961,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1052,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+962,"io_enq_valid", false,-1);
    tracep->declBit(c+824,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1053,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+963,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1054,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+964,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1055,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+965,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1056,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+966,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1057,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+967,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1058,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+968,"io_enq_valid", false,-1);
    tracep->declBit(c+828,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1059,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+694,"auto_master_out_awready", false,-1);
    tracep->declBit(c+805,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+806,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+807,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_wready", false,-1);
    tracep->declBit(c+811,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+812,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+815,"auto_master_out_bready", false,-1);
    tracep->declBit(c+976,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+977,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+432,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_master_out_arready", false,-1);
    tracep->declBit(c+816,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+817,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"auto_master_out_rready", false,-1);
    tracep->declBit(c+978,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+979,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+433,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+1125,"io_interrupt", false,-1);
    tracep->declBit(c+694,"io_master_awready", false,-1);
    tracep->declBit(c+805,"io_master_awvalid", false,-1);
    tracep->declBus(c+806,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+807,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_wready", false,-1);
    tracep->declBit(c+811,"io_master_wvalid", false,-1);
    tracep->declBus(c+812,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"io_master_wlast", false,-1);
    tracep->declBit(c+815,"io_master_bready", false,-1);
    tracep->declBit(c+976,"io_master_bvalid", false,-1);
    tracep->declBus(c+977,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+432,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"io_master_arready", false,-1);
    tracep->declBit(c+816,"io_master_arvalid", false,-1);
    tracep->declBus(c+817,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+818,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"io_master_rready", false,-1);
    tracep->declBit(c+978,"io_master_rvalid", false,-1);
    tracep->declBus(c+979,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+433,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"io_master_rlast", false,-1);
    tracep->declBit(c+1136,"io_slave_awready", false,-1);
    tracep->declBit(c+1125,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1137,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1138,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1139,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1140,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1141,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1142,"io_slave_wready", false,-1);
    tracep->declBit(c+1125,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1138,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1137,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1125,"io_slave_wlast", false,-1);
    tracep->declBit(c+1125,"io_slave_bready", false,-1);
    tracep->declBit(c+1143,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1144,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1145,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1146,"io_slave_arready", false,-1);
    tracep->declBit(c+1125,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1137,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1138,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1139,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1140,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1141,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1125,"io_slave_rready", false,-1);
    tracep->declBit(c+1147,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1148,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1149,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1150,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1151,"io_slave_rlast", false,-1);
    tracep->declBit(c+696,"DIFFTEST", false,-1);
    tracep->declBus(c+697,"pc", false,-1, 31,0);
    tracep->declBus(c+698,"dnpc", false,-1, 31,0);
    tracep->declBit(c+699,"PCU_VALID", false,-1);
    tracep->declBit(c+700,"IFU_READY", false,-1);
    tracep->declBus(c+701,"inst", false,-1, 31,0);
    tracep->declBit(c+702,"IFU_VALID", false,-1);
    tracep->declBit(c+703,"IDU_READY", false,-1);
    tracep->declBus(c+1152,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1152,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+704,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1107,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1137,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1139,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+259,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1137,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+404,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+260,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+405,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1140,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+261,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1141,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+262,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+406,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+407,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1125,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+760,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1125,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+1108,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+408,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1125,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+705,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+761,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1060,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+706,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1153,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+707,"IDU_VALID", false,-1);
    tracep->declBit(c+708,"EXU_READY", false,-1);
    tracep->declBus(c+709,"op", false,-1, 6,0);
    tracep->declBus(c+263,"rd", false,-1, 4,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"rs1", false,-1, 4,0);
    tracep->declBus(c+266,"rs2", false,-1, 4,0);
    tracep->declBus(c+267,"imm", false,-1, 31,0);
    tracep->declBus(c+268,"funct7", false,-1, 6,0);
    tracep->declBus(c+269,"shamt", false,-1, 4,0);
    tracep->declBit(c+710,"sram_lsu_read", false,-1);
    tracep->declBit(c+711,"sram_lsu_write", false,-1);
    tracep->declBit(c+1109,"LSU_DONE", false,-1);
    tracep->declBit(c+270,"EXU_VALID", false,-1);
    tracep->declBit(c+271,"WBU_READY", false,-1);
    tracep->declBus(c+272,"res", false,-1, 31,0);
    tracep->declBit(c+712,"ls_valid", false,-1);
    tracep->declBit(c+713,"ls_wen", false,-1);
    tracep->declBus(c+714,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+394,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+715,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+395,"ls_wmask", false,-1, 3,0);
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
    tracep->declBus(c+675,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+676,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1110,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+677,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1111,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1112,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1154,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1155,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1156,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+410,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1157,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+411,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1158,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1159,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1160,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+412,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+413,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+679,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+762,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+680,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+871,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1061,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+681,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+682,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+763,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1062,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+683,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+684,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+414,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+872,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+873,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+874,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+286,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+875,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+876,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+877,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+878,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+287,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+879,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+288,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+880,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+881,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+882,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+883,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+289,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+290,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+716,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+291,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+293,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+294,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+889,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+295,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+696,"wbu_done", false,-1);
    tracep->declBit(c+296,"difftest", false,-1);
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
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+710,"sram_lsu_read", false,-1);
    tracep->declBit(c+711,"sram_lsu_write", false,-1);
    tracep->declBit(c+1109,"LSU_DONE", false,-1);
    tracep->declBit(c+707,"IDU_VALID", false,-1);
    tracep->declBit(c+708,"EXU_READY", false,-1);
    tracep->declBit(c+270,"EXU_VALID", false,-1);
    tracep->declBit(c+271,"WBU_READY", false,-1);
    tracep->declBus(c+709,"op", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+267,"imm", false,-1, 31,0);
    tracep->declBus(c+268,"funct7", false,-1, 6,0);
    tracep->declBus(c+269,"shamt", false,-1, 4,0);
    tracep->declBus(c+308,"r1", false,-1, 31,0);
    tracep->declBus(c+309,"r2", false,-1, 31,0);
    tracep->declBus(c+272,"res_reg", false,-1, 31,0);
    tracep->declBit(c+712,"ls_valid", false,-1);
    tracep->declBit(c+713,"ls_wen", false,-1);
    tracep->declBus(c+714,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+394,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+715,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+395,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+675,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+697,"pc", false,-1, 31,0);
    tracep->declBus(c+698,"dnpc", false,-1, 31,0);
    tracep->declBus(c+273,"mepc", false,-1, 31,0);
    tracep->declBus(c+275,"mstatus", false,-1, 31,0);
    tracep->declBus(c+277,"mcause", false,-1, 31,0);
    tracep->declBus(c+279,"mtvec", false,-1, 31,0);
    tracep->declBus(c+274,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+276,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+278,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+280,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+281,"gpr_wen_reg", false,-1);
    tracep->declBit(c+282,"mepc_wen_reg", false,-1);
    tracep->declBit(c+283,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+284,"mcause_wen_reg", false,-1);
    tracep->declBit(c+285,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+708,"exu_ready", false,-1);
    tracep->declBit(c+270,"exu_valid", false,-1);
    tracep->declBus(c+1141,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1161,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1162,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1163,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+717,"state", false,-1, 1,0);
    tracep->declBus(c+1113,"next_state", false,-1, 1,0);
    tracep->declBus(c+310,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+718,"a", false,-1, 31,0);
    tracep->declBus(c+719,"b", false,-1, 31,0);
    tracep->declBus(c+720,"res", false,-1, 31,0);
    tracep->declBus(c+721,"csr", false,-1, 31,0);
    tracep->declBus(c+722,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+723,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+722,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+396,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+722,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+267,"offset", false,-1, 31,0);
    tracep->declBit(c+724,"jalen", false,-1);
    tracep->declBit(c+725,"jalren", false,-1);
    tracep->declBit(c+397,"beqen", false,-1);
    tracep->declBit(c+398,"bneen", false,-1);
    tracep->declBit(c+399,"blten", false,-1);
    tracep->declBit(c+400,"bgeen", false,-1);
    tracep->declBit(c+401,"bltuen", false,-1);
    tracep->declBit(c+402,"bgeuen", false,-1);
    tracep->declBit(c+726,"ecall_en", false,-1);
    tracep->declBit(c+403,"mret_en", false,-1);
    tracep->declBit(c+727,"gpr_wen", false,-1);
    tracep->declBit(c+728,"mepc_wen", false,-1);
    tracep->declBit(c+729,"mstatus_wen", false,-1);
    tracep->declBit(c+730,"mcause_wen", false,-1);
    tracep->declBit(c+731,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+701,"inst", false,-1, 31,0);
    tracep->declBit(c+702,"IFU_VALID", false,-1);
    tracep->declBit(c+703,"IDU_READY", false,-1);
    tracep->declBit(c+707,"IDU_VALID", false,-1);
    tracep->declBit(c+708,"EXU_READY", false,-1);
    tracep->declBus(c+709,"op_reg", false,-1, 6,0);
    tracep->declBus(c+263,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+264,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+265,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+266,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+267,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+268,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+269,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+732,"op", false,-1, 6,0);
    tracep->declBus(c+733,"rd", false,-1, 4,0);
    tracep->declBus(c+734,"funct3", false,-1, 2,0);
    tracep->declBus(c+735,"rs1", false,-1, 4,0);
    tracep->declBus(c+736,"rs2", false,-1, 4,0);
    tracep->declBus(c+737,"immI", false,-1, 31,0);
    tracep->declBus(c+738,"immU", false,-1, 31,0);
    tracep->declBus(c+739,"immS", false,-1, 31,0);
    tracep->declBus(c+740,"immB", false,-1, 31,0);
    tracep->declBus(c+741,"immJ", false,-1, 31,0);
    tracep->declBus(c+742,"imm", false,-1, 31,0);
    tracep->declBus(c+743,"funct7", false,-1, 6,0);
    tracep->declBus(c+744,"shamt", false,-1, 4,0);
    tracep->declBit(c+703,"idu_ready", false,-1);
    tracep->declBit(c+707,"idu_valid", false,-1);
    tracep->declBus(c+1164,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+745,"state", false,-1);
    tracep->declBit(c+2,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+697,"pc", false,-1, 31,0);
    tracep->declBus(c+701,"inst", false,-1, 31,0);
    tracep->declBit(c+699,"PCU_VALID", false,-1);
    tracep->declBit(c+700,"IFU_READY", false,-1);
    tracep->declBit(c+702,"IFU_VALID", false,-1);
    tracep->declBit(c+703,"IDU_READY", false,-1);
    tracep->declBit(c+696,"wbu_done", false,-1);
    tracep->declBit(c+760,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1125,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1137,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1152,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1139,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1140,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1141,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1108,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1125,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1152,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1137,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1153,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1125,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+408,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+404,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+406,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+761,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+705,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+260,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+704,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+259,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+261,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+262,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+706,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1060,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+405,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1107,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+407,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+700,"ifu_ready", false,-1);
    tracep->declBit(c+702,"ifu_valid", false,-1);
    tracep->declBus(c+1141,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1161,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1162,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1163,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+746,"current_state", false,-1, 1,0);
    tracep->declBus(c+3,"next_state", false,-1, 1,0);
    tracep->declBit(c+705,"axi_arvalid", false,-1);
    tracep->declBit(c+706,"axi_rready", false,-1);
    tracep->declBus(c+260,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+704,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+259,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+261,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+262,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1164,"SRAM_IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"SRAM_FETCH", false,-1, 0,0);
    tracep->declBit(c+747,"state", false,-1);
    tracep->declBit(c+748,"sram_start", false,-1);
    tracep->declBus(c+749,"inst_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+710,"sram_lsu_read", false,-1);
    tracep->declBit(c+711,"sram_lsu_write", false,-1);
    tracep->declBit(c+1109,"LSU_DONE", false,-1);
    tracep->declBus(c+675,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+712,"valid", false,-1);
    tracep->declBit(c+713,"wen", false,-1);
    tracep->declBus(c+714,"waddr", false,-1, 31,0);
    tracep->declBus(c+394,"wdata", false,-1, 31,0);
    tracep->declBus(c+715,"raddr", false,-1, 31,0);
    tracep->declBus(c+395,"wmask", false,-1, 3,0);
    tracep->declBit(c+762,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+679,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1156,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+676,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1154,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1158,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+871,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+680,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1110,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1112,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+684,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+681,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1061,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+410,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+412,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+763,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+682,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1157,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+677,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1155,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1159,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1160,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+683,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1062,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+411,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1111,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+413,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+414,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1141,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1161,"READ", false,-1, 1,0);
    tracep->declBus(c+1162,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1163,"DONE", false,-1, 1,0);
    tracep->declBus(c+685,"state", false,-1, 1,0);
    tracep->declBit(c+679,"axi_awvalid", false,-1);
    tracep->declBit(c+680,"axi_wvalid", false,-1);
    tracep->declBus(c+1156,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+676,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+686,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1154,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1158,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+678,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+687,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+681,"axi_bready", false,-1);
    tracep->declBit(c+684,"axi_wlast", false,-1);
    tracep->declBit(c+682,"axi_arvalid", false,-1);
    tracep->declBit(c+683,"axi_rready", false,-1);
    tracep->declBus(c+1157,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+677,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1155,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+697,"pc", false,-1, 31,0);
    tracep->declBus(c+698,"dnpc", false,-1, 31,0);
    tracep->declBit(c+699,"PCU_VALID", false,-1);
    tracep->declBit(c+700,"IFU_READY", false,-1);
    tracep->declBit(c+699,"pcu_valid", false,-1);
    tracep->declBus(c+1164,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+750,"state", false,-1);
    tracep->declBit(c+4,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1166,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1167,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBus(c+297,"wdata", false,-1, 31,0);
    tracep->declBus(c+298,"waddr", false,-1, 4,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->declBus(c+265,"raddr1", false,-1, 4,0);
    tracep->declBus(c+308,"r1", false,-1, 31,0);
    tracep->declBus(c+266,"raddr2", false,-1, 4,0);
    tracep->declBus(c+309,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+311+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+270,"EXU_VALID", false,-1);
    tracep->declBit(c+271,"WBU_READY", false,-1);
    tracep->declBit(c+696,"wbu_done", false,-1);
    tracep->declBit(c+296,"difftest", false,-1);
    tracep->declBus(c+297,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+272,"res", false,-1, 31,0);
    tracep->declBus(c+298,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+263,"rd", false,-1, 4,0);
    tracep->declBit(c+299,"wen_reg", false,-1);
    tracep->declBit(c+281,"gpr_wen", false,-1);
    tracep->declBus(c+274,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+276,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+278,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+280,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+300,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+301,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+302,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+303,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+282,"mepc_wen", false,-1);
    tracep->declBit(c+283,"mstatus_wen", false,-1);
    tracep->declBit(c+284,"mcause_wen", false,-1);
    tracep->declBit(c+285,"mtvec_wen", false,-1);
    tracep->declBit(c+304,"mepc_wen_reg", false,-1);
    tracep->declBit(c+305,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+306,"mcause_wen_reg", false,-1);
    tracep->declBit(c+307,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+272,"xrd", false,-1, 31,0);
    tracep->declBus(c+263,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+281,"o_rf_wen", false,-1);
    tracep->declBus(c+274,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+276,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+278,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+280,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+271,"wbu_ready", false,-1);
    tracep->declBus(c+1141,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1161,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1162,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1163,"NULL", false,-1, 1,0);
    tracep->declBus(c+751,"state", false,-1, 1,0);
    tracep->declBus(c+5,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+760,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1125,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1137,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1152,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1139,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1140,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1141,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1108,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1125,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1152,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1137,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1153,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1125,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+408,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+404,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+406,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+761,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+705,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+260,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+704,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+259,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+261,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+262,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+706,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1060,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+405,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1107,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+407,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+409,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+762,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+679,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1156,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+676,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1154,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1158,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+678,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+871,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+680,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1110,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1112,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+684,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+681,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1061,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+410,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+412,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+763,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+682,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1157,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+677,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1155,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1159,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1160,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+683,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1062,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+411,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1111,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+413,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+414,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+694,"io_master_awready", false,-1);
    tracep->declBit(c+805,"io_master_awvalid", false,-1);
    tracep->declBus(c+806,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+807,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+808,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+809,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+810,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+25,"io_master_wready", false,-1);
    tracep->declBit(c+811,"io_master_wvalid", false,-1);
    tracep->declBus(c+812,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+813,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"io_master_wlast", false,-1);
    tracep->declBit(c+815,"io_master_bready", false,-1);
    tracep->declBit(c+976,"io_master_bvalid", false,-1);
    tracep->declBus(c+977,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+432,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+26,"io_master_arready", false,-1);
    tracep->declBit(c+816,"io_master_arvalid", false,-1);
    tracep->declBus(c+817,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+818,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+819,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+820,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+821,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+822,"io_master_rready", false,-1);
    tracep->declBit(c+978,"io_master_rvalid", false,-1);
    tracep->declBus(c+979,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+433,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+423,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+434,"io_master_rlast", false,-1);
    tracep->declBit(c+716,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+878,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+872,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+876,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+880,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+882,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+873,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+875,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+889,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+287,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+289,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+879,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+874,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+877,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+881,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+883,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+294,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+288,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+290,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+295,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+890,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+891,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+892,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1063,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+893,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+752,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+753,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+754,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+425,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+755,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+426,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+756,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+757,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+894,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+758,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+427,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+428,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+895,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+764,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+896,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+421,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+429,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+897,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+898,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+899,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1064,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+900,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+901,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+430,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1141,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1161,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1162,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1163,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+759,"state", false,-1, 1,0);
    tracep->declBus(c+6,"next_state", false,-1, 1,0);
    tracep->declBus(c+1168,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1169,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+902,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+1167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1138,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+302,"din", false,-1, 31,0);
    tracep->declBus(c+277,"dout", false,-1, 31,0);
    tracep->declBit(c+306,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+1167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1138,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 31,0);
    tracep->declBus(c+273,"dout", false,-1, 31,0);
    tracep->declBit(c+304,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+1167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1170,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+301,"din", false,-1, 31,0);
    tracep->declBus(c+275,"dout", false,-1, 31,0);
    tracep->declBit(c+305,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+1167,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1138,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+303,"din", false,-1, 31,0);
    tracep->declBus(c+279,"dout", false,-1, 31,0);
    tracep->declBit(c+307,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+716,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+884,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+878,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+872,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+876,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+880,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+882,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+885,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+873,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+875,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+889,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+886,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+287,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+289,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+887,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+879,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+874,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+877,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+881,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+883,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+888,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+294,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+288,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+290,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+295,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+716,"axi_awready", false,-1);
    tracep->declBit(c+291,"axi_wready", false,-1);
    tracep->declBit(c+292,"axi_bvalid", false,-1);
    tracep->declBit(c+293,"axi_arready", false,-1);
    tracep->declBit(c+294,"axi_rvalid", false,-1);
    tracep->declBit(c+295,"axi_rlast", false,-1);
    tracep->declBus(c+289,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+290,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+287,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+288,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+286,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+343,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1168,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1169,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+344,"mtime", false,-1, 63,0);
    tracep->declBus(c+422,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"io_d", false,-1);
    tracep->declBit(c+346,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"io_d", false,-1);
    tracep->declBit(c+346,"io_q", false,-1);
    tracep->declBit(c+346,"sync_0", false,-1);
    tracep->declBit(c+347,"sync_1", false,-1);
    tracep->declBit(c+348,"sync_2", false,-1);
    tracep->declBit(c+349,"sync_3", false,-1);
    tracep->declBit(c+350,"sync_4", false,-1);
    tracep->declBit(c+351,"sync_5", false,-1);
    tracep->declBit(c+352,"sync_6", false,-1);
    tracep->declBit(c+353,"sync_7", false,-1);
    tracep->declBit(c+354,"sync_8", false,-1);
    tracep->declBit(c+355,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+776,"auto_in_psel", false,-1);
    tracep->declBit(c+418,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+775,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1132,"auto_in_pready", false,-1);
    tracep->declBit(c+1133,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1134,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1081,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1082,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1083,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+903,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+776,"in_psel", false,-1);
    tracep->declBit(c+418,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1132,"in_pready", false,-1);
    tracep->declBus(c+1134,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1133,"in_pslverr", false,-1);
    tracep->declBus(c+1081,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1082,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1083,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1086,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1087,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1088,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1089,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1090,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+774,"auto_in_psel", false,-1);
    tracep->declBit(c+417,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+775,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1129,"auto_in_pready", false,-1);
    tracep->declBit(c+1130,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1131,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1091,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1092,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+903,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+774,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1129,"in_pready", false,-1);
    tracep->declBus(c+1131,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1130,"in_pslverr", false,-1);
    tracep->declBit(c+1091,"ps2_clk", false,-1);
    tracep->declBit(c+1092,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+853,"auto_in_awvalid", false,-1);
    tracep->declBit(c+854,"auto_in_wvalid", false,-1);
    tracep->declBit(c+75,"auto_in_arready", false,-1);
    tracep->declBit(c+855,"auto_in_arvalid", false,-1);
    tracep->declBus(c+801,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+856,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+424,"auto_in_rready", false,-1);
    tracep->declBit(c+76,"auto_in_rvalid", false,-1);
    tracep->declBus(c+77,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+78,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+76,"state", false,-1);
    tracep->declBus(c+78,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+77,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+904,"raddr", false,-1, 31,0);
    tracep->declBit(c+905,"ren", false,-1);
    tracep->declBus(c+906,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+777,"auto_in_psel", false,-1);
    tracep->declBit(c+419,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+765,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1106,"auto_in_pready", false,-1);
    tracep->declBit(c+1125,"auto_in_pslverr", false,-1);
    tracep->declBus(c+14,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1103,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1104,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+969,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+765,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+777,"in_psel", false,-1);
    tracep->declBit(c+419,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1106,"in_pready", false,-1);
    tracep->declBus(c+14,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1125,"in_pslverr", false,-1);
    tracep->declBit(c+1103,"qspi_sck", false,-1);
    tracep->declBit(c+1104,"qspi_ce_n", false,-1);
    tracep->declBus(c+969,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+969,"din", false,-1, 3,0);
    tracep->declBus(c+1065,"dout", false,-1, 3,0);
    tracep->declBus(c+1066,"douten", false,-1, 3,0);
    tracep->declBit(c+1114,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1079,"clk_i", false,-1);
    tracep->declBit(c+1080,"rst_i", false,-1);
    tracep->declBus(c+765,"adr_i", false,-1, 31,0);
    tracep->declBus(c+768,"dat_i", false,-1, 31,0);
    tracep->declBus(c+14,"dat_o", false,-1, 31,0);
    tracep->declBus(c+769,"sel_i", false,-1, 3,0);
    tracep->declBit(c+777,"cyc_i", false,-1);
    tracep->declBit(c+777,"stb_i", false,-1);
    tracep->declBit(c+1114,"ack_o", false,-1);
    tracep->declBit(c+767,"we_i", false,-1);
    tracep->declBit(c+1103,"sck", false,-1);
    tracep->declBit(c+1104,"ce_n", false,-1);
    tracep->declBus(c+969,"din", false,-1, 3,0);
    tracep->declBus(c+1065,"dout", false,-1, 3,0);
    tracep->declBus(c+1066,"douten", false,-1, 3,0);
    tracep->declBus(c+1164,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+451,"mr_sck", false,-1);
    tracep->declBit(c+452,"mr_ce_n", false,-1);
    tracep->declBus(c+969,"mr_din", false,-1, 3,0);
    tracep->declBus(c+453,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+454,"mr_doe", false,-1);
    tracep->declBit(c+455,"mw_sck", false,-1);
    tracep->declBit(c+456,"mw_ce_n", false,-1);
    tracep->declBus(c+969,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1067,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+457,"mw_doe", false,-1);
    tracep->declBit(c+1068,"mr_rd", false,-1);
    tracep->declBit(c+458,"mr_done", false,-1);
    tracep->declBit(c+1069,"mw_wr", false,-1);
    tracep->declBit(c+1070,"mw_done", false,-1);
    tracep->declBit(c+777,"wb_valid", false,-1);
    tracep->declBit(c+907,"wb_we", false,-1);
    tracep->declBit(c+908,"wb_re", false,-1);
    tracep->declBit(c+459,"state", false,-1);
    tracep->declBit(c+1071,"nstate", false,-1);
    tracep->declBus(c+909,"size", false,-1, 2,0);
    tracep->declBus(c+910,"byte0", false,-1, 7,0);
    tracep->declBus(c+911,"byte1", false,-1, 7,0);
    tracep->declBus(c+912,"byte2", false,-1, 7,0);
    tracep->declBus(c+913,"byte3", false,-1, 7,0);
    tracep->declBus(c+914,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1115,"rst_n", false,-1);
    tracep->declBus(c+915,"addr", false,-1, 23,0);
    tracep->declBit(c+1068,"rd", false,-1);
    tracep->declBus(c+1171,"size", false,-1, 2,0);
    tracep->declBit(c+458,"done", false,-1);
    tracep->declBus(c+14,"line", false,-1, 31,0);
    tracep->declBit(c+451,"sck", false,-1);
    tracep->declBit(c+452,"ce_n", false,-1);
    tracep->declBus(c+969,"din", false,-1, 3,0);
    tracep->declBus(c+453,"dout", false,-1, 3,0);
    tracep->declBit(c+454,"douten", false,-1);
    tracep->declBus(c+1164,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"READ", false,-1, 0,0);
    tracep->declBus(c+1172,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+460,"state", false,-1);
    tracep->declBit(c+1072,"nstate", false,-1);
    tracep->declBus(c+461,"counter", false,-1, 7,0);
    tracep->declBus(c+462,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+356+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1173,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+463,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1115,"rst_n", false,-1);
    tracep->declBus(c+916,"addr", false,-1, 23,0);
    tracep->declBus(c+914,"line", false,-1, 31,0);
    tracep->declBus(c+909,"size", false,-1, 2,0);
    tracep->declBit(c+1069,"wr", false,-1);
    tracep->declBit(c+1070,"done", false,-1);
    tracep->declBit(c+455,"sck", false,-1);
    tracep->declBit(c+456,"ce_n", false,-1);
    tracep->declBus(c+969,"din", false,-1, 3,0);
    tracep->declBus(c+1067,"dout", false,-1, 3,0);
    tracep->declBit(c+457,"douten", false,-1);
    tracep->declBus(c+1164,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1165,"WRITE", false,-1, 0,0);
    tracep->declBus(c+917,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+464,"state", false,-1);
    tracep->declBit(c+1073,"nstate", false,-1);
    tracep->declBus(c+465,"counter", false,-1, 7,0);
    tracep->declBus(c+466,"saddr", false,-1, 23,0);
    tracep->declBus(c+1174,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+771,"auto_in_psel", false,-1);
    tracep->declBit(c+415,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+765,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+447,"auto_in_pready", false,-1);
    tracep->declBit(c+1125,"auto_in_pslverr", false,-1);
    tracep->declBus(c+448,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1105,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+438,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+439,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+440,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+441,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+442,"sdram_bundle_we", false,-1);
    tracep->declBus(c+443,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+444,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+445,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+446,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+765,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+771,"in_psel", false,-1);
    tracep->declBit(c+415,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+447,"in_pready", false,-1);
    tracep->declBus(c+448,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1125,"in_pslverr", false,-1);
    tracep->declBit(c+1105,"sdram_clk", false,-1);
    tracep->declBit(c+438,"sdram_cke", false,-1);
    tracep->declBit(c+439,"sdram_cs", false,-1);
    tracep->declBit(c+440,"sdram_ras", false,-1);
    tracep->declBit(c+441,"sdram_cas", false,-1);
    tracep->declBit(c+442,"sdram_we", false,-1);
    tracep->declBus(c+443,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+444,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+445,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+446,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+467,"sdram_dout_en", false,-1);
    tracep->declBus(c+468,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+360,"state", false,-1, 1,0);
    tracep->declBit(c+469,"req_accept", false,-1);
    tracep->declBit(c+918,"is_read", false,-1);
    tracep->declBit(c+919,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1079,"clk_i", false,-1);
    tracep->declBit(c+1080,"rst_i", false,-1);
    tracep->declBus(c+920,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+918,"inport_rd_i", false,-1);
    tracep->declBus(c+1139,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+765,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+768,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+446,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+469,"inport_accept_o", false,-1);
    tracep->declBit(c+447,"inport_ack_o", false,-1);
    tracep->declBit(c+1125,"inport_error_o", false,-1);
    tracep->declBus(c+448,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1105,"sdram_clk_o", false,-1);
    tracep->declBit(c+438,"sdram_cke_o", false,-1);
    tracep->declBit(c+439,"sdram_cs_o", false,-1);
    tracep->declBit(c+440,"sdram_ras_o", false,-1);
    tracep->declBit(c+441,"sdram_cas_o", false,-1);
    tracep->declBit(c+442,"sdram_we_o", false,-1);
    tracep->declBus(c+445,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+443,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+444,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+468,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+467,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1175,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1176,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1177,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1179,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1180,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1181,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1182,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1183,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1179,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1184,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1185,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1186,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1187,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1188,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1189,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1190,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1137,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1191,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1179,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1137,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1190,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1189,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1185,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1187,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1186,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1188,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1184,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1192,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1193,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1194,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1194,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1195,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1194,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1178,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1196,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+765,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+920,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+918,"ram_rd_w", false,-1);
    tracep->declBit(c+469,"ram_accept_w", false,-1);
    tracep->declBus(c+768,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+448,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+447,"ram_ack_w", false,-1);
    tracep->declBit(c+921,"ram_req_w", false,-1);
    tracep->declBus(c+470,"command_q", false,-1, 3,0);
    tracep->declBus(c+443,"addr_q", false,-1, 12,0);
    tracep->declBus(c+468,"data_q", false,-1, 15,0);
    tracep->declBit(c+471,"data_rd_en_q", false,-1);
    tracep->declBus(c+445,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+438,"cke_q", false,-1);
    tracep->declBus(c+444,"bank_q", false,-1, 1,0);
    tracep->declBus(c+472,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+473,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+446,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+474,"refresh_q", false,-1);
    tracep->declBus(c+475,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+476+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+480,"state_q", false,-1, 3,0);
    tracep->declBus(c+1074,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1075,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+481,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+482,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+922,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+923,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+924,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1179,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+483,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1076,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1197,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+484,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+485,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+486,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+487,"idx", false,-1, 31,0);
    tracep->declBus(c+488,"rd_q", false,-1, 3,0);
    tracep->declBit(c+447,"ack_q", false,-1);
    tracep->declArray(c+489,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+781,"auto_in_psel", false,-1);
    tracep->declBit(c+782,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+773,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+449,"auto_in_pready", false,-1);
    tracep->declBit(c+1125,"auto_in_pslverr", false,-1);
    tracep->declBus(c+450,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+436,"spi_bundle_sck", false,-1);
    tracep->declBus(c+437,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1101,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1102,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1198,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1199,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1200,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+925,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+781,"in_psel", false,-1);
    tracep->declBit(c+782,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+449,"in_pready", false,-1);
    tracep->declBus(c+450,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1125,"in_pslverr", false,-1);
    tracep->declBit(c+436,"spi_sck", false,-1);
    tracep->declBus(c+437,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1101,"spi_mosi", false,-1);
    tracep->declBit(c+1102,"spi_miso", false,-1);
    tracep->declBit(c+492,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1201,"Tp", false,-1, 31,0);
    tracep->declBit(c+1079,"wb_clk_i", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBus(c+926,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+768,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+450,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+769,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+767,"wb_we_i", false,-1);
    tracep->declBit(c+781,"wb_stb_i", false,-1);
    tracep->declBit(c+782,"wb_cyc_i", false,-1);
    tracep->declBit(c+449,"wb_ack_o", false,-1);
    tracep->declBit(c+1125,"wb_err_o", false,-1);
    tracep->declBit(c+492,"wb_int_o", false,-1);
    tracep->declBus(c+437,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+436,"sclk_pad_o", false,-1);
    tracep->declBit(c+1101,"mosi_pad_o", false,-1);
    tracep->declBit(c+1102,"miso_pad_i", false,-1);
    tracep->declBus(c+493,"divider", false,-1, 15,0);
    tracep->declBus(c+494,"ctrl", false,-1, 13,0);
    tracep->declBus(c+495,"ss", false,-1, 7,0);
    tracep->declBus(c+1077,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+496,"rx", false,-1, 127,0);
    tracep->declBit(c+500,"rx_negedge", false,-1);
    tracep->declBit(c+501,"tx_negedge", false,-1);
    tracep->declBus(c+502,"char_len", false,-1, 6,0);
    tracep->declBit(c+503,"go", false,-1);
    tracep->declBit(c+504,"lsb", false,-1);
    tracep->declBit(c+505,"ie", false,-1);
    tracep->declBit(c+506,"ass", false,-1);
    tracep->declBit(c+927,"spi_divider_sel", false,-1);
    tracep->declBit(c+928,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+929,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+930,"spi_ss_sel", false,-1);
    tracep->declBit(c+507,"tip", false,-1);
    tracep->declBit(c+508,"pos_edge", false,-1);
    tracep->declBit(c+509,"neg_edge", false,-1);
    tracep->declBit(c+510,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1201,"Tp", false,-1, 31,0);
    tracep->declBit(c+1079,"clk_in", false,-1);
    tracep->declBit(c+1080,"rst", false,-1);
    tracep->declBit(c+507,"enable", false,-1);
    tracep->declBit(c+503,"go", false,-1);
    tracep->declBit(c+510,"last_clk", false,-1);
    tracep->declBus(c+493,"divider", false,-1, 15,0);
    tracep->declBit(c+436,"clk_out", false,-1);
    tracep->declBit(c+508,"pos_edge", false,-1);
    tracep->declBit(c+509,"neg_edge", false,-1);
    tracep->declBus(c+511,"cnt", false,-1, 15,0);
    tracep->declBit(c+512,"cnt_zero", false,-1);
    tracep->declBit(c+513,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1201,"Tp", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"rst", false,-1);
    tracep->declBus(c+931,"latch", false,-1, 3,0);
    tracep->declBus(c+769,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+502,"len", false,-1, 6,0);
    tracep->declBit(c+504,"lsb", false,-1);
    tracep->declBit(c+503,"go", false,-1);
    tracep->declBit(c+508,"pos_edge", false,-1);
    tracep->declBit(c+509,"neg_edge", false,-1);
    tracep->declBit(c+500,"rx_negedge", false,-1);
    tracep->declBit(c+501,"tx_negedge", false,-1);
    tracep->declBit(c+507,"tip", false,-1);
    tracep->declBit(c+510,"last", false,-1);
    tracep->declBus(c+768,"p_in", false,-1, 31,0);
    tracep->declArray(c+496,"p_out", false,-1, 127,0);
    tracep->declBit(c+436,"s_clk", false,-1);
    tracep->declBit(c+1102,"s_in", false,-1);
    tracep->declBit(c+1101,"s_out", false,-1);
    tracep->declBus(c+514,"cnt", false,-1, 7,0);
    tracep->declArray(c+496,"data", false,-1, 127,0);
    tracep->declBus(c+515,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+516,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+517,"rx_clk", false,-1);
    tracep->declBit(c+518,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+778,"auto_in_psel", false,-1);
    tracep->declBit(c+779,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+775,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+780,"auto_in_pready", false,-1);
    tracep->declBit(c+1125,"auto_in_pslverr", false,-1);
    tracep->declBus(c+935,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1099,"uart_rx", false,-1);
    tracep->declBit(c+1100,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+778,"in_psel", false,-1);
    tracep->declBit(c+779,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+780,"in_pready", false,-1);
    tracep->declBit(c+1125,"in_pslverr", false,-1);
    tracep->declBus(c+903,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+935,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"uart_rx", false,-1);
    tracep->declBit(c+1100,"uart_tx", false,-1);
    tracep->declBit(c+519,"rtsn", false,-1);
    tracep->declBit(c+1125,"ctsn", false,-1);
    tracep->declBit(c+520,"dtr_pad_o", false,-1);
    tracep->declBit(c+1125,"dsr_pad_i", false,-1);
    tracep->declBit(c+1125,"ri_pad_i", false,-1);
    tracep->declBit(c+1125,"dcd_pad_i", false,-1);
    tracep->declBit(c+521,"interrupt", false,-1);
    tracep->declBit(c+1116,"reg_we", false,-1);
    tracep->declBit(c+1117,"reg_re", false,-1);
    tracep->declBus(c+932,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+933,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+361,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1078,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+522,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBus(c+932,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+934,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1078,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1116,"wb_we_i", false,-1);
    tracep->declBit(c+1117,"wb_re_i", false,-1);
    tracep->declBit(c+1100,"stx_pad_o", false,-1);
    tracep->declBit(c+1099,"srx_pad_i", false,-1);
    tracep->declBus(c+1192,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+522,"rts_pad_o", false,-1);
    tracep->declBit(c+520,"dtr_pad_o", false,-1);
    tracep->declBit(c+521,"int_o", false,-1);
    tracep->declBit(c+523,"enable", false,-1);
    tracep->declBit(c+524,"srx_pad", false,-1);
    tracep->declBus(c+525,"ier", false,-1, 3,0);
    tracep->declBus(c+526,"iir", false,-1, 3,0);
    tracep->declBus(c+527,"fcr", false,-1, 1,0);
    tracep->declBus(c+528,"mcr", false,-1, 4,0);
    tracep->declBus(c+529,"lcr", false,-1, 7,0);
    tracep->declBus(c+530,"msr", false,-1, 7,0);
    tracep->declBus(c+531,"dl", false,-1, 15,0);
    tracep->declBus(c+532,"scratch", false,-1, 7,0);
    tracep->declBit(c+533,"start_dlc", false,-1);
    tracep->declBit(c+534,"lsr_mask_d", false,-1);
    tracep->declBit(c+535,"msi_reset", false,-1);
    tracep->declBus(c+536,"dlc", false,-1, 15,0);
    tracep->declBus(c+537,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+538,"rx_reset", false,-1);
    tracep->declBit(c+539,"tx_reset", false,-1);
    tracep->declBit(c+540,"dlab", false,-1);
    tracep->declBit(c+1135,"cts_pad_i", false,-1);
    tracep->declBit(c+1125,"dsr_pad_i", false,-1);
    tracep->declBit(c+1125,"ri_pad_i", false,-1);
    tracep->declBit(c+1125,"dcd_pad_i", false,-1);
    tracep->declBit(c+541,"loopback", false,-1);
    tracep->declBit(c+1125,"cts", false,-1);
    tracep->declBit(c+1135,"dsr", false,-1);
    tracep->declBit(c+1135,"ri", false,-1);
    tracep->declBit(c+1135,"dcd", false,-1);
    tracep->declBit(c+542,"cts_c", false,-1);
    tracep->declBit(c+543,"dsr_c", false,-1);
    tracep->declBit(c+544,"ri_c", false,-1);
    tracep->declBit(c+545,"dcd_c", false,-1);
    tracep->declBus(c+546,"lsr", false,-1, 7,0);
    tracep->declBit(c+547,"lsr0", false,-1);
    tracep->declBit(c+548,"lsr1", false,-1);
    tracep->declBit(c+549,"lsr2", false,-1);
    tracep->declBit(c+550,"lsr3", false,-1);
    tracep->declBit(c+551,"lsr4", false,-1);
    tracep->declBit(c+552,"lsr5", false,-1);
    tracep->declBit(c+553,"lsr6", false,-1);
    tracep->declBit(c+554,"lsr7", false,-1);
    tracep->declBit(c+555,"lsr0r", false,-1);
    tracep->declBit(c+556,"lsr1r", false,-1);
    tracep->declBit(c+557,"lsr2r", false,-1);
    tracep->declBit(c+558,"lsr3r", false,-1);
    tracep->declBit(c+559,"lsr4r", false,-1);
    tracep->declBit(c+560,"lsr5r", false,-1);
    tracep->declBit(c+561,"lsr6r", false,-1);
    tracep->declBit(c+562,"lsr7r", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+563,"rls_int", false,-1);
    tracep->declBit(c+564,"rda_int", false,-1);
    tracep->declBit(c+565,"ti_int", false,-1);
    tracep->declBit(c+566,"thre_int", false,-1);
    tracep->declBit(c+567,"ms_int", false,-1);
    tracep->declBit(c+568,"tf_push", false,-1);
    tracep->declBit(c+569,"rf_pop", false,-1);
    tracep->declBus(c+1118,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+570,"rf_error_bit", false,-1);
    tracep->declBit(c+548,"rf_overrun", false,-1);
    tracep->declBit(c+571,"rf_push_pulse", false,-1);
    tracep->declBus(c+572,"rf_count", false,-1, 4,0);
    tracep->declBus(c+573,"tf_count", false,-1, 4,0);
    tracep->declBus(c+574,"tstate", false,-1, 2,0);
    tracep->declBus(c+575,"rstate", false,-1, 3,0);
    tracep->declBus(c+576,"counter_t", false,-1, 9,0);
    tracep->declBit(c+577,"thre_set_en", false,-1);
    tracep->declBus(c+578,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+579,"block_value", false,-1, 7,0);
    tracep->declBit(c+580,"serial_out", false,-1);
    tracep->declBit(c+581,"serial_in", false,-1);
    tracep->declBit(c+8,"lsr_mask_condition", false,-1);
    tracep->declBit(c+9,"iir_read", false,-1);
    tracep->declBit(c+10,"msr_read", false,-1);
    tracep->declBit(c+11,"fifo_read", false,-1);
    tracep->declBit(c+12,"fifo_write", false,-1);
    tracep->declBus(c+582,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+583,"lsr0_d", false,-1);
    tracep->declBit(c+584,"lsr1_d", false,-1);
    tracep->declBit(c+585,"lsr2_d", false,-1);
    tracep->declBit(c+586,"lsr3_d", false,-1);
    tracep->declBit(c+587,"lsr4_d", false,-1);
    tracep->declBit(c+588,"lsr5_d", false,-1);
    tracep->declBit(c+589,"lsr6_d", false,-1);
    tracep->declBit(c+590,"lsr7_d", false,-1);
    tracep->declBit(c+591,"rls_int_d", false,-1);
    tracep->declBit(c+592,"thre_int_d", false,-1);
    tracep->declBit(c+593,"ms_int_d", false,-1);
    tracep->declBit(c+594,"ti_int_d", false,-1);
    tracep->declBit(c+595,"rda_int_d", false,-1);
    tracep->declBit(c+596,"rls_int_rise", false,-1);
    tracep->declBit(c+597,"thre_int_rise", false,-1);
    tracep->declBit(c+598,"ms_int_rise", false,-1);
    tracep->declBit(c+599,"ti_int_rise", false,-1);
    tracep->declBit(c+600,"rda_int_rise", false,-1);
    tracep->declBit(c+601,"rls_int_pnd", false,-1);
    tracep->declBit(c+602,"rda_int_pnd", false,-1);
    tracep->declBit(c+603,"thre_int_pnd", false,-1);
    tracep->declBit(c+604,"ms_int_pnd", false,-1);
    tracep->declBit(c+605,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1201,"Tp", false,-1, 31,0);
    tracep->declBus(c+1201,"width", false,-1, 31,0);
    tracep->declBus(c+1165,"init_value", false,-1, 0,0);
    tracep->declBit(c+1080,"rst_i", false,-1);
    tracep->declBit(c+1079,"clk_i", false,-1);
    tracep->declBit(c+1125,"stage1_rst_i", false,-1);
    tracep->declBit(c+1135,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1099,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+524,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+606,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBus(c+529,"lcr", false,-1, 7,0);
    tracep->declBit(c+569,"rf_pop", false,-1);
    tracep->declBit(c+581,"srx_pad_i", false,-1);
    tracep->declBit(c+523,"enable", false,-1);
    tracep->declBit(c+538,"rx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBus(c+576,"counter_t", false,-1, 9,0);
    tracep->declBus(c+572,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1118,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+548,"rf_overrun", false,-1);
    tracep->declBit(c+570,"rf_error_bit", false,-1);
    tracep->declBus(c+575,"rstate", false,-1, 3,0);
    tracep->declBit(c+571,"rf_push_pulse", false,-1);
    tracep->declBus(c+607,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+608,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+609,"rshift", false,-1, 7,0);
    tracep->declBit(c+610,"rparity", false,-1);
    tracep->declBit(c+611,"rparity_error", false,-1);
    tracep->declBit(c+612,"rframing_error", false,-1);
    tracep->declBit(c+613,"rbit_in", false,-1);
    tracep->declBit(c+614,"rparity_xor", false,-1);
    tracep->declBus(c+615,"counter_b", false,-1, 7,0);
    tracep->declBit(c+616,"rf_push_q", false,-1);
    tracep->declBus(c+617,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+618,"rf_push", false,-1);
    tracep->declBit(c+619,"break_error", false,-1);
    tracep->declBit(c+620,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+621,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+622,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+623,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1137,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1190,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1189,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1185,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1187,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1186,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1188,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1184,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1192,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1193,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1202,"sr_push", false,-1, 3,0);
    tracep->declBus(c+624,"toc_value", false,-1, 9,0);
    tracep->declBus(c+625,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1203,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1195,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1179,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1166,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBit(c+571,"push", false,-1);
    tracep->declBit(c+569,"pop", false,-1);
    tracep->declBus(c+617,"data_in", false,-1, 10,0);
    tracep->declBit(c+538,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1118,"data_out", false,-1, 10,0);
    tracep->declBit(c+548,"overrun", false,-1);
    tracep->declBus(c+572,"count", false,-1, 4,0);
    tracep->declBit(c+570,"error_bit", false,-1);
    tracep->declBus(c+1119,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+626+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+642,"top", false,-1, 3,0);
    tracep->declBus(c+643,"bottom", false,-1, 3,0);
    tracep->declBus(c+644,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+645,"word0", false,-1, 2,0);
    tracep->declBus(c+646,"word1", false,-1, 2,0);
    tracep->declBus(c+647,"word2", false,-1, 2,0);
    tracep->declBus(c+648,"word3", false,-1, 2,0);
    tracep->declBus(c+649,"word4", false,-1, 2,0);
    tracep->declBus(c+650,"word5", false,-1, 2,0);
    tracep->declBus(c+651,"word6", false,-1, 2,0);
    tracep->declBus(c+652,"word7", false,-1, 2,0);
    tracep->declBus(c+653,"word8", false,-1, 2,0);
    tracep->declBus(c+654,"word9", false,-1, 2,0);
    tracep->declBus(c+655,"word10", false,-1, 2,0);
    tracep->declBus(c+656,"word11", false,-1, 2,0);
    tracep->declBus(c+657,"word12", false,-1, 2,0);
    tracep->declBus(c+658,"word13", false,-1, 2,0);
    tracep->declBus(c+659,"word14", false,-1, 2,0);
    tracep->declBus(c+660,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1179,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1200,"data_width", false,-1, 31,0);
    tracep->declBus(c+1195,"depth", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+571,"we", false,-1);
    tracep->declBus(c+642,"a", false,-1, 3,0);
    tracep->declBus(c+643,"dpra", false,-1, 3,0);
    tracep->declBus(c+661,"di", false,-1, 7,0);
    tracep->declBus(c+1119,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+362+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBus(c+529,"lcr", false,-1, 7,0);
    tracep->declBit(c+568,"tf_push", false,-1);
    tracep->declBus(c+934,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+523,"enable", false,-1);
    tracep->declBit(c+539,"tx_reset", false,-1);
    tracep->declBit(c+7,"lsr_mask", false,-1);
    tracep->declBit(c+580,"stx_pad_o", false,-1);
    tracep->declBus(c+574,"tstate", false,-1, 2,0);
    tracep->declBus(c+573,"tf_count", false,-1, 4,0);
    tracep->declBus(c+662,"counter", false,-1, 4,0);
    tracep->declBus(c+663,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+664,"shift_out", false,-1, 6,0);
    tracep->declBit(c+665,"stx_o_tmp", false,-1);
    tracep->declBit(c+666,"parity_xor", false,-1);
    tracep->declBit(c+667,"tf_pop", false,-1);
    tracep->declBit(c+668,"bit_out", false,-1);
    tracep->declBus(c+934,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1120,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+669,"tf_overrun", false,-1);
    tracep->declBus(c+1140,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1124,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1204,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1205,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1171,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1206,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1200,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1195,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1179,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1166,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+1080,"wb_rst_i", false,-1);
    tracep->declBit(c+568,"push", false,-1);
    tracep->declBit(c+667,"pop", false,-1);
    tracep->declBus(c+934,"data_in", false,-1, 7,0);
    tracep->declBit(c+539,"fifo_reset", false,-1);
    tracep->declBit(c+7,"reset_status", false,-1);
    tracep->declBus(c+1120,"data_out", false,-1, 7,0);
    tracep->declBit(c+669,"overrun", false,-1);
    tracep->declBus(c+573,"count", false,-1, 4,0);
    tracep->declBus(c+670,"top", false,-1, 3,0);
    tracep->declBus(c+671,"bottom", false,-1, 3,0);
    tracep->declBus(c+672,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1179,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1200,"data_width", false,-1, 31,0);
    tracep->declBus(c+1195,"depth", false,-1, 31,0);
    tracep->declBit(c+1079,"clk", false,-1);
    tracep->declBit(c+568,"we", false,-1);
    tracep->declBus(c+670,"a", false,-1, 3,0);
    tracep->declBus(c+671,"dpra", false,-1, 3,0);
    tracep->declBus(c+934,"di", false,-1, 7,0);
    tracep->declBus(c+1120,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+378+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBit(c+772,"auto_in_psel", false,-1);
    tracep->declBit(c+416,"auto_in_penable", false,-1);
    tracep->declBit(c+767,"auto_in_pwrite", false,-1);
    tracep->declBus(c+773,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1124,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+768,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"auto_in_pready", false,-1);
    tracep->declBit(c+1127,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1128,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1093,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1094,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1095,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1096,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1097,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1098,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1079,"clock", false,-1);
    tracep->declBit(c+1080,"reset", false,-1);
    tracep->declBus(c+925,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+772,"in_psel", false,-1);
    tracep->declBit(c+416,"in_penable", false,-1);
    tracep->declBus(c+1124,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+767,"in_pwrite", false,-1);
    tracep->declBus(c+768,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+769,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"in_pready", false,-1);
    tracep->declBus(c+1128,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1127,"in_pslverr", false,-1);
    tracep->declBus(c+1093,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1094,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1095,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1096,"vga_hsync", false,-1);
    tracep->declBit(c+1097,"vga_vsync", false,-1);
    tracep->declBit(c+1098,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+436,"sck", false,-1);
    tracep->declBit(c+673,"ss", false,-1);
    tracep->declBit(c+1101,"mosi", false,-1);
    tracep->declBit(c+1135,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+436,"sck", false,-1);
    tracep->declBit(c+674,"ss", false,-1);
    tracep->declBit(c+1101,"mosi", false,-1);
    tracep->declBit(c+1102,"miso", false,-1);
    tracep->declBit(c+674,"reset", false,-1);
    tracep->declBus(c+688,"state", false,-1, 2,0);
    tracep->declBus(c+689,"counter", false,-1, 7,0);
    tracep->declBus(c+690,"cmd", false,-1, 7,0);
    tracep->declBus(c+691,"addr", false,-1, 23,0);
    tracep->declBus(c+692,"data", false,-1, 31,0);
    tracep->declBit(c+693,"ren", false,-1);
    tracep->declBus(c+1121,"rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"raddr", false,-1, 31,0);
    tracep->declBus(c+1123,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+436,"clock", false,-1);
    tracep->declBit(c+693,"valid", false,-1);
    tracep->declBus(c+690,"cmd", false,-1, 7,0);
    tracep->declBus(c+1122,"addr", false,-1, 31,0);
    tracep->declBus(c+1121,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1103,"sck", false,-1);
    tracep->declBit(c+1104,"ce_n", false,-1);
    tracep->declBus(c+969,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1105,"clk", false,-1);
    tracep->declBit(c+438,"cke", false,-1);
    tracep->declBit(c+439,"cs", false,-1);
    tracep->declBit(c+440,"ras", false,-1);
    tracep->declBit(c+441,"cas", false,-1);
    tracep->declBit(c+442,"we", false,-1);
    tracep->declBus(c+443,"a", false,-1, 12,0);
    tracep->declBus(c+444,"ba", false,-1, 1,0);
    tracep->declBus(c+445,"dqm", false,-1, 1,0);
    tracep->declBus(c+446,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+14,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+27,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+65,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+394,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : 0U)),32);
    bufp->fullCData(oldp+395,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+396,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+397,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+398,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+399,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+400,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+401,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+402,(((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+403,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+404,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+405,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+406,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+407,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+408,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
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
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))
                                : 0U)),4);
    bufp->fullCData(oldp+411,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))
                                : 0U)),4);
    bufp->fullCData(oldp+412,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullCData(oldp+413,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->fullBit(oldp+414,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
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
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+420,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                           << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+421,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+422,((((- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullCData(oldp+423,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+424,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullCData(oldp+425,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9))),4);
    bufp->fullCData(oldp+426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20))),4);
    bufp->fullCData(oldp+427,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullCData(oldp+428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U)))),2);
    bufp->fullBit(oldp+429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+430,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->fullIData(oldp+431,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+432,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+433,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullBit(oldp+434,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+435,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+440,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+441,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+442,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+446,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+448,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+453,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+454,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+458,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+463,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+469,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+501,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+502,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+506,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+510,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+512,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+513,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+515,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+519,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+520,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+522,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+540,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+542,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+543,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+544,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+545,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+546,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+549,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+550,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+551,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+570,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+577,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+596,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+597,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+598,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+599,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+600,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+619,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+620,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+621,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+622,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+623,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+625,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+644,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+661,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+672,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+673,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_rdata),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+693,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+713,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+714,(((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+715,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+724,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+725,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+727,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
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
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+732,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+733,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
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
    bufp->fullCData(oldp+734,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+735,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+736,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
    bufp->fullIData(oldp+737,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+738,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+739,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+740,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+741,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+743,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+744,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARBURST),2);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullBit(oldp+760,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+761,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+762,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+763,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+771,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+772,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+773,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+774,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+775,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+776,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+780,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+805,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0))));
    bufp->fullCData(oldp+806,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0))),4);
    bufp->fullIData(oldp+807,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
    bufp->fullCData(oldp+808,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0))),8);
    bufp->fullCData(oldp+809,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0))),3);
    bufp->fullCData(oldp+810,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0))),2);
    bufp->fullBit(oldp+811,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
    bufp->fullIData(oldp+812,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
    bufp->fullCData(oldp+813,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
    bufp->fullBit(oldp+814,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                       << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)))));
    bufp->fullBit(oldp+815,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
    bufp->fullBit(oldp+816,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
    bufp->fullCData(oldp+817,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0))),4);
    bufp->fullIData(oldp+818,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
    bufp->fullCData(oldp+819,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0))),8);
    bufp->fullCData(oldp+820,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0))),3);
    bufp->fullCData(oldp+821,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0))),2);
    bufp->fullBit(oldp+822,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+824,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+826,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+828,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+844,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+846,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+847,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+848,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+849,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+850,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+853,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+854,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+856,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+861,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+863,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+864,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WREADY));
    bufp->fullIData(oldp+872,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+873,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+874,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+875,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+876,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_ha6afd63c__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+877,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf8ac29e2__0) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+878,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h827cdd7a__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+879,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_he10d6d01__0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+880,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf391cef2__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+881,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h9cbb9c75__0) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+882,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h959727d0__0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+883,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc2b2e256__0) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+884,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hf7188004__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+885,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+886,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+889,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST)) 
                                   >> 1U))));
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWBURST),2);
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+903,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+904,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+912,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+913,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+914,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+915,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+916,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+917,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+922,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+923,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+924,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+925,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+926,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+929,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))))))),4);
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+932,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+938,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+939,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+940,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+941,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+942,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+943,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+945,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+946,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+947,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+948,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+949,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+950,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+951,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+952,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+953,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+954,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+955,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+956,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+957,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+958,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+959,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+960,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+961,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+963,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+964,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+965,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+966,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+967,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+968,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullCData(oldp+969,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1005,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1006,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1028,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1029,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1030,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1031,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1032,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1033,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1034,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1035,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1036,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1037,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1038,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1039,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1040,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1041,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1042,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1043,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1044,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1045,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1046,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1047,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1048,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1049,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1050,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1051,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1052,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1053,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1054,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1055,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1056,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1057,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1058,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1059,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1079,(vlSelf->clock));
    bufp->fullBit(oldp+1080,(vlSelf->reset));
    bufp->fullSData(oldp+1081,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1082,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1083,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1084,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1085,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1086,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1087,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1088,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1089,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1090,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1091,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1092,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1093,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1094,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1095,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1096,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1097,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1098,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1099,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1100,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1102,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1105,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1106,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1107,((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullBit(oldp+1108,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                     : 0U) : 0U)),32);
    bufp->fullIData(oldp+1111,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h13677cd8__0)
                                 ? (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                     ? 1U : (((0x23U 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                              ? 3U : 
                                             (((0x23U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                               ? 0xfU
                                               : 0U)))
                                 : 0U)),4);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1115,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1118,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1122,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1124,(1U),3);
    bufp->fullBit(oldp+1125,(0U));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1135,(1U));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1137,(0U),4);
    bufp->fullIData(oldp+1138,(0U),32);
    bufp->fullCData(oldp+1139,(0U),8);
    bufp->fullCData(oldp+1140,(0U),3);
    bufp->fullCData(oldp+1141,(0U),2);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1152,(0U),32);
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullCData(oldp+1161,(1U),2);
    bufp->fullCData(oldp+1162,(2U),2);
    bufp->fullCData(oldp+1163,(3U),2);
    bufp->fullBit(oldp+1164,(0U));
    bufp->fullBit(oldp+1165,(1U));
    bufp->fullIData(oldp+1166,(5U),32);
    bufp->fullIData(oldp+1167,(0x20U),32);
    bufp->fullIData(oldp+1168,(0xa0000048U),32);
    bufp->fullIData(oldp+1169,(0xa000004cU),32);
    bufp->fullIData(oldp+1170,(0x1800U),32);
    bufp->fullCData(oldp+1171,(4U),3);
    bufp->fullCData(oldp+1172,(0x1bU),8);
    bufp->fullCData(oldp+1173,(0xebU),8);
    bufp->fullCData(oldp+1174,(0x38U),8);
    bufp->fullIData(oldp+1175,(0x64U),32);
    bufp->fullIData(oldp+1176,(0x18U),32);
    bufp->fullIData(oldp+1177,(9U),32);
    bufp->fullIData(oldp+1178,(2U),32);
    bufp->fullIData(oldp+1179,(4U),32);
    bufp->fullIData(oldp+1180,(0xdU),32);
    bufp->fullIData(oldp+1181,(0x2000U),32);
    bufp->fullIData(oldp+1182,(0x2710U),32);
    bufp->fullIData(oldp+1183,(0x30cU),32);
    bufp->fullCData(oldp+1184,(7U),4);
    bufp->fullCData(oldp+1185,(3U),4);
    bufp->fullCData(oldp+1186,(5U),4);
    bufp->fullCData(oldp+1187,(4U),4);
    bufp->fullCData(oldp+1188,(6U),4);
    bufp->fullCData(oldp+1189,(2U),4);
    bufp->fullCData(oldp+1190,(1U),4);
    bufp->fullSData(oldp+1191,(0x21U),13);
    bufp->fullCData(oldp+1192,(8U),4);
    bufp->fullCData(oldp+1193,(9U),4);
    bufp->fullIData(oldp+1194,(0xaU),32);
    bufp->fullIData(oldp+1195,(0x10U),32);
    bufp->fullIData(oldp+1196,(6U),32);
    bufp->fullIData(oldp+1197,(0x11U),32);
    bufp->fullIData(oldp+1198,(0x30000000U),32);
    bufp->fullIData(oldp+1199,(0x3fffffffU),32);
    bufp->fullIData(oldp+1200,(8U),32);
    bufp->fullIData(oldp+1201,(1U),32);
    bufp->fullCData(oldp+1202,(0xaU),4);
    bufp->fullIData(oldp+1203,(0xbU),32);
    bufp->fullCData(oldp+1204,(2U),3);
    bufp->fullCData(oldp+1205,(3U),3);
    bufp->fullCData(oldp+1206,(5U),3);
}
