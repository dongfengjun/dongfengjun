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
    tracep->declBit(c+1122,"ysyxSoCTop.clock", false,-1);
    tracep->declBit(c+1123,"ysyxSoCTop.reset", false,-1);
    tracep->declBit(c+1124,"sdram_top_axi.clock", false,-1);
    tracep->declBit(c+1125,"sdram_top_axi.reset", false,-1);
    tracep->declBit(c+1126,"sdram_top_axi.in_awready", false,-1);
    tracep->declBit(c+1127,"sdram_top_axi.in_awvalid", false,-1);
    tracep->declBus(c+1128,"sdram_top_axi.in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1129,"sdram_top_axi.in_awid", false,-1, 3,0);
    tracep->declBus(c+1130,"sdram_top_axi.in_awlen", false,-1, 7,0);
    tracep->declBus(c+1131,"sdram_top_axi.in_awsize", false,-1, 2,0);
    tracep->declBus(c+1132,"sdram_top_axi.in_awburst", false,-1, 1,0);
    tracep->declBit(c+1133,"sdram_top_axi.in_wready", false,-1);
    tracep->declBit(c+1134,"sdram_top_axi.in_wvalid", false,-1);
    tracep->declBus(c+1135,"sdram_top_axi.in_wdata", false,-1, 31,0);
    tracep->declBus(c+1136,"sdram_top_axi.in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1137,"sdram_top_axi.in_wlast", false,-1);
    tracep->declBit(c+1138,"sdram_top_axi.in_bready", false,-1);
    tracep->declBit(c+1139,"sdram_top_axi.in_bvalid", false,-1);
    tracep->declBus(c+1140,"sdram_top_axi.in_bresp", false,-1, 1,0);
    tracep->declBus(c+1141,"sdram_top_axi.in_bid", false,-1, 3,0);
    tracep->declBit(c+1142,"sdram_top_axi.in_arready", false,-1);
    tracep->declBit(c+1143,"sdram_top_axi.in_arvalid", false,-1);
    tracep->declBus(c+1144,"sdram_top_axi.in_araddr", false,-1, 31,0);
    tracep->declBus(c+1145,"sdram_top_axi.in_arid", false,-1, 3,0);
    tracep->declBus(c+1146,"sdram_top_axi.in_arlen", false,-1, 7,0);
    tracep->declBus(c+1147,"sdram_top_axi.in_arsize", false,-1, 2,0);
    tracep->declBus(c+1148,"sdram_top_axi.in_arburst", false,-1, 1,0);
    tracep->declBit(c+1149,"sdram_top_axi.in_rready", false,-1);
    tracep->declBit(c+1150,"sdram_top_axi.in_rvalid", false,-1);
    tracep->declBus(c+1151,"sdram_top_axi.in_rresp", false,-1, 1,0);
    tracep->declBus(c+1152,"sdram_top_axi.in_rdata", false,-1, 31,0);
    tracep->declBit(c+1153,"sdram_top_axi.in_rlast", false,-1);
    tracep->declBus(c+1154,"sdram_top_axi.in_rid", false,-1, 3,0);
    tracep->declBit(c+1155,"sdram_clk", false,-1);
    tracep->declBit(c+1156,"sdram_cke", false,-1);
    tracep->declBit(c+1157,"sdram_cs", false,-1);
    tracep->declBit(c+1158,"sdram_ras", false,-1);
    tracep->declBit(c+1159,"sdram_cas", false,-1);
    tracep->declBit(c+1160,"sdram_we", false,-1);
    tracep->declBus(c+1161,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1162,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1163,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1164,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+1165,"axi4_delayer.clock", false,-1);
    tracep->declBit(c+1166,"axi4_delayer.reset", false,-1);
    tracep->declBit(c+1167,"axi4_delayer.in_arready", false,-1);
    tracep->declBit(c+1168,"axi4_delayer.in_arvalid", false,-1);
    tracep->declBus(c+1169,"axi4_delayer.in_arid", false,-1, 3,0);
    tracep->declBus(c+1170,"axi4_delayer.in_araddr", false,-1, 31,0);
    tracep->declBus(c+1171,"axi4_delayer.in_arlen", false,-1, 7,0);
    tracep->declBus(c+1172,"axi4_delayer.in_arsize", false,-1, 2,0);
    tracep->declBus(c+1173,"axi4_delayer.in_arburst", false,-1, 1,0);
    tracep->declBit(c+1174,"axi4_delayer.in_rready", false,-1);
    tracep->declBit(c+1175,"axi4_delayer.in_rvalid", false,-1);
    tracep->declBus(c+1176,"axi4_delayer.in_rid", false,-1, 3,0);
    tracep->declBus(c+1177,"axi4_delayer.in_rdata", false,-1, 31,0);
    tracep->declBus(c+1178,"axi4_delayer.in_rresp", false,-1, 1,0);
    tracep->declBit(c+1179,"axi4_delayer.in_rlast", false,-1);
    tracep->declBit(c+1180,"axi4_delayer.in_awready", false,-1);
    tracep->declBit(c+1181,"axi4_delayer.in_awvalid", false,-1);
    tracep->declBus(c+1182,"axi4_delayer.in_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"axi4_delayer.in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"axi4_delayer.in_awlen", false,-1, 7,0);
    tracep->declBus(c+1185,"axi4_delayer.in_awsize", false,-1, 2,0);
    tracep->declBus(c+1186,"axi4_delayer.in_awburst", false,-1, 1,0);
    tracep->declBit(c+1187,"axi4_delayer.in_wready", false,-1);
    tracep->declBit(c+1188,"axi4_delayer.in_wvalid", false,-1);
    tracep->declBus(c+1189,"axi4_delayer.in_wdata", false,-1, 31,0);
    tracep->declBus(c+1190,"axi4_delayer.in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1191,"axi4_delayer.in_wlast", false,-1);
    tracep->declBit(c+1192,"axi4_delayer.in_bready", false,-1);
    tracep->declBit(c+1193,"axi4_delayer.in_bvalid", false,-1);
    tracep->declBus(c+1194,"axi4_delayer.in_bid", false,-1, 3,0);
    tracep->declBus(c+1195,"axi4_delayer.in_bresp", false,-1, 1,0);
    tracep->declBit(c+1196,"out_arready", false,-1);
    tracep->declBit(c+1197,"out_arvalid", false,-1);
    tracep->declBus(c+1198,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1199,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1200,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1201,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1202,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1203,"out_rready", false,-1);
    tracep->declBit(c+1204,"out_rvalid", false,-1);
    tracep->declBus(c+1205,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1206,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1207,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1208,"out_rlast", false,-1);
    tracep->declBit(c+1209,"out_awready", false,-1);
    tracep->declBit(c+1210,"out_awvalid", false,-1);
    tracep->declBus(c+1211,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1212,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1213,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1214,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1215,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1216,"out_wready", false,-1);
    tracep->declBit(c+1217,"out_wvalid", false,-1);
    tracep->declBus(c+1218,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1219,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1220,"out_wlast", false,-1);
    tracep->declBit(c+1221,"out_bready", false,-1);
    tracep->declBit(c+1222,"out_bvalid", false,-1);
    tracep->declBus(c+1223,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1224,"out_bresp", false,-1, 1,0);
    tracep->pushNamePrefix("axi4_delayer ");
    tracep->declBit(c+1165,"clock", false,-1);
    tracep->declBit(c+1166,"reset", false,-1);
    tracep->declBit(c+1167,"in_arready", false,-1);
    tracep->declBit(c+1168,"in_arvalid", false,-1);
    tracep->declBus(c+1169,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1170,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1171,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1172,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1173,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1174,"in_rready", false,-1);
    tracep->declBit(c+1175,"in_rvalid", false,-1);
    tracep->declBus(c+1176,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1177,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1178,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1179,"in_rlast", false,-1);
    tracep->declBit(c+1180,"in_awready", false,-1);
    tracep->declBit(c+1181,"in_awvalid", false,-1);
    tracep->declBus(c+1182,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1185,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1186,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1187,"in_wready", false,-1);
    tracep->declBit(c+1188,"in_wvalid", false,-1);
    tracep->declBus(c+1189,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1190,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1191,"in_wlast", false,-1);
    tracep->declBit(c+1192,"in_bready", false,-1);
    tracep->declBit(c+1193,"in_bvalid", false,-1);
    tracep->declBus(c+1194,"in_bid", false,-1, 3,0);
    tracep->declBus(c+1195,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1196,"out_arready", false,-1);
    tracep->declBit(c+1197,"out_arvalid", false,-1);
    tracep->declBus(c+1198,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1199,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1200,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1201,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1202,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+1203,"out_rready", false,-1);
    tracep->declBit(c+1204,"out_rvalid", false,-1);
    tracep->declBus(c+1205,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1206,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1207,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1208,"out_rlast", false,-1);
    tracep->declBit(c+1209,"out_awready", false,-1);
    tracep->declBit(c+1210,"out_awvalid", false,-1);
    tracep->declBus(c+1211,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1212,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1213,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+1214,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1215,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1216,"out_wready", false,-1);
    tracep->declBit(c+1217,"out_wvalid", false,-1);
    tracep->declBus(c+1218,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1219,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1220,"out_wlast", false,-1);
    tracep->declBit(c+1221,"out_bready", false,-1);
    tracep->declBit(c+1222,"out_bvalid", false,-1);
    tracep->declBus(c+1223,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1224,"out_bresp", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_top_axi ");
    tracep->declBit(c+1124,"clock", false,-1);
    tracep->declBit(c+1125,"reset", false,-1);
    tracep->declBit(c+1126,"in_awready", false,-1);
    tracep->declBit(c+1127,"in_awvalid", false,-1);
    tracep->declBus(c+1128,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1129,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1130,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1131,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1132,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1133,"in_wready", false,-1);
    tracep->declBit(c+1134,"in_wvalid", false,-1);
    tracep->declBus(c+1135,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1136,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1137,"in_wlast", false,-1);
    tracep->declBit(c+1138,"in_bready", false,-1);
    tracep->declBit(c+1139,"in_bvalid", false,-1);
    tracep->declBus(c+1140,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1141,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1142,"in_arready", false,-1);
    tracep->declBit(c+1143,"in_arvalid", false,-1);
    tracep->declBus(c+1144,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1145,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1146,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1147,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1148,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1149,"in_rready", false,-1);
    tracep->declBit(c+1150,"in_rvalid", false,-1);
    tracep->declBus(c+1151,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1152,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1153,"in_rlast", false,-1);
    tracep->declBus(c+1141,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1155,"sdram_clk", false,-1);
    tracep->declBit(c+1156,"sdram_cke", false,-1);
    tracep->declBit(c+1157,"sdram_cs", false,-1);
    tracep->declBit(c+1158,"sdram_ras", false,-1);
    tracep->declBit(c+1159,"sdram_cas", false,-1);
    tracep->declBit(c+1160,"sdram_we", false,-1);
    tracep->declBus(c+1161,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1162,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1163,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1164,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+26,"sdram_dout_en", false,-1);
    tracep->declBus(c+27,"sdram_dout", false,-1, 15,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1124,"clk_i", false,-1);
    tracep->declBit(c+1125,"rst_i", false,-1);
    tracep->declBit(c+1127,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1128,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1129,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1130,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1132,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1134,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1135,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1136,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1137,"inport_wlast_i", false,-1);
    tracep->declBit(c+1138,"inport_bready_i", false,-1);
    tracep->declBit(c+1143,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1144,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1145,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1146,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1148,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1149,"inport_rready_i", false,-1);
    tracep->declBus(c+1164,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+1126,"inport_awready_o", false,-1);
    tracep->declBit(c+1133,"inport_wready_o", false,-1);
    tracep->declBit(c+1139,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1140,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1141,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1142,"inport_arready_o", false,-1);
    tracep->declBit(c+1150,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1152,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1151,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1141,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1153,"inport_rlast_o", false,-1);
    tracep->declBit(c+1155,"sdram_clk_o", false,-1);
    tracep->declBit(c+1156,"sdram_cke_o", false,-1);
    tracep->declBit(c+1157,"sdram_cs_o", false,-1);
    tracep->declBit(c+1158,"sdram_ras_o", false,-1);
    tracep->declBit(c+1159,"sdram_cas_o", false,-1);
    tracep->declBit(c+1160,"sdram_we_o", false,-1);
    tracep->declBus(c+1163,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+1161,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1162,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+27,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+26,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1260,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1261,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1262,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+2,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+3,"ram_rd_w", false,-1);
    tracep->declBit(c+28,"ram_accept_w", false,-1);
    tracep->declBus(c+1135,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+29,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1225,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+30,"ram_ack_w", false,-1);
    tracep->declBit(c+1264,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1124,"clk_i", false,-1);
    tracep->declBit(c+1125,"rst_i", false,-1);
    tracep->declBit(c+1127,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1128,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1129,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1130,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1132,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1134,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1135,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1136,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1137,"axi_wlast_i", false,-1);
    tracep->declBit(c+1138,"axi_bready_i", false,-1);
    tracep->declBit(c+1143,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1144,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1145,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1146,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1148,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+1149,"axi_rready_i", false,-1);
    tracep->declBit(c+28,"ram_accept_i", false,-1);
    tracep->declBit(c+30,"ram_ack_i", false,-1);
    tracep->declBit(c+1264,"ram_error_i", false,-1);
    tracep->declBus(c+29,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1126,"axi_awready_o", false,-1);
    tracep->declBit(c+1133,"axi_wready_o", false,-1);
    tracep->declBit(c+1139,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1140,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1141,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1142,"axi_arready_o", false,-1);
    tracep->declBit(c+1150,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1152,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1151,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1141,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1153,"axi_rlast_o", false,-1);
    tracep->declBus(c+2,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+3,"ram_rd_o", false,-1);
    tracep->declBus(c+1225,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1135,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+31,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+32,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+33,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+34,"req_rd_q", false,-1);
    tracep->declBit(c+35,"req_wr_q", false,-1);
    tracep->declBus(c+36,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+37,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+38,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+39,"req_prio_q", false,-1);
    tracep->declBit(c+40,"req_hold_rd_q", false,-1);
    tracep->declBit(c+41,"req_hold_wr_q", false,-1);
    tracep->declBit(c+42,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+4,"req_push_w", false,-1);
    tracep->declBus(c+1226,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+43,"req_out_valid_w", false,-1);
    tracep->declBus(c+44,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+5,"resp_accept_w", false,-1);
    tracep->declBit(c+45,"resp_is_write_w", false,-1);
    tracep->declBit(c+46,"resp_is_read_w", false,-1);
    tracep->declBit(c+1153,"resp_is_last_w", false,-1);
    tracep->declBus(c+1141,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+47,"resp_valid_w", false,-1);
    tracep->declBit(c+48,"write_prio_w", false,-1);
    tracep->declBit(c+49,"read_prio_w", false,-1);
    tracep->declBit(c+6,"write_active_w", false,-1);
    tracep->declBit(c+3,"read_active_w", false,-1);
    tracep->declBus(c+1,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1227,"wr_w", false,-1);
    tracep->declBit(c+3,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1265,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1266,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1263,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1124,"clk_i", false,-1);
    tracep->declBit(c+1125,"rst_i", false,-1);
    tracep->declBus(c+1226,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+4,"push_i", false,-1);
    tracep->declBit(c+5,"pop_i", false,-1);
    tracep->declBus(c+44,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+42,"accept_o", false,-1);
    tracep->declBit(c+43,"valid_o", false,-1);
    tracep->declBus(c+1267,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+50+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+54,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+55,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+56,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1266,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1263,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1124,"clk_i", false,-1);
    tracep->declBit(c+1125,"rst_i", false,-1);
    tracep->declBus(c+29,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+30,"push_i", false,-1);
    tracep->declBit(c+5,"pop_i", false,-1);
    tracep->declBus(c+1152,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+57,"accept_o", false,-1);
    tracep->declBit(c+47,"valid_o", false,-1);
    tracep->declBus(c+1267,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+58+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+62,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+63,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+64,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1124,"clk_i", false,-1);
    tracep->declBit(c+1125,"rst_i", false,-1);
    tracep->declBus(c+2,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+3,"inport_rd_i", false,-1);
    tracep->declBus(c+1225,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1135,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1164,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+28,"inport_accept_o", false,-1);
    tracep->declBit(c+30,"inport_ack_o", false,-1);
    tracep->declBit(c+1264,"inport_error_o", false,-1);
    tracep->declBus(c+29,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1155,"sdram_clk_o", false,-1);
    tracep->declBit(c+1156,"sdram_cke_o", false,-1);
    tracep->declBit(c+1157,"sdram_cs_o", false,-1);
    tracep->declBit(c+1158,"sdram_ras_o", false,-1);
    tracep->declBit(c+1159,"sdram_cas_o", false,-1);
    tracep->declBit(c+1160,"sdram_we_o", false,-1);
    tracep->declBus(c+1163,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+1161,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1162,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+27,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+26,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1260,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1261,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1262,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1266,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1269,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1270,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1271,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1272,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1266,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1273,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1274,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1275,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1276,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1277,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1278,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1279,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1280,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1281,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1266,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1280,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1279,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1278,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1274,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1276,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1275,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1277,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1273,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1282,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1283,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1284,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1284,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1285,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1284,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1265,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+2,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+3,"ram_rd_w", false,-1);
    tracep->declBit(c+28,"ram_accept_w", false,-1);
    tracep->declBus(c+1135,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+29,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+30,"ram_ack_w", false,-1);
    tracep->declBit(c+7,"ram_req_w", false,-1);
    tracep->declBus(c+65,"command_q", false,-1, 3,0);
    tracep->declBus(c+66,"addr_q", false,-1, 12,0);
    tracep->declBus(c+27,"data_q", false,-1, 15,0);
    tracep->declBit(c+67,"data_rd_en_q", false,-1);
    tracep->declBus(c+68,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+69,"cke_q", false,-1);
    tracep->declBus(c+70,"bank_q", false,-1, 1,0);
    tracep->declBus(c+71,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+72,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+1164,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+73,"refresh_q", false,-1);
    tracep->declBus(c+74,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+75+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+79,"state_q", false,-1, 3,0);
    tracep->declBus(c+8,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+9,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+80,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+81,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+10,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+11,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+12,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1266,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+82,"delay_q", false,-1, 3,0);
    tracep->declBus(c+13,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1286,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+83,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+84,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+85,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+86,"idx", false,-1, 31,0);
    tracep->declBus(c+87,"rd_q", false,-1, 3,0);
    tracep->declBit(c+30,"ack_q", false,-1);
    tracep->declArray(c+88,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyxSoCTop ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1287,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1288,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1289,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1290,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1291,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1292,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1293,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1294,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1295,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1296,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1264,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1264,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1297,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1298,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1299,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1300,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1301,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1302,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1264,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+551,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+552,"spi_sck", false,-1);
    tracep->declBus(c+553,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1228,"spi_mosi", false,-1);
    tracep->declBit(c+1229,"spi_miso", false,-1);
    tracep->declBit(c+1264,"uart_rx", false,-1);
    tracep->declBit(c+551,"uart_tx", false,-1);
    tracep->declBit(c+1230,"psram_sck", false,-1);
    tracep->declBit(c+1231,"psram_ce_n", false,-1);
    tracep->declBus(c+1011,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1232,"sdram_clk", false,-1);
    tracep->declBit(c+554,"sdram_cke", false,-1);
    tracep->declBit(c+555,"sdram_cs", false,-1);
    tracep->declBit(c+556,"sdram_ras", false,-1);
    tracep->declBit(c+557,"sdram_cas", false,-1);
    tracep->declBit(c+558,"sdram_we", false,-1);
    tracep->declBus(c+559,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+560,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+561,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1287,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1289,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1296,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1264,"ps2_clk", false,-1);
    tracep->declBit(c+1264,"ps2_data", false,-1);
    tracep->declBus(c+1297,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1298,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1300,"vga_hsync", false,-1);
    tracep->declBit(c+1301,"vga_vsync", false,-1);
    tracep->declBit(c+1302,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+875,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+876,"in_psel", false,-1);
    tracep->declBit(c+91,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"in_pready", false,-1);
    tracep->declBus(c+1013,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+880,"in_pslverr", false,-1);
    tracep->declBus(c+875,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+876,"out_psel", false,-1);
    tracep->declBit(c+91,"out_penable", false,-1);
    tracep->declBus(c+1303,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"out_pwrite", false,-1);
    tracep->declBus(c+878,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"out_pready", false,-1);
    tracep->declBus(c+1013,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+880,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+876,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+91,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+875,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+880,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1013,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+881,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+508,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+875,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+564,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+882,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+509,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+883,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1303,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1306,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+884,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+510,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+885,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1307,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1308,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1309,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+886,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+511,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+885,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1311,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1312,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+887,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+512,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+875,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1233,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+92,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+888,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+889,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+885,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+890,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1234,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+891,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+892,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+877,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+883,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1303,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1264,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+566,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+893,"sel_0", false,-1);
    tracep->declBit(c+894,"sel_1", false,-1);
    tracep->declBit(c+895,"sel_2", false,-1);
    tracep->declBit(c+896,"sel_3", false,-1);
    tracep->declBit(c+897,"sel_4", false,-1);
    tracep->declBit(c+898,"sel_5", false,-1);
    tracep->declBit(c+899,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+900,"auto_in_awready", false,-1);
    tracep->declBit(c+901,"auto_in_awvalid", false,-1);
    tracep->declBus(c+93,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+900,"auto_in_wready", false,-1);
    tracep->declBit(c+903,"auto_in_wvalid", false,-1);
    tracep->declBus(c+904,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1014,"auto_in_bready", false,-1);
    tracep->declBit(c+1015,"auto_in_bvalid", false,-1);
    tracep->declBus(c+95,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+906,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+907,"auto_in_arready", false,-1);
    tracep->declBit(c+908,"auto_in_arvalid", false,-1);
    tracep->declBus(c+96,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1016,"auto_in_rready", false,-1);
    tracep->declBit(c+1017,"auto_in_rvalid", false,-1);
    tracep->declBus(c+98,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+906,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+876,"auto_out_psel", false,-1);
    tracep->declBit(c+91,"auto_out_penable", false,-1);
    tracep->declBit(c+877,"auto_out_pwrite", false,-1);
    tracep->declBus(c+875,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+878,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"auto_out_pready", false,-1);
    tracep->declBit(c+880,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1013,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+91,"nodeOut_penable", false,-1);
    tracep->declBus(c+99,"state", false,-1, 1,0);
    tracep->declBit(c+907,"accept_read", false,-1);
    tracep->declBit(c+900,"accept_write", false,-1);
    tracep->declBit(c+100,"is_write_r", false,-1);
    tracep->declBit(c+877,"is_write", false,-1);
    tracep->declBus(c+98,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+95,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+101,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+102,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+103,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+104,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+910,"resp", false,-1, 1,0);
    tracep->declBus(c+105,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+906,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1017,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+106,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1015,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+107,"auto_in_awready", false,-1);
    tracep->declBit(c+911,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1313,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+912,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"auto_in_wready", false,-1);
    tracep->declBit(c+913,"auto_in_wvalid", false,-1);
    tracep->declBus(c+914,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"auto_in_wlast", false,-1);
    tracep->declBit(c+916,"auto_in_bready", false,-1);
    tracep->declBit(c+1018,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+515,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_in_arready", false,-1);
    tracep->declBit(c+917,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1318,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+918,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_in_rready", false,-1);
    tracep->declBit(c+1020,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_in_rlast", false,-1);
    tracep->declBit(c+1022,"auto_out_awready", false,-1);
    tracep->declBit(c+920,"auto_out_awvalid", false,-1);
    tracep->declBus(c+93,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+109,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1023,"auto_out_wready", false,-1);
    tracep->declBit(c+921,"auto_out_wvalid", false,-1);
    tracep->declBus(c+904,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_out_wlast", false,-1);
    tracep->declBit(c+1024,"auto_out_bready", false,-1);
    tracep->declBit(c+1025,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1027,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1028,"auto_out_arready", false,-1);
    tracep->declBit(c+923,"auto_out_arvalid", false,-1);
    tracep->declBus(c+96,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+110,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+919,"auto_out_rready", false,-1);
    tracep->declBit(c+1020,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+518,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1029,"auto_out_rlast", false,-1);
    tracep->declBit(c+921,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+111,"w_idle", false,-1);
    tracep->declBit(c+1030,"in_awready", false,-1);
    tracep->declBit(c+112,"busy", false,-1);
    tracep->declBus(c+113,"r_addr", false,-1, 31,0);
    tracep->declBus(c+114,"r_len", false,-1, 7,0);
    tracep->declBus(c+115,"len", false,-1, 7,0);
    tracep->declBus(c+924,"addr", false,-1, 31,0);
    tracep->declBit(c+116,"busy_1", false,-1);
    tracep->declBus(c+117,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+118,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+119,"len_1", false,-1, 7,0);
    tracep->declBus(c+925,"addr_1", false,-1, 31,0);
    tracep->declBit(c+120,"wbeats_latched", false,-1);
    tracep->declBit(c+920,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+926,"wbeats_valid", false,-1);
    tracep->declBus(c+121,"w_counter", false,-1, 8,0);
    tracep->declBus(c+927,"w_todo", false,-1, 8,0);
    tracep->declBit(c+922,"w_last", false,-1);
    tracep->declBit(c+1024,"nodeOut_bready", false,-1);
    tracep->declBus(c+122,"error_0", false,-1, 1,0);
    tracep->declBus(c+123,"error_1", false,-1, 1,0);
    tracep->declBus(c+124,"error_2", false,-1, 1,0);
    tracep->declBus(c+125,"error_3", false,-1, 1,0);
    tracep->declBus(c+126,"error_4", false,-1, 1,0);
    tracep->declBus(c+127,"error_5", false,-1, 1,0);
    tracep->declBus(c+128,"error_6", false,-1, 1,0);
    tracep->declBus(c+129,"error_7", false,-1, 1,0);
    tracep->declBus(c+130,"error_8", false,-1, 1,0);
    tracep->declBus(c+131,"error_9", false,-1, 1,0);
    tracep->declBus(c+132,"error_10", false,-1, 1,0);
    tracep->declBus(c+133,"error_11", false,-1, 1,0);
    tracep->declBus(c+134,"error_12", false,-1, 1,0);
    tracep->declBus(c+135,"error_13", false,-1, 1,0);
    tracep->declBus(c+136,"error_14", false,-1, 1,0);
    tracep->declBus(c+137,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+108,"io_enq_ready", false,-1);
    tracep->declBit(c+917,"io_enq_valid", false,-1);
    tracep->declBus(c+1318,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+918,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1319,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1320,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1321,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+923,"io_deq_valid", false,-1);
    tracep->declBus(c+96,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+928,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+138,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+97,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+139,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+140,"ram", false,-1, 48,0);
    tracep->declBit(c+142,"full", false,-1);
    tracep->declBit(c+923,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1032,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+107,"io_enq_ready", false,-1);
    tracep->declBit(c+911,"io_enq_valid", false,-1);
    tracep->declBus(c+1313,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+912,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1314,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1315,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1316,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
    tracep->declBit(c+929,"io_deq_valid", false,-1);
    tracep->declBus(c+93,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+930,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+143,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+94,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+144,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+145,"ram", false,-1, 48,0);
    tracep->declBit(c+147,"full", false,-1);
    tracep->declBit(c+929,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1034,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+807,"io_enq_ready", false,-1);
    tracep->declBit(c+913,"io_enq_valid", false,-1);
    tracep->declBus(c+914,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+915,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1317,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+931,"io_deq_valid", false,-1);
    tracep->declBus(c+904,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+905,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+495,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+148,"ram", false,-1, 36,0);
    tracep->declBit(c+808,"full", false,-1);
    tracep->declBit(c+931,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1036,"do_enq", false,-1);
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
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1037,"auto_in_awready", false,-1);
    tracep->declBit(c+932,"auto_in_awvalid", false,-1);
    tracep->declBus(c+93,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1236,"auto_in_wready", false,-1);
    tracep->declBit(c+934,"auto_in_wvalid", false,-1);
    tracep->declBus(c+904,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_in_bready", false,-1);
    tracep->declBit(c+150,"auto_in_bvalid", false,-1);
    tracep->declBus(c+151,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+152,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_in_arready", false,-1);
    tracep->declBit(c+935,"auto_in_arvalid", false,-1);
    tracep->declBus(c+96,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+936,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1040,"auto_in_rready", false,-1);
    tracep->declBit(c+153,"auto_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1039,"nodeIn_arready", false,-1);
    tracep->declBit(c+1037,"nodeIn_awready", false,-1);
    tracep->declBit(c+937,"w_sel0", false,-1);
    tracep->declBit(c+150,"w_full", false,-1);
    tracep->declBus(c+151,"w_id", false,-1, 3,0);
    tracep->declBit(c+157,"r_sel1", false,-1);
    tracep->declBit(c+158,"w_sel1", false,-1);
    tracep->declBit(c+153,"r_full", false,-1);
    tracep->declBus(c+154,"r_id", false,-1, 3,0);
    tracep->declBit(c+1041,"ren", false,-1);
    tracep->declBit(c+159,"rdata_REG", false,-1);
    tracep->declBus(c+160,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+161,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+162,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+163,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+938,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1041,"R0_en", false,-1);
    tracep->declBit(c+1122,"R0_clk", false,-1);
    tracep->declBus(c+164,"R0_data", false,-1, 31,0);
    tracep->declBus(c+939,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1042,"W0_en", false,-1);
    tracep->declBit(c+1122,"W0_clk", false,-1);
    tracep->declBus(c+904,"W0_data", false,-1, 31,0);
    tracep->declBus(c+905,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+107,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+911,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1313,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+912,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+913,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+914,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+916,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1018,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+515,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+917,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1318,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+918,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1020,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+107,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+911,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1313,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+912,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+913,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+914,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+916,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1018,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+515,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+917,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1318,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+918,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+1020,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1043,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+940,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+93,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1023,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+921,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+904,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1024,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1025,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+941,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+96,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+919,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1020,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1037,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+932,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+93,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1236,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+934,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+904,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+150,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+151,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+152,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1039,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+935,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+96,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+936,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1040,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+942,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+943,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+165,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+96,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1237,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+166,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+167,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+900,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+901,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+93,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+900,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+903,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+904,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1014,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+1015,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+95,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+906,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+907,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+908,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+96,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1016,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+1017,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+98,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+514,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+906,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1025,"in_0_bvalid", false,-1);
    tracep->declBit(c+1020,"in_0_rvalid", false,-1);
    tracep->declBit(c+1045,"in_0_wready", false,-1);
    tracep->declBit(c+1046,"in_0_awready", false,-1);
    tracep->declBit(c+1044,"in_0_arready", false,-1);
    tracep->declBit(c+1043,"anonIn_awready", false,-1);
    tracep->declBit(c+946,"requestARIO_0_0", false,-1);
    tracep->declBit(c+947,"requestARIO_0_1", false,-1);
    tracep->declBit(c+948,"requestARIO_0_2", false,-1);
    tracep->declBit(c+949,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+950,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+951,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+169,"arSel", false,-1, 15,0);
    tracep->declBus(c+170,"awSel", false,-1, 15,0);
    tracep->declBus(c+1047,"rSel", false,-1, 15,0);
    tracep->declBus(c+1048,"bSel", false,-1, 15,0);
    tracep->declBit(c+171,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+189,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+190,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+191,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+192,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+193,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+194,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+195,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+196,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+197,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+198,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+199,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+200,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+201,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+202,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+203,"latched", false,-1);
    tracep->declBit(c+952,"in_0_awvalid", false,-1);
    tracep->declBit(c+953,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+954,"in_0_wvalid", false,-1);
    tracep->declBit(c+204,"idle_3", false,-1);
    tracep->declBit(c+1049,"anyValid", false,-1);
    tracep->declBus(c+1050,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+205,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1051,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1052,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1053,"prefixOR_1", false,-1);
    tracep->declBit(c+1054,"winner_3_1", false,-1);
    tracep->declBit(c+1055,"winner_3_2", false,-1);
    tracep->declBit(c+206,"state_3_0", false,-1);
    tracep->declBit(c+207,"state_3_1", false,-1);
    tracep->declBit(c+208,"state_3_2", false,-1);
    tracep->declBit(c+1056,"muxState_3_0", false,-1);
    tracep->declBit(c+1057,"muxState_3_1", false,-1);
    tracep->declBit(c+1058,"muxState_3_2", false,-1);
    tracep->declBit(c+209,"idle_4", false,-1);
    tracep->declBit(c+1059,"anyValid_1", false,-1);
    tracep->declBus(c+1060,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+210,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1061,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1062,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1063,"winner_4_0", false,-1);
    tracep->declBit(c+1064,"winner_4_2", false,-1);
    tracep->declBit(c+211,"state_4_0", false,-1);
    tracep->declBit(c+212,"state_4_2", false,-1);
    tracep->declBit(c+1065,"muxState_4_0", false,-1);
    tracep->declBit(c+1066,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+953,"io_enq_valid", false,-1);
    tracep->declBus(c+955,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1067,"io_deq_ready", false,-1);
    tracep->declBit(c+956,"io_deq_valid", false,-1);
    tracep->declBus(c+957,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+214,"wrap", false,-1);
    tracep->declBit(c+215,"wrap_1", false,-1);
    tracep->declBit(c+216,"maybe_full", false,-1);
    tracep->declBit(c+217,"ptr_match", false,-1);
    tracep->declBit(c+218,"empty", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+956,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1068,"do_deq", false,-1);
    tracep->declBit(c+1069,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+215,"R0_addr", false,-1);
    tracep->declBit(c+1322,"R0_en", false,-1);
    tracep->declBit(c+1122,"R0_clk", false,-1);
    tracep->declBus(c+220,"R0_data", false,-1, 2,0);
    tracep->declBit(c+214,"W0_addr", false,-1);
    tracep->declBit(c+1069,"W0_en", false,-1);
    tracep->declBit(c+1122,"W0_clk", false,-1);
    tracep->declBus(c+955,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+221+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1022,"auto_in_awready", false,-1);
    tracep->declBit(c+920,"auto_in_awvalid", false,-1);
    tracep->declBus(c+93,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+109,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1023,"auto_in_wready", false,-1);
    tracep->declBit(c+921,"auto_in_wvalid", false,-1);
    tracep->declBus(c+904,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_in_wlast", false,-1);
    tracep->declBit(c+1024,"auto_in_bready", false,-1);
    tracep->declBit(c+1025,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1027,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1028,"auto_in_arready", false,-1);
    tracep->declBit(c+923,"auto_in_arvalid", false,-1);
    tracep->declBus(c+96,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+110,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+919,"auto_in_rready", false,-1);
    tracep->declBit(c+1020,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+518,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1029,"auto_in_rlast", false,-1);
    tracep->declBit(c+1043,"auto_out_awready", false,-1);
    tracep->declBit(c+940,"auto_out_awvalid", false,-1);
    tracep->declBus(c+93,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+94,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1023,"auto_out_wready", false,-1);
    tracep->declBit(c+921,"auto_out_wvalid", false,-1);
    tracep->declBus(c+904,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+905,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_out_wlast", false,-1);
    tracep->declBit(c+1024,"auto_out_bready", false,-1);
    tracep->declBit(c+1025,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1026,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_out_arready", false,-1);
    tracep->declBit(c+941,"auto_out_arvalid", false,-1);
    tracep->declBus(c+96,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+97,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+919,"auto_out_rready", false,-1);
    tracep->declBit(c+1020,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+519,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1070,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+520,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1071,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+521,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1072,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+522,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1074,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+524,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+525,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+526,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+527,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+528,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+529,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1080,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+530,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+531,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1082,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+532,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1083,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+534,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+536,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1087,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+538,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1089,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1090,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+540,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1091,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1092,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1093,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1094,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+109,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1096,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1097,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1098,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1100,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+110,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1101,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+14,"reset", false,-1);
    tracep->declBit(c+107,"auto_master_out_awready", false,-1);
    tracep->declBit(c+911,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1313,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+912,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"auto_master_out_wready", false,-1);
    tracep->declBit(c+913,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+914,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+916,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1018,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1019,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+515,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"auto_master_out_arready", false,-1);
    tracep->declBit(c+917,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1318,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+918,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1020,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1021,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+516,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+14,"reset", false,-1);
    tracep->declBit(c+1264,"io_interrupt", false,-1);
    tracep->declBit(c+107,"io_master_awready", false,-1);
    tracep->declBit(c+911,"io_master_awvalid", false,-1);
    tracep->declBus(c+1313,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+912,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"io_master_wready", false,-1);
    tracep->declBit(c+913,"io_master_wvalid", false,-1);
    tracep->declBus(c+914,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"io_master_wlast", false,-1);
    tracep->declBit(c+916,"io_master_bready", false,-1);
    tracep->declBit(c+1018,"io_master_bvalid", false,-1);
    tracep->declBus(c+1019,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+515,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"io_master_arready", false,-1);
    tracep->declBit(c+917,"io_master_arvalid", false,-1);
    tracep->declBus(c+1318,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+918,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"io_master_rready", false,-1);
    tracep->declBit(c+1020,"io_master_rvalid", false,-1);
    tracep->declBus(c+1021,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+516,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"io_master_rlast", false,-1);
    tracep->declBit(c+1323,"io_slave_awready", false,-1);
    tracep->declBit(c+1264,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1280,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1324,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1325,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1326,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1327,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1328,"io_slave_wready", false,-1);
    tracep->declBit(c+1264,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1324,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1280,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"io_slave_wlast", false,-1);
    tracep->declBit(c+1264,"io_slave_bready", false,-1);
    tracep->declBit(c+1329,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1330,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1331,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1332,"io_slave_arready", false,-1);
    tracep->declBit(c+1264,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1280,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1324,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1325,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1326,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1327,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1264,"io_slave_rready", false,-1);
    tracep->declBit(c+1333,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1334,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1335,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1336,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1337,"io_slave_rlast", false,-1);
    tracep->declBus(c+351,"pc", false,-1, 31,0);
    tracep->declBus(c+809,"dnpc", false,-1, 31,0);
    tracep->declBit(c+352,"PCU_VALID", false,-1);
    tracep->declBit(c+353,"IFU_READY", false,-1);
    tracep->declBus(c+810,"inst", false,-1, 31,0);
    tracep->declBit(c+811,"IFU_VALID", false,-1);
    tracep->declBit(c+812,"IDU_READY", false,-1);
    tracep->declBus(c+1338,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1338,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+354,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1238,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1280,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1325,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+355,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1280,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+813,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+356,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+814,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1326,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+357,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1327,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+358,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1239,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1240,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+1264,"IFU_AXI_AWVALID", false,-1);
    tracep->declBit(c+868,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1264,"IFU_AXI_WVALID", false,-1);
    tracep->declBit(c+869,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1241,"IFU_AXI_BVALID", false,-1);
    tracep->declBit(c+1264,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+359,"IFU_AXI_ARVALID", false,-1);
    tracep->declBit(c+870,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1102,"IFU_AXI_RVALID", false,-1);
    tracep->declBit(c+360,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1339,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+815,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+816,"IDU_VALID", false,-1);
    tracep->declBit(c+817,"EXU_READY", false,-1);
    tracep->declBus(c+818,"op", false,-1, 6,0);
    tracep->declBus(c+361,"rd", false,-1, 4,0);
    tracep->declBus(c+819,"funct3", false,-1, 2,0);
    tracep->declBus(c+362,"rs1", false,-1, 4,0);
    tracep->declBus(c+363,"rs2", false,-1, 4,0);
    tracep->declBus(c+364,"imm", false,-1, 31,0);
    tracep->declBus(c+365,"funct7", false,-1, 6,0);
    tracep->declBus(c+366,"shamt", false,-1, 4,0);
    tracep->declBit(c+820,"sram_lsu_read", false,-1);
    tracep->declBit(c+821,"sram_lsu_write", false,-1);
    tracep->declBit(c+1242,"LSU_DONE", false,-1);
    tracep->declBit(c+367,"EXU_VALID", false,-1);
    tracep->declBit(c+368,"WBU_READY", false,-1);
    tracep->declBus(c+369,"res", false,-1, 31,0);
    tracep->declBit(c+822,"ls_valid", false,-1);
    tracep->declBit(c+823,"ls_wen", false,-1);
    tracep->declBus(c+824,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+825,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+826,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+827,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+370,"mepc", false,-1, 31,0);
    tracep->declBus(c+371,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+372,"mstatus", false,-1, 31,0);
    tracep->declBus(c+373,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+374,"mcause", false,-1, 31,0);
    tracep->declBus(c+375,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+376,"mtvec", false,-1, 31,0);
    tracep->declBus(c+377,"o_mtvec", false,-1, 31,0);
    tracep->declBit(c+378,"gpr_wen", false,-1);
    tracep->declBit(c+379,"mepc_wen", false,-1);
    tracep->declBit(c+380,"mstatus_wen", false,-1);
    tracep->declBit(c+381,"mcause_wen", false,-1);
    tracep->declBit(c+382,"mtvec_wen", false,-1);
    tracep->declBus(c+1243,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+791,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+792,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+793,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1243,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+794,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1340,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1341,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1342,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+828,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1343,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+829,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1344,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1345,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1346,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1347,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+1244,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1245,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+795,"LSU_AXI_AWVALID", false,-1);
    tracep->declBit(c+871,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+796,"LSU_AXI_WVALID", false,-1);
    tracep->declBit(c+872,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+1103,"LSU_AXI_BVALID", false,-1);
    tracep->declBit(c+797,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+798,"LSU_AXI_ARVALID", false,-1);
    tracep->declBit(c+873,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+1104,"LSU_AXI_RVALID", false,-1);
    tracep->declBit(c+799,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1348,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+830,"LSU_AXI_RLAST", false,-1);
    tracep->declBus(c+958,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+959,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+960,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+383,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+961,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+1349,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1350,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1351,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+384,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1352,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+385,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1353,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1354,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1355,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBus(c+1356,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBus(c+386,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+387,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+962,"C_AXI_AWVALID", false,-1);
    tracep->declBit(c+388,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+963,"C_AXI_WVALID", false,-1);
    tracep->declBit(c+831,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+389,"C_AXI_BVALID", false,-1);
    tracep->declBit(c+964,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+965,"C_AXI_ARVALID", false,-1);
    tracep->declBit(c+390,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+391,"C_AXI_RVALID", false,-1);
    tracep->declBit(c+966,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+1357,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+392,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+393,"wbu_done", false,-1);
    tracep->declBit(c+394,"difftest", false,-1);
    tracep->declBus(c+395,"xrd", false,-1, 31,0);
    tracep->declBus(c+396,"rf_addr", false,-1, 4,0);
    tracep->declBit(c+397,"rf_wen", false,-1);
    tracep->declBus(c+398,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+399,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+400,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+401,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+402,"mepc_en", false,-1);
    tracep->declBit(c+403,"mstatus_en", false,-1);
    tracep->declBit(c+404,"mcause_en", false,-1);
    tracep->declBit(c+405,"mtvec_en", false,-1);
    tracep->declBus(c+406,"r1", false,-1, 31,0);
    tracep->declBus(c+832,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+820,"sram_lsu_read", false,-1);
    tracep->declBit(c+821,"sram_lsu_write", false,-1);
    tracep->declBit(c+1242,"LSU_DONE", false,-1);
    tracep->declBit(c+816,"IDU_VALID", false,-1);
    tracep->declBit(c+817,"EXU_READY", false,-1);
    tracep->declBit(c+367,"EXU_VALID", false,-1);
    tracep->declBit(c+368,"WBU_READY", false,-1);
    tracep->declBus(c+818,"op", false,-1, 6,0);
    tracep->declBus(c+819,"funct3", false,-1, 2,0);
    tracep->declBus(c+364,"imm", false,-1, 31,0);
    tracep->declBus(c+365,"funct7", false,-1, 6,0);
    tracep->declBus(c+366,"shamt", false,-1, 4,0);
    tracep->declBus(c+406,"r1", false,-1, 31,0);
    tracep->declBus(c+832,"r2", false,-1, 31,0);
    tracep->declBus(c+369,"res_reg", false,-1, 31,0);
    tracep->declBit(c+822,"ls_valid", false,-1);
    tracep->declBit(c+823,"ls_wen", false,-1);
    tracep->declBus(c+824,"ls_waddr", false,-1, 31,0);
    tracep->declBus(c+825,"ls_wdata", false,-1, 31,0);
    tracep->declBus(c+826,"ls_raddr", false,-1, 31,0);
    tracep->declBus(c+827,"ls_wmask", false,-1, 3,0);
    tracep->declBus(c+1243,"ls_rdata", false,-1, 31,0);
    tracep->declBus(c+351,"pc", false,-1, 31,0);
    tracep->declBus(c+809,"dnpc", false,-1, 31,0);
    tracep->declBus(c+370,"mepc", false,-1, 31,0);
    tracep->declBus(c+372,"mstatus", false,-1, 31,0);
    tracep->declBus(c+374,"mcause", false,-1, 31,0);
    tracep->declBus(c+376,"mtvec", false,-1, 31,0);
    tracep->declBus(c+371,"o_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+373,"o_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+375,"o_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+377,"o_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+378,"gpr_wen_reg", false,-1);
    tracep->declBit(c+379,"mepc_wen_reg", false,-1);
    tracep->declBit(c+380,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+381,"mcause_wen_reg", false,-1);
    tracep->declBit(c+382,"mtvec_wen_reg", false,-1);
    tracep->declBit(c+817,"exu_ready", false,-1);
    tracep->declBit(c+367,"exu_valid", false,-1);
    tracep->declBus(c+1327,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1359,"WAIT_READY", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE_EXU", false,-1, 1,0);
    tracep->declBus(c+833,"state", false,-1, 1,0);
    tracep->declBus(c+1246,"next_state", false,-1, 1,0);
    tracep->declBus(c+834,"a", false,-1, 31,0);
    tracep->declBus(c+835,"b", false,-1, 31,0);
    tracep->declBus(c+1105,"res", false,-1, 31,0);
    tracep->declBus(c+836,"csr", false,-1, 31,0);
    tracep->declBus(c+837,"w_csrs", false,-1, 31,0);
    tracep->declBus(c+496,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+837,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+838,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+837,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+364,"offset", false,-1, 31,0);
    tracep->declBit(c+839,"jalen", false,-1);
    tracep->declBit(c+840,"jalren", false,-1);
    tracep->declBit(c+497,"beqen", false,-1);
    tracep->declBit(c+498,"bneen", false,-1);
    tracep->declBit(c+499,"blten", false,-1);
    tracep->declBit(c+500,"bgeen", false,-1);
    tracep->declBit(c+501,"bltuen", false,-1);
    tracep->declBit(c+502,"bgeuen", false,-1);
    tracep->declBit(c+841,"ecall_en", false,-1);
    tracep->declBit(c+503,"mret_en", false,-1);
    tracep->declBit(c+842,"gpr_wen", false,-1);
    tracep->declBit(c+843,"mepc_wen", false,-1);
    tracep->declBit(c+844,"mstatus_wen", false,-1);
    tracep->declBit(c+845,"mcause_wen", false,-1);
    tracep->declBit(c+846,"mtvec_wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+810,"inst", false,-1, 31,0);
    tracep->declBit(c+811,"IFU_VALID", false,-1);
    tracep->declBit(c+812,"IDU_READY", false,-1);
    tracep->declBit(c+816,"IDU_VALID", false,-1);
    tracep->declBit(c+817,"EXU_READY", false,-1);
    tracep->declBus(c+818,"op_reg", false,-1, 6,0);
    tracep->declBus(c+361,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+819,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+362,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+363,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+364,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+365,"funct7_reg", false,-1, 6,0);
    tracep->declBus(c+366,"shamt_reg", false,-1, 4,0);
    tracep->declBus(c+847,"op", false,-1, 6,0);
    tracep->declBus(c+848,"rd", false,-1, 4,0);
    tracep->declBus(c+849,"funct3", false,-1, 2,0);
    tracep->declBus(c+850,"rs1", false,-1, 4,0);
    tracep->declBus(c+851,"rs2", false,-1, 4,0);
    tracep->declBus(c+852,"immI", false,-1, 31,0);
    tracep->declBus(c+853,"immU", false,-1, 31,0);
    tracep->declBus(c+854,"immS", false,-1, 31,0);
    tracep->declBus(c+855,"immB", false,-1, 31,0);
    tracep->declBus(c+856,"immJ", false,-1, 31,0);
    tracep->declBus(c+857,"imm", false,-1, 31,0);
    tracep->declBus(c+858,"funct7", false,-1, 6,0);
    tracep->declBus(c+859,"shamt", false,-1, 4,0);
    tracep->declBit(c+812,"idu_ready", false,-1);
    tracep->declBit(c+816,"idu_valid", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1362,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+860,"state", false,-1);
    tracep->declBit(c+15,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+351,"pc", false,-1, 31,0);
    tracep->declBus(c+810,"inst", false,-1, 31,0);
    tracep->declBit(c+352,"PCU_VALID", false,-1);
    tracep->declBit(c+353,"IFU_READY", false,-1);
    tracep->declBit(c+811,"IFU_VALID", false,-1);
    tracep->declBit(c+812,"IDU_READY", false,-1);
    tracep->declBit(c+393,"wbu_done", false,-1);
    tracep->declBit(c+868,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+1264,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1280,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1338,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1325,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1326,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1327,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+869,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+1264,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+1338,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1280,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1339,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+1264,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1241,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+813,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1239,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+870,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+359,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+356,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+354,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+355,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+357,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+358,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+360,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1102,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+814,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1238,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1240,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+815,"M_AXI_RLAST", false,-1);
    tracep->declBit(c+353,"ifu_ready", false,-1);
    tracep->declBit(c+811,"ifu_valid", false,-1);
    tracep->declBus(c+1327,"IDLE_IFU", false,-1, 1,0);
    tracep->declBus(c+1358,"WAIT_SRAM", false,-1, 1,0);
    tracep->declBus(c+1359,"WAIT_IDU_READY", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE_IFU", false,-1, 1,0);
    tracep->declBus(c+861,"current_state", false,-1, 1,0);
    tracep->declBus(c+16,"next_state", false,-1, 1,0);
    tracep->declBit(c+359,"axi_arvalid", false,-1);
    tracep->declBit(c+360,"axi_rready", false,-1);
    tracep->declBus(c+356,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+354,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+355,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+357,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+358,"axi_arburst", false,-1, 1,0);
    tracep->declBus(c+1327,"SRAM_IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"SRAM_FETCH", false,-1, 1,0);
    tracep->declBus(c+1359,"SRAM_DONE", false,-1, 1,0);
    tracep->declBus(c+1360,"SRAM_NULL", false,-1, 1,0);
    tracep->declBus(c+407,"state", false,-1, 1,0);
    tracep->declBit(c+408,"sram_start", false,-1);
    tracep->declBit(c+409,"sram_ifu_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+820,"sram_lsu_read", false,-1);
    tracep->declBit(c+821,"sram_lsu_write", false,-1);
    tracep->declBit(c+1242,"LSU_DONE", false,-1);
    tracep->declBus(c+1243,"ls_rdata", false,-1, 31,0);
    tracep->declBit(c+822,"valid", false,-1);
    tracep->declBit(c+823,"wen", false,-1);
    tracep->declBus(c+824,"waddr", false,-1, 31,0);
    tracep->declBus(c+825,"wdata", false,-1, 31,0);
    tracep->declBus(c+826,"raddr", false,-1, 31,0);
    tracep->declBus(c+827,"wmask", false,-1, 3,0);
    tracep->declBit(c+871,"M_AXI_AWREADY", false,-1);
    tracep->declBit(c+795,"M_AXI_AWVALID", false,-1);
    tracep->declBus(c+1342,"M_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+791,"M_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1340,"M_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1344,"M_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1346,"M_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+872,"M_AXI_WREADY", false,-1);
    tracep->declBit(c+796,"M_AXI_WVALID", false,-1);
    tracep->declBus(c+792,"M_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+794,"M_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1348,"M_AXI_WLAST", false,-1);
    tracep->declBit(c+797,"M_AXI_BREADY", false,-1);
    tracep->declBit(c+1103,"M_AXI_BVALID", false,-1);
    tracep->declBus(c+828,"M_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1244,"M_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+873,"M_AXI_ARREADY", false,-1);
    tracep->declBit(c+798,"M_AXI_ARVALID", false,-1);
    tracep->declBus(c+1343,"M_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+793,"M_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1341,"M_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1345,"M_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1347,"M_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+799,"M_AXI_RREADY", false,-1);
    tracep->declBit(c+1104,"M_AXI_RVALID", false,-1);
    tracep->declBus(c+829,"M_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1243,"M_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1245,"M_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+830,"M_AXI_RLAST", false,-1);
    tracep->declBus(c+1327,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"READ", false,-1, 1,0);
    tracep->declBus(c+1359,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1360,"DONE", false,-1, 1,0);
    tracep->declBus(c+800,"state", false,-1, 1,0);
    tracep->declBit(c+795,"axi_awvalid", false,-1);
    tracep->declBit(c+796,"axi_wvalid", false,-1);
    tracep->declBus(c+1342,"axi_awid", false,-1, 3,0);
    tracep->declBus(c+791,"axi_awaddr", false,-1, 31,0);
    tracep->declBus(c+792,"axi_wdata", false,-1, 31,0);
    tracep->declBus(c+1340,"axi_awlen", false,-1, 7,0);
    tracep->declBus(c+1344,"axi_awsize", false,-1, 2,0);
    tracep->declBus(c+1346,"axi_awburst", false,-1, 1,0);
    tracep->declBus(c+794,"axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+797,"axi_bready", false,-1);
    tracep->declBit(c+798,"axi_arvalid", false,-1);
    tracep->declBit(c+799,"axi_rready", false,-1);
    tracep->declBus(c+1343,"axi_arid", false,-1, 3,0);
    tracep->declBus(c+793,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1341,"axi_arlen", false,-1, 7,0);
    tracep->declBus(c+1345,"axi_arsize", false,-1, 2,0);
    tracep->declBus(c+1347,"axi_arburst", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+351,"pc", false,-1, 31,0);
    tracep->declBus(c+809,"dnpc", false,-1, 31,0);
    tracep->declBit(c+352,"PCU_VALID", false,-1);
    tracep->declBit(c+353,"IFU_READY", false,-1);
    tracep->declBit(c+352,"pcu_valid", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1362,"WAIT_READY", false,-1, 0,0);
    tracep->declBit(c+410,"state", false,-1);
    tracep->declBit(c+17,"next_state", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RFU ");
    tracep->declBus(c+1363,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1268,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBus(c+395,"wdata", false,-1, 31,0);
    tracep->declBus(c+396,"waddr", false,-1, 4,0);
    tracep->declBit(c+397,"wen", false,-1);
    tracep->declBus(c+362,"raddr1", false,-1, 4,0);
    tracep->declBus(c+406,"r1", false,-1, 31,0);
    tracep->declBus(c+363,"raddr2", false,-1, 4,0);
    tracep->declBus(c+832,"r2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+411+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+367,"EXU_VALID", false,-1);
    tracep->declBit(c+368,"WBU_READY", false,-1);
    tracep->declBit(c+393,"wbu_done", false,-1);
    tracep->declBit(c+394,"difftest", false,-1);
    tracep->declBus(c+395,"xrd_reg", false,-1, 31,0);
    tracep->declBus(c+369,"res", false,-1, 31,0);
    tracep->declBus(c+396,"rd_reg", false,-1, 4,0);
    tracep->declBus(c+361,"rd", false,-1, 4,0);
    tracep->declBit(c+397,"wen_reg", false,-1);
    tracep->declBit(c+378,"gpr_wen", false,-1);
    tracep->declBus(c+371,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+373,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+375,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+377,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+398,"w_mepc_reg", false,-1, 31,0);
    tracep->declBus(c+399,"w_mstatus_reg", false,-1, 31,0);
    tracep->declBus(c+400,"w_mcause_reg", false,-1, 31,0);
    tracep->declBus(c+401,"w_mtvec_reg", false,-1, 31,0);
    tracep->declBit(c+379,"mepc_wen", false,-1);
    tracep->declBit(c+380,"mstatus_wen", false,-1);
    tracep->declBit(c+381,"mcause_wen", false,-1);
    tracep->declBit(c+382,"mtvec_wen", false,-1);
    tracep->declBit(c+402,"mepc_wen_reg", false,-1);
    tracep->declBit(c+403,"mstatus_wen_reg", false,-1);
    tracep->declBit(c+404,"mcause_wen_reg", false,-1);
    tracep->declBit(c+405,"mtvec_wen_reg", false,-1);
    tracep->declBus(c+369,"xrd", false,-1, 31,0);
    tracep->declBus(c+361,"o_rf_raddr", false,-1, 4,0);
    tracep->declBit(c+378,"o_rf_wen", false,-1);
    tracep->declBus(c+371,"w_mepc", false,-1, 31,0);
    tracep->declBus(c+373,"w_mstatus", false,-1, 31,0);
    tracep->declBus(c+375,"w_mcause", false,-1, 31,0);
    tracep->declBus(c+377,"w_mtvec", false,-1, 31,0);
    tracep->declBit(c+368,"wbu_ready", false,-1);
    tracep->declBus(c+1327,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1359,"DIFF", false,-1, 1,0);
    tracep->declBus(c+1360,"NULL", false,-1, 1,0);
    tracep->declBus(c+443,"state", false,-1, 1,0);
    tracep->declBus(c+18,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Xbar_ysyx_24110017 ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+868,"IFU_AXI_AWREADY", false,-1);
    tracep->declBit(c+1264,"IFU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1280,"IFU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1338,"IFU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1325,"IFU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1326,"IFU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1327,"IFU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+869,"IFU_AXI_WREADY", false,-1);
    tracep->declBit(c+1264,"IFU_AXI_WVALID", false,-1);
    tracep->declBus(c+1338,"IFU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+1280,"IFU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1339,"IFU_AXI_WLAST", false,-1);
    tracep->declBit(c+1264,"IFU_AXI_BREADY", false,-1);
    tracep->declBit(c+1241,"IFU_AXI_BVALID", false,-1);
    tracep->declBus(c+813,"IFU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1239,"IFU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+870,"IFU_AXI_ARREADY", false,-1);
    tracep->declBit(c+359,"IFU_AXI_ARVALID", false,-1);
    tracep->declBus(c+356,"IFU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+354,"IFU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+355,"IFU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+357,"IFU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+358,"IFU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+360,"IFU_AXI_RREADY", false,-1);
    tracep->declBit(c+1102,"IFU_AXI_RVALID", false,-1);
    tracep->declBus(c+814,"IFU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1238,"IFU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1240,"IFU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+815,"IFU_AXI_RLAST", false,-1);
    tracep->declBit(c+871,"LSU_AXI_AWREADY", false,-1);
    tracep->declBit(c+795,"LSU_AXI_AWVALID", false,-1);
    tracep->declBus(c+1342,"LSU_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+791,"LSU_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1340,"LSU_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1344,"LSU_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1346,"LSU_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+872,"LSU_AXI_WREADY", false,-1);
    tracep->declBit(c+796,"LSU_AXI_WVALID", false,-1);
    tracep->declBus(c+792,"LSU_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+794,"LSU_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1348,"LSU_AXI_WLAST", false,-1);
    tracep->declBit(c+797,"LSU_AXI_BREADY", false,-1);
    tracep->declBit(c+1103,"LSU_AXI_BVALID", false,-1);
    tracep->declBus(c+828,"LSU_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+1244,"LSU_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+873,"LSU_AXI_ARREADY", false,-1);
    tracep->declBit(c+798,"LSU_AXI_ARVALID", false,-1);
    tracep->declBus(c+1343,"LSU_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+793,"LSU_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1341,"LSU_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1345,"LSU_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1347,"LSU_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+799,"LSU_AXI_RREADY", false,-1);
    tracep->declBit(c+1104,"LSU_AXI_RVALID", false,-1);
    tracep->declBus(c+829,"LSU_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+1243,"LSU_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+1245,"LSU_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+830,"LSU_AXI_RLAST", false,-1);
    tracep->declBit(c+107,"io_master_awready", false,-1);
    tracep->declBit(c+911,"io_master_awvalid", false,-1);
    tracep->declBus(c+1313,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+912,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1314,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+807,"io_master_wready", false,-1);
    tracep->declBit(c+913,"io_master_wvalid", false,-1);
    tracep->declBus(c+914,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1317,"io_master_wlast", false,-1);
    tracep->declBit(c+916,"io_master_bready", false,-1);
    tracep->declBit(c+1018,"io_master_bvalid", false,-1);
    tracep->declBus(c+1019,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+515,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"io_master_arready", false,-1);
    tracep->declBit(c+917,"io_master_arvalid", false,-1);
    tracep->declBus(c+1318,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+918,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1319,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1320,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1321,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+919,"io_master_rready", false,-1);
    tracep->declBit(c+1020,"io_master_rvalid", false,-1);
    tracep->declBus(c+1021,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+516,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1235,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+517,"io_master_rlast", false,-1);
    tracep->declBit(c+388,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+962,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1351,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+958,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1349,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1353,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1355,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+831,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+963,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+959,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+961,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1357,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+964,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+389,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+384,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+386,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+390,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+965,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1352,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+960,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1350,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1354,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1356,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+966,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+391,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+385,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+383,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+387,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+392,"C_AXI_RLAST", false,-1);
    tracep->declBus(c+967,"X_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+968,"X_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+969,"X_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1106,"X_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+970,"X_AXI_WSTRB", false,-1, 3,0);
    tracep->declBus(c+862,"X_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+504,"X_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+863,"X_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+1364,"X_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+505,"X_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+1365,"X_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+864,"X_AXI_AWSIZE", false,-1, 3,0);
    tracep->declBus(c+506,"X_AXI_ARSIZE", false,-1, 3,0);
    tracep->declBus(c+865,"X_AXI_AWBURST", false,-1, 2,0);
    tracep->declBus(c+507,"X_AXI_ARBURST", false,-1, 2,0);
    tracep->declBus(c+1247,"X_AXI_BRESP", false,-1, 1,0);
    tracep->declBus(c+1248,"X_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+971,"X_AXI_AWVALID", false,-1);
    tracep->declBit(c+972,"X_AXI_AWREADY", false,-1);
    tracep->declBit(c+973,"X_AXI_WVALID", false,-1);
    tracep->declBit(c+874,"X_AXI_WREADY", false,-1);
    tracep->declBit(c+1249,"X_AXI_BVALID", false,-1);
    tracep->declBit(c+974,"X_AXI_BREADY", false,-1);
    tracep->declBit(c+975,"X_AXI_ARVALID", false,-1);
    tracep->declBit(c+976,"X_AXI_ARREADY", false,-1);
    tracep->declBit(c+1107,"X_AXI_RVALID", false,-1);
    tracep->declBit(c+977,"X_AXI_RREADY", false,-1);
    tracep->declBit(c+866,"X_AXI_WLAST", false,-1);
    tracep->declBit(c+1366,"X_AXI_RLAST", false,-1);
    tracep->declBus(c+1327,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1358,"GRANT_LSU", false,-1, 1,0);
    tracep->declBus(c+1359,"GRANT_IFU", false,-1, 1,0);
    tracep->declBus(c+1360,"WAIT_CLINT", false,-1, 1,0);
    tracep->declBus(c+867,"state", false,-1, 1,0);
    tracep->declBus(c+19,"next_state", false,-1, 1,0);
    tracep->declBus(c+1367,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1368,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declBit(c+978,"sel_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mcause_ysyx_24110017 ");
    tracep->declBus(c+1268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1324,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+400,"din", false,-1, 31,0);
    tracep->declBus(c+374,"dout", false,-1, 31,0);
    tracep->declBit(c+404,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepc_ysyx_24110017 ");
    tracep->declBus(c+1268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1324,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+398,"din", false,-1, 31,0);
    tracep->declBus(c+370,"dout", false,-1, 31,0);
    tracep->declBit(c+402,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatus_ysyx_24110017 ");
    tracep->declBus(c+1268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1369,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+399,"din", false,-1, 31,0);
    tracep->declBus(c+372,"dout", false,-1, 31,0);
    tracep->declBit(c+403,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvec_ysyx_24110017 ");
    tracep->declBus(c+1268,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1324,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 31,0);
    tracep->declBus(c+376,"dout", false,-1, 31,0);
    tracep->declBit(c+405,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24110017_CLINT ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+388,"C_AXI_AWREADY", false,-1);
    tracep->declBit(c+962,"C_AXI_AWVALID", false,-1);
    tracep->declBus(c+1351,"C_AXI_AWID", false,-1, 3,0);
    tracep->declBus(c+958,"C_AXI_AWADDR", false,-1, 31,0);
    tracep->declBus(c+1349,"C_AXI_AWLEN", false,-1, 7,0);
    tracep->declBus(c+1353,"C_AXI_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+1355,"C_AXI_AWBURST", false,-1, 1,0);
    tracep->declBit(c+831,"C_AXI_WREADY", false,-1);
    tracep->declBit(c+963,"C_AXI_WVALID", false,-1);
    tracep->declBus(c+959,"C_AXI_WDATA", false,-1, 31,0);
    tracep->declBus(c+961,"C_AXI_WSTRB", false,-1, 3,0);
    tracep->declBit(c+1357,"C_AXI_WLAST", false,-1);
    tracep->declBit(c+964,"C_AXI_BREADY", false,-1);
    tracep->declBit(c+389,"C_AXI_BVALID", false,-1);
    tracep->declBus(c+384,"C_AXI_BID", false,-1, 3,0);
    tracep->declBus(c+386,"C_AXI_BRESP", false,-1, 1,0);
    tracep->declBit(c+390,"C_AXI_ARREADY", false,-1);
    tracep->declBit(c+965,"C_AXI_ARVALID", false,-1);
    tracep->declBus(c+1352,"C_AXI_ARID", false,-1, 3,0);
    tracep->declBus(c+960,"C_AXI_ARADDR", false,-1, 31,0);
    tracep->declBus(c+1350,"C_AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1354,"C_AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1356,"C_AXI_ARBURST", false,-1, 1,0);
    tracep->declBit(c+966,"C_AXI_RREADY", false,-1);
    tracep->declBit(c+391,"C_AXI_RVALID", false,-1);
    tracep->declBus(c+385,"C_AXI_RID", false,-1, 3,0);
    tracep->declBus(c+383,"C_AXI_RDATA", false,-1, 31,0);
    tracep->declBus(c+387,"C_AXI_RRESP", false,-1, 1,0);
    tracep->declBit(c+392,"C_AXI_RLAST", false,-1);
    tracep->declBit(c+388,"axi_awready", false,-1);
    tracep->declBit(c+831,"axi_wready", false,-1);
    tracep->declBit(c+389,"axi_bvalid", false,-1);
    tracep->declBit(c+390,"axi_arready", false,-1);
    tracep->declBit(c+391,"axi_rvalid", false,-1);
    tracep->declBit(c+392,"axi_rlast", false,-1);
    tracep->declBus(c+386,"axi_bresp", false,-1, 1,0);
    tracep->declBus(c+387,"axi_rresp", false,-1, 1,0);
    tracep->declBus(c+384,"axi_bid", false,-1, 3,0);
    tracep->declBus(c+385,"axi_rid", false,-1, 3,0);
    tracep->declBus(c+383,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+444,"axi_araddr", false,-1, 31,0);
    tracep->declBus(c+1367,"DEVICE_CLINT_LOW_ADDR", false,-1, 31,0);
    tracep->declBus(c+1368,"DEVICE_CLINT_HIGH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+445,"mtime", false,-1, 63,0);
    tracep->declBus(c+513,"c_rdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"io_d", false,-1);
    tracep->declBit(c+447,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"io_d", false,-1);
    tracep->declBit(c+447,"io_q", false,-1);
    tracep->declBit(c+447,"sync_0", false,-1);
    tracep->declBit(c+448,"sync_1", false,-1);
    tracep->declBit(c+449,"sync_2", false,-1);
    tracep->declBit(c+450,"sync_3", false,-1);
    tracep->declBit(c+451,"sync_4", false,-1);
    tracep->declBit(c+452,"sync_5", false,-1);
    tracep->declBit(c+453,"sync_6", false,-1);
    tracep->declBit(c+454,"sync_7", false,-1);
    tracep->declBit(c+455,"sync_8", false,-1);
    tracep->declBit(c+456,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+886,"auto_in_psel", false,-1);
    tracep->declBit(c+511,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+885,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"auto_in_pready", false,-1);
    tracep->declBit(c+1311,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1312,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1287,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1289,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1296,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+886,"in_psel", false,-1);
    tracep->declBit(c+511,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1310,"in_pready", false,-1);
    tracep->declBus(c+1312,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1311,"in_pslverr", false,-1);
    tracep->declBus(c+1287,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1288,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1289,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1290,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1291,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1292,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1293,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1294,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1295,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1296,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+884,"auto_in_psel", false,-1);
    tracep->declBit(c+510,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+885,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1307,"auto_in_pready", false,-1);
    tracep->declBit(c+1308,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1309,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1264,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1264,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+884,"in_psel", false,-1);
    tracep->declBit(c+510,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1307,"in_pready", false,-1);
    tracep->declBus(c+1309,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1308,"in_pslverr", false,-1);
    tracep->declBit(c+1264,"ps2_clk", false,-1);
    tracep->declBit(c+1264,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+942,"auto_in_awvalid", false,-1);
    tracep->declBit(c+943,"auto_in_wvalid", false,-1);
    tracep->declBit(c+165,"auto_in_arready", false,-1);
    tracep->declBit(c+944,"auto_in_arvalid", false,-1);
    tracep->declBus(c+96,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+945,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1237,"auto_in_rready", false,-1);
    tracep->declBit(c+166,"auto_in_rvalid", false,-1);
    tracep->declBus(c+167,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+166,"state", false,-1);
    tracep->declBus(c+168,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+167,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+980,"raddr", false,-1, 31,0);
    tracep->declBit(c+981,"ren", false,-1);
    tracep->declBus(c+982,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+887,"auto_in_psel", false,-1);
    tracep->declBit(c+512,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+875,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1233,"auto_in_pready", false,-1);
    tracep->declBit(c+1264,"auto_in_pslverr", false,-1);
    tracep->declBus(c+92,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1230,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1231,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1011,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+875,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+887,"in_psel", false,-1);
    tracep->declBit(c+512,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1233,"in_pready", false,-1);
    tracep->declBus(c+92,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1264,"in_pslverr", false,-1);
    tracep->declBit(c+1230,"qspi_sck", false,-1);
    tracep->declBit(c+1231,"qspi_ce_n", false,-1);
    tracep->declBus(c+1011,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1011,"din", false,-1, 3,0);
    tracep->declBus(c+1108,"dout", false,-1, 3,0);
    tracep->declBus(c+1109,"douten", false,-1, 3,0);
    tracep->declBit(c+1250,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBus(c+875,"adr_i", false,-1, 31,0);
    tracep->declBus(c+878,"dat_i", false,-1, 31,0);
    tracep->declBus(c+92,"dat_o", false,-1, 31,0);
    tracep->declBus(c+879,"sel_i", false,-1, 3,0);
    tracep->declBit(c+887,"cyc_i", false,-1);
    tracep->declBit(c+887,"stb_i", false,-1);
    tracep->declBit(c+1250,"ack_o", false,-1);
    tracep->declBit(c+877,"we_i", false,-1);
    tracep->declBit(c+1230,"sck", false,-1);
    tracep->declBit(c+1231,"ce_n", false,-1);
    tracep->declBus(c+1011,"din", false,-1, 3,0);
    tracep->declBus(c+1108,"dout", false,-1, 3,0);
    tracep->declBus(c+1109,"douten", false,-1, 3,0);
    tracep->declBus(c+1361,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1362,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+567,"mr_sck", false,-1);
    tracep->declBit(c+568,"mr_ce_n", false,-1);
    tracep->declBus(c+1011,"mr_din", false,-1, 3,0);
    tracep->declBus(c+569,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+570,"mr_doe", false,-1);
    tracep->declBit(c+571,"mw_sck", false,-1);
    tracep->declBit(c+572,"mw_ce_n", false,-1);
    tracep->declBus(c+1011,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1110,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+573,"mw_doe", false,-1);
    tracep->declBit(c+1111,"mr_rd", false,-1);
    tracep->declBit(c+574,"mr_done", false,-1);
    tracep->declBit(c+1112,"mw_wr", false,-1);
    tracep->declBit(c+1113,"mw_done", false,-1);
    tracep->declBit(c+887,"wb_valid", false,-1);
    tracep->declBit(c+983,"wb_we", false,-1);
    tracep->declBit(c+984,"wb_re", false,-1);
    tracep->declBit(c+575,"state", false,-1);
    tracep->declBit(c+1114,"nstate", false,-1);
    tracep->declBus(c+985,"size", false,-1, 2,0);
    tracep->declBus(c+986,"byte0", false,-1, 7,0);
    tracep->declBus(c+987,"byte1", false,-1, 7,0);
    tracep->declBus(c+988,"byte2", false,-1, 7,0);
    tracep->declBus(c+989,"byte3", false,-1, 7,0);
    tracep->declBus(c+990,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1251,"rst_n", false,-1);
    tracep->declBus(c+991,"addr", false,-1, 23,0);
    tracep->declBit(c+1111,"rd", false,-1);
    tracep->declBus(c+1370,"size", false,-1, 2,0);
    tracep->declBit(c+574,"done", false,-1);
    tracep->declBus(c+92,"line", false,-1, 31,0);
    tracep->declBit(c+567,"sck", false,-1);
    tracep->declBit(c+568,"ce_n", false,-1);
    tracep->declBus(c+1011,"din", false,-1, 3,0);
    tracep->declBus(c+569,"dout", false,-1, 3,0);
    tracep->declBit(c+570,"douten", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1362,"READ", false,-1, 0,0);
    tracep->declBus(c+1371,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+576,"state", false,-1);
    tracep->declBit(c+1115,"nstate", false,-1);
    tracep->declBus(c+577,"counter", false,-1, 7,0);
    tracep->declBus(c+578,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+457+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1372,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+579,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1251,"rst_n", false,-1);
    tracep->declBus(c+992,"addr", false,-1, 23,0);
    tracep->declBus(c+990,"line", false,-1, 31,0);
    tracep->declBus(c+985,"size", false,-1, 2,0);
    tracep->declBit(c+1112,"wr", false,-1);
    tracep->declBit(c+1113,"done", false,-1);
    tracep->declBit(c+571,"sck", false,-1);
    tracep->declBit(c+572,"ce_n", false,-1);
    tracep->declBus(c+1011,"din", false,-1, 3,0);
    tracep->declBus(c+1110,"dout", false,-1, 3,0);
    tracep->declBit(c+573,"douten", false,-1);
    tracep->declBus(c+1361,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1362,"WRITE", false,-1, 0,0);
    tracep->declBus(c+993,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+580,"state", false,-1);
    tracep->declBit(c+1116,"nstate", false,-1);
    tracep->declBus(c+581,"counter", false,-1, 7,0);
    tracep->declBus(c+582,"saddr", false,-1, 23,0);
    tracep->declBus(c+1373,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+881,"auto_in_psel", false,-1);
    tracep->declBit(c+508,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+875,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"auto_in_pready", false,-1);
    tracep->declBit(c+1264,"auto_in_pslverr", false,-1);
    tracep->declBus(c+564,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1232,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+554,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+555,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+556,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+557,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+558,"sdram_bundle_we", false,-1);
    tracep->declBus(c+559,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+560,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+561,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+875,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+881,"in_psel", false,-1);
    tracep->declBit(c+508,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+563,"in_pready", false,-1);
    tracep->declBus(c+564,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1264,"in_pslverr", false,-1);
    tracep->declBit(c+1232,"sdram_clk", false,-1);
    tracep->declBit(c+554,"sdram_cke", false,-1);
    tracep->declBit(c+555,"sdram_cs", false,-1);
    tracep->declBit(c+556,"sdram_ras", false,-1);
    tracep->declBit(c+557,"sdram_cas", false,-1);
    tracep->declBit(c+558,"sdram_we", false,-1);
    tracep->declBus(c+559,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+560,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+561,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+583,"sdram_dout_en", false,-1);
    tracep->declBus(c+584,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+461,"state", false,-1, 1,0);
    tracep->declBit(c+585,"req_accept", false,-1);
    tracep->declBit(c+994,"is_read", false,-1);
    tracep->declBit(c+995,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBus(c+996,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+994,"inport_rd_i", false,-1);
    tracep->declBus(c+1325,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+875,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+878,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+562,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+585,"inport_accept_o", false,-1);
    tracep->declBit(c+563,"inport_ack_o", false,-1);
    tracep->declBit(c+1264,"inport_error_o", false,-1);
    tracep->declBus(c+564,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1232,"sdram_clk_o", false,-1);
    tracep->declBit(c+554,"sdram_cke_o", false,-1);
    tracep->declBit(c+555,"sdram_cs_o", false,-1);
    tracep->declBit(c+556,"sdram_ras_o", false,-1);
    tracep->declBit(c+557,"sdram_cas_o", false,-1);
    tracep->declBit(c+558,"sdram_we_o", false,-1);
    tracep->declBus(c+561,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+559,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+560,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+584,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+583,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1260,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1261,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1262,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1266,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1269,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1270,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1271,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1272,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1266,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1273,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1274,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1275,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1276,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1277,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1278,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1279,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1280,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1281,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1266,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1280,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1279,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1278,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1274,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1276,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1275,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1277,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1273,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1282,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1283,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1284,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1284,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1285,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1284,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1265,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+875,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+996,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+994,"ram_rd_w", false,-1);
    tracep->declBit(c+585,"ram_accept_w", false,-1);
    tracep->declBus(c+878,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+564,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+563,"ram_ack_w", false,-1);
    tracep->declBit(c+997,"ram_req_w", false,-1);
    tracep->declBus(c+586,"command_q", false,-1, 3,0);
    tracep->declBus(c+559,"addr_q", false,-1, 12,0);
    tracep->declBus(c+584,"data_q", false,-1, 15,0);
    tracep->declBit(c+587,"data_rd_en_q", false,-1);
    tracep->declBus(c+561,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+554,"cke_q", false,-1);
    tracep->declBus(c+560,"bank_q", false,-1, 1,0);
    tracep->declBus(c+588,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+589,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+562,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+590,"refresh_q", false,-1);
    tracep->declBus(c+591,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+592+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+596,"state_q", false,-1, 3,0);
    tracep->declBus(c+1117,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1118,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+597,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+598,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+998,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+999,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1000,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1266,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+599,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1119,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1286,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+600,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+601,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+602,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+603,"idx", false,-1, 31,0);
    tracep->declBus(c+604,"rd_q", false,-1, 3,0);
    tracep->declBit(c+563,"ack_q", false,-1);
    tracep->declArray(c+605,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+891,"auto_in_psel", false,-1);
    tracep->declBit(c+892,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"auto_in_pready", false,-1);
    tracep->declBit(c+1264,"auto_in_pslverr", false,-1);
    tracep->declBus(c+566,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+552,"spi_bundle_sck", false,-1);
    tracep->declBus(c+553,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1228,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1229,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1374,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1375,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1376,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1001,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+891,"in_psel", false,-1);
    tracep->declBit(c+892,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+565,"in_pready", false,-1);
    tracep->declBus(c+566,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1264,"in_pslverr", false,-1);
    tracep->declBit(c+552,"spi_sck", false,-1);
    tracep->declBus(c+553,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1228,"spi_mosi", false,-1);
    tracep->declBit(c+1229,"spi_miso", false,-1);
    tracep->declBit(c+608,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1377,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"wb_clk_i", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+1002,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+878,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+566,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+879,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+877,"wb_we_i", false,-1);
    tracep->declBit(c+891,"wb_stb_i", false,-1);
    tracep->declBit(c+892,"wb_cyc_i", false,-1);
    tracep->declBit(c+565,"wb_ack_o", false,-1);
    tracep->declBit(c+1264,"wb_err_o", false,-1);
    tracep->declBit(c+608,"wb_int_o", false,-1);
    tracep->declBus(c+553,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+552,"sclk_pad_o", false,-1);
    tracep->declBit(c+1228,"mosi_pad_o", false,-1);
    tracep->declBit(c+1229,"miso_pad_i", false,-1);
    tracep->declBus(c+609,"divider", false,-1, 15,0);
    tracep->declBus(c+610,"ctrl", false,-1, 13,0);
    tracep->declBus(c+611,"ss", false,-1, 7,0);
    tracep->declBus(c+1120,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+612,"rx", false,-1, 127,0);
    tracep->declBit(c+616,"rx_negedge", false,-1);
    tracep->declBit(c+617,"tx_negedge", false,-1);
    tracep->declBus(c+618,"char_len", false,-1, 6,0);
    tracep->declBit(c+619,"go", false,-1);
    tracep->declBit(c+620,"lsb", false,-1);
    tracep->declBit(c+621,"ie", false,-1);
    tracep->declBit(c+622,"ass", false,-1);
    tracep->declBit(c+1003,"spi_divider_sel", false,-1);
    tracep->declBit(c+1004,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1005,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1006,"spi_ss_sel", false,-1);
    tracep->declBit(c+623,"tip", false,-1);
    tracep->declBit(c+624,"pos_edge", false,-1);
    tracep->declBit(c+625,"neg_edge", false,-1);
    tracep->declBit(c+626,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1377,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"clk_in", false,-1);
    tracep->declBit(c+1123,"rst", false,-1);
    tracep->declBit(c+623,"enable", false,-1);
    tracep->declBit(c+619,"go", false,-1);
    tracep->declBit(c+626,"last_clk", false,-1);
    tracep->declBus(c+609,"divider", false,-1, 15,0);
    tracep->declBit(c+552,"clk_out", false,-1);
    tracep->declBit(c+624,"pos_edge", false,-1);
    tracep->declBit(c+625,"neg_edge", false,-1);
    tracep->declBus(c+627,"cnt", false,-1, 15,0);
    tracep->declBit(c+628,"cnt_zero", false,-1);
    tracep->declBit(c+629,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1377,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"rst", false,-1);
    tracep->declBus(c+1007,"latch", false,-1, 3,0);
    tracep->declBus(c+879,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+618,"len", false,-1, 6,0);
    tracep->declBit(c+620,"lsb", false,-1);
    tracep->declBit(c+619,"go", false,-1);
    tracep->declBit(c+624,"pos_edge", false,-1);
    tracep->declBit(c+625,"neg_edge", false,-1);
    tracep->declBit(c+616,"rx_negedge", false,-1);
    tracep->declBit(c+617,"tx_negedge", false,-1);
    tracep->declBit(c+623,"tip", false,-1);
    tracep->declBit(c+626,"last", false,-1);
    tracep->declBus(c+878,"p_in", false,-1, 31,0);
    tracep->declArray(c+612,"p_out", false,-1, 127,0);
    tracep->declBit(c+552,"s_clk", false,-1);
    tracep->declBit(c+1229,"s_in", false,-1);
    tracep->declBit(c+1228,"s_out", false,-1);
    tracep->declBus(c+630,"cnt", false,-1, 7,0);
    tracep->declArray(c+612,"data", false,-1, 127,0);
    tracep->declBus(c+631,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+632,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+633,"rx_clk", false,-1);
    tracep->declBit(c+634,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+888,"auto_in_psel", false,-1);
    tracep->declBit(c+889,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+885,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+890,"auto_in_pready", false,-1);
    tracep->declBit(c+1264,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1234,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1264,"uart_rx", false,-1);
    tracep->declBit(c+551,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+888,"in_psel", false,-1);
    tracep->declBit(c+889,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+890,"in_pready", false,-1);
    tracep->declBit(c+1264,"in_pslverr", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+1234,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1264,"uart_rx", false,-1);
    tracep->declBit(c+551,"uart_tx", false,-1);
    tracep->declBit(c+635,"rtsn", false,-1);
    tracep->declBit(c+1264,"ctsn", false,-1);
    tracep->declBit(c+636,"dtr_pad_o", false,-1);
    tracep->declBit(c+1264,"dsr_pad_i", false,-1);
    tracep->declBit(c+1264,"ri_pad_i", false,-1);
    tracep->declBit(c+1264,"dcd_pad_i", false,-1);
    tracep->declBit(c+637,"interrupt", false,-1);
    tracep->declBit(c+1252,"reg_we", false,-1);
    tracep->declBit(c+1253,"reg_re", false,-1);
    tracep->declBus(c+1008,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1009,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+462,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1121,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+638,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+1008,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1010,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1121,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1252,"wb_we_i", false,-1);
    tracep->declBit(c+1253,"wb_re_i", false,-1);
    tracep->declBit(c+551,"stx_pad_o", false,-1);
    tracep->declBit(c+1264,"srx_pad_i", false,-1);
    tracep->declBus(c+1282,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+638,"rts_pad_o", false,-1);
    tracep->declBit(c+636,"dtr_pad_o", false,-1);
    tracep->declBit(c+637,"int_o", false,-1);
    tracep->declBit(c+639,"enable", false,-1);
    tracep->declBit(c+640,"srx_pad", false,-1);
    tracep->declBus(c+641,"ier", false,-1, 3,0);
    tracep->declBus(c+642,"iir", false,-1, 3,0);
    tracep->declBus(c+643,"fcr", false,-1, 1,0);
    tracep->declBus(c+644,"mcr", false,-1, 4,0);
    tracep->declBus(c+645,"lcr", false,-1, 7,0);
    tracep->declBus(c+646,"msr", false,-1, 7,0);
    tracep->declBus(c+647,"dl", false,-1, 15,0);
    tracep->declBus(c+648,"scratch", false,-1, 7,0);
    tracep->declBit(c+649,"start_dlc", false,-1);
    tracep->declBit(c+650,"lsr_mask_d", false,-1);
    tracep->declBit(c+651,"msi_reset", false,-1);
    tracep->declBus(c+652,"dlc", false,-1, 15,0);
    tracep->declBus(c+653,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+654,"rx_reset", false,-1);
    tracep->declBit(c+655,"tx_reset", false,-1);
    tracep->declBit(c+656,"dlab", false,-1);
    tracep->declBit(c+1322,"cts_pad_i", false,-1);
    tracep->declBit(c+1264,"dsr_pad_i", false,-1);
    tracep->declBit(c+1264,"ri_pad_i", false,-1);
    tracep->declBit(c+1264,"dcd_pad_i", false,-1);
    tracep->declBit(c+657,"loopback", false,-1);
    tracep->declBit(c+1264,"cts", false,-1);
    tracep->declBit(c+1322,"dsr", false,-1);
    tracep->declBit(c+1322,"ri", false,-1);
    tracep->declBit(c+1322,"dcd", false,-1);
    tracep->declBit(c+658,"cts_c", false,-1);
    tracep->declBit(c+659,"dsr_c", false,-1);
    tracep->declBit(c+660,"ri_c", false,-1);
    tracep->declBit(c+661,"dcd_c", false,-1);
    tracep->declBus(c+662,"lsr", false,-1, 7,0);
    tracep->declBit(c+663,"lsr0", false,-1);
    tracep->declBit(c+664,"lsr1", false,-1);
    tracep->declBit(c+665,"lsr2", false,-1);
    tracep->declBit(c+666,"lsr3", false,-1);
    tracep->declBit(c+667,"lsr4", false,-1);
    tracep->declBit(c+668,"lsr5", false,-1);
    tracep->declBit(c+669,"lsr6", false,-1);
    tracep->declBit(c+670,"lsr7", false,-1);
    tracep->declBit(c+671,"lsr0r", false,-1);
    tracep->declBit(c+672,"lsr1r", false,-1);
    tracep->declBit(c+673,"lsr2r", false,-1);
    tracep->declBit(c+674,"lsr3r", false,-1);
    tracep->declBit(c+675,"lsr4r", false,-1);
    tracep->declBit(c+676,"lsr5r", false,-1);
    tracep->declBit(c+677,"lsr6r", false,-1);
    tracep->declBit(c+678,"lsr7r", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBit(c+679,"rls_int", false,-1);
    tracep->declBit(c+680,"rda_int", false,-1);
    tracep->declBit(c+681,"ti_int", false,-1);
    tracep->declBit(c+682,"thre_int", false,-1);
    tracep->declBit(c+683,"ms_int", false,-1);
    tracep->declBit(c+684,"tf_push", false,-1);
    tracep->declBit(c+685,"rf_pop", false,-1);
    tracep->declBus(c+1254,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+686,"rf_error_bit", false,-1);
    tracep->declBit(c+664,"rf_overrun", false,-1);
    tracep->declBit(c+687,"rf_push_pulse", false,-1);
    tracep->declBus(c+688,"rf_count", false,-1, 4,0);
    tracep->declBus(c+689,"tf_count", false,-1, 4,0);
    tracep->declBus(c+690,"tstate", false,-1, 2,0);
    tracep->declBus(c+691,"rstate", false,-1, 3,0);
    tracep->declBus(c+692,"counter_t", false,-1, 9,0);
    tracep->declBit(c+693,"thre_set_en", false,-1);
    tracep->declBus(c+694,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+695,"block_value", false,-1, 7,0);
    tracep->declBit(c+696,"serial_out", false,-1);
    tracep->declBit(c+697,"serial_in", false,-1);
    tracep->declBit(c+21,"lsr_mask_condition", false,-1);
    tracep->declBit(c+22,"iir_read", false,-1);
    tracep->declBit(c+23,"msr_read", false,-1);
    tracep->declBit(c+24,"fifo_read", false,-1);
    tracep->declBit(c+25,"fifo_write", false,-1);
    tracep->declBus(c+698,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+699,"lsr0_d", false,-1);
    tracep->declBit(c+700,"lsr1_d", false,-1);
    tracep->declBit(c+701,"lsr2_d", false,-1);
    tracep->declBit(c+702,"lsr3_d", false,-1);
    tracep->declBit(c+703,"lsr4_d", false,-1);
    tracep->declBit(c+704,"lsr5_d", false,-1);
    tracep->declBit(c+705,"lsr6_d", false,-1);
    tracep->declBit(c+706,"lsr7_d", false,-1);
    tracep->declBit(c+707,"rls_int_d", false,-1);
    tracep->declBit(c+708,"thre_int_d", false,-1);
    tracep->declBit(c+709,"ms_int_d", false,-1);
    tracep->declBit(c+710,"ti_int_d", false,-1);
    tracep->declBit(c+711,"rda_int_d", false,-1);
    tracep->declBit(c+712,"rls_int_rise", false,-1);
    tracep->declBit(c+713,"thre_int_rise", false,-1);
    tracep->declBit(c+714,"ms_int_rise", false,-1);
    tracep->declBit(c+715,"ti_int_rise", false,-1);
    tracep->declBit(c+716,"rda_int_rise", false,-1);
    tracep->declBit(c+717,"rls_int_pnd", false,-1);
    tracep->declBit(c+718,"rda_int_pnd", false,-1);
    tracep->declBit(c+719,"thre_int_pnd", false,-1);
    tracep->declBit(c+720,"ms_int_pnd", false,-1);
    tracep->declBit(c+721,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1377,"Tp", false,-1, 31,0);
    tracep->declBus(c+1377,"width", false,-1, 31,0);
    tracep->declBus(c+1362,"init_value", false,-1, 0,0);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1264,"stage1_rst_i", false,-1);
    tracep->declBit(c+1322,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1264,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+640,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+722,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+645,"lcr", false,-1, 7,0);
    tracep->declBit(c+685,"rf_pop", false,-1);
    tracep->declBit(c+697,"srx_pad_i", false,-1);
    tracep->declBit(c+639,"enable", false,-1);
    tracep->declBit(c+654,"rx_reset", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBus(c+692,"counter_t", false,-1, 9,0);
    tracep->declBus(c+688,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1254,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+664,"rf_overrun", false,-1);
    tracep->declBit(c+686,"rf_error_bit", false,-1);
    tracep->declBus(c+691,"rstate", false,-1, 3,0);
    tracep->declBit(c+687,"rf_push_pulse", false,-1);
    tracep->declBus(c+723,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+724,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+725,"rshift", false,-1, 7,0);
    tracep->declBit(c+726,"rparity", false,-1);
    tracep->declBit(c+727,"rparity_error", false,-1);
    tracep->declBit(c+728,"rframing_error", false,-1);
    tracep->declBit(c+729,"rbit_in", false,-1);
    tracep->declBit(c+730,"rparity_xor", false,-1);
    tracep->declBus(c+731,"counter_b", false,-1, 7,0);
    tracep->declBit(c+732,"rf_push_q", false,-1);
    tracep->declBus(c+733,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+734,"rf_push", false,-1);
    tracep->declBit(c+735,"break_error", false,-1);
    tracep->declBit(c+736,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+737,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+738,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+739,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1280,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1279,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1278,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1274,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1276,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1275,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1277,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1273,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1282,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1283,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1378,"sr_push", false,-1, 3,0);
    tracep->declBus(c+740,"toc_value", false,-1, 9,0);
    tracep->declBus(c+741,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1379,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1285,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1266,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1363,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBit(c+687,"push", false,-1);
    tracep->declBit(c+685,"pop", false,-1);
    tracep->declBus(c+733,"data_in", false,-1, 10,0);
    tracep->declBit(c+654,"fifo_reset", false,-1);
    tracep->declBit(c+20,"reset_status", false,-1);
    tracep->declBus(c+1254,"data_out", false,-1, 10,0);
    tracep->declBit(c+664,"overrun", false,-1);
    tracep->declBus(c+688,"count", false,-1, 4,0);
    tracep->declBit(c+686,"error_bit", false,-1);
    tracep->declBus(c+1255,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+742+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+758,"top", false,-1, 3,0);
    tracep->declBus(c+759,"bottom", false,-1, 3,0);
    tracep->declBus(c+760,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+761,"word0", false,-1, 2,0);
    tracep->declBus(c+762,"word1", false,-1, 2,0);
    tracep->declBus(c+763,"word2", false,-1, 2,0);
    tracep->declBus(c+764,"word3", false,-1, 2,0);
    tracep->declBus(c+765,"word4", false,-1, 2,0);
    tracep->declBus(c+766,"word5", false,-1, 2,0);
    tracep->declBus(c+767,"word6", false,-1, 2,0);
    tracep->declBus(c+768,"word7", false,-1, 2,0);
    tracep->declBus(c+769,"word8", false,-1, 2,0);
    tracep->declBus(c+770,"word9", false,-1, 2,0);
    tracep->declBus(c+771,"word10", false,-1, 2,0);
    tracep->declBus(c+772,"word11", false,-1, 2,0);
    tracep->declBus(c+773,"word12", false,-1, 2,0);
    tracep->declBus(c+774,"word13", false,-1, 2,0);
    tracep->declBus(c+775,"word14", false,-1, 2,0);
    tracep->declBus(c+776,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1266,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1376,"data_width", false,-1, 31,0);
    tracep->declBus(c+1285,"depth", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+687,"we", false,-1);
    tracep->declBus(c+758,"a", false,-1, 3,0);
    tracep->declBus(c+759,"dpra", false,-1, 3,0);
    tracep->declBus(c+777,"di", false,-1, 7,0);
    tracep->declBus(c+1255,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+463+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+645,"lcr", false,-1, 7,0);
    tracep->declBit(c+684,"tf_push", false,-1);
    tracep->declBus(c+1010,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+639,"enable", false,-1);
    tracep->declBit(c+655,"tx_reset", false,-1);
    tracep->declBit(c+20,"lsr_mask", false,-1);
    tracep->declBit(c+696,"stx_pad_o", false,-1);
    tracep->declBus(c+690,"tstate", false,-1, 2,0);
    tracep->declBus(c+689,"tf_count", false,-1, 4,0);
    tracep->declBus(c+778,"counter", false,-1, 4,0);
    tracep->declBus(c+779,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+780,"shift_out", false,-1, 6,0);
    tracep->declBit(c+781,"stx_o_tmp", false,-1);
    tracep->declBit(c+782,"parity_xor", false,-1);
    tracep->declBit(c+783,"tf_pop", false,-1);
    tracep->declBit(c+784,"bit_out", false,-1);
    tracep->declBus(c+1010,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1256,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+785,"tf_overrun", false,-1);
    tracep->declBus(c+1326,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1303,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1380,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1381,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1370,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1382,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1376,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1285,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1266,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1363,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBit(c+684,"push", false,-1);
    tracep->declBit(c+783,"pop", false,-1);
    tracep->declBus(c+1010,"data_in", false,-1, 7,0);
    tracep->declBit(c+655,"fifo_reset", false,-1);
    tracep->declBit(c+20,"reset_status", false,-1);
    tracep->declBus(c+1256,"data_out", false,-1, 7,0);
    tracep->declBit(c+785,"overrun", false,-1);
    tracep->declBus(c+689,"count", false,-1, 4,0);
    tracep->declBus(c+786,"top", false,-1, 3,0);
    tracep->declBus(c+787,"bottom", false,-1, 3,0);
    tracep->declBus(c+788,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1266,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1376,"data_width", false,-1, 31,0);
    tracep->declBus(c+1285,"depth", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+684,"we", false,-1);
    tracep->declBus(c+786,"a", false,-1, 3,0);
    tracep->declBus(c+787,"dpra", false,-1, 3,0);
    tracep->declBus(c+1010,"di", false,-1, 7,0);
    tracep->declBus(c+1256,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+479+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+882,"auto_in_psel", false,-1);
    tracep->declBit(c+509,"auto_in_penable", false,-1);
    tracep->declBit(c+877,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1303,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+878,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"auto_in_pready", false,-1);
    tracep->declBit(c+1305,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1306,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1297,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1298,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1300,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1301,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1302,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1001,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+882,"in_psel", false,-1);
    tracep->declBit(c+509,"in_penable", false,-1);
    tracep->declBus(c+1303,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+877,"in_pwrite", false,-1);
    tracep->declBus(c+878,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1304,"in_pready", false,-1);
    tracep->declBus(c+1306,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1305,"in_pslverr", false,-1);
    tracep->declBus(c+1297,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1298,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1299,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1300,"vga_hsync", false,-1);
    tracep->declBit(c+1301,"vga_vsync", false,-1);
    tracep->declBit(c+1302,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+552,"sck", false,-1);
    tracep->declBit(c+789,"ss", false,-1);
    tracep->declBit(c+1228,"mosi", false,-1);
    tracep->declBit(c+1322,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+552,"sck", false,-1);
    tracep->declBit(c+790,"ss", false,-1);
    tracep->declBit(c+1228,"mosi", false,-1);
    tracep->declBit(c+1229,"miso", false,-1);
    tracep->declBit(c+790,"reset", false,-1);
    tracep->declBus(c+801,"state", false,-1, 2,0);
    tracep->declBus(c+802,"counter", false,-1, 7,0);
    tracep->declBus(c+803,"cmd", false,-1, 7,0);
    tracep->declBus(c+804,"addr", false,-1, 23,0);
    tracep->declBus(c+805,"data", false,-1, 31,0);
    tracep->declBit(c+806,"ren", false,-1);
    tracep->declBus(c+1257,"rdata", false,-1, 31,0);
    tracep->declBus(c+1258,"raddr", false,-1, 31,0);
    tracep->declBus(c+1259,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+552,"clock", false,-1);
    tracep->declBit(c+806,"valid", false,-1);
    tracep->declBus(c+803,"cmd", false,-1, 7,0);
    tracep->declBus(c+1258,"addr", false,-1, 31,0);
    tracep->declBus(c+1257,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1230,"sck", false,-1);
    tracep->declBit(c+1231,"ce_n", false,-1);
    tracep->declBus(c+1011,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1232,"clk", false,-1);
    tracep->declBit(c+554,"cke", false,-1);
    tracep->declBit(c+555,"cs", false,-1);
    tracep->declBit(c+556,"ras", false,-1);
    tracep->declBit(c+557,"cas", false,-1);
    tracep->declBit(c+558,"we", false,-1);
    tracep->declBus(c+559,"a", false,-1, 12,0);
    tracep->declBus(c+560,"ba", false,-1, 1,0);
    tracep->declBus(c+561,"dqm", false,-1, 1,0);
    tracep->declBus(c+562,"dq", false,-1, 15,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+2,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+3,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+4,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+5,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+6,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+7,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+8,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+9,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+10,((0x1feU & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                        >> 1U))),13);
    bufp->fullSData(oldp+11,((0x1fffU & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 0xcU))),13);
    bufp->fullCData(oldp+12,((3U & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+13,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+27,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),16);
    bufp->fullBit(oldp+28,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullIData(oldp+29,((((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+30,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+31,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+32,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+33,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+34,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+35,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+36,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+37,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+38,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+39,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+40,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+41,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+42,((4U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+43,((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+44,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+45,(((~ ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U)) & (0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+46,(((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                            & ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                               >> 5U))));
    bufp->fullBit(oldp+47,((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+48,((((~ (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                             & (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                            | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+49,((1U & ((~ ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                      | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                  | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+50,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+51,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+52,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+53,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+54,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+55,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+56,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+57,((4U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+58,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+59,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+60,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+61,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+62,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+63,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+64,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+65,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullSData(oldp+66,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullBit(oldp+67,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+68,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),2);
    bufp->fullBit(oldp+69,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+70,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullSData(oldp+71,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+72,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+73,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+74,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+75,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+76,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+77,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+78,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+79,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+80,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+81,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+82,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+83,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+84,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+85,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),16);
    bufp->fullIData(oldp+86,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+87,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullWData(oldp+88,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+91,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+92,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+101,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+106,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+107,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+108,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+109,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+110,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+111,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+117,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+119,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+121,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+140,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+145,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+148,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+152,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+155,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hee80daa1__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hee80daa1__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hee80daa1__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hee80daa1__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+156,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+164,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+169,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+170,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_ifu_done));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
    bufp->fullQData(oldp+445,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullIData(oldp+496,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+497,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+498,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   != vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+499,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_LTS_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+500,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((5U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & VL_GTES_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+501,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   < vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+502,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                   >= vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
    bufp->fullBit(oldp+503,(((0x73U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             & ((0x302U == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
    bufp->fullCData(oldp+504,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                    : 0U))),8);
    bufp->fullCData(oldp+505,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                    : 0U))),4);
    bufp->fullCData(oldp+506,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                    : 0U))),4);
    bufp->fullCData(oldp+507,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst)
                                : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                    : 0U))),3);
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+509,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+513,((((- (IData)((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                & ((- (IData)((0xa0000048U 
                                               == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                   & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                               | ((- (IData)((0xa000004cU 
                                              == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                  & (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                             >> 0x20U))))),32);
    bufp->fullIData(oldp+514,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+515,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullIData(oldp+516,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hee80daa1__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hee80daa1__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hee80daa1__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hee80daa1__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+517,((((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+518,((1U & ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+520,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+521,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+522,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+523,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+524,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+525,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+526,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+527,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+528,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+529,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+530,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+531,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+532,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+533,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+534,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+535,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+536,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+537,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+538,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+539,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+540,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+541,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+542,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+543,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+545,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+546,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+547,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+548,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+549,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+550,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+551,((1U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U) | ((~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 6U)) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_sck));
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+555,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+556,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+557,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+558,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+559,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+562,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+564,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+569,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+570,((0xeU > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+574,((0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+579,((3U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+585,(((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+588,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+592,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+593,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+594,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+601,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+602,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+605,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+609,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+610,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+612,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+617,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+618,((0x7fU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+626,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+628,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+629,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+631,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+635,((1U & (~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+636,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+647,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+652,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+658,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+659,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+660,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+661,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+662,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+665,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+666,((1U & (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))));
    bufp->fullBit(oldp+667,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+686,((0U != (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+692,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+693,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+696,(((~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                 >> 6U)) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+712,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+713,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+714,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+715,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+716,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+735,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+736,((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+737,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+738,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+739,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+741,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+760,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+777,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+788,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+789,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+806,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+807,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
    bufp->fullCData(oldp+813,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                : 0U)),4);
    bufp->fullCData(oldp+814,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                : 0U)),4);
    bufp->fullBit(oldp+815,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
    bufp->fullBit(oldp+823,((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullIData(oldp+824,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+825,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : 0U)),32);
    bufp->fullIData(oldp+826,(((3U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+827,((((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                ? 1U : (((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                         ? 3U : (((0x23U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullCData(oldp+828,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                : 0U)),4);
    bufp->fullCData(oldp+829,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                : 0U)),4);
    bufp->fullBit(oldp+830,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
    bufp->fullIData(oldp+838,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
    bufp->fullBit(oldp+839,((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+840,((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
    bufp->fullBit(oldp+842,(((0x37U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                             | ((0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                | ((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   | ((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         | ((0xfU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            | ((0x73U 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))))))))))));
    bufp->fullBit(oldp+843,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                             | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                             | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
    bufp->fullCData(oldp+847,((0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+848,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                            | ((0xfU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                               | ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))))))))
                                ? (0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+849,((7U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+850,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                ? (0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+851,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
                                         ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U)
                                         : ((IData)(
                                                    ((0x73U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                     & (0U 
                                                        == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                                             ? 0xfU
                                             : 0U)))),5);
    bufp->fullIData(oldp+852,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+853,((0xfffff000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+854,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+855,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+856,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+857,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
    bufp->fullCData(oldp+858,((((0x33U == (0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+859,((0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
    bufp->fullCData(oldp+862,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen)
                                : 0U)),8);
    bufp->fullCData(oldp+863,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid)
                                : 0U)),4);
    bufp->fullCData(oldp+864,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize)
                                : 0U)),4);
    bufp->fullCData(oldp+865,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst)
                                : 0U)),3);
    bufp->fullBit(oldp+866,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WLAST)
                              : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST)))));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    bufp->fullBit(oldp+868,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+869,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                 : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+870,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+871,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
    bufp->fullBit(oldp+872,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                 : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullBit(oldp+873,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
    bufp->fullBit(oldp+874,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+881,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+882,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+883,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+884,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+885,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+886,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+910,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+911,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0))));
    bufp->fullIData(oldp+912,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
    bufp->fullBit(oldp+913,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
    bufp->fullIData(oldp+914,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
    bufp->fullCData(oldp+915,((0xfU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
    bufp->fullBit(oldp+916,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
    bufp->fullBit(oldp+917,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
    bufp->fullIData(oldp+918,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
    bufp->fullBit(oldp+919,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+922,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+933,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+936,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+937,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+938,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+939,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+943,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+945,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+950,((0U == ((0x10U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+958,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+959,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+960,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+961,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+962,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+963,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+965,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+966,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   >> 1U))));
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
    bufp->fullIData(oldp+979,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+980,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+988,((0xffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+989,((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+990,(((0xffff0000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+991,((0xfffffcU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+992,((0xffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+993,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+998,((0x1feU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+999,((0x1fffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+1000,((3U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1001,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1002,((0x1fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1004,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1005,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr))))))),4);
    bufp->fullBit(oldp+1006,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1008,((7U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1011,((((((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1018,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+1047,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1048,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1070,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1071,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1072,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1073,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1074,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1075,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1076,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1077,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1079,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1080,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1081,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1082,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1083,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1084,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1085,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1086,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1087,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1088,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1089,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1090,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1091,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1092,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1093,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1094,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1096,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1097,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1098,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1099,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1100,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1101,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCTop__02Eclock));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCTop__02Ereset));
    bufp->fullBit(oldp+1124,(vlSelf->sdram_top_axi__02Eclock));
    bufp->fullBit(oldp+1125,(vlSelf->sdram_top_axi__02Ereset));
    bufp->fullBit(oldp+1126,(vlSelf->sdram_top_axi__02Ein_awready));
    bufp->fullBit(oldp+1127,(vlSelf->sdram_top_axi__02Ein_awvalid));
    bufp->fullIData(oldp+1128,(vlSelf->sdram_top_axi__02Ein_awaddr),32);
    bufp->fullCData(oldp+1129,(vlSelf->sdram_top_axi__02Ein_awid),4);
    bufp->fullCData(oldp+1130,(vlSelf->sdram_top_axi__02Ein_awlen),8);
    bufp->fullCData(oldp+1131,(vlSelf->sdram_top_axi__02Ein_awsize),3);
    bufp->fullCData(oldp+1132,(vlSelf->sdram_top_axi__02Ein_awburst),2);
    bufp->fullBit(oldp+1133,(vlSelf->sdram_top_axi__02Ein_wready));
    bufp->fullBit(oldp+1134,(vlSelf->sdram_top_axi__02Ein_wvalid));
    bufp->fullIData(oldp+1135,(vlSelf->sdram_top_axi__02Ein_wdata),32);
    bufp->fullCData(oldp+1136,(vlSelf->sdram_top_axi__02Ein_wstrb),4);
    bufp->fullBit(oldp+1137,(vlSelf->sdram_top_axi__02Ein_wlast));
    bufp->fullBit(oldp+1138,(vlSelf->sdram_top_axi__02Ein_bready));
    bufp->fullBit(oldp+1139,(vlSelf->sdram_top_axi__02Ein_bvalid));
    bufp->fullCData(oldp+1140,(vlSelf->sdram_top_axi__02Ein_bresp),2);
    bufp->fullCData(oldp+1141,(vlSelf->sdram_top_axi__02Ein_bid),4);
    bufp->fullBit(oldp+1142,(vlSelf->sdram_top_axi__02Ein_arready));
    bufp->fullBit(oldp+1143,(vlSelf->sdram_top_axi__02Ein_arvalid));
    bufp->fullIData(oldp+1144,(vlSelf->sdram_top_axi__02Ein_araddr),32);
    bufp->fullCData(oldp+1145,(vlSelf->sdram_top_axi__02Ein_arid),4);
    bufp->fullCData(oldp+1146,(vlSelf->sdram_top_axi__02Ein_arlen),8);
    bufp->fullCData(oldp+1147,(vlSelf->sdram_top_axi__02Ein_arsize),3);
    bufp->fullCData(oldp+1148,(vlSelf->sdram_top_axi__02Ein_arburst),2);
    bufp->fullBit(oldp+1149,(vlSelf->sdram_top_axi__02Ein_rready));
    bufp->fullBit(oldp+1150,(vlSelf->sdram_top_axi__02Ein_rvalid));
    bufp->fullCData(oldp+1151,(vlSelf->sdram_top_axi__02Ein_rresp),2);
    bufp->fullIData(oldp+1152,(vlSelf->sdram_top_axi__02Ein_rdata),32);
    bufp->fullBit(oldp+1153,(vlSelf->sdram_top_axi__02Ein_rlast));
    bufp->fullCData(oldp+1154,(vlSelf->sdram_top_axi__02Ein_rid),4);
    bufp->fullBit(oldp+1155,(vlSelf->sdram_clk));
    bufp->fullBit(oldp+1156,(vlSelf->sdram_cke));
    bufp->fullBit(oldp+1157,(vlSelf->sdram_cs));
    bufp->fullBit(oldp+1158,(vlSelf->sdram_ras));
    bufp->fullBit(oldp+1159,(vlSelf->sdram_cas));
    bufp->fullBit(oldp+1160,(vlSelf->sdram_we));
    bufp->fullSData(oldp+1161,(vlSelf->sdram_a),13);
    bufp->fullCData(oldp+1162,(vlSelf->sdram_ba),2);
    bufp->fullCData(oldp+1163,(vlSelf->sdram_dqm),2);
    bufp->fullSData(oldp+1164,(vlSelf->sdram_dq),16);
    bufp->fullBit(oldp+1165,(vlSelf->axi4_delayer__02Eclock));
    bufp->fullBit(oldp+1166,(vlSelf->axi4_delayer__02Ereset));
    bufp->fullBit(oldp+1167,(vlSelf->axi4_delayer__02Ein_arready));
    bufp->fullBit(oldp+1168,(vlSelf->axi4_delayer__02Ein_arvalid));
    bufp->fullCData(oldp+1169,(vlSelf->axi4_delayer__02Ein_arid),4);
    bufp->fullIData(oldp+1170,(vlSelf->axi4_delayer__02Ein_araddr),32);
    bufp->fullCData(oldp+1171,(vlSelf->axi4_delayer__02Ein_arlen),8);
    bufp->fullCData(oldp+1172,(vlSelf->axi4_delayer__02Ein_arsize),3);
    bufp->fullCData(oldp+1173,(vlSelf->axi4_delayer__02Ein_arburst),2);
    bufp->fullBit(oldp+1174,(vlSelf->axi4_delayer__02Ein_rready));
    bufp->fullBit(oldp+1175,(vlSelf->axi4_delayer__02Ein_rvalid));
    bufp->fullCData(oldp+1176,(vlSelf->axi4_delayer__02Ein_rid),4);
    bufp->fullIData(oldp+1177,(vlSelf->axi4_delayer__02Ein_rdata),32);
    bufp->fullCData(oldp+1178,(vlSelf->axi4_delayer__02Ein_rresp),2);
    bufp->fullBit(oldp+1179,(vlSelf->axi4_delayer__02Ein_rlast));
    bufp->fullBit(oldp+1180,(vlSelf->axi4_delayer__02Ein_awready));
    bufp->fullBit(oldp+1181,(vlSelf->axi4_delayer__02Ein_awvalid));
    bufp->fullCData(oldp+1182,(vlSelf->axi4_delayer__02Ein_awid),4);
    bufp->fullIData(oldp+1183,(vlSelf->axi4_delayer__02Ein_awaddr),32);
    bufp->fullCData(oldp+1184,(vlSelf->axi4_delayer__02Ein_awlen),8);
    bufp->fullCData(oldp+1185,(vlSelf->axi4_delayer__02Ein_awsize),3);
    bufp->fullCData(oldp+1186,(vlSelf->axi4_delayer__02Ein_awburst),2);
    bufp->fullBit(oldp+1187,(vlSelf->axi4_delayer__02Ein_wready));
    bufp->fullBit(oldp+1188,(vlSelf->axi4_delayer__02Ein_wvalid));
    bufp->fullIData(oldp+1189,(vlSelf->axi4_delayer__02Ein_wdata),32);
    bufp->fullCData(oldp+1190,(vlSelf->axi4_delayer__02Ein_wstrb),4);
    bufp->fullBit(oldp+1191,(vlSelf->axi4_delayer__02Ein_wlast));
    bufp->fullBit(oldp+1192,(vlSelf->axi4_delayer__02Ein_bready));
    bufp->fullBit(oldp+1193,(vlSelf->axi4_delayer__02Ein_bvalid));
    bufp->fullCData(oldp+1194,(vlSelf->axi4_delayer__02Ein_bid),4);
    bufp->fullCData(oldp+1195,(vlSelf->axi4_delayer__02Ein_bresp),2);
    bufp->fullBit(oldp+1196,(vlSelf->out_arready));
    bufp->fullBit(oldp+1197,(vlSelf->out_arvalid));
    bufp->fullCData(oldp+1198,(vlSelf->out_arid),4);
    bufp->fullIData(oldp+1199,(vlSelf->out_araddr),32);
    bufp->fullCData(oldp+1200,(vlSelf->out_arlen),8);
    bufp->fullCData(oldp+1201,(vlSelf->out_arsize),3);
    bufp->fullCData(oldp+1202,(vlSelf->out_arburst),2);
    bufp->fullBit(oldp+1203,(vlSelf->out_rready));
    bufp->fullBit(oldp+1204,(vlSelf->out_rvalid));
    bufp->fullCData(oldp+1205,(vlSelf->out_rid),4);
    bufp->fullIData(oldp+1206,(vlSelf->out_rdata),32);
    bufp->fullCData(oldp+1207,(vlSelf->out_rresp),2);
    bufp->fullBit(oldp+1208,(vlSelf->out_rlast));
    bufp->fullBit(oldp+1209,(vlSelf->out_awready));
    bufp->fullBit(oldp+1210,(vlSelf->out_awvalid));
    bufp->fullCData(oldp+1211,(vlSelf->out_awid),4);
    bufp->fullIData(oldp+1212,(vlSelf->out_awaddr),32);
    bufp->fullCData(oldp+1213,(vlSelf->out_awlen),8);
    bufp->fullCData(oldp+1214,(vlSelf->out_awsize),3);
    bufp->fullCData(oldp+1215,(vlSelf->out_awburst),2);
    bufp->fullBit(oldp+1216,(vlSelf->out_wready));
    bufp->fullBit(oldp+1217,(vlSelf->out_wvalid));
    bufp->fullIData(oldp+1218,(vlSelf->out_wdata),32);
    bufp->fullCData(oldp+1219,(vlSelf->out_wstrb),4);
    bufp->fullBit(oldp+1220,(vlSelf->out_wlast));
    bufp->fullBit(oldp+1221,(vlSelf->out_bready));
    bufp->fullBit(oldp+1222,(vlSelf->out_bvalid));
    bufp->fullCData(oldp+1223,(vlSelf->out_bid),4);
    bufp->fullCData(oldp+1224,(vlSelf->out_bresp),2);
    bufp->fullCData(oldp+1225,(((IData)(vlSelf->sdram_top_axi__02Ein_awvalid)
                                 ? (IData)(vlSelf->sdram_top_axi__02Ein_awlen)
                                 : ((IData)(vlSelf->sdram_top_axi__02Ein_arvalid)
                                     ? (IData)(vlSelf->sdram_top_axi__02Ein_arlen)
                                     : 0U))),8);
    bufp->fullCData(oldp+1226,((((IData)(vlSelf->sdram_top_axi__02Ein_arvalid) 
                                 & (IData)(vlSelf->sdram_top_axi__02Ein_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->sdram_top_axi__02Ein_arlen)) 
                                              << 4U) 
                                             | (IData)(vlSelf->sdram_top_axi__02Ein_arid)))
                                 : (((IData)(vlSelf->sdram_top_axi__02Ein_awvalid) 
                                     & (IData)(vlSelf->sdram_top_axi__02Ein_awready))
                                     ? (((0U == (IData)(vlSelf->sdram_top_axi__02Ein_awlen)) 
                                         << 4U) | (IData)(vlSelf->sdram_top_axi__02Ein_awid))
                                     : (((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->sdram_top_axi__02Ein_wvalid))));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1229,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1232,((1U & (~ (IData)(vlSelf->ysyxSoCTop__02Eclock)))));
    bufp->fullBit(oldp+1233,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1234,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1235,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1236,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1237,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                    & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                        ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                           >> 1U) : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->fullIData(oldp+1238,((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                 ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1239,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                              | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1240,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                     : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                          : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
                                 : 0U)),2);
    bufp->fullBit(oldp+1241,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                              & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                  ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                  : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                     & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->fullIData(oldp+1243,(((IData)(vlSelf->__VdfgTmp_hdf8f5741__0)
                                 ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                 : 0U)),32);
    bufp->fullCData(oldp+1244,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? (3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                           ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                           : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                              | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                            << 0x18U) 
                                                           | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                     << 0x12U) 
                                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))))
                                 : 0U)),2);
    bufp->fullCData(oldp+1245,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                     ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                     : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                          : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->fullCData(oldp+1247,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp)
                                       : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                          | ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U))))))),2);
    bufp->fullCData(oldp+1248,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                 : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                      ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                      : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)))),2);
    bufp->fullBit(oldp+1249,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                               : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullBit(oldp+1250,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1251,((1U & (~ (IData)(vlSelf->ysyxSoCTop__02Ereset)))));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1254,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))),11);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1258,(((0xfffffeU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap),32);
    bufp->fullIData(oldp+1260,(0x64U),32);
    bufp->fullIData(oldp+1261,(0x18U),32);
    bufp->fullIData(oldp+1262,(9U),32);
    bufp->fullIData(oldp+1263,(2U),32);
    bufp->fullBit(oldp+1264,(0U));
    bufp->fullIData(oldp+1265,(6U),32);
    bufp->fullIData(oldp+1266,(4U),32);
    bufp->fullIData(oldp+1267,(3U),32);
    bufp->fullIData(oldp+1268,(0x20U),32);
    bufp->fullIData(oldp+1269,(0xdU),32);
    bufp->fullIData(oldp+1270,(0x2000U),32);
    bufp->fullIData(oldp+1271,(0x2710U),32);
    bufp->fullIData(oldp+1272,(0x30cU),32);
    bufp->fullCData(oldp+1273,(7U),4);
    bufp->fullCData(oldp+1274,(3U),4);
    bufp->fullCData(oldp+1275,(5U),4);
    bufp->fullCData(oldp+1276,(4U),4);
    bufp->fullCData(oldp+1277,(6U),4);
    bufp->fullCData(oldp+1278,(2U),4);
    bufp->fullCData(oldp+1279,(1U),4);
    bufp->fullCData(oldp+1280,(0U),4);
    bufp->fullSData(oldp+1281,(0x21U),13);
    bufp->fullCData(oldp+1282,(8U),4);
    bufp->fullCData(oldp+1283,(9U),4);
    bufp->fullIData(oldp+1284,(0xaU),32);
    bufp->fullIData(oldp+1285,(0x10U),32);
    bufp->fullIData(oldp+1286,(0x11U),32);
    bufp->fullSData(oldp+1287,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_out),16);
    bufp->fullSData(oldp+1288,(0U),16);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_gpio_seg_7),8);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_r),8);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_g),8);
    bufp->fullCData(oldp+1299,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_b),8);
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_hsync));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_vsync));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCTop__DOT__dut__DOT__externalPins_vga_valid));
    bufp->fullCData(oldp+1303,(1U),3);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1322,(1U));
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1324,(0U),32);
    bufp->fullCData(oldp+1325,(0U),8);
    bufp->fullCData(oldp+1326,(0U),3);
    bufp->fullCData(oldp+1327,(0U),2);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1335,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullIData(oldp+1338,(0U),32);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST));
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen),8);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen),8);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid),4);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid),4);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize),3);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize),3);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst),2);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst),2);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WLAST));
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWLEN),8);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARLEN),8);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWID),4);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARID),4);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWSIZE),3);
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARSIZE),3);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_AWBURST),2);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_ARBURST),2);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__C_AXI_WLAST));
    bufp->fullCData(oldp+1358,(1U),2);
    bufp->fullCData(oldp+1359,(2U),2);
    bufp->fullCData(oldp+1360,(3U),2);
    bufp->fullBit(oldp+1361,(0U));
    bufp->fullBit(oldp+1362,(1U));
    bufp->fullIData(oldp+1363,(5U),32);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID),4);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID),4);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST));
    bufp->fullIData(oldp+1367,(0xa0000048U),32);
    bufp->fullIData(oldp+1368,(0xa000004cU),32);
    bufp->fullIData(oldp+1369,(0x1800U),32);
    bufp->fullCData(oldp+1370,(4U),3);
    bufp->fullCData(oldp+1371,(0x1bU),8);
    bufp->fullCData(oldp+1372,(0xebU),8);
    bufp->fullCData(oldp+1373,(0x38U),8);
    bufp->fullIData(oldp+1374,(0x30000000U),32);
    bufp->fullIData(oldp+1375,(0x3fffffffU),32);
    bufp->fullIData(oldp+1376,(8U),32);
    bufp->fullIData(oldp+1377,(1U),32);
    bufp->fullCData(oldp+1378,(0xaU),4);
    bufp->fullIData(oldp+1379,(0xbU),32);
    bufp->fullCData(oldp+1380,(2U),3);
    bufp->fullCData(oldp+1381,(3U),3);
    bufp->fullCData(oldp+1382,(5U),3);
}
