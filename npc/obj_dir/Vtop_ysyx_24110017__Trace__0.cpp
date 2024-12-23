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
        bufp->chgCData(oldp+0,((0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)),7);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->top_ysyx_24110017__DOT__wr_en)
                                 ? (0x1fU & (vlSelf->top_ysyx_24110017__DOT__inst 
                                             >> 7U))
                                 : 0U)),5);
        bufp->chgCData(oldp+2,((7U & (vlSelf->top_ysyx_24110017__DOT__inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+3,(vlSelf->top_ysyx_24110017__DOT__rs1),5);
        bufp->chgCData(oldp+4,(vlSelf->top_ysyx_24110017__DOT__rs2),5);
        bufp->chgIData(oldp+5,(vlSelf->top_ysyx_24110017__DOT__imm),32);
        bufp->chgCData(oldp+6,(vlSelf->top_ysyx_24110017__DOT__funct7),7);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top_ysyx_24110017__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgBit(oldp+8,(vlSelf->top_ysyx_24110017__DOT__wr_en));
        bufp->chgIData(oldp+9,(vlSelf->top_ysyx_24110017__DOT__inst),32);
        bufp->chgBit(oldp+10,((0x6fU == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
        bufp->chgBit(oldp+11,((0x67U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
        bufp->chgIData(oldp+12,(vlSelf->top_ysyx_24110017__DOT__res),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ysyx_24110017__DOT__r1),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ysyx_24110017__DOT__r2),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ysyx_24110017__DOT__a),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ysyx_24110017__DOT__b),32);
        bufp->chgIData(oldp+17,(((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                  ? (0xfffffffcU & vlSelf->__VdfgTmp_hf40cef09__0)
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ysyx_24110017__DOT__EXU__DOT__rdata),32);
        bufp->chgBit(oldp+19,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                               | (3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)))));
        bufp->chgBit(oldp+20,((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))));
        bufp->chgIData(oldp+21,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                  ? (0xfffffffcU & vlSelf->__VdfgTmp_hf40cef09__0)
                                  : 0x80000000U)),32);
        bufp->chgIData(oldp+22,(((0x23U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                  ? vlSelf->top_ysyx_24110017__DOT__r2
                                  : 0U)),32);
        bufp->chgCData(oldp+23,(((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->top_ysyx_24110017__DOT__inst)))
                                  ? 1U : ((IData)((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top_ysyx_24110017__DOT__inst)))
                                           ? 3U : ((IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top_ysyx_24110017__DOT__inst)))
                                                    ? 0xfU
                                                    : 0U)))),8);
        bufp->chgIData(oldp+24,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top_ysyx_24110017__DOT__inst 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+25,((0xfffff000U & vlSelf->top_ysyx_24110017__DOT__inst)),32);
        bufp->chgIData(oldp+26,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+27,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+28,((((- (IData)((vlSelf->top_ysyx_24110017__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->top_ysyx_24110017__DOT__inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->top_ysyx_24110017__DOT__inst 
                                                           >> 0x14U))))))),32);
        bufp->chgBit(oldp+29,((IData)(((0x63U == (0x707fU 
                                                  & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & (vlSelf->top_ysyx_24110017__DOT__r1 
                                          == vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+30,((IData)(((0x1063U == 
                                        (0x707fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & (vlSelf->top_ysyx_24110017__DOT__r1 
                                          != vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+31,((IData)(((0x4063U == 
                                        (0x707fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & VL_LTS_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+32,((IData)(((0x5063U == 
                                        (0x707fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & VL_GTES_III(32, vlSelf->top_ysyx_24110017__DOT__r1, vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+33,((IData)(((0x6063U == 
                                        (0x707fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & (vlSelf->top_ysyx_24110017__DOT__r1 
                                          < vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgBit(oldp+34,((IData)(((0x7063U == 
                                        (0x707fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       & (vlSelf->top_ysyx_24110017__DOT__r1 
                                          >= vlSelf->top_ysyx_24110017__DOT__r2)))));
        bufp->chgIData(oldp+35,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ysyx_24110017__DOT__RF__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
    bufp->chgBit(oldp+68,(vlSelf->rst));
    bufp->chgIData(oldp+69,(vlSelf->pc),32);
    bufp->chgIData(oldp+70,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+71,((((3U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                              | ((0x13U == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                 | ((0xfU == (0x7fU 
                                              & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                    | ((0x73U == (0x7fU 
                                                  & vlSelf->top_ysyx_24110017__DOT__inst)) 
                                       | (IData)(vlSelf->top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0)))))
                              ? vlSelf->top_ysyx_24110017__DOT__res
                              : ((0x6fU == (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                  ? ((IData)(4U) + vlSelf->pc)
                                  : ((0x37U == (0x7fU 
                                                & vlSelf->top_ysyx_24110017__DOT__inst))
                                      ? vlSelf->top_ysyx_24110017__DOT__imm
                                      : ((0x17U == 
                                          (0x7fU & vlSelf->top_ysyx_24110017__DOT__inst))
                                          ? vlSelf->top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0
                                          : 0U))))),32);
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
