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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgBit(oldp+3,(vlSelf->top_ysyx_24110017__DOT__wr_en));
        bufp->chgIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__a),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__b),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+13,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgBit(oldp+16,(((IData)(vlSelf->__VdfgTmp_he77478c1__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+17,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->__VdfgTmp_he7787a83__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+19,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgCData(oldp+20,((7U & vlSelf->top_ysyx_24110017__DOT__a)),3);
        bufp->chgCData(oldp+21,((0x7fU & vlSelf->top_ysyx_24110017__DOT__b)),7);
        bufp->chgIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
        bufp->chgBit(oldp+23,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b)) 
                               | (3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b)))));
        bufp->chgBit(oldp+24,((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))));
        bufp->chgIData(oldp+25,(((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+26,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                                  ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+27,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__b))
                                  ? vlSelf->top_ysyx_24110017__DOT__imm
                                  : 0U)),32);
        bufp->chgCData(oldp+28,((((0x23U == (0x7fU 
                                             & vlSelf->top_ysyx_24110017__DOT__b)) 
                                  & (0U == (7U & vlSelf->top_ysyx_24110017__DOT__a)))
                                  ? 1U : (((0x23U == 
                                            (0x7fU 
                                             & vlSelf->top_ysyx_24110017__DOT__b)) 
                                           & (1U == 
                                              (7U & vlSelf->top_ysyx_24110017__DOT__a)))
                                           ? 3U : (
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top_ysyx_24110017__DOT__b)) 
                                                    & (2U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->top_ysyx_24110017__DOT__a)))
                                                    ? 0xfU
                                                    : 0U)))),8);
        bufp->chgBit(oldp+29,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
        bufp->chgIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+62,(vlSelf->clk));
    bufp->chgBit(oldp+63,(vlSelf->rst));
    bufp->chgIData(oldp+64,(vlSelf->pc),32);
    bufp->chgIData(oldp+65,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+66,(vlSelf->inst),32);
    bufp->chgCData(oldp+67,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+68,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 7U)) : 0U)),5);
    bufp->chgCData(oldp+69,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+70,((((0x33U == (0x7fU & vlSelf->inst)) 
                              | (0x13U == (0x7fU & vlSelf->inst)))
                              ? (vlSelf->inst >> 0x19U)
                              : 0U)),7);
    bufp->chgCData(oldp+71,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+72,((((3U == (0x7fU & vlSelf->inst)) 
                              | ((0x13U == (0x7fU & vlSelf->inst)) 
                                 | ((0xfU == (0x7fU 
                                              & vlSelf->inst)) 
                                    | ((0x73U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (IData)(vlSelf->__VdfgTmp_hae9cdf9b__0)))))
                              ? vlSelf->top_ysyx_24110017__DOT__res
                              : ((0x6fU == (0x7fU & vlSelf->inst))
                                  ? ((IData)(4U) + vlSelf->pc)
                                  : ((0x67U == (0x7fU 
                                                & vlSelf->inst))
                                      ? ((IData)(4U) 
                                         + vlSelf->pc)
                                      : ((0x37U == 
                                          (0x7fU & vlSelf->inst))
                                          ? vlSelf->top_ysyx_24110017__DOT__imm
                                          : ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->inst))
                                              ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                              : 0U)))))),32);
    bufp->chgIData(oldp+73,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                              ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->chgCData(oldp+74,((7U & (vlSelf->inst >> 0xcU))),7);
    bufp->chgCData(oldp+75,((0x1fU & vlSelf->inst)),5);
    bufp->chgIData(oldp+76,((((0x33U == (0x7fU & vlSelf->inst)) 
                              | (0x13U == (0x7fU & vlSelf->inst)))
                              ? (vlSelf->inst >> 0x19U)
                              : 0U)),32);
    bufp->chgIData(oldp+77,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),32);
    bufp->chgIData(oldp+78,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->inst 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+79,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+80,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->inst 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+81,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xdU) | ((0x1000U 
                                           & (vlSelf->inst 
                                              >> 0x13U)) 
                                          | ((0x800U 
                                              & (vlSelf->inst 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->inst 
                                                      >> 7U))))))),32);
    bufp->chgIData(oldp+82,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0x15U) | ((0x100000U 
                                            & (vlSelf->inst 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlSelf->inst) 
                                              | ((0x800U 
                                                  & (vlSelf->inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))))))),32);
    bufp->chgBit(oldp+83,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+84,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+85,((IData)(((0x63U == (0x707fU 
                                              & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+86,((IData)(((0x1063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+87,((IData)(((0x4063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+88,((IData)(((0x5063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+89,((IData)(((0x6063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+90,((IData)(((0x7063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+91,((IData)(((0x73U == (0x707fU 
                                              & vlSelf->inst)) 
                                   & (0x302U == vlSelf->top_ysyx_24110017__DOT__imm)))));
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
