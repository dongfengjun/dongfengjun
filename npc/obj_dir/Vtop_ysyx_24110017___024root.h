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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(DIFFTEST,0,0);
        CData/*4:0*/ top_ysyx_24110017__DOT__rd;
        CData/*4:0*/ top_ysyx_24110017__DOT__lrd;
        CData/*4:0*/ top_ysyx_24110017__DOT__rs1;
        CData/*6:0*/ top_ysyx_24110017__DOT__funct7;
        CData/*0:0*/ top_ysyx_24110017__DOT__ldone;
        CData/*0:0*/ top_ysyx_24110017__DOT__mstatus_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__mtvec_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_DONE;
        CData/*3:0*/ top_ysyx_24110017__DOT__IFU_AXI_WSTRB;
        CData/*1:0*/ top_ysyx_24110017__DOT__IFU_AXI_BRESP;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_AWVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_AWREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_WVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_WREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_BVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_BREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU_AXI_ARREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__lbdone;
        CData/*0:0*/ top_ysyx_24110017__DOT__lhdone;
        CData/*0:0*/ top_ysyx_24110017__DOT__lwdone;
        CData/*0:0*/ top_ysyx_24110017__DOT__lbudone;
        CData/*0:0*/ top_ysyx_24110017__DOT__lhudone;
        CData/*1:0*/ top_ysyx_24110017__DOT__LSU_AXI_RRESP;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU_AXI_AWREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU_AXI_WREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU_AXI_BVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU_AXI_ARREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
        CData/*1:0*/ top_ysyx_24110017__DOT__IFU__DOT__state;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid;
        CData/*1:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT__wr_en;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT__mepc_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT__mstatus_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT__mcause_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT__mtvec_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__ecall_en;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0;
        CData/*7:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb_reg;
        CData/*1:0*/ top_ysyx_24110017__DOT__LSU__DOT__state;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_rready;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_awvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
        CData/*7:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_wstrb;
        CData/*0:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_bready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
        CData/*1:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp;
        CData/*1:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_wen;
        CData/*0:0*/ __VdfgTmp_h066b65f5__0;
        CData/*1:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state;
    };
    struct {
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
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
        IData/*31:0*/ top_ysyx_24110017__DOT__mepc;
        IData/*31:0*/ top_ysyx_24110017__DOT__mstatus;
        IData/*31:0*/ top_ysyx_24110017__DOT__o_mstatus;
        IData/*31:0*/ top_ysyx_24110017__DOT__mcause;
        IData/*31:0*/ top_ysyx_24110017__DOT__mtvec;
        IData/*31:0*/ top_ysyx_24110017__DOT__IFU_AXI_AWADDR;
        IData/*31:0*/ top_ysyx_24110017__DOT__IFU_AXI_WDATA;
        IData/*31:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_araddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__a;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__b;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__csr;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_araddr_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_wdata_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_araddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_awaddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__LSU__DOT__axi_wdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata;
        IData/*31:0*/ __Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vdly__pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0;
        VlUnpacked<IData/*31:0*/, 32> top_ysyx_24110017__DOT__RFU__DOT__rf;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
