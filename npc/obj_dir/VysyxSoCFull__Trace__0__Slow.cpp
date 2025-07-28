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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1276,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1277,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1283,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1284,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1285,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1286,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1287,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1288,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1291,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1292,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1293,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1294,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1295,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1276,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1277,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1278,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1279,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1280,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1281,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1282,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1283,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1284,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1285,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1286,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1287,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1288,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1289,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1291,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1292,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1293,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1294,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1295,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+425,"spi_sck", false,-1);
    tracep->declBus(c+426,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+841,"spi_mosi", false,-1);
    tracep->declBit(c+1296,"spi_miso", false,-1);
    tracep->declBit(c+1294,"uart_rx", false,-1);
    tracep->declBit(c+1295,"uart_tx", false,-1);
    tracep->declBit(c+1270,"psram_sck", false,-1);
    tracep->declBit(c+1271,"psram_ce_n", false,-1);
    tracep->declBus(c+1297,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1298,"sdram_clk", false,-1);
    tracep->declBit(c+427,"sdram_cke", false,-1);
    tracep->declBit(c+842,"sdram_cs", false,-1);
    tracep->declBit(c+843,"sdram_ras", false,-1);
    tracep->declBit(c+844,"sdram_cas", false,-1);
    tracep->declBit(c+845,"sdram_we", false,-1);
    tracep->declBus(c+846,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+847,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+428,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+871,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1276,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1277,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1278,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1284,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1285,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1286,"ps2_clk", false,-1);
    tracep->declBit(c+1287,"ps2_data", false,-1);
    tracep->declBus(c+1288,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1289,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1290,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1291,"vga_hsync", false,-1);
    tracep->declBit(c+1292,"vga_vsync", false,-1);
    tracep->declBit(c+1293,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+916,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+917,"in_psel", false,-1);
    tracep->declBit(c+797,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+429,"in_pready", false,-1);
    tracep->declBus(c+430,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+431,"in_pslverr", false,-1);
    tracep->declBus(c+916,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+917,"out_psel", false,-1);
    tracep->declBit(c+797,"out_penable", false,-1);
    tracep->declBus(c+1356,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"out_pwrite", false,-1);
    tracep->declBus(c+919,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"out_pready", false,-1);
    tracep->declBus(c+1300,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"out_pslverr", false,-1);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1359,"COMPUTE", false,-1, 1,0);
    tracep->declBus(c+1360,"DELAY", false,-1, 1,0);
    tracep->declBus(c+432,"state", false,-1, 1,0);
    tracep->declBus(c+433,"delay_counter", false,-1, 10,0);
    tracep->declBus(c+434,"prdata_reg", false,-1, 31,0);
    tracep->declBus(c+435,"pslverr_reg", false,-1, 31,0);
    tracep->declBus(c+1361,"r", false,-1, 10,0);
    tracep->declBus(c+1359,"s", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+917,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+797,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+916,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1356,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1299,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+921,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1300,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+922,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+836,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+916,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1356,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1362,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+437,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+923,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+837,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1356,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1363,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1364,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+925,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+926,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+927,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1365,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+440,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+928,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+838,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+927,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1366,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+442,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+929,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+839,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+916,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1356,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1362,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+798,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+930,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+931,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+927,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+932,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1362,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1124,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+933,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+934,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+918,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1356,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1302,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1362,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1164,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+935,"sel_0", false,-1);
    tracep->declBit(c+936,"sel_1", false,-1);
    tracep->declBit(c+937,"sel_2", false,-1);
    tracep->declBit(c+938,"sel_3", false,-1);
    tracep->declBit(c+939,"sel_4", false,-1);
    tracep->declBit(c+940,"sel_5", false,-1);
    tracep->declBit(c+941,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+942,"auto_in_awready", false,-1);
    tracep->declBit(c+943,"auto_in_awvalid", false,-1);
    tracep->declBus(c+944,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+942,"auto_in_wready", false,-1);
    tracep->declBit(c+947,"auto_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_bready", false,-1);
    tracep->declBit(c+1166,"auto_in_bvalid", false,-1);
    tracep->declBus(c+11,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+950,"auto_in_arready", false,-1);
    tracep->declBit(c+951,"auto_in_arvalid", false,-1);
    tracep->declBus(c+952,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1167,"auto_in_rready", false,-1);
    tracep->declBit(c+1168,"auto_in_rvalid", false,-1);
    tracep->declBus(c+12,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+917,"auto_out_psel", false,-1);
    tracep->declBit(c+797,"auto_out_penable", false,-1);
    tracep->declBit(c+918,"auto_out_pwrite", false,-1);
    tracep->declBus(c+916,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+919,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+429,"auto_out_pready", false,-1);
    tracep->declBit(c+431,"auto_out_pslverr", false,-1);
    tracep->declBus(c+430,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+797,"nodeOut_penable", false,-1);
    tracep->declBus(c+799,"state", false,-1, 1,0);
    tracep->declBit(c+950,"accept_read", false,-1);
    tracep->declBit(c+942,"accept_write", false,-1);
    tracep->declBit(c+13,"is_write_r", false,-1);
    tracep->declBit(c+918,"is_write", false,-1);
    tracep->declBus(c+12,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+11,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+14,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+15,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+16,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+17,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+443,"resp", false,-1, 1,0);
    tracep->declBus(c+18,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1303,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1168,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+19,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1166,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+20,"auto_in_awready", false,-1);
    tracep->declBit(c+955,"auto_in_awvalid", false,-1);
    tracep->declBus(c+956,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"auto_in_wready", false,-1);
    tracep->declBit(c+961,"auto_in_wvalid", false,-1);
    tracep->declBus(c+962,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_in_wlast", false,-1);
    tracep->declBit(c+965,"auto_in_bready", false,-1);
    tracep->declBit(c+1169,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_arready", false,-1);
    tracep->declBit(c+966,"auto_in_arvalid", false,-1);
    tracep->declBus(c+967,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_in_rlast", false,-1);
    tracep->declBit(c+1173,"auto_out_awready", false,-1);
    tracep->declBit(c+973,"auto_out_awvalid", false,-1);
    tracep->declBus(c+944,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1174,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+948,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_out_wlast", false,-1);
    tracep->declBit(c+1175,"auto_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1178,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_out_arready", false,-1);
    tracep->declBit(c+977,"auto_out_arvalid", false,-1);
    tracep->declBus(c+952,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+972,"auto_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1309,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1180,"auto_out_rlast", false,-1);
    tracep->declBit(c+975,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+23,"w_idle", false,-1);
    tracep->declBit(c+1181,"in_awready", false,-1);
    tracep->declBit(c+24,"busy", false,-1);
    tracep->declBus(c+25,"r_addr", false,-1, 31,0);
    tracep->declBus(c+26,"r_len", false,-1, 7,0);
    tracep->declBus(c+979,"len", false,-1, 7,0);
    tracep->declBus(c+980,"addr", false,-1, 31,0);
    tracep->declBit(c+27,"busy_1", false,-1);
    tracep->declBus(c+28,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+29,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+981,"len_1", false,-1, 7,0);
    tracep->declBus(c+982,"addr_1", false,-1, 31,0);
    tracep->declBit(c+30,"wbeats_latched", false,-1);
    tracep->declBit(c+973,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+983,"wbeats_valid", false,-1);
    tracep->declBus(c+31,"w_counter", false,-1, 8,0);
    tracep->declBus(c+984,"w_todo", false,-1, 8,0);
    tracep->declBit(c+976,"w_last", false,-1);
    tracep->declBit(c+1175,"nodeOut_bready", false,-1);
    tracep->declBus(c+32,"error_0", false,-1, 1,0);
    tracep->declBus(c+33,"error_1", false,-1, 1,0);
    tracep->declBus(c+34,"error_2", false,-1, 1,0);
    tracep->declBus(c+35,"error_3", false,-1, 1,0);
    tracep->declBus(c+36,"error_4", false,-1, 1,0);
    tracep->declBus(c+37,"error_5", false,-1, 1,0);
    tracep->declBus(c+38,"error_6", false,-1, 1,0);
    tracep->declBus(c+39,"error_7", false,-1, 1,0);
    tracep->declBus(c+40,"error_8", false,-1, 1,0);
    tracep->declBus(c+41,"error_9", false,-1, 1,0);
    tracep->declBus(c+42,"error_10", false,-1, 1,0);
    tracep->declBus(c+43,"error_11", false,-1, 1,0);
    tracep->declBus(c+44,"error_12", false,-1, 1,0);
    tracep->declBus(c+45,"error_13", false,-1, 1,0);
    tracep->declBus(c+46,"error_14", false,-1, 1,0);
    tracep->declBus(c+47,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+966,"io_enq_valid", false,-1);
    tracep->declBus(c+967,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+968,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+969,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+970,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+971,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1182,"io_deq_ready", false,-1);
    tracep->declBit(c+977,"io_deq_valid", false,-1);
    tracep->declBus(c+952,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+985,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+986,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+954,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+987,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+48,"ram", false,-1, 48,0);
    tracep->declBit(c+50,"full", false,-1);
    tracep->declBit(c+977,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1183,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+955,"io_enq_valid", false,-1);
    tracep->declBus(c+956,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+957,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+958,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+959,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+960,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1184,"io_deq_ready", false,-1);
    tracep->declBit(c+988,"io_deq_valid", false,-1);
    tracep->declBus(c+944,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+989,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+990,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+946,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+991,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+51,"ram", false,-1, 48,0);
    tracep->declBit(c+53,"full", false,-1);
    tracep->declBit(c+988,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1185,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+21,"io_enq_ready", false,-1);
    tracep->declBit(c+961,"io_enq_valid", false,-1);
    tracep->declBus(c+962,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+963,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+964,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1186,"io_deq_ready", false,-1);
    tracep->declBit(c+992,"io_deq_valid", false,-1);
    tracep->declBus(c+948,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+949,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+420,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+54,"ram", false,-1, 36,0);
    tracep->declBit(c+56,"full", false,-1);
    tracep->declBit(c+992,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1187,"do_enq", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+1188,"auto_in_awready", false,-1);
    tracep->declBit(c+993,"auto_in_awvalid", false,-1);
    tracep->declBus(c+944,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+994,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1125,"auto_in_wready", false,-1);
    tracep->declBit(c+995,"auto_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1189,"auto_in_bready", false,-1);
    tracep->declBit(c+57,"auto_in_bvalid", false,-1);
    tracep->declBus(c+58,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_in_arready", false,-1);
    tracep->declBit(c+996,"auto_in_arvalid", false,-1);
    tracep->declBus(c+952,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+997,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1191,"auto_in_rready", false,-1);
    tracep->declBit(c+60,"auto_in_rvalid", false,-1);
    tracep->declBus(c+61,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1190,"nodeIn_arready", false,-1);
    tracep->declBit(c+1188,"nodeIn_awready", false,-1);
    tracep->declBit(c+998,"w_sel0", false,-1);
    tracep->declBit(c+57,"w_full", false,-1);
    tracep->declBus(c+58,"w_id", false,-1, 3,0);
    tracep->declBit(c+64,"r_sel1", false,-1);
    tracep->declBit(c+65,"w_sel1", false,-1);
    tracep->declBit(c+60,"r_full", false,-1);
    tracep->declBus(c+61,"r_id", false,-1, 3,0);
    tracep->declBit(c+1192,"ren", false,-1);
    tracep->declBit(c+66,"rdata_REG", false,-1);
    tracep->declBus(c+67,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+68,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+69,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+70,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+999,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1192,"R0_en", false,-1);
    tracep->declBit(c+1274,"R0_clk", false,-1);
    tracep->declBus(c+71,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1000,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1193,"W0_en", false,-1);
    tracep->declBit(c+1274,"W0_clk", false,-1);
    tracep->declBus(c+948,"W0_data", false,-1, 31,0);
    tracep->declBus(c+949,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+20,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+955,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+962,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+965,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1169,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+966,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+967,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+20,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+955,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+956,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+962,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+965,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1169,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+966,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+967,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+1194,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1001,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+944,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+975,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1175,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1195,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1002,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+952,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1180,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1188,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+993,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+944,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+994,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1125,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+995,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+948,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1189,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+58,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1190,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+996,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+952,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+997,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1191,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+60,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+62,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1003,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1004,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+72,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1005,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+952,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1006,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1310,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+73,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+74,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+942,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+943,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+944,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+942,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+947,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+948,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1166,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+11,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+1303,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+950,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+951,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+952,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1167,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+12,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1304,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"in_0_bvalid", false,-1);
    tracep->declBit(c+1171,"in_0_rvalid", false,-1);
    tracep->declBit(c+1196,"in_0_wready", false,-1);
    tracep->declBit(c+1197,"in_0_awready", false,-1);
    tracep->declBit(c+1195,"in_0_arready", false,-1);
    tracep->declBit(c+1194,"anonIn_awready", false,-1);
    tracep->declBit(c+1007,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1008,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1009,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1010,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1011,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1012,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1013,"arSel", false,-1, 15,0);
    tracep->declBus(c+1014,"awSel", false,-1, 15,0);
    tracep->declBus(c+1198,"rSel", false,-1, 15,0);
    tracep->declBus(c+1199,"bSel", false,-1, 15,0);
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
    tracep->declBit(c+1015,"in_0_awvalid", false,-1);
    tracep->declBit(c+1016,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1017,"in_0_wvalid", false,-1);
    tracep->declBit(c+109,"idle_3", false,-1);
    tracep->declBit(c+1200,"anyValid", false,-1);
    tracep->declBus(c+1201,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+110,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1202,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1203,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1204,"prefixOR_1", false,-1);
    tracep->declBit(c+1205,"winner_3_1", false,-1);
    tracep->declBit(c+1206,"winner_3_2", false,-1);
    tracep->declBit(c+111,"state_3_0", false,-1);
    tracep->declBit(c+112,"state_3_1", false,-1);
    tracep->declBit(c+113,"state_3_2", false,-1);
    tracep->declBit(c+1207,"muxState_3_0", false,-1);
    tracep->declBit(c+1208,"muxState_3_1", false,-1);
    tracep->declBit(c+1209,"muxState_3_2", false,-1);
    tracep->declBit(c+114,"idle_4", false,-1);
    tracep->declBit(c+1210,"anyValid_1", false,-1);
    tracep->declBus(c+1211,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+115,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1212,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1213,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1214,"winner_4_0", false,-1);
    tracep->declBit(c+1215,"winner_4_2", false,-1);
    tracep->declBit(c+116,"state_4_0", false,-1);
    tracep->declBit(c+117,"state_4_2", false,-1);
    tracep->declBit(c+1216,"muxState_4_0", false,-1);
    tracep->declBit(c+1217,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+118,"io_enq_ready", false,-1);
    tracep->declBit(c+1016,"io_enq_valid", false,-1);
    tracep->declBus(c+1018,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1218,"io_deq_ready", false,-1);
    tracep->declBit(c+1019,"io_deq_valid", false,-1);
    tracep->declBus(c+1020,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+119,"wrap", false,-1);
    tracep->declBit(c+120,"wrap_1", false,-1);
    tracep->declBit(c+121,"maybe_full", false,-1);
    tracep->declBit(c+122,"ptr_match", false,-1);
    tracep->declBit(c+123,"empty", false,-1);
    tracep->declBit(c+124,"full", false,-1);
    tracep->declBit(c+1019,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1219,"do_deq", false,-1);
    tracep->declBit(c+1220,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+120,"R0_addr", false,-1);
    tracep->declBit(c+1367,"R0_en", false,-1);
    tracep->declBit(c+1274,"R0_clk", false,-1);
    tracep->declBus(c+125,"R0_data", false,-1, 2,0);
    tracep->declBit(c+119,"W0_addr", false,-1);
    tracep->declBit(c+1220,"W0_en", false,-1);
    tracep->declBit(c+1274,"W0_clk", false,-1);
    tracep->declBus(c+1018,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+1173,"auto_in_awready", false,-1);
    tracep->declBit(c+973,"auto_in_awvalid", false,-1);
    tracep->declBus(c+944,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+974,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1174,"auto_in_wready", false,-1);
    tracep->declBit(c+975,"auto_in_wvalid", false,-1);
    tracep->declBus(c+948,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_in_wlast", false,-1);
    tracep->declBit(c+1175,"auto_in_bready", false,-1);
    tracep->declBit(c+1176,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1178,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_in_arready", false,-1);
    tracep->declBit(c+977,"auto_in_arvalid", false,-1);
    tracep->declBus(c+952,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+978,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+972,"auto_in_rready", false,-1);
    tracep->declBit(c+1171,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1309,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1180,"auto_in_rlast", false,-1);
    tracep->declBit(c+1194,"auto_out_awready", false,-1);
    tracep->declBit(c+1001,"auto_out_awvalid", false,-1);
    tracep->declBus(c+944,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+946,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1174,"auto_out_wready", false,-1);
    tracep->declBit(c+975,"auto_out_wvalid", false,-1);
    tracep->declBus(c+948,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+949,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+976,"auto_out_wlast", false,-1);
    tracep->declBit(c+1175,"auto_out_bready", false,-1);
    tracep->declBit(c+1176,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1177,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1195,"auto_out_arready", false,-1);
    tracep->declBit(c+1002,"auto_out_arvalid", false,-1);
    tracep->declBus(c+952,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+953,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+954,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+972,"auto_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1180,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+128,"io_enq_ready", false,-1);
    tracep->declBit(c+1126,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1221,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+132,"io_enq_ready", false,-1);
    tracep->declBit(c+1127,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1222,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+136,"io_enq_ready", false,-1);
    tracep->declBit(c+1128,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1223,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+1129,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1224,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+1130,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1225,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1131,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1226,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1227,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1228,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+1134,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1229,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+1135,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1230,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1231,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1232,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+1138,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1233,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+1139,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1234,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1140,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1235,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+1141,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1236,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+1142,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1237,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1238,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+1144,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1239,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+1145,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1240,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1146,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1241,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1242,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+1148,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1243,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+1149,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+1150,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1245,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBit(c+974,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1246,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+1152,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1247,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+1153,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1248,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+1154,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1249,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1250,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+1156,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1251,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBit(c+978,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1252,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+20,"auto_master_out_awready", false,-1);
    tracep->declBit(c+955,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+956,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+957,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"auto_master_out_wready", false,-1);
    tracep->declBit(c+961,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+962,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+965,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1169,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1170,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_master_out_arready", false,-1);
    tracep->declBit(c+966,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+967,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+968,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1171,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1172,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1311,"reset", false,-1);
    tracep->declBit(c+1362,"io_interrupt", false,-1);
    tracep->declBit(c+20,"io_master_awready", false,-1);
    tracep->declBit(c+955,"io_master_awvalid", false,-1);
    tracep->declBus(c+956,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+957,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"io_master_wready", false,-1);
    tracep->declBit(c+961,"io_master_wvalid", false,-1);
    tracep->declBus(c+962,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"io_master_wlast", false,-1);
    tracep->declBit(c+965,"io_master_bready", false,-1);
    tracep->declBit(c+1169,"io_master_bvalid", false,-1);
    tracep->declBus(c+1170,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"io_master_arready", false,-1);
    tracep->declBit(c+966,"io_master_arvalid", false,-1);
    tracep->declBus(c+967,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+968,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"io_master_rready", false,-1);
    tracep->declBit(c+1171,"io_master_rvalid", false,-1);
    tracep->declBus(c+1172,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"io_master_rlast", false,-1);
    tracep->declBit(c+1368,"io_slave_awready", false,-1);
    tracep->declBit(c+1362,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1369,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1370,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1371,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1372,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1357,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1373,"io_slave_wready", false,-1);
    tracep->declBit(c+1362,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1370,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1369,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1362,"io_slave_wlast", false,-1);
    tracep->declBit(c+1362,"io_slave_bready", false,-1);
    tracep->declBit(c+1374,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1375,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1376,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1377,"io_slave_arready", false,-1);
    tracep->declBit(c+1362,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1369,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1370,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1371,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1372,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1357,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1362,"io_slave_rready", false,-1);
    tracep->declBit(c+1378,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1379,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1380,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1381,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1382,"io_slave_rlast", false,-1);
    tracep->declBit(c+256,"DIFFTEST", false,-1);
    tracep->declBus(c+1158,"pc", false,-1, 31,0);
    tracep->declBus(c+1159,"dnpc", false,-1, 31,0);
    tracep->declBit(c+1160,"pc_valid", false,-1);
    tracep->declBit(c+1312,"if_ready", false,-1);
    tracep->declBus(c+885,"inst", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid", false,-1);
    tracep->declBit(c+906,"id_ready", false,-1);
    tracep->declBus(c+1383,"if_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1383,"if_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+907,"if_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1314,"if_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1369,"if_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1371,"if_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+257,"if_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1369,"if_axi_awid", false,-1, 3,0);
    tracep->declBus(c+411,"if_axi_bid", false,-1, 3,0);
    tracep->declBus(c+258,"if_axi_arid", false,-1, 3,0);
    tracep->declBus(c+412,"if_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1372,"if_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+259,"if_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1357,"if_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+260,"if_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+413,"if_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1315,"if_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1362,"if_axi_awvalid", false,-1);
    tracep->declBit(c+1316,"if_axi_awready", false,-1);
    tracep->declBit(c+1362,"if_axi_wvalid", false,-1);
    tracep->declBit(c+1317,"if_axi_wready", false,-1);
    tracep->declBit(c+414,"if_axi_bvalid", false,-1);
    tracep->declBit(c+1362,"if_axi_bready", false,-1);
    tracep->declBit(c+908,"if_axi_arvalid", false,-1);
    tracep->declBit(c+1021,"if_axi_arready", false,-1);
    tracep->declBit(c+1253,"if_axi_rvalid", false,-1);
    tracep->declBit(c+909,"if_axi_rready", false,-1);
    tracep->declBit(c+1384,"if_axi_wlast", false,-1);
    tracep->declBit(c+415,"if_axi_rlast", false,-1);
    tracep->declBit(c+800,"id_valid", false,-1);
    tracep->declBit(c+801,"ex_ready", false,-1);
    tracep->declBus(c+802,"op", false,-1, 6,0);
    tracep->declBus(c+261,"rd", false,-1, 4,0);
    tracep->declBus(c+803,"funct3", false,-1, 2,0);
    tracep->declBus(c+262,"rs1", false,-1, 4,0);
    tracep->declBus(c+263,"rs2", false,-1, 4,0);
    tracep->declBus(c+264,"imm", false,-1, 31,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->declBus(c+266,"shamt", false,-1, 4,0);
    tracep->declBit(c+804,"ls_read", false,-1);
    tracep->declBit(c+805,"ls_write", false,-1);
    tracep->declBit(c+886,"ls_done", false,-1);
    tracep->declBit(c+267,"ex_valid", false,-1);
    tracep->declBit(c+268,"wb_ready", false,-1);
    tracep->declBus(c+269,"ex", false,-1, 31,0);
    tracep->declBit(c+806,"ls_valid", false,-1);
    tracep->declBit(c+807,"ls_wen", false,-1);
    tracep->declBus(c+808,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+400,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+809,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+810,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+811,"ls_awsize", false,-1, 2,0);
    tracep->declBus(c+812,"ls_arsize", false,-1, 2,0);
    tracep->declBus(c+1371,"ls_awlen", false,-1, 7,0);
    tracep->declBus(c+1371,"ls_arlen", false,-1, 7,0);
    tracep->declBus(c+1358,"ls_awburst", false,-1, 1,0);
    tracep->declBus(c+1358,"ls_arburst", false,-1, 1,0);
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
    tracep->declBus(c+683,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+684,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1318,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+685,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+840,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+686,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+687,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1385,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+416,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1386,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+417,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+688,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+689,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+690,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+691,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+418,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+1320,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+692,"ls_axi_awvalid", false,-1);
    tracep->declBit(c+1022,"ls_axi_awready", false,-1);
    tracep->declBit(c+693,"ls_axi_wvalid", false,-1);
    tracep->declBit(c+1023,"ls_axi_wready", false,-1);
    tracep->declBit(c+1254,"ls_axi_bvalid", false,-1);
    tracep->declBit(c+694,"ls_axi_bready", false,-1);
    tracep->declBit(c+695,"ls_axi_arvalid", false,-1);
    tracep->declBit(c+1024,"ls_axi_arready", false,-1);
    tracep->declBit(c+1255,"ls_axi_rvalid", false,-1);
    tracep->declBit(c+696,"ls_axi_rready", false,-1);
    tracep->declBit(c+697,"ls_axi_wlast", false,-1);
    tracep->declBit(c+419,"ls_axi_rlast", false,-1);
    tracep->declBus(c+1025,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1026,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1027,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+283,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1028,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBus(c+1029,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1030,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1031,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+284,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+1032,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+285,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1033,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1034,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1035,"c_axi_awburst", false,-1, 1,0);
    tracep->declBus(c+1036,"c_axi_arburst", false,-1, 1,0);
    tracep->declBus(c+286,"c_axi_bresp", false,-1, 1,0);
    tracep->declBus(c+287,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+1037,"c_axi_awvalid", false,-1);
    tracep->declBit(c+288,"c_axi_awready", false,-1);
    tracep->declBit(c+1038,"c_axi_wvalid", false,-1);
    tracep->declBit(c+289,"c_axi_wready", false,-1);
    tracep->declBit(c+290,"c_axi_bvalid", false,-1);
    tracep->declBit(c+1039,"c_axi_bready", false,-1);
    tracep->declBit(c+1040,"c_axi_arvalid", false,-1);
    tracep->declBit(c+291,"c_axi_arready", false,-1);
    tracep->declBit(c+292,"c_axi_rvalid", false,-1);
    tracep->declBit(c+1041,"c_axi_rready", false,-1);
    tracep->declBit(c+1042,"c_axi_wlast", false,-1);
    tracep->declBit(c+293,"c_axi_rlast", false,-1);
    tracep->declBit(c+1321,"wb_done", false,-1);
    tracep->declBit(c+256,"difftest", false,-1);
    tracep->declBus(c+294,"xrd", false,-1, 31,0);
    tracep->declBus(c+295,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+296,"rf_wen", false,-1);
    tracep->declBus(c+297,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+298,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+299,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+300,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+301,"mepc_en", false,-1);
    tracep->declBit(c+302,"mstatus_en", false,-1);
    tracep->declBit(c+303,"mcause_en", false,-1);
    tracep->declBit(c+304,"mtvec_en", false,-1);
    tracep->declBus(c+305,"r1", false,-1, 31,0);
    tracep->declBus(c+306,"r2", false,-1, 31,0);
    tracep->declBus(c+307,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+308,"marchid", false,-1, 31,0);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+288,"c_axi_awready", false,-1);
    tracep->declBit(c+1037,"c_axi_awvalid", false,-1);
    tracep->declBus(c+1031,"c_axi_awid", false,-1, 3,0);
    tracep->declBus(c+1025,"c_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+1029,"c_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1033,"c_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1035,"c_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+289,"c_axi_wready", false,-1);
    tracep->declBit(c+1038,"c_axi_wvalid", false,-1);
    tracep->declBus(c+1026,"c_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1028,"c_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1042,"c_axi_wlast", false,-1);
    tracep->declBit(c+1039,"c_axi_bready", false,-1);
    tracep->declBit(c+290,"c_axi_bvalid", false,-1);
    tracep->declBus(c+284,"c_axi_bid", false,-1, 3,0);
    tracep->declBus(c+286,"c_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+291,"c_axi_arready", false,-1);
    tracep->declBit(c+1040,"c_axi_arvalid", false,-1);
    tracep->declBus(c+1032,"c_axi_arid", false,-1, 3,0);
    tracep->declBus(c+1027,"c_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1030,"c_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1034,"c_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1036,"c_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+1041,"c_axi_rready", false,-1);
    tracep->declBit(c+292,"c_axi_rvalid", false,-1);
    tracep->declBus(c+285,"c_axi_rid", false,-1, 3,0);
    tracep->declBus(c+283,"c_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+287,"c_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+293,"c_axi_rlast", false,-1);
    tracep->declBit(c+288,"axi_awready", false,-1);
    tracep->declBit(c+289,"axi_wready", false,-1);
    tracep->declBit(c+290,"axi_bvalid", false,-1);
    tracep->declBit(c+291,"axi_arready", false,-1);
    tracep->declBit(c+292,"axi_rvalid", false,-1);
    tracep->declBit(c+293,"axi_rlast", false,-1);
    tracep->declBus(c+286,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+287,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+284,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+285,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+283,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+309,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1387,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1388,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+310,"mtime", false,-1, 63,0);
    tracep->declBus(c+421,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+269,"ex_o", false,-1, 31,0);
    tracep->declBit(c+800,"id_valid_i", false,-1);
    tracep->declBit(c+801,"ex_ready_o", false,-1);
    tracep->declBit(c+267,"ex_valid_o", false,-1);
    tracep->declBit(c+268,"wb_ready_i", false,-1);
    tracep->declBus(c+802,"op_i", false,-1, 6,0);
    tracep->declBus(c+803,"funct3_i", false,-1, 2,0);
    tracep->declBus(c+264,"imm_i", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_i", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+305,"r1_i", false,-1, 31,0);
    tracep->declBus(c+306,"r2_i", false,-1, 31,0);
    tracep->declBit(c+804,"ls_read_o", false,-1);
    tracep->declBit(c+805,"ls_write_o", false,-1);
    tracep->declBit(c+886,"ls_done_i", false,-1);
    tracep->declBit(c+806,"ls_valid_o", false,-1);
    tracep->declBit(c+807,"ls_wen_o", false,-1);
    tracep->declBus(c+808,"ls_waddr_o", false,-1, 31,0);
    tracep->declBus(c+400,"ls_wdata_o", false,-1, 31,0);
    tracep->declBus(c+809,"ls_raddr_o", false,-1, 31,0);
    tracep->declBus(c+810,"ls_wmask_o", false,-1, 3,0);
    tracep->declBus(c+811,"ls_awsize_o", false,-1, 2,0);
    tracep->declBus(c+812,"ls_arsize_o", false,-1, 2,0);
    tracep->declBus(c+1371,"ls_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1371,"ls_arlen_o", false,-1, 7,0);
    tracep->declBus(c+1358,"ls_awburst_o", false,-1, 1,0);
    tracep->declBus(c+1358,"ls_arburst_o", false,-1, 1,0);
    tracep->declBus(c+683,"ls_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1158,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1159,"dnpc_o", false,-1, 31,0);
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
    tracep->declBit(c+801,"ex_ready", false,-1);
    tracep->declBit(c+267,"ex_valid", false,-1);
    tracep->declBit(c+813,"al_start", false,-1);
    tracep->declBit(c+887,"al_done", false,-1);
    tracep->declBit(c+804,"ls_read_reg", false,-1);
    tracep->declBit(c+805,"ls_write_reg", false,-1);
    tracep->declBus(c+269,"ex_reg", false,-1, 31,0);
    tracep->declBus(c+1159,"dnpc_reg", false,-1, 31,0);
    tracep->declBit(c+278,"gpr_wen_reg", false,-1);
    tracep->declBus(c+271,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+279,"mepc_wen_reg", false,-1);
    tracep->declBit(c+280,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+281,"mcause_wen_reg", false,-1);
    tracep->declBit(c+282,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+312,"ram_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1359,"READY", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE", false,-1, 1,0);
    tracep->declBus(c+814,"state", false,-1, 1,0);
    tracep->declBus(c+1322,"next_state", false,-1, 1,0);
    tracep->declBit(c+815,"al_valid", false,-1);
    tracep->declBus(c+313,"al_res", false,-1, 31,0);
    tracep->declBus(c+401,"a", false,-1, 31,0);
    tracep->declBus(c+402,"b", false,-1, 31,0);
    tracep->declBus(c+1161,"ex", false,-1, 31,0);
    tracep->declBus(c+816,"sel", false,-1, 3,0);
    tracep->declBus(c+817,"x", false,-1, 31,0);
    tracep->declBus(c+818,"y", false,-1, 31,0);
    tracep->declBus(c+698,"res", false,-1, 31,0);
    tracep->declBus(c+1369,"ADD", false,-1, 3,0);
    tracep->declBus(c+1389,"SUB", false,-1, 3,0);
    tracep->declBus(c+1390,"SLL", false,-1, 3,0);
    tracep->declBus(c+1391,"SRL", false,-1, 3,0);
    tracep->declBus(c+1392,"SRA", false,-1, 3,0);
    tracep->declBus(c+1393,"SLT", false,-1, 3,0);
    tracep->declBus(c+1394,"AND", false,-1, 3,0);
    tracep->declBus(c+1395,"OR", false,-1, 3,0);
    tracep->declBus(c+1396,"XOR", false,-1, 3,0);
    tracep->declBus(c+1397,"MUL", false,-1, 3,0);
    tracep->declBus(c+1398,"MULH", false,-1, 3,0);
    tracep->declBus(c+1399,"DIV", false,-1, 3,0);
    tracep->declBus(c+1400,"REM", false,-1, 3,0);
    tracep->declBus(c+819,"csr", false,-1, 31,0);
    tracep->declBus(c+1323,"mepc_w", false,-1, 31,0);
    tracep->declBus(c+820,"mstatus_w", false,-1, 31,0);
    tracep->declBus(c+403,"mcause_w", false,-1, 31,0);
    tracep->declBus(c+820,"mtvec_w", false,-1, 31,0);
    tracep->declBus(c+820,"csrs_w", false,-1, 31,0);
    tracep->declBit(c+821,"mepc_wen", false,-1);
    tracep->declBit(c+822,"mstatus_wen", false,-1);
    tracep->declBit(c+823,"mcause_wen", false,-1);
    tracep->declBit(c+824,"mtvec_wen", false,-1);
    tracep->declBus(c+1324,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+264,"offset", false,-1, 31,0);
    tracep->declBit(c+825,"jalen", false,-1);
    tracep->declBit(c+826,"jalren", false,-1);
    tracep->declBit(c+404,"beqen", false,-1);
    tracep->declBit(c+405,"bneen", false,-1);
    tracep->declBit(c+406,"blten", false,-1);
    tracep->declBit(c+407,"bgeen", false,-1);
    tracep->declBit(c+408,"bltuen", false,-1);
    tracep->declBit(c+409,"bgeuen", false,-1);
    tracep->declBit(c+827,"ecall_en", false,-1);
    tracep->declBit(c+410,"mret_en", false,-1);
    tracep->declBus(c+1162,"dnpc", false,-1, 31,0);
    tracep->declBit(c+828,"gpr_wen", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+817,"a", false,-1, 31,0);
    tracep->declBus(c+818,"b", false,-1, 31,0);
    tracep->declBus(c+816,"opcode", false,-1, 3,0);
    tracep->declBit(c+813,"start", false,-1);
    tracep->declBus(c+698,"res", false,-1, 31,0);
    tracep->declBit(c+887,"done", false,-1);
    tracep->declBus(c+1369,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+1389,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+1390,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+1391,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+1392,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+1393,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+1394,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+1395,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+1396,"OP_XOR", false,-1, 3,0);
    tracep->declBus(c+1397,"OP_MUL", false,-1, 3,0);
    tracep->declBus(c+1398,"OP_MULH", false,-1, 3,0);
    tracep->declBus(c+1399,"OP_DIV", false,-1, 3,0);
    tracep->declBus(c+1400,"OP_REM", false,-1, 3,0);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"EXECUTE", false,-1, 1,0);
    tracep->declBus(c+1359,"FINISH", false,-1, 1,0);
    tracep->declBus(c+1360,"NULL", false,-1, 1,0);
    tracep->declBus(c+699,"state", false,-1, 1,0);
    tracep->declBus(c+700,"a_reg", false,-1, 31,0);
    tracep->declBus(c+701,"b_reg", false,-1, 31,0);
    tracep->declBus(c+702,"opcode_reg", false,-1, 3,0);
    tracep->declQuad(c+703,"mul_result", false,-1, 63,0);
    tracep->declBus(c+705,"mul_counter", false,-1, 5,0);
    tracep->declBus(c+706,"dividend", false,-1, 31,0);
    tracep->declBus(c+707,"divisor", false,-1, 31,0);
    tracep->declBus(c+708,"quotient", false,-1, 31,0);
    tracep->declBus(c+709,"remainder", false,-1, 31,0);
    tracep->declBus(c+710,"div_counter", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+885,"inst_i", false,-1, 31,0);
    tracep->declBit(c+1313,"if_valid_i", false,-1);
    tracep->declBit(c+906,"id_ready_o", false,-1);
    tracep->declBit(c+800,"id_valid_o", false,-1);
    tracep->declBit(c+801,"ex_ready_i", false,-1);
    tracep->declBus(c+802,"op_o", false,-1, 6,0);
    tracep->declBus(c+261,"rd_o", false,-1, 4,0);
    tracep->declBus(c+803,"funct3_o", false,-1, 2,0);
    tracep->declBus(c+262,"rs1_o", false,-1, 4,0);
    tracep->declBus(c+263,"rs2_o", false,-1, 4,0);
    tracep->declBus(c+264,"imm_o", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_o", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_o", false,-1, 4,0);
    tracep->declBus(c+888,"op", false,-1, 6,0);
    tracep->declBus(c+889,"rd", false,-1, 4,0);
    tracep->declBus(c+890,"funct3", false,-1, 2,0);
    tracep->declBus(c+891,"rs1", false,-1, 4,0);
    tracep->declBus(c+892,"rs2", false,-1, 4,0);
    tracep->declBus(c+893,"immI", false,-1, 31,0);
    tracep->declBus(c+894,"immU", false,-1, 31,0);
    tracep->declBus(c+895,"immS", false,-1, 31,0);
    tracep->declBus(c+896,"immB", false,-1, 31,0);
    tracep->declBus(c+897,"immJ", false,-1, 31,0);
    tracep->declBus(c+898,"imm", false,-1, 31,0);
    tracep->declBus(c+899,"funct7", false,-1, 6,0);
    tracep->declBus(c+900,"shamt", false,-1, 4,0);
    tracep->declBit(c+906,"id_ready_reg", false,-1);
    tracep->declBit(c+800,"id_valid_reg", false,-1);
    tracep->declBus(c+802,"op_reg", false,-1, 6,0);
    tracep->declBus(c+261,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+803,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+262,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+263,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+264,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+265,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+266,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+1401,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+910,"state", false,-1);
    tracep->declBit(c+1325,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1158,"pc_i", false,-1, 31,0);
    tracep->declBus(c+885,"inst_o", false,-1, 31,0);
    tracep->declBit(c+1160,"pc_valid_i", false,-1);
    tracep->declBit(c+1312,"if_ready_o", false,-1);
    tracep->declBit(c+1313,"if_valid_o", false,-1);
    tracep->declBit(c+906,"id_ready_i", false,-1);
    tracep->declBit(c+1321,"wb_done_i", false,-1);
    tracep->declBit(c+1316,"if_axi_awready_i", false,-1);
    tracep->declBit(c+1362,"if_axi_awvalid_o", false,-1);
    tracep->declBus(c+1369,"if_axi_awid_o", false,-1, 3,0);
    tracep->declBus(c+1383,"if_axi_awaddr_o", false,-1, 31,0);
    tracep->declBus(c+1371,"if_axi_awlen_o", false,-1, 7,0);
    tracep->declBus(c+1372,"if_axi_awsize_o", false,-1, 2,0);
    tracep->declBus(c+1357,"if_axi_awburst_o", false,-1, 1,0);
    tracep->declBit(c+1317,"if_axi_wready_i", false,-1);
    tracep->declBit(c+1362,"if_axi_wvalid_o", false,-1);
    tracep->declBus(c+1383,"if_axi_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1369,"if_axi_wstrb_o", false,-1, 3,0);
    tracep->declBit(c+1384,"if_axi_wlast_o", false,-1);
    tracep->declBit(c+1362,"if_axi_bready_o", false,-1);
    tracep->declBit(c+414,"if_axi_bvalid_i", false,-1);
    tracep->declBus(c+411,"if_axi_bid_i", false,-1, 3,0);
    tracep->declBus(c+413,"if_axi_bresp_i", false,-1, 1,0);
    tracep->declBit(c+1021,"if_axi_arready_i", false,-1);
    tracep->declBit(c+908,"if_axi_arvalid_o", false,-1);
    tracep->declBus(c+258,"if_axi_arid_o", false,-1, 3,0);
    tracep->declBus(c+907,"if_axi_araddr_o", false,-1, 31,0);
    tracep->declBus(c+257,"if_axi_arlen_o", false,-1, 7,0);
    tracep->declBus(c+259,"if_axi_arsize_o", false,-1, 2,0);
    tracep->declBus(c+260,"if_axi_arburst_o", false,-1, 1,0);
    tracep->declBit(c+909,"if_axi_rready_o", false,-1);
    tracep->declBit(c+1253,"if_axi_rvalid_i", false,-1);
    tracep->declBus(c+412,"if_axi_rid_i", false,-1, 3,0);
    tracep->declBus(c+1314,"if_axi_rdata_i", false,-1, 31,0);
    tracep->declBus(c+1315,"if_axi_rresp_i", false,-1, 1,0);
    tracep->declBit(c+415,"if_axi_rlast_i", false,-1);
    tracep->declBit(c+1312,"if_ready_reg", false,-1);
    tracep->declBit(c+1313,"if_valid_reg", false,-1);
    tracep->declBus(c+885,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1357,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1359,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+1326,"state", false,-1, 1,0);
    tracep->declBus(c+1327,"next_state", false,-1, 1,0);
    tracep->declBit(c+908,"axi_arvalid", false,-1);
    tracep->declBit(c+909,"axi_rready", false,-1);
    tracep->declBus(c+258,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+907,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+257,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+259,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+260,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1401,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"FETCH", false,-1, 0,0);
    tracep->declBit(c+911,"axi_state", false,-1);
    tracep->declBit(c+1328,"fetch_start", false,-1);
    tracep->declBus(c+912,"axi_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+804,"ls_read_i", false,-1);
    tracep->declBit(c+805,"ls_write_i", false,-1);
    tracep->declBit(c+886,"ls_done_o", false,-1);
    tracep->declBus(c+683,"ls_rdata_o", false,-1, 31,0);
    tracep->declBit(c+806,"valid_i", false,-1);
    tracep->declBit(c+807,"wen_i", false,-1);
    tracep->declBus(c+808,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+400,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+809,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+810,"wmask_i", false,-1, 3,0);
    tracep->declBus(c+811,"awsize_i", false,-1, 2,0);
    tracep->declBus(c+812,"arsize_i", false,-1, 2,0);
    tracep->declBus(c+1371,"awlen_i", false,-1, 7,0);
    tracep->declBus(c+1371,"arlen_i", false,-1, 7,0);
    tracep->declBus(c+1358,"awburst_i", false,-1, 1,0);
    tracep->declBus(c+1358,"arburst_i", false,-1, 1,0);
    tracep->declBit(c+1022,"ls_axi_awready", false,-1);
    tracep->declBit(c+692,"ls_axi_awvalid", false,-1);
    tracep->declBus(c+1385,"ls_axi_awid", false,-1, 3,0);
    tracep->declBus(c+684,"ls_axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+686,"ls_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+688,"ls_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+690,"ls_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+1023,"ls_axi_wready", false,-1);
    tracep->declBit(c+693,"ls_axi_wvalid", false,-1);
    tracep->declBus(c+1318,"ls_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+840,"ls_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+697,"ls_axi_wlast", false,-1);
    tracep->declBit(c+694,"ls_axi_bready", false,-1);
    tracep->declBit(c+1254,"ls_axi_bvalid", false,-1);
    tracep->declBus(c+416,"ls_axi_bid", false,-1, 3,0);
    tracep->declBus(c+418,"ls_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+1024,"ls_axi_arready", false,-1);
    tracep->declBit(c+695,"ls_axi_arvalid", false,-1);
    tracep->declBus(c+1386,"ls_axi_arid", false,-1, 3,0);
    tracep->declBus(c+685,"ls_axi_araddr", false,-1, 31,0);
    tracep->declBus(c+687,"ls_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+689,"ls_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+691,"ls_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+696,"ls_axi_rready", false,-1);
    tracep->declBit(c+1255,"ls_axi_rvalid", false,-1);
    tracep->declBus(c+417,"ls_axi_rid", false,-1, 3,0);
    tracep->declBus(c+1319,"ls_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+1320,"ls_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+419,"ls_axi_rlast", false,-1);
    tracep->declBit(c+886,"ls_done_reg", false,-1);
    tracep->declBus(c+683,"ls_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"READ", false,-1, 1,0);
    tracep->declBus(c+1359,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE", false,-1, 1,0);
    tracep->declBus(c+711,"state", false,-1, 1,0);
    tracep->declBit(c+692,"axi_awvalid", false,-1);
    tracep->declBit(c+693,"axi_wvalid", false,-1);
    tracep->declBus(c+1385,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+684,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+712,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+686,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+688,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+690,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+713,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+694,"axi_bready", false,-1);
    tracep->declBit(c+697,"axi_wlast", false,-1);
    tracep->declBit(c+695,"axi_arvalid", false,-1);
    tracep->declBit(c+696,"axi_rready", false,-1);
    tracep->declBus(c+1386,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+685,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+687,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+689,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+691,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1158,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1159,"dnpc_i", false,-1, 31,0);
    tracep->declBit(c+1160,"pc_valid_o", false,-1);
    tracep->declBit(c+1312,"if_ready_i", false,-1);
    tracep->declBit(c+1160,"pc_valid_reg", false,-1);
    tracep->declBus(c+1158,"pc_reg", false,-1, 31,0);
    tracep->declBus(c+1401,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+1163,"state", false,-1);
    tracep->declBit(c+1329,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1403,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBus(c+294,"wdata", false,-1, 31,0);
    tracep->declBus(c+295,"waddr", false,-1, 4,0);
    tracep->declBit(c+296,"wen", false,-1);
    tracep->declBus(c+262,"raddr1", false,-1, 4,0);
    tracep->declBus(c+305,"r1", false,-1, 31,0);
    tracep->declBus(c+263,"raddr2", false,-1, 4,0);
    tracep->declBus(c+306,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+314+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+267,"ex_valid_i", false,-1);
    tracep->declBit(c+268,"wb_ready_o", false,-1);
    tracep->declBit(c+1321,"wb_done_o", false,-1);
    tracep->declBit(c+256,"difftest", false,-1);
    tracep->declBus(c+294,"xrd_o", false,-1, 31,0);
    tracep->declBus(c+269,"ex_i", false,-1, 31,0);
    tracep->declBus(c+295,"rd_o", false,-1, 4,0);
    tracep->declBus(c+261,"rd_i", false,-1, 4,0);
    tracep->declBit(c+296,"gpr_wen_o", false,-1);
    tracep->declBit(c+278,"gpr_wen_i", false,-1);
    tracep->declBus(c+271,"mepc_i", false,-1, 31,0);
    tracep->declBus(c+273,"mstatus_i", false,-1, 31,0);
    tracep->declBus(c+275,"mcause_i", false,-1, 31,0);
    tracep->declBus(c+277,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+297,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+298,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+299,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+300,"mtvec_o", false,-1, 31,0);
    tracep->declBit(c+279,"mepc_wen_i", false,-1);
    tracep->declBit(c+280,"mstatus_wen_i", false,-1);
    tracep->declBit(c+281,"mcause_wen_i", false,-1);
    tracep->declBit(c+282,"mtvec_wen_i", false,-1);
    tracep->declBit(c+301,"mepc_wen_o", false,-1);
    tracep->declBit(c+302,"mstatus_wen_o", false,-1);
    tracep->declBit(c+303,"mcause_wen_o", false,-1);
    tracep->declBit(c+304,"mtvec_wen_o", false,-1);
    tracep->declBit(c+268,"wb_ready_reg", false,-1);
    tracep->declBit(c+1321,"wb_done_reg", false,-1);
    tracep->declBit(c+256,"difftest_reg", false,-1);
    tracep->declBus(c+294,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+295,"rd_reg", false,-1, 4,0);
    tracep->declBit(c+296,"gpr_wen_reg", false,-1);
    tracep->declBus(c+297,"mepc_reg", false,-1, 31,0);
    tracep->declBus(c+298,"mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+299,"mcause_reg", false,-1, 31,0);
    tracep->declBus(c+300,"mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+301,"mepc_wen_reg", false,-1);
    tracep->declBit(c+302,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+303,"mcause_wen_reg", false,-1);
    tracep->declBit(c+304,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1359,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1360,"NULL", false,-1, 1,0);
    tracep->declBus(c+1330,"state", false,-1, 1,0);
    tracep->declBus(c+1331,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBit(c+1316,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1362,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1369,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1383,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1371,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1372,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1357,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1317,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1362,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1383,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1369,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1384,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1362,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+414,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+411,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+413,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1021,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+908,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+258,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+907,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+257,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+259,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+260,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+909,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1253,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+412,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1314,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1315,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+415,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+1022,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+692,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1385,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+684,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+686,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+688,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+690,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+1023,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+693,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+1318,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+840,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+697,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+694,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1254,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+416,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+418,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+1024,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+695,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1386,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+685,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+687,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+689,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+691,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+696,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1255,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+417,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1319,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1320,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+419,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+20,"io_master_awready", false,-1);
    tracep->declBit(c+955,"io_master_awvalid", false,-1);
    tracep->declBus(c+956,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+957,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+958,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+959,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+960,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+21,"io_master_wready", false,-1);
    tracep->declBit(c+961,"io_master_wvalid", false,-1);
    tracep->declBus(c+962,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"io_master_wlast", false,-1);
    tracep->declBit(c+965,"io_master_bready", false,-1);
    tracep->declBit(c+1169,"io_master_bvalid", false,-1);
    tracep->declBus(c+1170,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1305,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"io_master_arready", false,-1);
    tracep->declBit(c+966,"io_master_arvalid", false,-1);
    tracep->declBus(c+967,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+968,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+969,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+971,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+972,"io_master_rready", false,-1);
    tracep->declBit(c+1171,"io_master_rvalid", false,-1);
    tracep->declBus(c+1172,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+1308,"io_master_rlast", false,-1);
    tracep->declBit(c+288,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+1037,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1031,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1025,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1029,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1033,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1035,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+289,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+1038,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+1026,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1028,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1042,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+1039,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+290,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+284,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+286,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+291,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+1040,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1032,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1027,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1030,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1034,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1036,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+1041,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+292,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+285,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+283,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+287,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+293,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+307,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+308,"marchid", false,-1, 31,0);
    tracep->declBus(c+1043,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1044,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1045,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1256,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1046,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1047,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1048,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+913,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1332,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+914,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1333,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1049,"X_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1050,"X_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1051,"X_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1052,"X_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1334,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1335,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1053,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+422,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+1054,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+423,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1336,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+1055,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+1056,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+1057,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1257,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+1058,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+1059,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1337,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1357,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1359,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1360,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+915,"state", false,-1, 1,0);
    tracep->declBus(c+1338,"next_state", false,-1, 1,0);
    tracep->declBus(c+1387,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1388,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+1060,"sel_clint", false,-1);
    tracep->declBus(c+1405,"MVENDORID_ADDR", false,-1, 31,0);
    tracep->declBus(c+1406,"MARCHID_ADDR", false,-1, 31,0);
    tracep->declBit(c+1061,"sel_mvendorid", false,-1);
    tracep->declBit(c+1062,"sel_marchid", false,-1);
    tracep->declBit(c+1063,"sel_id", false,-1);
    tracep->declBus(c+1064,"I_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1065,"I_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1066,"I_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+424,"I_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1067,"I_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1068,"I_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1069,"I_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1070,"I_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1407,"I_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1071,"I_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1408,"I_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1072,"I_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1073,"I_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1074,"I_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1075,"I_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1409,"I_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1410,"I_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1411,"I_AXI_AWVALID", false,-1);
    tracep->declBit(c+1367,"I_AXI_AWREADY", false,-1);
    tracep->declBit(c+1076,"I_AXI_WVALID", false,-1);
    tracep->declBit(c+1367,"I_AXI_WREADY", false,-1);
    tracep->declBit(c+1367,"I_AXI_BVALID", false,-1);
    tracep->declBit(c+1077,"I_AXI_BREADY", false,-1);
    tracep->declBit(c+1078,"I_AXI_ARVALID", false,-1);
    tracep->declBit(c+1367,"I_AXI_ARREADY", false,-1);
    tracep->declBit(c+1367,"I_AXI_RVALID", false,-1);
    tracep->declBit(c+1079,"I_AXI_RREADY", false,-1);
    tracep->declBit(c+1080,"I_AXI_WLAST", false,-1);
    tracep->declBit(c+1412,"I_AXI_RLAST", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("marchid_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1370,"din", false,-1, 31,0);
    tracep->declBus(c+308,"dout", false,-1, 31,0);
    tracep->declBit(c+1362,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1370,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 31,0);
    tracep->declBus(c+274,"dout", false,-1, 31,0);
    tracep->declBit(c+303,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1370,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+297,"din", false,-1, 31,0);
    tracep->declBus(c+270,"dout", false,-1, 31,0);
    tracep->declBit(c+301,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1414,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+298,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+302,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1370,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 31,0);
    tracep->declBus(c+276,"dout", false,-1, 31,0);
    tracep->declBit(c+304,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mvendorid_reg ");
    tracep->declBus(c+1404,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1415,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1311,"rst", false,-1);
    tracep->declBus(c+1370,"din", false,-1, 31,0);
    tracep->declBus(c+307,"dout", false,-1, 31,0);
    tracep->declBit(c+1362,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"io_d", false,-1);
    tracep->declBit(c+346,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"io_d", false,-1);
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
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+928,"auto_in_psel", false,-1);
    tracep->declBit(c+838,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+927,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"auto_in_pready", false,-1);
    tracep->declBit(c+1366,"auto_in_pslverr", false,-1);
    tracep->declBus(c+442,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1276,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1277,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1278,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1284,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1285,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1081,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+928,"in_psel", false,-1);
    tracep->declBit(c+838,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+441,"in_pready", false,-1);
    tracep->declBus(c+442,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1366,"in_pslverr", false,-1);
    tracep->declBus(c+1276,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1277,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1278,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1279,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1280,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1281,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1282,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1283,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1284,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1285,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1371,"REG_LED", false,-1, 7,0);
    tracep->declBus(c+1416,"REG_SWITCH", false,-1, 7,0);
    tracep->declBus(c+1417,"REG_SEGMENT", false,-1, 7,0);
    tracep->declBus(c+1418,"ZERO", false,-1, 7,0);
    tracep->declBus(c+1419,"ONE", false,-1, 7,0);
    tracep->declBus(c+1420,"TWO", false,-1, 7,0);
    tracep->declBus(c+1421,"THREE", false,-1, 7,0);
    tracep->declBus(c+1422,"FOUR", false,-1, 7,0);
    tracep->declBus(c+1423,"FIVE", false,-1, 7,0);
    tracep->declBus(c+1424,"SIX", false,-1, 7,0);
    tracep->declBus(c+1425,"SEVEN", false,-1, 7,0);
    tracep->declBus(c+1426,"EIGHT", false,-1, 7,0);
    tracep->declBus(c+1427,"NINE", false,-1, 7,0);
    tracep->declBus(c+1428,"A", false,-1, 7,0);
    tracep->declBus(c+1429,"B", false,-1, 7,0);
    tracep->declBus(c+1430,"C", false,-1, 7,0);
    tracep->declBus(c+1431,"D", false,-1, 7,0);
    tracep->declBus(c+1432,"E", false,-1, 7,0);
    tracep->declBus(c+1433,"F", false,-1, 7,0);
    tracep->declBus(c+444,"led_reg", false,-1, 15,0);
    tracep->declBus(c+445,"switch_reg", false,-1, 15,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+446+i*1,"segment_reg", true,(i+0), 7,0);
    }
    tracep->declBus(c+1082,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1083,"write_en", false,-1);
    tracep->declBit(c+1084,"read_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+925,"auto_in_psel", false,-1);
    tracep->declBit(c+926,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+927,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"auto_in_pready", false,-1);
    tracep->declBit(c+1365,"auto_in_pslverr", false,-1);
    tracep->declBus(c+440,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1286,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1287,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1081,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+925,"in_psel", false,-1);
    tracep->declBit(c+926,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+439,"in_pready", false,-1);
    tracep->declBus(c+440,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1365,"in_pslverr", false,-1);
    tracep->declBit(c+1286,"ps2_clk", false,-1);
    tracep->declBit(c+1287,"ps2_data", false,-1);
    tracep->declBus(c+1434,"BREAK", false,-1, 7,0);
    tracep->declBus(c+1435,"EXP", false,-1, 7,0);
    tracep->declBus(c+901,"state", false,-1, 1,0);
    tracep->declBus(c+902,"counter", false,-1, 3,0);
    tracep->declBus(c+903,"buffer", false,-1, 7,0);
    tracep->declBus(c+904,"buffer1", false,-1, 7,0);
    tracep->declBus(c+905,"buffer2", false,-1, 7,0);
    tracep->declBit(c+1339,"ready", false,-1);
    tracep->declBus(c+1340,"rdata", false,-1, 31,0);
    tracep->declBit(c+1085,"is_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+1003,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1004,"auto_in_wvalid", false,-1);
    tracep->declBit(c+72,"auto_in_arready", false,-1);
    tracep->declBit(c+1005,"auto_in_arvalid", false,-1);
    tracep->declBus(c+952,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1006,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1310,"auto_in_rready", false,-1);
    tracep->declBit(c+73,"auto_in_rvalid", false,-1);
    tracep->declBus(c+74,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+75,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+73,"state", false,-1);
    tracep->declBus(c+75,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+74,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1086,"raddr", false,-1, 31,0);
    tracep->declBit(c+1087,"ren", false,-1);
    tracep->declBus(c+1088,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+929,"auto_in_psel", false,-1);
    tracep->declBit(c+839,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+916,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"auto_in_pready", false,-1);
    tracep->declBit(c+1362,"auto_in_pslverr", false,-1);
    tracep->declBus(c+798,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1270,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1271,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1297,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+916,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+929,"in_psel", false,-1);
    tracep->declBit(c+839,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1301,"in_pready", false,-1);
    tracep->declBus(c+798,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1362,"in_pslverr", false,-1);
    tracep->declBit(c+1270,"qspi_sck", false,-1);
    tracep->declBit(c+1271,"qspi_ce_n", false,-1);
    tracep->declBus(c+1297,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1297,"din", false,-1, 3,0);
    tracep->declBus(c+1272,"dout", false,-1, 3,0);
    tracep->declBus(c+1273,"douten", false,-1, 3,0);
    tracep->declBit(c+1341,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1274,"clk_i", false,-1);
    tracep->declBit(c+1275,"rst_i", false,-1);
    tracep->declBus(c+916,"adr_i", false,-1, 31,0);
    tracep->declBus(c+919,"dat_i", false,-1, 31,0);
    tracep->declBus(c+798,"dat_o", false,-1, 31,0);
    tracep->declBus(c+920,"sel_i", false,-1, 3,0);
    tracep->declBit(c+929,"cyc_i", false,-1);
    tracep->declBit(c+929,"stb_i", false,-1);
    tracep->declBit(c+1341,"ack_o", false,-1);
    tracep->declBit(c+918,"we_i", false,-1);
    tracep->declBit(c+1270,"sck", false,-1);
    tracep->declBit(c+1271,"ce_n", false,-1);
    tracep->declBus(c+1297,"din", false,-1, 3,0);
    tracep->declBus(c+1272,"dout", false,-1, 3,0);
    tracep->declBus(c+1273,"douten", false,-1, 3,0);
    tracep->declBus(c+1401,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+454,"mr_sck", false,-1);
    tracep->declBit(c+455,"mr_ce_n", false,-1);
    tracep->declBus(c+1297,"mr_din", false,-1, 3,0);
    tracep->declBus(c+456,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+457,"mr_doe", false,-1);
    tracep->declBit(c+458,"mw_sck", false,-1);
    tracep->declBit(c+459,"mw_ce_n", false,-1);
    tracep->declBus(c+1297,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1258,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+460,"mw_doe", false,-1);
    tracep->declBit(c+1259,"mr_rd", false,-1);
    tracep->declBit(c+461,"mr_done", false,-1);
    tracep->declBit(c+1260,"mw_wr", false,-1);
    tracep->declBit(c+1261,"mw_done", false,-1);
    tracep->declBit(c+929,"wb_valid", false,-1);
    tracep->declBit(c+1089,"wb_we", false,-1);
    tracep->declBit(c+1090,"wb_re", false,-1);
    tracep->declBit(c+462,"state", false,-1);
    tracep->declBit(c+1262,"nstate", false,-1);
    tracep->declBus(c+1091,"size", false,-1, 2,0);
    tracep->declBus(c+1092,"byte0", false,-1, 7,0);
    tracep->declBus(c+1093,"byte1", false,-1, 7,0);
    tracep->declBus(c+1094,"byte2", false,-1, 7,0);
    tracep->declBus(c+1095,"byte3", false,-1, 7,0);
    tracep->declBus(c+1096,"wdata", false,-1, 31,0);
    tracep->declBit(c+677,"qpi_flag", false,-1);
    tracep->declBit(c+678,"qpi_sck", false,-1);
    tracep->declBit(c+679,"qpi_ce_n", false,-1);
    tracep->declBus(c+680,"qpi_dout", false,-1, 3,0);
    tracep->declBus(c+681,"qpi_douten", false,-1, 3,0);
    tracep->declBus(c+682,"qpi_counter", false,-1, 7,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1342,"rst_n", false,-1);
    tracep->declBus(c+1097,"addr", false,-1, 23,0);
    tracep->declBit(c+1259,"rd", false,-1);
    tracep->declBus(c+1436,"size", false,-1, 2,0);
    tracep->declBit(c+461,"done", false,-1);
    tracep->declBus(c+798,"line", false,-1, 31,0);
    tracep->declBit(c+454,"sck", false,-1);
    tracep->declBit(c+455,"ce_n", false,-1);
    tracep->declBus(c+1297,"din", false,-1, 3,0);
    tracep->declBus(c+456,"dout", false,-1, 3,0);
    tracep->declBit(c+457,"douten", false,-1);
    tracep->declBus(c+1401,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"READ", false,-1, 0,0);
    tracep->declBus(c+1437,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+463,"state", false,-1);
    tracep->declBit(c+1263,"nstate", false,-1);
    tracep->declBus(c+464,"counter", false,-1, 7,0);
    tracep->declBus(c+465,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+829+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1438,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+466,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1342,"rst_n", false,-1);
    tracep->declBus(c+1098,"addr", false,-1, 23,0);
    tracep->declBus(c+1096,"line", false,-1, 31,0);
    tracep->declBus(c+1091,"size", false,-1, 2,0);
    tracep->declBit(c+1260,"wr", false,-1);
    tracep->declBit(c+1261,"done", false,-1);
    tracep->declBit(c+458,"sck", false,-1);
    tracep->declBit(c+459,"ce_n", false,-1);
    tracep->declBus(c+1297,"din", false,-1, 3,0);
    tracep->declBus(c+1258,"dout", false,-1, 3,0);
    tracep->declBit(c+460,"douten", false,-1);
    tracep->declBus(c+1401,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1402,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1099,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+467,"state", false,-1);
    tracep->declBit(c+1264,"nstate", false,-1);
    tracep->declBus(c+468,"counter", false,-1, 7,0);
    tracep->declBus(c+469,"saddr", false,-1, 23,0);
    tracep->declBus(c+1439,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+922,"auto_in_psel", false,-1);
    tracep->declBit(c+836,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+916,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"auto_in_pready", false,-1);
    tracep->declBit(c+1362,"auto_in_pslverr", false,-1);
    tracep->declBus(c+437,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1298,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+427,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+842,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+843,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+844,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+845,"sdram_bundle_we", false,-1);
    tracep->declBus(c+846,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+847,"sdram_bundle_ba", false,-1, 2,0);
    tracep->declBus(c+428,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+871,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+916,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+922,"in_psel", false,-1);
    tracep->declBit(c+836,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+436,"in_pready", false,-1);
    tracep->declBus(c+437,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1362,"in_pslverr", false,-1);
    tracep->declBit(c+1298,"sdram_clk", false,-1);
    tracep->declBit(c+427,"sdram_cke", false,-1);
    tracep->declBit(c+842,"sdram_cs", false,-1);
    tracep->declBit(c+843,"sdram_ras", false,-1);
    tracep->declBit(c+844,"sdram_cas", false,-1);
    tracep->declBit(c+845,"sdram_we", false,-1);
    tracep->declBus(c+846,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+847,"sdram_ba", false,-1, 2,0);
    tracep->declBus(c+428,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+871,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+470,"sdram_dout_en", false,-1);
    tracep->declBus(c+471,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+356,"state", false,-1, 1,0);
    tracep->declBit(c+848,"req_accept", false,-1);
    tracep->declBit(c+1100,"is_read", false,-1);
    tracep->declBit(c+1101,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1274,"clk_i", false,-1);
    tracep->declBit(c+1275,"rst_i", false,-1);
    tracep->declBus(c+1102,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1100,"inport_rd_i", false,-1);
    tracep->declBus(c+1371,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+916,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+919,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+871,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+848,"inport_accept_o", false,-1);
    tracep->declBit(c+436,"inport_ack_o", false,-1);
    tracep->declBit(c+1362,"inport_error_o", false,-1);
    tracep->declBus(c+437,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1298,"sdram_clk_o", false,-1);
    tracep->declBit(c+427,"sdram_cke_o", false,-1);
    tracep->declBit(c+842,"sdram_cs_o", false,-1);
    tracep->declBit(c+843,"sdram_ras_o", false,-1);
    tracep->declBit(c+844,"sdram_cas_o", false,-1);
    tracep->declBit(c+845,"sdram_we_o", false,-1);
    tracep->declBus(c+428,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+846,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+847,"sdram_ba_o", false,-1, 2,0);
    tracep->declBus(c+471,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+470,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1440,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1441,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1442,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1443,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1444,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1445,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1446,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1447,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1448,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1449,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1450,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1445,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1395,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1391,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1393,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1392,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1390,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1389,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1369,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1451,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1445,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1369,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1389,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1390,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1391,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1392,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1393,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1394,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1395,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1396,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1397,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1452,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1452,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1404,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1452,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1443,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1443,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1453,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+916,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1102,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1100,"ram_rd_w", false,-1);
    tracep->declBit(c+848,"ram_accept_w", false,-1);
    tracep->declBus(c+919,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+437,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+436,"ram_ack_w", false,-1);
    tracep->declBit(c+1103,"ram_req_w", false,-1);
    tracep->declBus(c+849,"command_q", false,-1, 3,0);
    tracep->declBus(c+846,"addr_q", false,-1, 12,0);
    tracep->declBus(c+471,"data_q", false,-1, 31,0);
    tracep->declBit(c+472,"data_rd_en_q", false,-1);
    tracep->declBus(c+428,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+427,"cke_q", false,-1);
    tracep->declBus(c+847,"bank_q", false,-1, 2,0);
    tracep->declBus(c+1454,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+473,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+871,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+474,"refresh_q", false,-1);
    tracep->declBus(c+850,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+475+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+851,"state_q", false,-1, 3,0);
    tracep->declBus(c+1265,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1266,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+483,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+484,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1104,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1105,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1106,"addr_bank_w", false,-1, 2,0);
    tracep->declBus(c+1445,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+485,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1267,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1455,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+852,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+486,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+437,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+487,"idx", false,-1, 31,0);
    tracep->declBus(c+488,"rd_q", false,-1, 3,0);
    tracep->declBit(c+436,"ack_q", false,-1);
    tracep->declArray(c+853,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+933,"auto_in_psel", false,-1);
    tracep->declBit(c+934,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1302,"auto_in_pready", false,-1);
    tracep->declBit(c+1362,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1164,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+425,"spi_bundle_sck", false,-1);
    tracep->declBus(c+426,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+841,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1296,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1456,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1457,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1446,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1107,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+933,"in_psel", false,-1);
    tracep->declBit(c+934,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1302,"in_pready", false,-1);
    tracep->declBus(c+1164,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1362,"in_pslverr", false,-1);
    tracep->declBit(c+425,"spi_sck", false,-1);
    tracep->declBus(c+426,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+841,"spi_mosi", false,-1);
    tracep->declBit(c+1296,"spi_miso", false,-1);
    tracep->declBit(c+489,"spi_irq_out", false,-1);
    tracep->declBus(c+1108,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1109,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1110,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1111,"wb_we_i", false,-1);
    tracep->declBit(c+1112,"wb_stb_i", false,-1);
    tracep->declBit(c+1113,"wb_cyc_i", false,-1);
    tracep->declBit(c+490,"wb_ack_o", false,-1);
    tracep->declBus(c+491,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1372,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1356,"WRITE_SS", false,-1, 2,0);
    tracep->declBus(c+1458,"WRITE_TX", false,-1, 2,0);
    tracep->declBus(c+1459,"WRITE_PSS", false,-1, 2,0);
    tracep->declBus(c+1436,"WRITE_DIVIDER", false,-1, 2,0);
    tracep->declBus(c+1460,"WRITE_CTRL", false,-1, 2,0);
    tracep->declBus(c+1461,"WAIT_COMPLETE", false,-1, 2,0);
    tracep->declBus(c+1462,"FLASH_READ", false,-1, 2,0);
    tracep->declBus(c+833,"state", false,-1, 2,0);
    tracep->declBus(c+834,"next_state", false,-1, 2,0);
    tracep->declBus(c+357,"flash_paddr", false,-1, 31,0);
    tracep->declBus(c+358,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+359,"flash_pstrb", false,-1, 3,0);
    tracep->declBit(c+360,"flash_pwrite", false,-1);
    tracep->declBit(c+361,"flash_psel", false,-1);
    tracep->declBit(c+362,"flash_penable", false,-1);
    tracep->declBit(c+835,"flash_pready", false,-1);
    tracep->declBus(c+363,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1463,"Tp", false,-1, 31,0);
    tracep->declBit(c+1274,"wb_clk_i", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBus(c+1108,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1109,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+491,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1110,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1111,"wb_we_i", false,-1);
    tracep->declBit(c+1112,"wb_stb_i", false,-1);
    tracep->declBit(c+1113,"wb_cyc_i", false,-1);
    tracep->declBit(c+490,"wb_ack_o", false,-1);
    tracep->declBit(c+1362,"wb_err_o", false,-1);
    tracep->declBit(c+489,"wb_int_o", false,-1);
    tracep->declBus(c+426,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+425,"sclk_pad_o", false,-1);
    tracep->declBit(c+841,"mosi_pad_o", false,-1);
    tracep->declBit(c+1296,"miso_pad_i", false,-1);
    tracep->declBus(c+492,"divider", false,-1, 15,0);
    tracep->declBus(c+493,"ctrl", false,-1, 13,0);
    tracep->declBus(c+494,"ss", false,-1, 7,0);
    tracep->declBus(c+1268,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+495,"rx", false,-1, 127,0);
    tracep->declBit(c+499,"rx_negedge", false,-1);
    tracep->declBit(c+500,"tx_negedge", false,-1);
    tracep->declBus(c+501,"char_len", false,-1, 6,0);
    tracep->declBit(c+502,"go", false,-1);
    tracep->declBit(c+503,"lsb", false,-1);
    tracep->declBit(c+504,"ie", false,-1);
    tracep->declBit(c+505,"ass", false,-1);
    tracep->declBit(c+1114,"spi_divider_sel", false,-1);
    tracep->declBit(c+1115,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1116,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1117,"spi_ss_sel", false,-1);
    tracep->declBit(c+506,"tip", false,-1);
    tracep->declBit(c+507,"pos_edge", false,-1);
    tracep->declBit(c+508,"neg_edge", false,-1);
    tracep->declBit(c+509,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1463,"Tp", false,-1, 31,0);
    tracep->declBit(c+1274,"clk_in", false,-1);
    tracep->declBit(c+1275,"rst", false,-1);
    tracep->declBit(c+506,"enable", false,-1);
    tracep->declBit(c+502,"go", false,-1);
    tracep->declBit(c+509,"last_clk", false,-1);
    tracep->declBus(c+492,"divider", false,-1, 15,0);
    tracep->declBit(c+425,"clk_out", false,-1);
    tracep->declBit(c+507,"pos_edge", false,-1);
    tracep->declBit(c+508,"neg_edge", false,-1);
    tracep->declBus(c+510,"cnt", false,-1, 15,0);
    tracep->declBit(c+511,"cnt_zero", false,-1);
    tracep->declBit(c+512,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1463,"Tp", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"rst", false,-1);
    tracep->declBus(c+1118,"latch", false,-1, 3,0);
    tracep->declBus(c+1110,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+501,"len", false,-1, 6,0);
    tracep->declBit(c+503,"lsb", false,-1);
    tracep->declBit(c+502,"go", false,-1);
    tracep->declBit(c+507,"pos_edge", false,-1);
    tracep->declBit(c+508,"neg_edge", false,-1);
    tracep->declBit(c+499,"rx_negedge", false,-1);
    tracep->declBit(c+500,"tx_negedge", false,-1);
    tracep->declBit(c+506,"tip", false,-1);
    tracep->declBit(c+509,"last", false,-1);
    tracep->declBus(c+1109,"p_in", false,-1, 31,0);
    tracep->declArray(c+495,"p_out", false,-1, 127,0);
    tracep->declBit(c+425,"s_clk", false,-1);
    tracep->declBit(c+1296,"s_in", false,-1);
    tracep->declBit(c+841,"s_out", false,-1);
    tracep->declBus(c+513,"cnt", false,-1, 7,0);
    tracep->declArray(c+495,"data", false,-1, 127,0);
    tracep->declBus(c+514,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+515,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+516,"rx_clk", false,-1);
    tracep->declBit(c+517,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+930,"auto_in_psel", false,-1);
    tracep->declBit(c+931,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+927,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+932,"auto_in_pready", false,-1);
    tracep->declBit(c+1362,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1124,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1294,"uart_rx", false,-1);
    tracep->declBit(c+1295,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+930,"in_psel", false,-1);
    tracep->declBit(c+931,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+932,"in_pready", false,-1);
    tracep->declBit(c+1362,"in_pslverr", false,-1);
    tracep->declBus(c+1081,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+1124,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1294,"uart_rx", false,-1);
    tracep->declBit(c+1295,"uart_tx", false,-1);
    tracep->declBit(c+518,"rtsn", false,-1);
    tracep->declBit(c+1362,"ctsn", false,-1);
    tracep->declBit(c+519,"dtr_pad_o", false,-1);
    tracep->declBit(c+1362,"dsr_pad_i", false,-1);
    tracep->declBit(c+1362,"ri_pad_i", false,-1);
    tracep->declBit(c+1362,"dcd_pad_i", false,-1);
    tracep->declBit(c+520,"interrupt", false,-1);
    tracep->declBit(c+1343,"reg_we", false,-1);
    tracep->declBit(c+1344,"reg_re", false,-1);
    tracep->declBus(c+1119,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1120,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+364,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1269,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+521,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBus(c+1119,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1121,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1269,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1343,"wb_we_i", false,-1);
    tracep->declBit(c+1344,"wb_re_i", false,-1);
    tracep->declBit(c+1295,"stx_pad_o", false,-1);
    tracep->declBit(c+1294,"srx_pad_i", false,-1);
    tracep->declBus(c+1396,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+521,"rts_pad_o", false,-1);
    tracep->declBit(c+519,"dtr_pad_o", false,-1);
    tracep->declBit(c+520,"int_o", false,-1);
    tracep->declBit(c+522,"enable", false,-1);
    tracep->declBit(c+523,"srx_pad", false,-1);
    tracep->declBus(c+524,"ier", false,-1, 3,0);
    tracep->declBus(c+525,"iir", false,-1, 3,0);
    tracep->declBus(c+526,"fcr", false,-1, 1,0);
    tracep->declBus(c+527,"mcr", false,-1, 4,0);
    tracep->declBus(c+528,"lcr", false,-1, 7,0);
    tracep->declBus(c+529,"msr", false,-1, 7,0);
    tracep->declBus(c+530,"dl", false,-1, 15,0);
    tracep->declBus(c+531,"scratch", false,-1, 7,0);
    tracep->declBit(c+532,"start_dlc", false,-1);
    tracep->declBit(c+533,"lsr_mask_d", false,-1);
    tracep->declBit(c+534,"msi_reset", false,-1);
    tracep->declBus(c+535,"dlc", false,-1, 15,0);
    tracep->declBus(c+536,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+537,"rx_reset", false,-1);
    tracep->declBit(c+538,"tx_reset", false,-1);
    tracep->declBit(c+539,"dlab", false,-1);
    tracep->declBit(c+1367,"cts_pad_i", false,-1);
    tracep->declBit(c+1362,"dsr_pad_i", false,-1);
    tracep->declBit(c+1362,"ri_pad_i", false,-1);
    tracep->declBit(c+1362,"dcd_pad_i", false,-1);
    tracep->declBit(c+540,"loopback", false,-1);
    tracep->declBit(c+1362,"cts", false,-1);
    tracep->declBit(c+1367,"dsr", false,-1);
    tracep->declBit(c+1367,"ri", false,-1);
    tracep->declBit(c+1367,"dcd", false,-1);
    tracep->declBit(c+541,"cts_c", false,-1);
    tracep->declBit(c+542,"dsr_c", false,-1);
    tracep->declBit(c+543,"ri_c", false,-1);
    tracep->declBit(c+544,"dcd_c", false,-1);
    tracep->declBus(c+545,"lsr", false,-1, 7,0);
    tracep->declBit(c+546,"lsr0", false,-1);
    tracep->declBit(c+547,"lsr1", false,-1);
    tracep->declBit(c+548,"lsr2", false,-1);
    tracep->declBit(c+549,"lsr3", false,-1);
    tracep->declBit(c+550,"lsr4", false,-1);
    tracep->declBit(c+551,"lsr5", false,-1);
    tracep->declBit(c+552,"lsr6", false,-1);
    tracep->declBit(c+553,"lsr7", false,-1);
    tracep->declBit(c+554,"lsr0r", false,-1);
    tracep->declBit(c+555,"lsr1r", false,-1);
    tracep->declBit(c+556,"lsr2r", false,-1);
    tracep->declBit(c+557,"lsr3r", false,-1);
    tracep->declBit(c+558,"lsr4r", false,-1);
    tracep->declBit(c+559,"lsr5r", false,-1);
    tracep->declBit(c+560,"lsr6r", false,-1);
    tracep->declBit(c+561,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+562,"rls_int", false,-1);
    tracep->declBit(c+563,"rda_int", false,-1);
    tracep->declBit(c+564,"ti_int", false,-1);
    tracep->declBit(c+565,"thre_int", false,-1);
    tracep->declBit(c+566,"ms_int", false,-1);
    tracep->declBit(c+567,"tf_push", false,-1);
    tracep->declBit(c+568,"rf_pop", false,-1);
    tracep->declBus(c+1345,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+569,"rf_error_bit", false,-1);
    tracep->declBit(c+547,"rf_overrun", false,-1);
    tracep->declBit(c+570,"rf_push_pulse", false,-1);
    tracep->declBus(c+571,"rf_count", false,-1, 4,0);
    tracep->declBus(c+572,"tf_count", false,-1, 4,0);
    tracep->declBus(c+573,"tstate", false,-1, 2,0);
    tracep->declBus(c+574,"rstate", false,-1, 3,0);
    tracep->declBus(c+575,"counter_t", false,-1, 9,0);
    tracep->declBit(c+576,"thre_set_en", false,-1);
    tracep->declBus(c+577,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+578,"block_value", false,-1, 7,0);
    tracep->declBit(c+579,"serial_out", false,-1);
    tracep->declBit(c+580,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+581,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+582,"lsr0_d", false,-1);
    tracep->declBit(c+583,"lsr1_d", false,-1);
    tracep->declBit(c+584,"lsr2_d", false,-1);
    tracep->declBit(c+585,"lsr3_d", false,-1);
    tracep->declBit(c+586,"lsr4_d", false,-1);
    tracep->declBit(c+587,"lsr5_d", false,-1);
    tracep->declBit(c+588,"lsr6_d", false,-1);
    tracep->declBit(c+589,"lsr7_d", false,-1);
    tracep->declBit(c+590,"rls_int_d", false,-1);
    tracep->declBit(c+591,"thre_int_d", false,-1);
    tracep->declBit(c+592,"ms_int_d", false,-1);
    tracep->declBit(c+593,"ti_int_d", false,-1);
    tracep->declBit(c+594,"rda_int_d", false,-1);
    tracep->declBit(c+595,"rls_int_rise", false,-1);
    tracep->declBit(c+596,"thre_int_rise", false,-1);
    tracep->declBit(c+597,"ms_int_rise", false,-1);
    tracep->declBit(c+598,"ti_int_rise", false,-1);
    tracep->declBit(c+599,"rda_int_rise", false,-1);
    tracep->declBit(c+600,"rls_int_pnd", false,-1);
    tracep->declBit(c+601,"rda_int_pnd", false,-1);
    tracep->declBit(c+602,"thre_int_pnd", false,-1);
    tracep->declBit(c+603,"ms_int_pnd", false,-1);
    tracep->declBit(c+604,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1463,"Tp", false,-1, 31,0);
    tracep->declBus(c+1463,"width", false,-1, 31,0);
    tracep->declBus(c+1402,"init_value", false,-1, 0,0);
    tracep->declBit(c+1275,"rst_i", false,-1);
    tracep->declBit(c+1274,"clk_i", false,-1);
    tracep->declBit(c+1362,"stage1_rst_i", false,-1);
    tracep->declBit(c+1367,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1294,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+523,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+605,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBus(c+528,"lcr", false,-1, 7,0);
    tracep->declBit(c+568,"rf_pop", false,-1);
    tracep->declBit(c+580,"srx_pad_i", false,-1);
    tracep->declBit(c+522,"enable", false,-1);
    tracep->declBit(c+537,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+575,"counter_t", false,-1, 9,0);
    tracep->declBus(c+571,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1345,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+547,"rf_overrun", false,-1);
    tracep->declBit(c+569,"rf_error_bit", false,-1);
    tracep->declBus(c+574,"rstate", false,-1, 3,0);
    tracep->declBit(c+570,"rf_push_pulse", false,-1);
    tracep->declBus(c+606,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+607,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+608,"rshift", false,-1, 7,0);
    tracep->declBit(c+609,"rparity", false,-1);
    tracep->declBit(c+610,"rparity_error", false,-1);
    tracep->declBit(c+611,"rframing_error", false,-1);
    tracep->declBit(c+612,"rbit_in", false,-1);
    tracep->declBit(c+613,"rparity_xor", false,-1);
    tracep->declBus(c+614,"counter_b", false,-1, 7,0);
    tracep->declBit(c+615,"rf_push_q", false,-1);
    tracep->declBus(c+616,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+617,"rf_push", false,-1);
    tracep->declBit(c+618,"break_error", false,-1);
    tracep->declBit(c+619,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+620,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+621,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+622,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1369,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1389,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1390,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1391,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1392,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1393,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1394,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1395,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1396,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1397,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1398,"sr_push", false,-1, 3,0);
    tracep->declBus(c+623,"toc_value", false,-1, 9,0);
    tracep->declBus(c+624,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1464,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1465,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1445,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1403,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBit(c+570,"push", false,-1);
    tracep->declBit(c+568,"pop", false,-1);
    tracep->declBus(c+616,"data_in", false,-1, 10,0);
    tracep->declBit(c+537,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1345,"data_out", false,-1, 10,0);
    tracep->declBit(c+547,"overrun", false,-1);
    tracep->declBus(c+571,"count", false,-1, 4,0);
    tracep->declBit(c+569,"error_bit", false,-1);
    tracep->declBus(c+1346,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+625+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+641,"top", false,-1, 3,0);
    tracep->declBus(c+642,"bottom", false,-1, 3,0);
    tracep->declBus(c+643,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+644,"word0", false,-1, 2,0);
    tracep->declBus(c+645,"word1", false,-1, 2,0);
    tracep->declBus(c+646,"word2", false,-1, 2,0);
    tracep->declBus(c+647,"word3", false,-1, 2,0);
    tracep->declBus(c+648,"word4", false,-1, 2,0);
    tracep->declBus(c+649,"word5", false,-1, 2,0);
    tracep->declBus(c+650,"word6", false,-1, 2,0);
    tracep->declBus(c+651,"word7", false,-1, 2,0);
    tracep->declBus(c+652,"word8", false,-1, 2,0);
    tracep->declBus(c+653,"word9", false,-1, 2,0);
    tracep->declBus(c+654,"word10", false,-1, 2,0);
    tracep->declBus(c+655,"word11", false,-1, 2,0);
    tracep->declBus(c+656,"word12", false,-1, 2,0);
    tracep->declBus(c+657,"word13", false,-1, 2,0);
    tracep->declBus(c+658,"word14", false,-1, 2,0);
    tracep->declBus(c+659,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1445,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1446,"data_width", false,-1, 31,0);
    tracep->declBus(c+1465,"depth", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+570,"we", false,-1);
    tracep->declBus(c+641,"a", false,-1, 3,0);
    tracep->declBus(c+642,"dpra", false,-1, 3,0);
    tracep->declBus(c+660,"di", false,-1, 7,0);
    tracep->declBus(c+1346,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+365+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBus(c+528,"lcr", false,-1, 7,0);
    tracep->declBit(c+567,"tf_push", false,-1);
    tracep->declBus(c+1121,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+522,"enable", false,-1);
    tracep->declBit(c+538,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+579,"stx_pad_o", false,-1);
    tracep->declBus(c+573,"tstate", false,-1, 2,0);
    tracep->declBus(c+572,"tf_count", false,-1, 4,0);
    tracep->declBus(c+661,"counter", false,-1, 4,0);
    tracep->declBus(c+662,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+663,"shift_out", false,-1, 6,0);
    tracep->declBit(c+664,"stx_o_tmp", false,-1);
    tracep->declBit(c+665,"parity_xor", false,-1);
    tracep->declBit(c+666,"tf_pop", false,-1);
    tracep->declBit(c+667,"bit_out", false,-1);
    tracep->declBus(c+1121,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1347,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+668,"tf_overrun", false,-1);
    tracep->declBus(c+1372,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1356,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1458,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1459,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1436,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1460,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1446,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1465,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1445,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1403,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+1275,"wb_rst_i", false,-1);
    tracep->declBit(c+567,"push", false,-1);
    tracep->declBit(c+666,"pop", false,-1);
    tracep->declBus(c+1121,"data_in", false,-1, 7,0);
    tracep->declBit(c+538,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1347,"data_out", false,-1, 7,0);
    tracep->declBit(c+668,"overrun", false,-1);
    tracep->declBus(c+572,"count", false,-1, 4,0);
    tracep->declBus(c+669,"top", false,-1, 3,0);
    tracep->declBus(c+670,"bottom", false,-1, 3,0);
    tracep->declBus(c+671,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1445,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1446,"data_width", false,-1, 31,0);
    tracep->declBus(c+1465,"depth", false,-1, 31,0);
    tracep->declBit(c+1274,"clk", false,-1);
    tracep->declBit(c+567,"we", false,-1);
    tracep->declBus(c+669,"a", false,-1, 3,0);
    tracep->declBus(c+670,"dpra", false,-1, 3,0);
    tracep->declBus(c+1121,"di", false,-1, 7,0);
    tracep->declBus(c+1347,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+381+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBit(c+923,"auto_in_psel", false,-1);
    tracep->declBit(c+837,"auto_in_penable", false,-1);
    tracep->declBit(c+918,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1356,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+919,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_in_pready", false,-1);
    tracep->declBit(c+1363,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1364,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1288,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1289,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1290,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1291,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1292,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1293,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1274,"clock", false,-1);
    tracep->declBit(c+1275,"reset", false,-1);
    tracep->declBus(c+1107,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+923,"in_psel", false,-1);
    tracep->declBit(c+837,"in_penable", false,-1);
    tracep->declBus(c+1356,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+918,"in_pwrite", false,-1);
    tracep->declBus(c+919,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+920,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+438,"in_pready", false,-1);
    tracep->declBus(c+1364,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1363,"in_pslverr", false,-1);
    tracep->declBus(c+1288,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1289,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1290,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1291,"vga_hsync", false,-1);
    tracep->declBit(c+1292,"vga_vsync", false,-1);
    tracep->declBit(c+1293,"vga_valid", false,-1);
    tracep->declBit(c+1122,"is_write", false,-1);
    tracep->declBus(c+1123,"addr", false,-1, 31,0);
    tracep->declBit(c+438,"ready", false,-1);
    tracep->declBus(c+672,"i", false,-1, 31,0);
    tracep->declBus(c+1466,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1467,"h_active", false,-1, 31,0);
    tracep->declBus(c+1468,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1469,"h_total", false,-1, 31,0);
    tracep->declBus(c+1443,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1470,"v_active", false,-1, 31,0);
    tracep->declBus(c+1471,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1472,"v_total", false,-1, 31,0);
    tracep->declBus(c+673,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+397,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+674,"h_valid", false,-1);
    tracep->declBit(c+398,"v_valid", false,-1);
    tracep->declBus(c+675,"h_addr", false,-1, 9,0);
    tracep->declBus(c+399,"v_addr", false,-1, 9,0);
    tracep->declBus(c+1348,"vga_addr", false,-1, 18,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+425,"sck", false,-1);
    tracep->declBit(c+856,"ss", false,-1);
    tracep->declBit(c+841,"mosi", false,-1);
    tracep->declBit(c+792,"miso", false,-1);
    tracep->declBus(c+793,"mosi_reg", false,-1, 7,0);
    tracep->declBus(c+794,"miso_reg", false,-1, 7,0);
    tracep->declBus(c+795,"counter", false,-1, 2,0);
    tracep->declBit(c+796,"state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+425,"sck", false,-1);
    tracep->declBit(c+676,"ss", false,-1);
    tracep->declBit(c+841,"mosi", false,-1);
    tracep->declBit(c+1349,"miso", false,-1);
    tracep->declBit(c+676,"reset", false,-1);
    tracep->declBus(c+786,"state", false,-1, 2,0);
    tracep->declBus(c+787,"counter", false,-1, 7,0);
    tracep->declBus(c+788,"cmd", false,-1, 7,0);
    tracep->declBus(c+789,"addr", false,-1, 23,0);
    tracep->declBus(c+790,"data", false,-1, 31,0);
    tracep->declBit(c+791,"ren", false,-1);
    tracep->declBus(c+1350,"rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"raddr", false,-1, 31,0);
    tracep->declBus(c+1352,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+425,"clock", false,-1);
    tracep->declBit(c+791,"valid", false,-1);
    tracep->declBus(c+788,"cmd", false,-1, 7,0);
    tracep->declBus(c+1351,"addr", false,-1, 31,0);
    tracep->declBus(c+1350,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1270,"sck", false,-1);
    tracep->declBit(c+1271,"ce_n", false,-1);
    tracep->declBus(c+1297,"dio", false,-1, 3,0);
    tracep->declBit(c+1271,"reset", false,-1);
    tracep->declBus(c+7,"state", false,-1, 3,0);
    tracep->declBus(c+8,"counter", false,-1, 7,0);
    tracep->declBus(c+874,"cmd", false,-1, 7,0);
    tracep->declBus(c+875,"addr", false,-1, 23,0);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+876+i*1,"wdata", true,(i+0), 7,0);
    }
    tracep->declBit(c+1353,"qpi_flag", false,-1);
    tracep->declBus(c+10,"wbyte_index", false,-1, 1,0);
    tracep->declBus(c+1354,"rdata_bswap", false,-1, 31,0);
    tracep->declBit(c+880,"ren", false,-1);
    tracep->declBit(c+881,"wen", false,-1);
    tracep->declBus(c+882,"len", false,-1, 7,0);
    tracep->declBus(c+1355,"rdata", false,-1, 31,0);
    tracep->declBus(c+883,"saddr", false,-1, 31,0);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1270,"clock", false,-1);
    tracep->declBit(c+880,"ren", false,-1);
    tracep->declBit(c+881,"wen", false,-1);
    tracep->declBus(c+874,"cmd", false,-1, 7,0);
    tracep->declBus(c+883,"saddr", false,-1, 31,0);
    tracep->declBus(c+1355,"rdata", false,-1, 31,0);
    tracep->declBus(c+884,"wdata", false,-1, 31,0);
    tracep->declBus(c+882,"len", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1298,"clk", false,-1);
    tracep->declBit(c+427,"cke", false,-1);
    tracep->declBit(c+842,"cs", false,-1);
    tracep->declBit(c+843,"ras", false,-1);
    tracep->declBit(c+844,"cas", false,-1);
    tracep->declBit(c+845,"we", false,-1);
    tracep->declBus(c+846,"a", false,-1, 12,0);
    tracep->declBus(c+857,"ba", false,-1, 1,0);
    tracep->declBus(c+858,"dqm", false,-1, 1,0);
    tracep->declBus(c+872,"dq", false,-1, 15,0);
    tracep->declBit(c+859,"reset", false,-1);
    tracep->declBus(c+714,"state", false,-1, 2,0);
    tracep->declBus(c+715,"counter", false,-1, 7,0);
    tracep->declBus(c+716,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1473,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+717,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+718,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+860,"nop", false,-1);
    tracep->declBit(c+861,"active", false,-1);
    tracep->declBit(c+862,"precharge", false,-1);
    tracep->declBit(c+863,"read", false,-1);
    tracep->declBit(c+864,"write", false,-1);
    tracep->declBit(c+865,"burstterm", false,-1);
    tracep->declBit(c+866,"autorefresh", false,-1);
    tracep->declBit(c+867,"mode", false,-1);
    tracep->declBus(c+719,"test", false,-1, 15,0);
    tracep->declBit(c+720,"write_burst_mode", false,-1);
    tracep->declBus(c+721,"op_mode", false,-1, 1,0);
    tracep->declBus(c+722,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+723,"burst_type", false,-1);
    tracep->declBus(c+724,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+725,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+726,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+727,"bank", false,-1, 1,0);
    tracep->declBus(c+728,"row", false,-1, 12,0);
    tracep->declBus(c+729,"column", false,-1, 8,0);
    tracep->declBus(c+730,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+731,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1 ");
    tracep->declBit(c+1298,"clk", false,-1);
    tracep->declBit(c+427,"cke", false,-1);
    tracep->declBit(c+842,"cs", false,-1);
    tracep->declBit(c+843,"ras", false,-1);
    tracep->declBit(c+844,"cas", false,-1);
    tracep->declBit(c+845,"we", false,-1);
    tracep->declBus(c+846,"a", false,-1, 12,0);
    tracep->declBus(c+857,"ba", false,-1, 1,0);
    tracep->declBus(c+868,"dqm", false,-1, 1,0);
    tracep->declBus(c+873,"dq", false,-1, 15,0);
    tracep->declBit(c+859,"reset", false,-1);
    tracep->declBus(c+732,"state", false,-1, 2,0);
    tracep->declBus(c+733,"counter", false,-1, 7,0);
    tracep->declBus(c+734,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1474,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+735,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+736,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+860,"nop", false,-1);
    tracep->declBit(c+861,"active", false,-1);
    tracep->declBit(c+862,"precharge", false,-1);
    tracep->declBit(c+863,"read", false,-1);
    tracep->declBit(c+864,"write", false,-1);
    tracep->declBit(c+865,"burstterm", false,-1);
    tracep->declBit(c+866,"autorefresh", false,-1);
    tracep->declBit(c+867,"mode", false,-1);
    tracep->declBus(c+737,"test", false,-1, 15,0);
    tracep->declBit(c+738,"write_burst_mode", false,-1);
    tracep->declBus(c+739,"op_mode", false,-1, 1,0);
    tracep->declBus(c+740,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+741,"burst_type", false,-1);
    tracep->declBus(c+742,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+743,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+744,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+745,"bank", false,-1, 1,0);
    tracep->declBus(c+746,"row", false,-1, 12,0);
    tracep->declBus(c+747,"column", false,-1, 8,0);
    tracep->declBus(c+748,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+749,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2 ");
    tracep->declBit(c+1298,"clk", false,-1);
    tracep->declBit(c+427,"cke", false,-1);
    tracep->declBit(c+842,"cs", false,-1);
    tracep->declBit(c+843,"ras", false,-1);
    tracep->declBit(c+844,"cas", false,-1);
    tracep->declBit(c+845,"we", false,-1);
    tracep->declBus(c+846,"a", false,-1, 12,0);
    tracep->declBus(c+857,"ba", false,-1, 1,0);
    tracep->declBus(c+869,"dqm", false,-1, 1,0);
    tracep->declBus(c+872,"dq", false,-1, 15,0);
    tracep->declBit(c+859,"reset", false,-1);
    tracep->declBus(c+750,"state", false,-1, 2,0);
    tracep->declBus(c+751,"counter", false,-1, 7,0);
    tracep->declBus(c+752,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1475,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+753,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+754,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+860,"nop", false,-1);
    tracep->declBit(c+861,"active", false,-1);
    tracep->declBit(c+862,"precharge", false,-1);
    tracep->declBit(c+863,"read", false,-1);
    tracep->declBit(c+864,"write", false,-1);
    tracep->declBit(c+865,"burstterm", false,-1);
    tracep->declBit(c+866,"autorefresh", false,-1);
    tracep->declBit(c+867,"mode", false,-1);
    tracep->declBus(c+755,"test", false,-1, 15,0);
    tracep->declBit(c+756,"write_burst_mode", false,-1);
    tracep->declBus(c+757,"op_mode", false,-1, 1,0);
    tracep->declBus(c+758,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+759,"burst_type", false,-1);
    tracep->declBus(c+760,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+761,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+762,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+763,"bank", false,-1, 1,0);
    tracep->declBus(c+764,"row", false,-1, 12,0);
    tracep->declBus(c+765,"column", false,-1, 8,0);
    tracep->declBus(c+766,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+767,"rdqm_reg", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram3 ");
    tracep->declBit(c+1298,"clk", false,-1);
    tracep->declBit(c+427,"cke", false,-1);
    tracep->declBit(c+842,"cs", false,-1);
    tracep->declBit(c+843,"ras", false,-1);
    tracep->declBit(c+844,"cas", false,-1);
    tracep->declBit(c+845,"we", false,-1);
    tracep->declBus(c+846,"a", false,-1, 12,0);
    tracep->declBus(c+857,"ba", false,-1, 1,0);
    tracep->declBus(c+870,"dqm", false,-1, 1,0);
    tracep->declBus(c+873,"dq", false,-1, 15,0);
    tracep->declBit(c+859,"reset", false,-1);
    tracep->declBus(c+768,"state", false,-1, 2,0);
    tracep->declBus(c+769,"counter", false,-1, 7,0);
    tracep->declBus(c+770,"mode_reg", false,-1, 12,0);
    tracep->declBus(c+1476,"addr_reg", false,-1, 14,0);
    tracep->declBus(c+771,"data_o_reg", false,-1, 15,0);
    tracep->declBus(c+772,"data_i_reg", false,-1, 15,0);
    tracep->declBit(c+860,"nop", false,-1);
    tracep->declBit(c+861,"active", false,-1);
    tracep->declBit(c+862,"precharge", false,-1);
    tracep->declBit(c+863,"read", false,-1);
    tracep->declBit(c+864,"write", false,-1);
    tracep->declBit(c+865,"burstterm", false,-1);
    tracep->declBit(c+866,"autorefresh", false,-1);
    tracep->declBit(c+867,"mode", false,-1);
    tracep->declBus(c+773,"test", false,-1, 15,0);
    tracep->declBit(c+774,"write_burst_mode", false,-1);
    tracep->declBus(c+775,"op_mode", false,-1, 1,0);
    tracep->declBus(c+776,"cas_latency", false,-1, 2,0);
    tracep->declBit(c+777,"burst_type", false,-1);
    tracep->declBus(c+778,"burst_lenth", false,-1, 2,0);
    tracep->declBus(c+779,"read_cnt", false,-1, 7,0);
    tracep->declBus(c+780,"write_cnt", false,-1, 7,0);
    tracep->declBus(c+781,"bank", false,-1, 1,0);
    tracep->declBus(c+782,"row", false,-1, 12,0);
    tracep->declBus(c+783,"column", false,-1, 8,0);
    tracep->declBus(c+784,"dqm_reg", false,-1, 1,0);
    tracep->declBus(c+785,"rdqm_reg", false,-1, 1,0);
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
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+21,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+23,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
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
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rlast));
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__xrd_reg),32);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__rd_reg),5);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__gpr_wen_reg));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_reg),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_reg),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_reg),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_reg),32);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mepc_wen_reg));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mstatus_wen_reg));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mcause_wen_reg));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__mtvec_wen_reg));
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ram_rdata_reg),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_res),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
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
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata),32);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb),4);
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable));
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__counter),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+400,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0)
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
    bufp->fullIData(oldp+401,((((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullIData(oldp+402,((((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                | (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm_reg)),32);
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
    bufp->fullBit(oldp+420,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                           << 2U) : 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                            << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST)))))));
    bufp->fullIData(oldp+421,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_arready) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                               >> 2U)))) 
                                & ((- (IData)((0x2000000U 
                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime))) 
                               | ((- (IData)((0x2000004U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]))) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullBit(oldp+422,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_awready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))))));
    bufp->fullBit(oldp+423,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_wready)
                                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullIData(oldp+424,(((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid
                                : ((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid
                                    : 0U))),32);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullSData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),11);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_reg),32);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullSData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_reg),16);
    bufp->fullSData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_reg),16);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[0]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[1]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[2]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[3]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[4]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[5]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[6]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segment_reg[7]),8);
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+456,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+457,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+461,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+466,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullSData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullSData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+499,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+501,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+509,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+511,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+512,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+514,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+518,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+519,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+521,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+539,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+540,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+541,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+542,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+543,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+544,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+545,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+548,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+549,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+550,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+569,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+576,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+595,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+596,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+597,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+598,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+599,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+618,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+619,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+620,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+621,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+622,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+624,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+643,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+660,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+671,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullSData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullSData(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_flag));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout),4);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_douten),4);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_counter),8);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata_reg),32);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wlast));
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__state),2);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__a_reg),32);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__b_reg),32);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__opcode_reg),4);
    bufp->fullQData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_result),64);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__mul_counter),6);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__dividend),32);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__divisor),32);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__quotient),32);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__remainder),32);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALU__DOT__div_counter),6);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter),8);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg),13);
    bufp->fullSData(oldp+717,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg),16);
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg),16);
    bufp->fullSData(oldp+719,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+721,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+722,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+724,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_cnt),8);
    bufp->fullCData(oldp+726,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank),2);
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__row),13);
    bufp->fullSData(oldp+729,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__column),9);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg),2);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state),3);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter),8);
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg),13);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg),16);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg),16);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+738,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+739,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+740,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+741,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+742,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read_cnt),8);
    bufp->fullCData(oldp+744,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank),2);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row),13);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column),9);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg),2);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter),8);
    bufp->fullSData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg),13);
    bufp->fullSData(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg),16);
    bufp->fullSData(oldp+754,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg),16);
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+756,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+757,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+758,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+760,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__read_cnt),8);
    bufp->fullCData(oldp+762,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank),2);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row),13);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column),9);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg),2);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter),8);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg),13);
    bufp->fullSData(oldp+771,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg),16);
    bufp->fullSData(oldp+772,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg),16);
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank_mem
                              [1U][0U][0x60U]),16);
    bufp->fullBit(oldp+774,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 9U))));
    bufp->fullCData(oldp+775,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+776,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullCData(oldp+778,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__read_cnt),8);
    bufp->fullCData(oldp+780,((0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg))))),8);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank),2);
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row),13);
    bufp->fullSData(oldp+783,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column),9);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg),2);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg),2);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+791,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter),3);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state));
    bufp->fullBit(oldp+797,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+798,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_valid_reg));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex_ready));
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg),7);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg),3);
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_read_reg));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_write_reg));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+807,((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_waddr),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_raddr),32);
    bufp->fullCData(oldp+810,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha48dec87__0) 
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
    bufp->fullCData(oldp+811,((((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                ? 0U : (((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__funct3_reg)))
                                         ? 1U : 2U))),3);
    bufp->fullCData(oldp+812,((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hfe131fa2__0))
                                ? 0U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he5392cc7__0))
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_start));
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_valid));
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__sel),4);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__x),32);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__y),32);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w),32);
    bufp->fullBit(oldp+821,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6f2fd84__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+823,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_ha6e6f338__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullBit(oldp+825,((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+826,((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg))));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+828,(((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__op_reg)) 
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
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__next_state),3);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready));
    bufp->fullBit(oldp+836,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+838,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+839,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+840,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+844,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+845,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),3);
    bufp->fullBit(oldp+848,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+857,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q))),2);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm),2);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active));
    bufp->fullBit(oldp+862,((IData)(((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0)))));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm),2);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm),2);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm),2);
    bufp->fullIData(oldp+871,((((IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))),32);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT___dq_wire),16);
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT___dq1_wire),16);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0]),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1]),8);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2]),8);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3]),8);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen));
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__psram__DOT__len),8);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),32);
    bufp->fullIData(oldp+884,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                     [0U])))),32);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_done_reg));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__al_done));
    bufp->fullCData(oldp+888,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),7);
    bufp->fullCData(oldp+889,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h93150a1e__0) 
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
    bufp->fullCData(oldp+890,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+891,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hba9f6ca3__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0))
                                ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+892,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h46c45559__0)
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
    bufp->fullIData(oldp+893,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+894,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)),32);
    bufp->fullIData(oldp+895,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+896,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+897,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
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
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+899,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg)))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+900,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),8);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1),8);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2),8);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__id_ready_reg));
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_state));
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rdata),32);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWID),4);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID),4);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state),2);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+921,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)) 
                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr))))));
    bufp->fullBit(oldp+922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+923,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+924,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+925,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+927,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+955,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0))));
    bufp->fullCData(oldp+956,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0))),4);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[0U]),32);
    bufp->fullCData(oldp+958,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0)),8);
    bufp->fullCData(oldp+959,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0))),3);
    bufp->fullCData(oldp+960,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0))),2);
    bufp->fullBit(oldp+961,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0))));
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[0U]),32);
    bufp->fullCData(oldp+963,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0))),4);
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                       << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                  << 1U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))))));
    bufp->fullBit(oldp+965,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0))));
    bufp->fullBit(oldp+966,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0))));
    bufp->fullCData(oldp+967,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0))),4);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[0U]),32);
    bufp->fullCData(oldp+969,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0)),8);
    bufp->fullCData(oldp+970,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0))),3);
    bufp->fullCData(oldp+971,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0))),2);
    bufp->fullBit(oldp+972,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0))));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+974,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+976,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+978,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+994,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+997,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+998,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+999,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+1000,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1005,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1006,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1011,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1013,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+1014,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wready));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready));
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[2U]),32);
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[2U]),32);
    bufp->fullIData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[2U]),32);
    bufp->fullCData(oldp+1028,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1029,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1030,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1031,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1032,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 8U))),4);
    bufp->fullCData(oldp+1033,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1034,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 6U))),3);
    bufp->fullCData(oldp+1035,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1036,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1037,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h68975acc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1038,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1039,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1040,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1041,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1042,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 2U))));
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WSTRB),4);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWLEN),8);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN),8);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWBURST),2);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST),2);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint));
    bufp->fullBit(oldp+1061,((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1062,((0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id));
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hb734b8d7__0[1U]),32);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf41bdd9a__0[1U]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_he372b177__0[1U]),32);
    bufp->fullCData(oldp+1067,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h109b6ac9__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1068,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3a4e4339__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1069,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h25d17c3d__0 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1070,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5a8d045f__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1071,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hdecce5eb__0) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1072,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h30176aa5__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1073,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h167d420f__0) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1074,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hbbf346b8__0) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1075,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h56bb0e93__0) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1076,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h94ebbd5e__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1077,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf81145fc__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1078,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hf199b2a3__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1079,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h7f1d654a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1080,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                         << 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST) 
                                                    << 1U)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_WLAST))) 
                                    >> 1U))));
    bufp->fullIData(oldp+1081,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1082,((0xfcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read));
    bufp->fullIData(oldp+1086,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1094,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1095,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1096,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1097,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1098,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1099,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1104,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1105,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1106,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),3);
    bufp->fullIData(oldp+1107,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1119,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write));
    bufp->fullIData(oldp+1123,((((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                 - (IData)(0x21000000U)) 
                                >> 2U)),32);
    bufp->fullIData(oldp+1124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1127,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1128,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1129,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1130,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1131,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1132,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+1135,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1136,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1137,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1138,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1139,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1140,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1141,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1142,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1143,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1144,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1145,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1146,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1147,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1148,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1149,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1150,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1152,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1153,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1154,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1155,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1156,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1157,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_valid_reg));
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ex),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc),32);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1198,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1199,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1222,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1223,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1224,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1225,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1226,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1227,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1230,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1231,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1232,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1233,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1234,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1235,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1236,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1237,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1238,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1239,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1240,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1241,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1242,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1243,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1244,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1245,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1247,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1248,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1249,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1250,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1251,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1252,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid));
    bufp->fullIData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1274,(vlSelf->clock));
    bufp->fullBit(oldp+1275,(vlSelf->reset));
    bufp->fullSData(oldp+1276,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1277,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1278,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1279,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1280,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1281,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1282,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1283,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1284,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1285,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1286,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1287,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1288,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1289,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1290,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1291,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1292,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1293,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1294,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1295,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1298,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1299,((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                       | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                          | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                    : 
                                                   (0x16U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                   | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))))));
    bufp->fullIData(oldp+1300,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
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
    bufp->fullBit(oldp+1301,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullIData(oldp+1304,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1305,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+1306,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+1307,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1308,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1309,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullIData(oldp+1318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h649e83ac__0)
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
    bufp->fullIData(oldp+1319,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                 | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
                                    | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1320,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state))
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
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wb_done_reg));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullIData(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pc_reg
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_w)),32);
    bufp->fullIData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_rdata),32);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__fetch_start));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+1332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),4);
    bufp->fullCData(oldp+1333,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_rid)
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),4);
    bufp->fullCData(oldp+1334,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullBit(oldp+1336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1337,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
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
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__next_state),2);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullIData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),32);
    bufp->fullBit(oldp+1341,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1342,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1345,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1348,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullBit(oldp+1349,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1351,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag));
    bufp->fullIData(oldp+1354,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1356,(1U),3);
    bufp->fullCData(oldp+1357,(0U),2);
    bufp->fullCData(oldp+1358,(1U),2);
    bufp->fullCData(oldp+1359,(2U),2);
    bufp->fullCData(oldp+1360,(3U),2);
    bufp->fullSData(oldp+1361,(0xaU),11);
    bufp->fullBit(oldp+1362,(0U));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1367,(1U));
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1369,(0U),4);
    bufp->fullIData(oldp+1370,(0U),32);
    bufp->fullCData(oldp+1371,(0U),8);
    bufp->fullCData(oldp+1372,(0U),3);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1383,(0U),32);
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_wlast));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullIData(oldp+1387,(0x2000000U),32);
    bufp->fullIData(oldp+1388,(0x2000004U),32);
    bufp->fullCData(oldp+1389,(1U),4);
    bufp->fullCData(oldp+1390,(2U),4);
    bufp->fullCData(oldp+1391,(3U),4);
    bufp->fullCData(oldp+1392,(4U),4);
    bufp->fullCData(oldp+1393,(5U),4);
    bufp->fullCData(oldp+1394,(6U),4);
    bufp->fullCData(oldp+1395,(7U),4);
    bufp->fullCData(oldp+1396,(8U),4);
    bufp->fullCData(oldp+1397,(9U),4);
    bufp->fullCData(oldp+1398,(0xaU),4);
    bufp->fullCData(oldp+1399,(0xbU),4);
    bufp->fullCData(oldp+1400,(0xcU),4);
    bufp->fullBit(oldp+1401,(0U));
    bufp->fullBit(oldp+1402,(1U));
    bufp->fullIData(oldp+1403,(5U),32);
    bufp->fullIData(oldp+1404,(0x20U),32);
    bufp->fullIData(oldp+1405,(0x1000000U),32);
    bufp->fullIData(oldp+1406,(0x1000004U),32);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BID),4);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RID),4);
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_BRESP),2);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RRESP),2);
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_AWVALID));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__I_AXI_RLAST));
    bufp->fullIData(oldp+1413,(0x16fe3c1U),32);
    bufp->fullIData(oldp+1414,(0x1800U),32);
    bufp->fullIData(oldp+1415,(0x79737978U),32);
    bufp->fullCData(oldp+1416,(4U),8);
    bufp->fullCData(oldp+1417,(8U),8);
    bufp->fullCData(oldp+1418,(3U),8);
    bufp->fullCData(oldp+1419,(0x9fU),8);
    bufp->fullCData(oldp+1420,(0x25U),8);
    bufp->fullCData(oldp+1421,(0xdU),8);
    bufp->fullCData(oldp+1422,(0x99U),8);
    bufp->fullCData(oldp+1423,(0x49U),8);
    bufp->fullCData(oldp+1424,(0x41U),8);
    bufp->fullCData(oldp+1425,(0x1fU),8);
    bufp->fullCData(oldp+1426,(1U),8);
    bufp->fullCData(oldp+1427,(9U),8);
    bufp->fullCData(oldp+1428,(0x11U),8);
    bufp->fullCData(oldp+1429,(0xc1U),8);
    bufp->fullCData(oldp+1430,(0x63U),8);
    bufp->fullCData(oldp+1431,(0x85U),8);
    bufp->fullCData(oldp+1432,(0x61U),8);
    bufp->fullCData(oldp+1433,(0x71U),8);
    bufp->fullCData(oldp+1434,(0xf0U),8);
    bufp->fullCData(oldp+1435,(0xe0U),8);
    bufp->fullCData(oldp+1436,(4U),3);
    bufp->fullCData(oldp+1437,(0x15U),8);
    bufp->fullCData(oldp+1438,(0xebU),8);
    bufp->fullCData(oldp+1439,(0x38U),8);
    bufp->fullIData(oldp+1440,(0x64U),32);
    bufp->fullIData(oldp+1441,(0x18U),32);
    bufp->fullIData(oldp+1442,(9U),32);
    bufp->fullIData(oldp+1443,(2U),32);
    bufp->fullIData(oldp+1444,(3U),32);
    bufp->fullIData(oldp+1445,(4U),32);
    bufp->fullIData(oldp+1446,(8U),32);
    bufp->fullIData(oldp+1447,(0xdU),32);
    bufp->fullIData(oldp+1448,(0x2000U),32);
    bufp->fullIData(oldp+1449,(0x2710U),32);
    bufp->fullIData(oldp+1450,(0x30cU),32);
    bufp->fullSData(oldp+1451,(0x20U),13);
    bufp->fullIData(oldp+1452,(0xaU),32);
    bufp->fullIData(oldp+1453,(6U),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullIData(oldp+1455,(0x11U),32);
    bufp->fullIData(oldp+1456,(0x30000000U),32);
    bufp->fullIData(oldp+1457,(0x3fffffffU),32);
    bufp->fullCData(oldp+1458,(2U),3);
    bufp->fullCData(oldp+1459,(3U),3);
    bufp->fullCData(oldp+1460,(5U),3);
    bufp->fullCData(oldp+1461,(6U),3);
    bufp->fullCData(oldp+1462,(7U),3);
    bufp->fullIData(oldp+1463,(1U),32);
    bufp->fullIData(oldp+1464,(0xbU),32);
    bufp->fullIData(oldp+1465,(0x10U),32);
    bufp->fullIData(oldp+1466,(0x60U),32);
    bufp->fullIData(oldp+1467,(0x90U),32);
    bufp->fullIData(oldp+1468,(0x310U),32);
    bufp->fullIData(oldp+1469,(0x320U),32);
    bufp->fullIData(oldp+1470,(0x23U),32);
    bufp->fullIData(oldp+1471,(0x203U),32);
    bufp->fullIData(oldp+1472,(0x20dU),32);
    bufp->fullSData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__addr_reg),15);
    bufp->fullSData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__addr_reg),15);
    bufp->fullSData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__addr_reg),15);
    bufp->fullSData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__addr_reg),15);
}
