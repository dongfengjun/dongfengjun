// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__7__data;
    __Vtask_flash_read__7__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi)), __Vtask_flash_read__7__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__7__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, CData/*7:0*/ len);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read__8__data;
    __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read__8__data = 0;
    // Body
    if (vlSelf->ysyxSoCFull__DOT__psram__DOT__ren) {
        if (VL_LIKELY((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read__8__data);
            vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata 
                = __Vtask_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_read__8__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `EBh` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: psram.v:129: Assertion failed in %NysyxSoCFull.psram.psram_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../ysyxSoC/perip/psram/psram.v", 129, "");
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__psram__DOT__wen) {
        if (VL_LIKELY((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psram_cmd_i__DOT__psram_write_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, 
                                                                                ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                                                [3U] 
                                                                                << 0x18U) 
                                                                                | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                                                [2U] 
                                                                                << 0x10U) 
                                                                                | ((vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                                                [1U] 
                                                                                << 8U) 
                                                                                | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata
                                                                                [0U]))), (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__len));
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only     support `38h` write command\n",
                       8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: psram.v:136: Assertion failed in %NysyxSoCFull.psram.psram_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../ysyxSoC/perip/psram/psram.v", 136, "");
        }
    }
}
