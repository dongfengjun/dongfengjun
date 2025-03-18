// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
        bufp->chgCData(oldp+1,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+2,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
        bufp->chgBit(oldp+3,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+4,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+5,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+6,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+7,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+8,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+9,((0x1feU & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 1U))),13);
        bufp->chgSData(oldp+10,((0x1fffU & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0xcU))),13);
        bufp->chgCData(oldp+11,((3U & (vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+12,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+13,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT____Vcellinp__cpu__reset));
        bufp->chgBit(oldp+14,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__next_state));
        bufp->chgCData(oldp+15,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__next_state),2);
        bufp->chgBit(oldp+16,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__next_state));
        bufp->chgCData(oldp+17,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__next_state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgCData(oldp+18,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__next_state),2);
        bufp->chgBit(oldp+19,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+20,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+21,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+22,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+23,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+24,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+26,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),16);
        bufp->chgBit(oldp+27,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
        bufp->chgIData(oldp+28,((((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q) 
                                  << 0x10U) | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+29,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+30,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+31,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+32,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+33,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+34,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+35,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+36,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+37,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+38,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+39,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+40,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+41,((4U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+42,((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+43,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+44,(((~ ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U)) & (0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+45,(((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                               & ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U))));
        bufp->chgBit(oldp+46,((0U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+47,((((~ (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                & (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                               | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+48,((1U & ((~ ((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                         | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                     | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+49,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+50,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+51,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+52,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+53,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+54,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+55,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+56,((4U != (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+57,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+58,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+59,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+60,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+61,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+62,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+63,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgCData(oldp+64,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgSData(oldp+65,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgBit(oldp+66,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgCData(oldp+67,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),2);
        bufp->chgBit(oldp+68,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgCData(oldp+69,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgSData(oldp+70,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+71,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+72,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+73,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+74,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+75,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+76,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+77,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+78,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgCData(oldp+79,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+80,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+81,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+82,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgSData(oldp+83,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+84,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),16);
        bufp->chgIData(oldp+85,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+86,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgWData(oldp+87,(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+90,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+91,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                  [3U] << 0x18U) | 
                                 ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [2U] << 0x10U) | 
                                  ((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [1U] << 8U) | vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [0U])))),32);
        bufp->chgCData(oldp+92,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgCData(oldp+93,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgCData(oldp+94,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+95,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgCData(oldp+96,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+97,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+98,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+99,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+100,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+106,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+109,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgBit(oldp+110,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+111,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+114,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgBit(oldp+115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+116,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+117,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+118,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+119,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+120,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+121,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+122,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+123,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+124,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+125,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+126,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+127,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+128,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+129,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+130,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+131,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+132,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+133,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+134,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+135,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+136,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgCData(oldp+137,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+138,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgQData(oldp+139,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+141,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+142,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgCData(oldp+143,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgQData(oldp+144,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+146,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgQData(oldp+147,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+149,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+150,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+151,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+152,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+153,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+154,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? (vlSelf->__VdfgTmp_hee80daa1__0 
                                            >> 0x18U)
                                         : 0U) : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
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
        bufp->chgCData(oldp+155,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+156,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+157,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+158,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+159,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+160,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+161,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+162,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+163,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
        bufp->chgBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+165,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+166,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+167,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+168,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
        bufp->chgSData(oldp+169,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
        bufp->chgBit(oldp+170,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+171,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+172,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+173,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+174,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+175,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+176,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+177,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+178,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+179,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+180,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+181,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+182,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+183,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+184,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+185,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+186,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+187,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+188,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+189,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+190,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+191,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+192,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+193,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+194,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+195,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+196,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+197,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+198,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+199,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+200,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+201,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+202,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+203,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgCData(oldp+204,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgBit(oldp+205,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+206,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+207,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+208,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgCData(oldp+209,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgBit(oldp+210,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+211,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+213,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+214,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+215,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+216,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+217,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+218,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+219,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+220,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+221,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+223,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+224,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+225,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+227,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+228,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+229,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+231,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+232,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+233,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+235,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+236,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+237,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+239,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+240,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+241,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+243,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+244,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+245,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+246,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+247,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+248,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+249,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+251,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+252,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+253,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+255,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+256,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+257,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+259,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+260,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+261,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+263,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+264,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+265,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+266,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+267,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+268,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+269,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+270,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+271,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+272,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+273,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+274,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+275,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+276,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+277,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+278,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+279,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+280,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+281,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+283,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+284,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+285,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+287,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+288,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+289,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+290,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+291,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+292,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+293,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+294,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+295,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+296,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+297,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+299,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+300,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+301,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+302,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+303,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+304,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+305,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+306,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+307,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+308,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+309,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+311,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+312,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+313,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+314,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+315,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+316,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+317,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+319,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+320,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+321,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+322,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+323,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+324,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+325,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+326,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+327,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+328,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+329,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+331,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+332,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+333,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+335,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+336,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+337,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+339,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+340,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+341,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+343,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+344,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+345,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+346,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+347,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+348,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+349,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgIData(oldp+350,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
        bufp->chgBit(oldp+351,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__pcu_valid));
        bufp->chgBit(oldp+352,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_ready));
        bufp->chgIData(oldp+353,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+354,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen),8);
        bufp->chgCData(oldp+355,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid),4);
        bufp->chgCData(oldp+356,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize),3);
        bufp->chgCData(oldp+357,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst),2);
        bufp->chgBit(oldp+358,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
        bufp->chgBit(oldp+359,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
        bufp->chgCData(oldp+360,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd),5);
        bufp->chgCData(oldp+361,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1),5);
        bufp->chgCData(oldp+362,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2),5);
        bufp->chgIData(oldp+363,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm),32);
        bufp->chgCData(oldp+364,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct7),7);
        bufp->chgCData(oldp+365,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__shamt),5);
        bufp->chgBit(oldp+366,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_valid));
        bufp->chgBit(oldp+367,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__wbu_ready));
        bufp->chgIData(oldp+368,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__res),32);
        bufp->chgIData(oldp+369,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
        bufp->chgIData(oldp+370,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mepc),32);
        bufp->chgIData(oldp+371,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
        bufp->chgIData(oldp+372,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mstatus),32);
        bufp->chgIData(oldp+373,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
        bufp->chgIData(oldp+374,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mcause),32);
        bufp->chgIData(oldp+375,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
        bufp->chgIData(oldp+376,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__o_mtvec),32);
        bufp->chgBit(oldp+377,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_wen));
        bufp->chgBit(oldp+378,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_wen));
        bufp->chgBit(oldp+379,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_wen));
        bufp->chgBit(oldp+380,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_wen));
        bufp->chgBit(oldp+381,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_wen));
        bufp->chgIData(oldp+382,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rdata),32);
        bufp->chgCData(oldp+383,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bid),4);
        bufp->chgCData(oldp+384,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rid),4);
        bufp->chgCData(oldp+385,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bresp),2);
        bufp->chgCData(oldp+386,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp),2);
        bufp->chgBit(oldp+387,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_awready));
        bufp->chgBit(oldp+388,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid));
        bufp->chgBit(oldp+389,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_arready));
        bufp->chgBit(oldp+390,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid));
        bufp->chgBit(oldp+391,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rlast));
        bufp->chgBit(oldp+392,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_done));
        bufp->chgBit(oldp+393,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
        bufp->chgIData(oldp+394,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__xrd),32);
        bufp->chgCData(oldp+395,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_addr),5);
        bufp->chgBit(oldp+396,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_wen));
        bufp->chgIData(oldp+397,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mepc),32);
        bufp->chgIData(oldp+398,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mstatus),32);
        bufp->chgIData(oldp+399,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mcause),32);
        bufp->chgIData(oldp+400,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mtvec),32);
        bufp->chgBit(oldp+401,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc_en));
        bufp->chgBit(oldp+402,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus_en));
        bufp->chgBit(oldp+403,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause_en));
        bufp->chgBit(oldp+404,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec_en));
        bufp->chgIData(oldp+405,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1),32);
        bufp->chgCData(oldp+406,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state),2);
        bufp->chgBit(oldp+407,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_start));
        bufp->chgBit(oldp+408,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sram_ifu_done));
        bufp->chgBit(oldp+409,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCU__DOT__state));
        bufp->chgIData(oldp+410,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[0]),32);
        bufp->chgIData(oldp+411,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[1]),32);
        bufp->chgIData(oldp+412,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[2]),32);
        bufp->chgIData(oldp+413,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[3]),32);
        bufp->chgIData(oldp+414,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[4]),32);
        bufp->chgIData(oldp+415,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[5]),32);
        bufp->chgIData(oldp+416,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[6]),32);
        bufp->chgIData(oldp+417,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[7]),32);
        bufp->chgIData(oldp+418,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[8]),32);
        bufp->chgIData(oldp+419,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[9]),32);
        bufp->chgIData(oldp+420,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[10]),32);
        bufp->chgIData(oldp+421,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[11]),32);
        bufp->chgIData(oldp+422,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[12]),32);
        bufp->chgIData(oldp+423,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[13]),32);
        bufp->chgIData(oldp+424,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[14]),32);
        bufp->chgIData(oldp+425,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[15]),32);
        bufp->chgIData(oldp+426,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[16]),32);
        bufp->chgIData(oldp+427,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[17]),32);
        bufp->chgIData(oldp+428,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[18]),32);
        bufp->chgIData(oldp+429,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[19]),32);
        bufp->chgIData(oldp+430,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[20]),32);
        bufp->chgIData(oldp+431,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[21]),32);
        bufp->chgIData(oldp+432,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[22]),32);
        bufp->chgIData(oldp+433,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[23]),32);
        bufp->chgIData(oldp+434,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[24]),32);
        bufp->chgIData(oldp+435,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[25]),32);
        bufp->chgIData(oldp+436,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[26]),32);
        bufp->chgIData(oldp+437,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[27]),32);
        bufp->chgIData(oldp+438,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[28]),32);
        bufp->chgIData(oldp+439,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[29]),32);
        bufp->chgIData(oldp+440,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[30]),32);
        bufp->chgIData(oldp+441,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf[31]),32);
        bufp->chgCData(oldp+442,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state),2);
        bufp->chgIData(oldp+443,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr),32);
        bufp->chgQData(oldp+444,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime),64);
        bufp->chgBit(oldp+446,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+447,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+448,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+449,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+450,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+451,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+452,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+453,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+454,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+455,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+456,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+457,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+458,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+459,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+460,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgCData(oldp+461,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+462,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+463,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+464,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+465,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+466,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+467,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+468,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+469,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+470,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+471,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+472,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+473,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+474,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+475,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+476,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+477,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+478,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+479,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+480,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+481,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+482,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+483,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+484,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+485,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+486,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+487,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+488,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+489,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+490,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+491,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+492,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+493,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+494,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                       : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
        bufp->chgIData(oldp+495,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                   : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
        bufp->chgBit(oldp+496,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                      == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+497,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                      != vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+498,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & VL_LTS_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+499,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((5U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & VL_GTES_III(32, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+500,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                      < vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+501,(((0x63U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)) 
                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                      >= vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))));
        bufp->chgBit(oldp+502,(((0x73U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                & ((0x302U == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm) 
                                   & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3))))));
        bufp->chgCData(oldp+503,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arlen)
                                   : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arlen)
                                       : 0U))),8);
        bufp->chgCData(oldp+504,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arid)
                                   : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arid)
                                       : 0U))),4);
        bufp->chgCData(oldp+505,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arsize)
                                   : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arsize)
                                       : 0U))),4);
        bufp->chgCData(oldp+506,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arburst)
                                   : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arburst)
                                       : 0U))),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+507,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+508,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+509,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+510,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+511,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                                & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgIData(oldp+512,((((- (IData)((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid)))) 
                                   & ((- (IData)((0xa0000048U 
                                                  == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                      & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime))) 
                                  | ((- (IData)((0xa000004cU 
                                                 == vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_araddr))) 
                                     & (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__mtime 
                                                >> 0x20U))))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgIData(oldp+513,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                   : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+514,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                  << 1U)))))),2);
        bufp->chgIData(oldp+515,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? ((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__state))
                                        ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                        : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                    : 0U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
        bufp->chgBit(oldp+516,((((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
        bufp->chgBit(oldp+517,((1U & ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
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
        bufp->chgBit(oldp+518,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+519,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 1U)))));
        bufp->chgBit(oldp+520,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+521,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+522,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 0xcU)))));
        bufp->chgBit(oldp+523,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+524,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+525,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+526,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+527,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 1U)))));
        bufp->chgBit(oldp+528,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 2U)))));
        bufp->chgBit(oldp+529,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 3U)))));
        bufp->chgBit(oldp+530,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 2U)))));
        bufp->chgBit(oldp+531,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 4U)))));
        bufp->chgBit(oldp+532,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 5U)))));
        bufp->chgBit(oldp+533,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 6U)))));
        bufp->chgBit(oldp+534,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 7U)))));
        bufp->chgBit(oldp+535,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 8U)))));
        bufp->chgBit(oldp+536,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 9U)))));
        bufp->chgBit(oldp+537,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+538,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+539,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 0xcU)))));
        bufp->chgBit(oldp+540,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+541,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                              >> 3U)))));
        bufp->chgBit(oldp+542,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+543,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xfU))));
        bufp->chgBit(oldp+544,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 4U)))));
        bufp->chgBit(oldp+545,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 5U)))));
        bufp->chgBit(oldp+546,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 6U)))));
        bufp->chgBit(oldp+547,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 7U)))));
        bufp->chgBit(oldp+548,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 8U)))));
        bufp->chgBit(oldp+549,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 9U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+550,((1U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U) | ((~ 
                                                  ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 6U)) 
                                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
        bufp->chgBit(oldp+551,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_sck));
        bufp->chgCData(oldp+552,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+553,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgBit(oldp+554,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                      >> 3U))));
        bufp->chgBit(oldp+555,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+556,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+557,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+558,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
        bufp->chgCData(oldp+559,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
        bufp->chgCData(oldp+560,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
        bufp->chgSData(oldp+561,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU) 
                                   & ((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                       & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU))) 
                                  & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU))),16);
        bufp->chgBit(oldp+562,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
        bufp->chgIData(oldp+563,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                   << 0x10U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+564,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_pready));
        bufp->chgIData(oldp+565,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___lspi_auto_in_prdata),32);
        bufp->chgBit(oldp+566,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+567,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+568,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? (1U & 
                                              (0xebU 
                                               >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                           : ((8U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                               ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x14U)
                                               : ((9U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                   : 
                                                  ((0xaU 
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
        bufp->chgBit(oldp+569,((0xeU > (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+570,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+571,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+573,((0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+574,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+575,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+576,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+577,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+578,((3U & (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(2U)))),2);
        bufp->chgBit(oldp+579,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+580,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+581,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+582,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+583,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
        bufp->chgBit(oldp+584,(((4U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                | (6U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
        bufp->chgCData(oldp+585,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgBit(oldp+586,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgSData(oldp+587,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+588,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+589,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+590,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
        bufp->chgSData(oldp+591,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+592,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+593,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+594,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+595,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
        bufp->chgCData(oldp+596,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+597,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+598,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+599,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgSData(oldp+600,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+601,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
        bufp->chgIData(oldp+602,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgCData(oldp+603,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
        bufp->chgWData(oldp+604,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
        bufp->chgBit(oldp+607,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgSData(oldp+608,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+609,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+610,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+611,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+615,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 9U))));
        bufp->chgBit(oldp+616,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xaU))));
        bufp->chgCData(oldp+617,((0x7fU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+618,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 8U))));
        bufp->chgBit(oldp+619,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+620,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+621,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+622,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+623,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+624,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+625,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgSData(oldp+626,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+627,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+628,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+629,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+630,((0xffU & ((0x800U 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                            ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                               - (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                            : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                               - (IData)(1U))))),8);
        bufp->chgCData(oldp+631,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+632,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+633,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+634,((1U & (~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 1U)))));
        bufp->chgBit(oldp+635,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+636,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+637,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+638,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+639,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+640,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+641,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+642,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+643,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+644,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+645,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+646,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+647,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+648,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+649,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+650,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+651,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+652,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+653,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+654,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+655,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+656,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+657,((IData)((0x10U != (0x12U 
                                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+658,((IData)((0x11U == (0x11U 
                                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+659,((IData)((0x14U == (0x14U 
                                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+660,((IData)((0x18U == (0x18U 
                                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+661,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                   << 7U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                              << 6U) 
                                             | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
        bufp->chgBit(oldp+662,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+663,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+664,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+665,((1U & (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))));
        bufp->chgBit(oldp+666,((1U & ((IData)(vlSelf->__VdfgTmp_h67fdcefc__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+667,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+668,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+669,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+670,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+671,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+672,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+673,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+674,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+675,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+676,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+677,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+678,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+679,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+680,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+681,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+682,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+683,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+684,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+685,((0U != (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgBit(oldp+686,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+687,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+688,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+689,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+690,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+691,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+692,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+693,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+694,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+695,(((~ ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 6U)) & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
        bufp->chgBit(oldp+696,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+697,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+698,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+699,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+700,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+701,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+702,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+703,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+704,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+705,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+706,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+707,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+708,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+709,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+710,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+711,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+712,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+713,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+714,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+715,(((~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+716,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+717,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+718,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+719,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+720,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+721,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+722,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+723,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+724,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+725,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+726,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+727,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+728,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+729,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+730,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+731,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+732,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+733,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+734,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+735,((7U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+736,((0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+737,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+738,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+739,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+740,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+741,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+742,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+743,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+744,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+745,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+746,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+747,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+748,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+749,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+750,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+751,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+752,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+753,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+754,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+755,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+756,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+757,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+758,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+759,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+760,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+761,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+762,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+763,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+764,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+765,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+766,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+767,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+768,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+769,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+770,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+771,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+772,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+773,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+774,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+775,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+776,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+777,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+778,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+779,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+780,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+781,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+782,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+783,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+784,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+785,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+786,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+787,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+788,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_ss) 
                                      >> 7U))));
        bufp->chgBit(oldp+789,(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+790,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awaddr),32);
        bufp->chgIData(oldp+791,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wdata),32);
        bufp->chgIData(oldp+792,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_araddr),32);
        bufp->chgCData(oldp+793,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wstrb),4);
        bufp->chgBit(oldp+794,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awvalid));
        bufp->chgBit(oldp+795,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_wvalid));
        bufp->chgBit(oldp+796,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_bready));
        bufp->chgBit(oldp+797,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
        bufp->chgBit(oldp+798,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
        bufp->chgCData(oldp+799,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+800,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+801,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+802,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+803,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+804,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+805,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                                & (0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+806,((1U & (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+807,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgIData(oldp+808,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__dnpc),32);
        bufp->chgIData(oldp+809,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
        bufp->chgBit(oldp+810,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ifu_valid));
        bufp->chgBit(oldp+811,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_ready));
        bufp->chgCData(oldp+812,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                   : 0U)),4);
        bufp->chgCData(oldp+813,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                   : 0U)),4);
        bufp->chgBit(oldp+814,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
        bufp->chgBit(oldp+815,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__idu_valid));
        bufp->chgBit(oldp+816,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__exu_ready));
        bufp->chgCData(oldp+817,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op),7);
        bufp->chgCData(oldp+818,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3),3);
        bufp->chgBit(oldp+819,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_read));
        bufp->chgBit(oldp+820,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_lsu_write));
        bufp->chgBit(oldp+821,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid));
        bufp->chgBit(oldp+822,((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
        bufp->chgIData(oldp+823,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgIData(oldp+824,(((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                   : 0U)),32);
        bufp->chgIData(oldp+825,(((3U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0
                                   : 0x80000000U)),32);
        bufp->chgCData(oldp+826,((((0x23U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                   ? 1U : (((0x23U 
                                             == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            & (1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                            ? 3U : 
                                           (((0x23U 
                                              == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3)))
                                             ? 0xfU
                                             : 0U)))),4);
        bufp->chgCData(oldp+827,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BID)
                                   : 0U)),4);
        bufp->chgCData(oldp+828,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RID)
                                   : 0U)),4);
        bufp->chgBit(oldp+829,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RLAST))));
        bufp->chgBit(oldp+830,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready));
        bufp->chgIData(oldp+831,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2),32);
        bufp->chgCData(oldp+832,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state),2);
        bufp->chgIData(oldp+833,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__a),32);
        bufp->chgIData(oldp+834,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__b),32);
        bufp->chgIData(oldp+835,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr),32);
        bufp->chgIData(oldp+836,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs),32);
        bufp->chgIData(oldp+837,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                   ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
                                   : vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__w_csrs)),32);
        bufp->chgBit(oldp+838,((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
        bufp->chgBit(oldp+839,((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))));
        bufp->chgBit(oldp+840,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en));
        bufp->chgBit(oldp+841,(((0x37U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                | ((0x17U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                   | ((0x6fU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                      | ((0x67U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                               | ((0x73U 
                                                   == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                  | ((0x33U 
                                                      == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__op))))))))))));
        bufp->chgBit(oldp+842,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+843,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mstatus_wen));
        bufp->chgBit(oldp+844,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0) 
                                | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))));
        bufp->chgBit(oldp+845,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mtvec_wen));
        bufp->chgCData(oldp+846,((0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
        bufp->chgCData(oldp+847,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                      | ((0x67U == 
                                          (0x7fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
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
        bufp->chgCData(oldp+848,((7U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+849,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_he7af239d__0) 
                                   | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0))
                                   ? (0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgCData(oldp+850,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0)
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
        bufp->chgIData(oldp+851,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+852,((0xfffff000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
        bufp->chgIData(oldp+853,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+854,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
        bufp->chgIData(oldp+855,((((- (IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
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
        bufp->chgIData(oldp+856,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm),32);
        bufp->chgCData(oldp+857,((((0x33U == (0x7fU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                   | (0x13U == (0x7fU 
                                                & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))
                                   ? (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                      >> 0x19U) : 0U)),7);
        bufp->chgCData(oldp+858,((0x1fU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+859,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
        bufp->chgCData(oldp+860,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__current_state),2);
        bufp->chgCData(oldp+861,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awlen)
                                   : 0U)),8);
        bufp->chgCData(oldp+862,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awid)
                                   : 0U)),4);
        bufp->chgCData(oldp+863,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awsize)
                                   : 0U)),4);
        bufp->chgCData(oldp+864,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                   ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_awburst)
                                   : 0U)),3);
        bufp->chgBit(oldp+865,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_WLAST)
                                 : ((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                    & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_WLAST)))));
        bufp->chgCData(oldp+866,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+867,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+868,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
        bufp->chgBit(oldp+869,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
        bufp->chgBit(oldp+870,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY))));
        bufp->chgBit(oldp+871,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                    ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                    : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
        bufp->chgBit(oldp+872,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY))));
        bufp->chgBit(oldp+873,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                       ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_wready)
                                       : (~ (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+874,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+875,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+876,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+877,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+878,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+879,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
        bufp->chgBit(oldp+880,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+881,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+882,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgBit(oldp+883,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+884,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+885,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+886,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+887,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+888,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+889,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgBit(oldp+890,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+891,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+892,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+893,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+894,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+895,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+896,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+897,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+898,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__apbxbar__DOT__sel_6));
        bufp->chgBit(oldp+899,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+900,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
        bufp->chgIData(oldp+901,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+902,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+903,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgCData(oldp+904,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
        bufp->chgCData(oldp+905,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
        bufp->chgBit(oldp+906,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+907,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
        bufp->chgIData(oldp+908,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+909,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                  << 1U)),2);
        bufp->chgBit(oldp+910,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0))));
        bufp->chgIData(oldp+911,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0)),32);
        bufp->chgBit(oldp+912,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0))));
        bufp->chgIData(oldp+913,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0)),32);
        bufp->chgCData(oldp+914,((0xfU & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0))),4);
        bufp->chgBit(oldp+915,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0))));
        bufp->chgBit(oldp+916,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0))));
        bufp->chgIData(oldp+917,((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0)),32);
        bufp->chgBit(oldp+918,((1U & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0))));
        bufp->chgBit(oldp+919,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+920,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+921,((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+922,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+923,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+924,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+925,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+926,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+927,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgBit(oldp+928,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+929,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+930,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+931,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+932,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+933,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+934,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+935,((0xfffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+936,((0x7800U == (0x7fffU 
                                            & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xdU)))));
        bufp->chgSData(oldp+937,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 2U))),11);
        bufp->chgSData(oldp+938,((0x7ffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 2U))),11);
        bufp->chgBit(oldp+939,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+940,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+941,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((0x10U & 
                                           (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)) 
                                          | ((0xcU 
                                              & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                             | ((2U 
                                                 & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x17U)) 
                                                | (1U 
                                                   & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+942,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+943,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+944,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+945,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+946,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+947,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+948,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+949,((0U == ((0x10U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
                                                   >> 0xcU))))))));
        bufp->chgBit(oldp+950,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+951,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+952,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+953,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+954,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+955,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+956,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgIData(oldp+957,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h0a7af9cb__0 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+958,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hcd91cb1a__0 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+959,((IData)((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h31508dcd__0 
                                          >> 0x20U))),32);
        bufp->chgCData(oldp+960,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h6d353ae3__0) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+961,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hb9a3b825__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+962,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h026d90c8__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+963,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h55ae4f37__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+964,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h2f7f8fe7__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+965,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                      >> 1U))));
        bufp->chgIData(oldp+966,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR),32);
        bufp->chgIData(oldp+967,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA),32);
        bufp->chgIData(oldp+968,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR),32);
        bufp->chgCData(oldp+969,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WSTRB),4);
        bufp->chgBit(oldp+970,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID));
        bufp->chgBit(oldp+971,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY));
        bufp->chgBit(oldp+972,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID));
        bufp->chgBit(oldp+973,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY));
        bufp->chgBit(oldp+974,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID));
        bufp->chgBit(oldp+975,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY));
        bufp->chgBit(oldp+976,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY));
        bufp->chgBit(oldp+977,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint));
        bufp->chgIData(oldp+978,((0x1fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+979,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+980,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+981,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+982,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+983,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+984,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+985,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+986,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+987,((0xffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+988,((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+989,(((0xffff0000U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                  | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                      << 8U) | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+990,((0xfffffcU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+991,((0xffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgCData(oldp+992,((0xffU & ((IData)(0xdU) 
                                           + ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U)))),8);
        bufp->chgBit(oldp+993,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
        bufp->chgBit(oldp+994,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
        bufp->chgCData(oldp+995,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
        bufp->chgBit(oldp+996,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
        bufp->chgSData(oldp+997,((0x1feU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 1U))),13);
        bufp->chgSData(oldp+998,((0x1fffU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                             >> 0xcU))),13);
        bufp->chgCData(oldp+999,((3U & (vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                        >> 0xaU))),2);
        bufp->chgIData(oldp+1000,((0x3fffffffU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgCData(oldp+1001,((0x1fU & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
        bufp->chgBit(oldp+1002,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x14U == (0x1cU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
        bufp->chgBit(oldp+1003,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x10U == (0x1cU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
        bufp->chgCData(oldp+1004,(((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
        bufp->chgBit(oldp+1005,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x18U == (0x1cU 
                                              & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
        bufp->chgCData(oldp+1006,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1007,((7U & vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1008,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1009,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+1010,((((((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                      | (0xcU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                     & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                    & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                   & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
        bufp->chgBit(oldp+1011,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+1012,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+1013,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
        bufp->chgBit(oldp+1014,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+1015,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
        bufp->chgBit(oldp+1016,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+1017,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
        bufp->chgCData(oldp+1018,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
        bufp->chgBit(oldp+1019,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+1020,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
        bufp->chgBit(oldp+1021,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+1022,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+1023,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+1024,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+1025,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+1026,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+1027,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+1028,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
        bufp->chgBit(oldp+1029,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+1030,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+1031,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+1032,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+1033,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+1034,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+1035,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1036,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
        bufp->chgBit(oldp+1037,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
        bufp->chgBit(oldp+1038,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
        bufp->chgBit(oldp+1039,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+1040,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+1041,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+1042,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
        bufp->chgBit(oldp+1043,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
        bufp->chgBit(oldp+1044,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+1045,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgSData(oldp+1046,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
        bufp->chgSData(oldp+1047,((0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
        bufp->chgBit(oldp+1048,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+1049,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+1050,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+1051,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+1052,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+1053,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+1054,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+1055,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+1056,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+1057,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+1058,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+1059,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+1060,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+1061,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+1062,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+1063,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+1064,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+1065,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+1066,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+1067,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1068,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+1069,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                    & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
        bufp->chgBit(oldp+1070,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 1U) 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1071,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 0xaU) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1072,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 0xbU) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1073,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 0xcU) 
                                            & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1074,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1075,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1076,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1077,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+1078,((0x7fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 1U)))));
        bufp->chgBit(oldp+1079,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 2U)))));
        bufp->chgBit(oldp+1080,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                            & (((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                               >> 3U)))));
        bufp->chgBit(oldp+1081,((0x3fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1082,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                              >> 4U)))));
        bufp->chgBit(oldp+1083,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                              >> 5U)))));
        bufp->chgBit(oldp+1084,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                              >> 6U)))));
        bufp->chgBit(oldp+1085,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                              >> 7U)))));
        bufp->chgBit(oldp+1086,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 8U)))));
        bufp->chgBit(oldp+1087,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 9U)))));
        bufp->chgBit(oldp+1088,((0x3fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 0xaU)))));
        bufp->chgBit(oldp+1089,((0x1fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 0xbU)))));
        bufp->chgBit(oldp+1090,((0xfU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+1091,((7U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+1092,((0x1fffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                            & ((((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                >> 3U) 
                                               & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1093,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+1094,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                    >> 0xfU))));
        bufp->chgBit(oldp+1095,((0xfffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 4U) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1096,((0x7ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 5U) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1097,((0x3ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 6U) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1098,((0x1ffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                               >> 7U) 
                                              & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1099,((0xffU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 8U) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1100,((0x7fU & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 9U) 
                                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+1101,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_AXI_RVALID));
        bufp->chgBit(oldp+1102,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_BVALID));
        bufp->chgBit(oldp+1103,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_AXI_RVALID));
        bufp->chgIData(oldp+1104,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__res),32);
        bufp->chgIData(oldp+1105,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA),32);
        bufp->chgBit(oldp+1106,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID));
        bufp->chgCData(oldp+1107,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1108,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+1109,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1110,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1111,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1112,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgBit(oldp+1113,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
        bufp->chgBit(oldp+1114,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+1115,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgCData(oldp+1116,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
        bufp->chgCData(oldp+1117,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
        bufp->chgCData(oldp+1118,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
        bufp->chgIData(oldp+1119,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgCData(oldp+1120,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    }
    bufp->chgBit(oldp+1121,(vlSelf->ysyxSoCTop__02Eclock));
    bufp->chgBit(oldp+1122,(vlSelf->ysyxSoCTop__02Ereset));
    bufp->chgBit(oldp+1123,(vlSelf->sdram_top_axi__02Eclock));
    bufp->chgBit(oldp+1124,(vlSelf->sdram_top_axi__02Ereset));
    bufp->chgBit(oldp+1125,(vlSelf->sdram_top_axi__02Ein_awready));
    bufp->chgBit(oldp+1126,(vlSelf->sdram_top_axi__02Ein_awvalid));
    bufp->chgIData(oldp+1127,(vlSelf->sdram_top_axi__02Ein_awaddr),32);
    bufp->chgCData(oldp+1128,(vlSelf->sdram_top_axi__02Ein_awid),4);
    bufp->chgCData(oldp+1129,(vlSelf->sdram_top_axi__02Ein_awlen),8);
    bufp->chgCData(oldp+1130,(vlSelf->sdram_top_axi__02Ein_awsize),3);
    bufp->chgCData(oldp+1131,(vlSelf->sdram_top_axi__02Ein_awburst),2);
    bufp->chgBit(oldp+1132,(vlSelf->sdram_top_axi__02Ein_wready));
    bufp->chgBit(oldp+1133,(vlSelf->sdram_top_axi__02Ein_wvalid));
    bufp->chgIData(oldp+1134,(vlSelf->sdram_top_axi__02Ein_wdata),32);
    bufp->chgCData(oldp+1135,(vlSelf->sdram_top_axi__02Ein_wstrb),4);
    bufp->chgBit(oldp+1136,(vlSelf->sdram_top_axi__02Ein_wlast));
    bufp->chgBit(oldp+1137,(vlSelf->sdram_top_axi__02Ein_bready));
    bufp->chgBit(oldp+1138,(vlSelf->sdram_top_axi__02Ein_bvalid));
    bufp->chgCData(oldp+1139,(vlSelf->sdram_top_axi__02Ein_bresp),2);
    bufp->chgCData(oldp+1140,(vlSelf->sdram_top_axi__02Ein_bid),4);
    bufp->chgBit(oldp+1141,(vlSelf->sdram_top_axi__02Ein_arready));
    bufp->chgBit(oldp+1142,(vlSelf->sdram_top_axi__02Ein_arvalid));
    bufp->chgIData(oldp+1143,(vlSelf->sdram_top_axi__02Ein_araddr),32);
    bufp->chgCData(oldp+1144,(vlSelf->sdram_top_axi__02Ein_arid),4);
    bufp->chgCData(oldp+1145,(vlSelf->sdram_top_axi__02Ein_arlen),8);
    bufp->chgCData(oldp+1146,(vlSelf->sdram_top_axi__02Ein_arsize),3);
    bufp->chgCData(oldp+1147,(vlSelf->sdram_top_axi__02Ein_arburst),2);
    bufp->chgBit(oldp+1148,(vlSelf->sdram_top_axi__02Ein_rready));
    bufp->chgBit(oldp+1149,(vlSelf->sdram_top_axi__02Ein_rvalid));
    bufp->chgCData(oldp+1150,(vlSelf->sdram_top_axi__02Ein_rresp),2);
    bufp->chgIData(oldp+1151,(vlSelf->sdram_top_axi__02Ein_rdata),32);
    bufp->chgBit(oldp+1152,(vlSelf->sdram_top_axi__02Ein_rlast));
    bufp->chgCData(oldp+1153,(vlSelf->sdram_top_axi__02Ein_rid),4);
    bufp->chgBit(oldp+1154,(vlSelf->sdram_clk));
    bufp->chgBit(oldp+1155,(vlSelf->sdram_cke));
    bufp->chgBit(oldp+1156,(vlSelf->sdram_cs));
    bufp->chgBit(oldp+1157,(vlSelf->sdram_ras));
    bufp->chgBit(oldp+1158,(vlSelf->sdram_cas));
    bufp->chgBit(oldp+1159,(vlSelf->sdram_we));
    bufp->chgSData(oldp+1160,(vlSelf->sdram_a),13);
    bufp->chgCData(oldp+1161,(vlSelf->sdram_ba),2);
    bufp->chgCData(oldp+1162,(vlSelf->sdram_dqm),2);
    bufp->chgSData(oldp+1163,(vlSelf->sdram_dq),16);
    bufp->chgBit(oldp+1164,(vlSelf->axi4_delayer__02Eclock));
    bufp->chgBit(oldp+1165,(vlSelf->axi4_delayer__02Ereset));
    bufp->chgBit(oldp+1166,(vlSelf->axi4_delayer__02Ein_arready));
    bufp->chgBit(oldp+1167,(vlSelf->axi4_delayer__02Ein_arvalid));
    bufp->chgCData(oldp+1168,(vlSelf->axi4_delayer__02Ein_arid),4);
    bufp->chgIData(oldp+1169,(vlSelf->axi4_delayer__02Ein_araddr),32);
    bufp->chgCData(oldp+1170,(vlSelf->axi4_delayer__02Ein_arlen),8);
    bufp->chgCData(oldp+1171,(vlSelf->axi4_delayer__02Ein_arsize),3);
    bufp->chgCData(oldp+1172,(vlSelf->axi4_delayer__02Ein_arburst),2);
    bufp->chgBit(oldp+1173,(vlSelf->axi4_delayer__02Ein_rready));
    bufp->chgBit(oldp+1174,(vlSelf->axi4_delayer__02Ein_rvalid));
    bufp->chgCData(oldp+1175,(vlSelf->axi4_delayer__02Ein_rid),4);
    bufp->chgIData(oldp+1176,(vlSelf->axi4_delayer__02Ein_rdata),32);
    bufp->chgCData(oldp+1177,(vlSelf->axi4_delayer__02Ein_rresp),2);
    bufp->chgBit(oldp+1178,(vlSelf->axi4_delayer__02Ein_rlast));
    bufp->chgBit(oldp+1179,(vlSelf->axi4_delayer__02Ein_awready));
    bufp->chgBit(oldp+1180,(vlSelf->axi4_delayer__02Ein_awvalid));
    bufp->chgCData(oldp+1181,(vlSelf->axi4_delayer__02Ein_awid),4);
    bufp->chgIData(oldp+1182,(vlSelf->axi4_delayer__02Ein_awaddr),32);
    bufp->chgCData(oldp+1183,(vlSelf->axi4_delayer__02Ein_awlen),8);
    bufp->chgCData(oldp+1184,(vlSelf->axi4_delayer__02Ein_awsize),3);
    bufp->chgCData(oldp+1185,(vlSelf->axi4_delayer__02Ein_awburst),2);
    bufp->chgBit(oldp+1186,(vlSelf->axi4_delayer__02Ein_wready));
    bufp->chgBit(oldp+1187,(vlSelf->axi4_delayer__02Ein_wvalid));
    bufp->chgIData(oldp+1188,(vlSelf->axi4_delayer__02Ein_wdata),32);
    bufp->chgCData(oldp+1189,(vlSelf->axi4_delayer__02Ein_wstrb),4);
    bufp->chgBit(oldp+1190,(vlSelf->axi4_delayer__02Ein_wlast));
    bufp->chgBit(oldp+1191,(vlSelf->axi4_delayer__02Ein_bready));
    bufp->chgBit(oldp+1192,(vlSelf->axi4_delayer__02Ein_bvalid));
    bufp->chgCData(oldp+1193,(vlSelf->axi4_delayer__02Ein_bid),4);
    bufp->chgCData(oldp+1194,(vlSelf->axi4_delayer__02Ein_bresp),2);
    bufp->chgBit(oldp+1195,(vlSelf->out_arready));
    bufp->chgBit(oldp+1196,(vlSelf->out_arvalid));
    bufp->chgCData(oldp+1197,(vlSelf->out_arid),4);
    bufp->chgIData(oldp+1198,(vlSelf->out_araddr),32);
    bufp->chgCData(oldp+1199,(vlSelf->out_arlen),8);
    bufp->chgCData(oldp+1200,(vlSelf->out_arsize),3);
    bufp->chgCData(oldp+1201,(vlSelf->out_arburst),2);
    bufp->chgBit(oldp+1202,(vlSelf->out_rready));
    bufp->chgBit(oldp+1203,(vlSelf->out_rvalid));
    bufp->chgCData(oldp+1204,(vlSelf->out_rid),4);
    bufp->chgIData(oldp+1205,(vlSelf->out_rdata),32);
    bufp->chgCData(oldp+1206,(vlSelf->out_rresp),2);
    bufp->chgBit(oldp+1207,(vlSelf->out_rlast));
    bufp->chgBit(oldp+1208,(vlSelf->out_awready));
    bufp->chgBit(oldp+1209,(vlSelf->out_awvalid));
    bufp->chgCData(oldp+1210,(vlSelf->out_awid),4);
    bufp->chgIData(oldp+1211,(vlSelf->out_awaddr),32);
    bufp->chgCData(oldp+1212,(vlSelf->out_awlen),8);
    bufp->chgCData(oldp+1213,(vlSelf->out_awsize),3);
    bufp->chgCData(oldp+1214,(vlSelf->out_awburst),2);
    bufp->chgBit(oldp+1215,(vlSelf->out_wready));
    bufp->chgBit(oldp+1216,(vlSelf->out_wvalid));
    bufp->chgIData(oldp+1217,(vlSelf->out_wdata),32);
    bufp->chgCData(oldp+1218,(vlSelf->out_wstrb),4);
    bufp->chgBit(oldp+1219,(vlSelf->out_wlast));
    bufp->chgBit(oldp+1220,(vlSelf->out_bready));
    bufp->chgBit(oldp+1221,(vlSelf->out_bvalid));
    bufp->chgCData(oldp+1222,(vlSelf->out_bid),4);
    bufp->chgCData(oldp+1223,(vlSelf->out_bresp),2);
    bufp->chgCData(oldp+1224,(((IData)(vlSelf->sdram_top_axi__02Ein_awvalid)
                                ? (IData)(vlSelf->sdram_top_axi__02Ein_awlen)
                                : ((IData)(vlSelf->sdram_top_axi__02Ein_arvalid)
                                    ? (IData)(vlSelf->sdram_top_axi__02Ein_arlen)
                                    : 0U))),8);
    bufp->chgCData(oldp+1225,((((IData)(vlSelf->sdram_top_axi__02Ein_arvalid) 
                                & (IData)(vlSelf->sdram_top_axi__02Ein_arready))
                                ? (0x20U | (((0U == (IData)(vlSelf->sdram_top_axi__02Ein_arlen)) 
                                             << 4U) 
                                            | (IData)(vlSelf->sdram_top_axi__02Ein_arid)))
                                : (((IData)(vlSelf->sdram_top_axi__02Ein_awvalid) 
                                    & (IData)(vlSelf->sdram_top_axi__02Ein_awready))
                                    ? (((0U == (IData)(vlSelf->sdram_top_axi__02Ein_awlen)) 
                                        << 4U) | (IData)(vlSelf->sdram_top_axi__02Ein_awid))
                                    : (((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                        << 5U) | ((
                                                   (0U 
                                                    == (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1226,(((IData)(vlSelf->sdram_top_axi__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelf->sdram_top_axi__02Ein_wvalid))));
    bufp->chgBit(oldp+1227,(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi));
    bufp->chgBit(oldp+1228,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+1229,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->chgBit(oldp+1230,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->chgBit(oldp+1231,((1U & (~ (IData)(vlSelf->ysyxSoCTop__02Eclock)))));
    bufp->chgBit(oldp+1232,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgIData(oldp+1233,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->chgCData(oldp+1234,((((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->chgBit(oldp+1235,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->chgBit(oldp+1236,((1U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h852e10be__0) 
                                   & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                       ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                          >> 1U) : (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))))));
    bufp->chgIData(oldp+1237,((((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                                | (0U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)))
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->chgCData(oldp+1238,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->chgCData(oldp+1239,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->chgBit(oldp+1240,(((2U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state)) 
                             & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                                 : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                    & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))))));
    bufp->chgBit(oldp+1241,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_DONE));
    bufp->chgIData(oldp+1242,(((IData)(vlSelf->__VdfgTmp_hdf8f5741__0)
                                ? vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA
                                : 0U)),32);
    bufp->chgCData(oldp+1243,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->chgCData(oldp+1244,(((1U == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__state))
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
    bufp->chgCData(oldp+1245,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next_state),2);
    bufp->chgCData(oldp+1246,((3U & ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
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
    bufp->chgCData(oldp+1247,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                                ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_rresp)
                                : (((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                     ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                     : 0U) | ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U)))),2);
    bufp->chgBit(oldp+1248,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar_ysyx_24110017__DOT__sel_clint)
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid)
                              : ((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                 & (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->chgBit(oldp+1249,(((IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+1250,((1U & (~ (IData)(vlSelf->ysyxSoCTop__02Ereset)))));
    bufp->chgBit(oldp+1251,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+1252,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgSData(oldp+1253,(((vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_h67fdcefc__0))),11);
    bufp->chgCData(oldp+1254,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgCData(oldp+1255,(vlSelf->ysyxSoCTop__DOT__dut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->chgIData(oldp+1256,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1257,(((0xfffffeU & (vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCTop__DOT__dut__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+1258,(vlSelf->ysyxSoCTop__DOT__dut__DOT__flash__DOT__data_bswap),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
