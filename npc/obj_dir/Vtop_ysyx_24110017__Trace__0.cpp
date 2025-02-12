// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_ysyx_24110017__Syms.h"


void Vtop_ysyx_24110017___024root__trace_chg_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_ysyx_24110017___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_ysyx_24110017___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_ysyx_24110017___024root__trace_chg_sub_0(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_hcc0ac917__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top_ysyx_24110017__DOT__op),7);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                                 ? (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)
                                 : 0U)),5);
        bufp->chgCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__funct3),3);
        bufp->chgCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+4,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                                 ? (IData)(vlSelf->top_ysyx_24110017__DOT__shamt)
                                 : 0U)),5);
        bufp->chgIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgCData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__shamt),5);
        bufp->chgBit(oldp+8,(vlSelf->top_ysyx_24110017__DOT__wr_en));
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgCData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__a),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__b),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
        bufp->chgIData(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+19,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
        bufp->chgIData(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgBit(oldp+22,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+25,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgIData(oldp+26,(((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
        bufp->chgBit(oldp+28,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               | (3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)))));
        bufp->chgBit(oldp+29,((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgIData(oldp+30,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+31,(((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : 0U)),32);
        bufp->chgCData(oldp+32,((((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                  & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                  ? 1U : (((0x23U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                           & (1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                           ? 3U : (
                                                   ((0x23U 
                                                     == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)))
                                                    ? 0xfU
                                                    : 0U)))),8);
        bufp->chgIData(oldp+33,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                                  << 0xcU) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0) 
                                               << 5U) 
                                              | (IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0)))),32);
        bufp->chgBit(oldp+34,((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+35,((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))));
        bufp->chgBit(oldp+36,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     == vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+37,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((1U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     != vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+38,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((4U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+39,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((5U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+40,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((6U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     < vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+41,(((0x63U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((7U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3)) 
                                  & (vlSelf->top_ysyx_24110017__DOT__r1 
                                     >= vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+42,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
        bufp->chgBit(oldp+43,(((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                               & ((0x302U == vlSelf->top_ysyx_24110017__DOT__imm) 
                                  & (0U == (IData)(vlSelf->top_ysyx_24110017__DOT__funct3))))));
        bufp->chgIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+68,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+69,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+70,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+71,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+72,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+73,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+74,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+75,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+76,(vlSelf->clk));
    bufp->chgBit(oldp+77,(vlSelf->rst));
    bufp->chgIData(oldp+78,(vlSelf->pc),32);
    bufp->chgIData(oldp+79,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+80,(vlSelf->inst),32);
    bufp->chgIData(oldp+81,((((3U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                              | ((0x13U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                 | ((0xfU == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                    | ((0x73U == (IData)(vlSelf->top_ysyx_24110017__DOT__op)) 
                                       | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                              ? vlSelf->top_ysyx_24110017__DOT__res
                              : ((0x6fU == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                  ? ((IData)(4U) + vlSelf->pc)
                                  : ((0x67U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                      ? ((IData)(4U) 
                                         + vlSelf->pc)
                                      : ((0x37U == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                          ? vlSelf->top_ysyx_24110017__DOT__imm
                                          : ((0x17U 
                                              == (IData)(vlSelf->top_ysyx_24110017__DOT__op))
                                              ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                              : 0U)))))),32);
    bufp->chgIData(oldp+82,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                              ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->chgIData(oldp+83,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                              << 0xcU) | ((0U == vlSelf->pc)
                                           ? 0U : (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                   >> 0x14U)))),32);
    bufp->chgIData(oldp+84,((((0U == vlSelf->pc) ? 0U
                               : (vlSelf->__VdfgTmp_ha49b2b96__0 
                                  >> 0xcU)) << 0xcU)),32);
    bufp->chgIData(oldp+85,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                              << 0xdU) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                           << 0xcU) 
                                          | ((0xfffff800U 
                                              & (((0U 
                                                   != vlSelf->pc) 
                                                  << 0xbU) 
                                                 & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                    << 4U))) 
                                             | ((((0U 
                                                   == vlSelf->pc)
                                                   ? 0U
                                                   : 
                                                  (0x3fU 
                                                   & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                      >> 0x19U))) 
                                                 << 5U) 
                                                | (((0U 
                                                     == vlSelf->pc)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                        >> 8U))) 
                                                   << 1U)))))),32);
    bufp->chgIData(oldp+86,((((- (IData)((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0))) 
                              << 0x15U) | (((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0) 
                                            << 0x14U) 
                                           | ((((0U 
                                                 == vlSelf->pc)
                                                 ? 0U
                                                 : 
                                                (0xffU 
                                                 & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                    >> 0xcU))) 
                                               << 0xcU) 
                                              | ((0x7ff800U 
                                                  & (((0U 
                                                       != vlSelf->pc) 
                                                      << 0xbU) 
                                                     & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                        >> 9U))) 
                                                 | (((0U 
                                                      == vlSelf->pc)
                                                      ? 0U
                                                      : 
                                                     (0x3ffU 
                                                      & (vlSelf->__VdfgTmp_ha49b2b96__0 
                                                         >> 0x15U))) 
                                                    << 1U)))))),32);
    __Vtemp_hcc0ac917__0[0U] = vlSelf->pc;
    __Vtemp_hcc0ac917__0[1U] = 0U;
    __Vtemp_hcc0ac917__0[2U] = 0U;
    __Vtemp_hcc0ac917__0[3U] = 0U;
    __Vtemp_hcc0ac917__0[4U] = 0U;
    __Vtemp_hcc0ac917__0[5U] = 0U;
    __Vtemp_hcc0ac917__0[6U] = 0U;
    __Vtemp_hcc0ac917__0[7U] = 0U;
    bufp->chgWData(oldp+87,(__Vtemp_hcc0ac917__0),256);
}

void Vtop_ysyx_24110017___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ysyx_24110017___024root__trace_cleanup\n"); );
    // Init
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
