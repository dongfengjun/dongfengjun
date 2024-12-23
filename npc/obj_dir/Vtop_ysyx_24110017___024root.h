// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_ysyx_24110017.h for the primary calling header

#ifndef VERILATED_VTOP_YSYX_24110017___024ROOT_H_
#define VERILATED_VTOP_YSYX_24110017___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_ysyx_24110017__Syms;

class Vtop_ysyx_24110017___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_OUT(dnpc,31,0);
    IData/*31:0*/ top_ysyx_24110017__DOT____Vcellout__IFU____pinNumber2;
    IData/*31:0*/ __Vtask_top_ysyx_24110017__DOT__IFU__DOT__ifu__0__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top_ysyx_24110017__DOT__RF__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_ysyx_24110017__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ysyx_24110017___024root(Vtop_ysyx_24110017__Syms* symsp, const char* v__name);
    ~Vtop_ysyx_24110017___024root();
    VL_UNCOPYABLE(Vtop_ysyx_24110017___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
