// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VReg_ysyx_24110017.h for the primary calling header

#ifndef VERILATED_VREG_YSYX_24110017___024ROOT_H_
#define VERILATED_VREG_YSYX_24110017___024ROOT_H_  // guard

#include "verilated.h"

class VReg_ysyx_24110017__Syms;

class VReg_ysyx_24110017___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*6:0*/ top_ysyx_24110017__DOT__op;
    CData/*2:0*/ top_ysyx_24110017__DOT__funct3;
    CData/*4:0*/ top_ysyx_24110017__DOT__rs1;
    CData/*6:0*/ top_ysyx_24110017__DOT__funct7;
    CData/*4:0*/ top_ysyx_24110017__DOT__shamt;
    CData/*0:0*/ top_ysyx_24110017__DOT__wr_en;
    CData/*4:0*/ top_ysyx_24110017__DOT__raddr2;
    CData/*0:0*/ top_ysyx_24110017__DOT__mstatus_wen;
    CData/*0:0*/ top_ysyx_24110017__DOT__mtvec_wen;
    CData/*0:0*/ top_ysyx_24110017__DOT____VdfgTmp_hee636fe3__0;
    CData/*0:0*/ top_ysyx_24110017__DOT____VdfgTmp_h4e2b3a6e__0;
    CData/*0:0*/ top_ysyx_24110017__DOT____VdfgTmp_h4e2d1a8e__0;
    CData/*0:0*/ top_ysyx_24110017__DOT__PCU__DOT__ecall_en;
    CData/*7:0*/ top_ysyx_24110017__DOT__IFU__DOT__waddr;
    CData/*7:0*/ top_ysyx_24110017__DOT__IFU__DOT__raddr2;
    CData/*4:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc3969ba__0;
    CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0;
    CData/*6:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdc327e75__0;
    CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hdcea48d4__0;
    CData/*7:0*/ top_ysyx_24110017__DOT__EXU__DOT__raddr2;
    CData/*7:0*/ top_ysyx_24110017__DOT__EXU__DOT____Vcellinp__WRINST____pinNumber5;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_OUT(dnpc,31,0);
    VL_OUT(inst,31,0);
    IData/*31:0*/ top_ysyx_24110017__DOT__imm;
    IData/*31:0*/ top_ysyx_24110017__DOT__res;
    IData/*31:0*/ top_ysyx_24110017__DOT__r1;
    IData/*31:0*/ top_ysyx_24110017__DOT__r2;
    IData/*31:0*/ top_ysyx_24110017__DOT__a;
    IData/*31:0*/ top_ysyx_24110017__DOT__b;
    IData/*31:0*/ top_ysyx_24110017__DOT__csrs;
    IData/*31:0*/ top_ysyx_24110017__DOT__csrs_in;
    IData/*31:0*/ top_ysyx_24110017__DOT__mepc;
    IData/*31:0*/ top_ysyx_24110017__DOT__mstatus;
    IData/*31:0*/ top_ysyx_24110017__DOT__mcause;
    IData/*31:0*/ top_ysyx_24110017__DOT__mtvec;
    IData/*31:0*/ top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0;
    IData/*31:0*/ top_ysyx_24110017__DOT__IFU__DOT__wdata;
    IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hd43fef8a__0;
    IData/*31:0*/ __VdfgTmp_hfab7399b__0;
    IData/*31:0*/ __VdfgTmp_hed8400d2__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> top_ysyx_24110017__DOT__IFU__DOT__IM__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> top_ysyx_24110017__DOT__RF__DOT__rf;
    VlUnpacked<IData/*31:0*/, 256> top_ysyx_24110017__DOT__EXU__DOT__WRINST__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VReg_ysyx_24110017__Syms* const vlSymsp;

    // CONSTRUCTORS
    VReg_ysyx_24110017___024root(VReg_ysyx_24110017__Syms* symsp, const char* v__name);
    ~VReg_ysyx_24110017___024root();
    VL_UNCOPYABLE(VReg_ysyx_24110017___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
