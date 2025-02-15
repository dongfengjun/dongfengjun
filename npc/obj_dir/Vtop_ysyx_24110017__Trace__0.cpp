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
        bufp->chgIData(oldp+1,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+2,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgBit(oldp+3,(vlSelf->top_ysyx_24110017__DOT__wr_en));
        bufp->chgIData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgCData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__raddr2),5);
        bufp->chgIData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+7,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ysyx_24110017__DOT__a),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__b),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ysyx_24110017__DOT__csrs),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ysyx_24110017__DOT__csrs_in),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__mepc),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__mstatus),32);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__mcause),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__mtvec),32);
        bufp->chgBit(oldp+17,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+18,(vlSelf->top_ysyx_24110017__DOT__mstatus_wen));
        bufp->chgBit(oldp+19,(((IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0) 
                               | (IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en))));
        bufp->chgBit(oldp+20,(vlSelf->top_ysyx_24110017__DOT__mtvec_wen));
        bufp->chgIData(oldp+21,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
        bufp->chgIData(oldp+22,(vlSelf->top_ysyx_24110017__DOT__IFU__DOT__rdata),32);
        bufp->chgBit(oldp+23,(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en));
        bufp->chgIData(oldp+24,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+56,(vlSelf->clk));
    bufp->chgBit(oldp+57,(vlSelf->rst));
    bufp->chgIData(oldp+58,(vlSelf->pc),32);
    bufp->chgIData(oldp+59,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+60,(vlSelf->inst),32);
    bufp->chgCData(oldp+61,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+62,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 7U)) : 0U)),5);
    bufp->chgCData(oldp+63,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+64,(((IData)(vlSelf->top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0)
                              ? (0x1fU & (vlSelf->inst 
                                          >> 0x14U))
                              : 0U)),5);
    bufp->chgCData(oldp+65,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgIData(oldp+66,((((3U == (0x7fU & vlSelf->inst)) 
                              | ((0x13U == (0x7fU & vlSelf->inst)) 
                                 | ((0xfU == (0x7fU 
                                              & vlSelf->inst)) 
                                    | ((0x73U == (0x7fU 
                                                  & vlSelf->inst)) 
                                       | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
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
                                              ? vlSelf->__VdfgTmp_h3bd1f014__0
                                              : 0U)))))),32);
    bufp->chgIData(oldp+67,(((IData)(vlSelf->top_ysyx_24110017__DOT__PCU__DOT__ecall_en)
                              ? vlSelf->pc : vlSelf->top_ysyx_24110017__DOT__csrs_in)),32);
    bufp->chgIData(oldp+68,(((3U == (0x7fU & vlSelf->inst))
                              ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                              : 0x80000000U)),32);
    bufp->chgBit(oldp+69,(((0x23U == (0x7fU & vlSelf->inst)) 
                           | (3U == (0x7fU & vlSelf->inst)))));
    bufp->chgBit(oldp+70,((0x23U == (0x7fU & vlSelf->inst))));
    bufp->chgIData(oldp+71,(((0x23U == (0x7fU & vlSelf->inst))
                              ? vlSelf->top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0
                              : 0x80000000U)),32);
    bufp->chgIData(oldp+72,(((0x23U == (0x7fU & vlSelf->inst))
                              ? vlSelf->top_ysyx_24110017__DOT__r2
                              : 0U)),32);
    bufp->chgCData(oldp+73,(((IData)((0x23U == (0x707fU 
                                                & vlSelf->inst)))
                              ? 1U : ((IData)((0x1023U 
                                               == (0x707fU 
                                                   & vlSelf->inst)))
                                       ? 3U : ((IData)(
                                                       (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst)))
                                                ? 0xfU
                                                : 0U)))),8);
    bufp->chgIData(oldp+74,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->inst 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+75,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+76,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelf->inst 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+77,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+78,((((- (IData)((vlSelf->inst 
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
    bufp->chgBit(oldp+79,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+80,((0x67U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+81,((IData)(((0x63U == (0x707fU 
                                              & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      == vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+82,((IData)(((0x1063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      != vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+83,((IData)(((0x4063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+84,((IData)(((0x5063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+85,((IData)(((0x6063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      < vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+86,((IData)(((0x7063U == (0x707fU 
                                                & vlSelf->inst)) 
                                   & (vlSelf->top_ysyx_24110017__DOT__r1 
                                      >= vlSelf->top_ysyx_24110017__DOT__r2)))));
    bufp->chgBit(oldp+87,((IData)(((0x73U == (0x707fU 
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
