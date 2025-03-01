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
        CData/*4:0*/ top_ysyx_24110017__DOT__rs1;
        CData/*4:0*/ top_ysyx_24110017__DOT__rs2;
        CData/*6:0*/ top_ysyx_24110017__DOT__funct7;
        CData/*0:0*/ top_ysyx_24110017__DOT__wr_en;
        CData/*0:0*/ top_ysyx_24110017__DOT__mstatus_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__mtvec_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__IF_DONE;
        CData/*3:0*/ top_ysyx_24110017__DOT__AXI_WSTRB;
        CData/*1:0*/ top_ysyx_24110017__DOT__AXI_BRESP;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_AWVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_AWREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_WVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_WREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_BVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_BREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__AXI_ARREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__PCU__DOT__ecall_en;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
        CData/*1:0*/ top_ysyx_24110017__DOT__IFU__DOT__state;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rvalid;
        CData/*1:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rresp;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7ae3448__0;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbe0b758__0;
        CData/*0:0*/ top_ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9aa8__0;
        CData/*4:0*/ top_ysyx_24110017__DOT__EXU__DOT____Vcellout__LSU_ysyx_24110017____pinNumber10;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__ldone;
        CData/*7:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wstrb_reg;
        CData/*1:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_RRESP;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_AWREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_WREADY;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_BVALID;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__AXI_ARREADY;
        CData/*1:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__state;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_arvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_rready;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wvalid;
        CData/*7:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wstrb;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_bready;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
        CData/*0:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
        CData/*1:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rresp;
        CData/*1:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bresp;
        CData/*0:0*/ top_ysyx_24110017__DOT__WBU__DOT__mepc_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__WBU__DOT__mstatus_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__WBU__DOT__mcause_wen;
        CData/*0:0*/ top_ysyx_24110017__DOT__WBU__DOT__mtvec_wen;
        CData/*0:0*/ __VdfgTmp_he77478c1__0;
        CData/*0:0*/ __VdfgTmp_he7787a83__0;
        CData/*0:0*/ __VdfgTmp_hae9cdf9b__0;
        CData/*1:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__state;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__IFU__DOT__axi_rready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_arready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_bvalid;
    };
    struct {
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_awready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_wready;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rvalid;
        CData/*0:0*/ __Vdly__top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_arready;
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
        IData/*31:0*/ top_ysyx_24110017__DOT__csrs;
        IData/*31:0*/ top_ysyx_24110017__DOT__csrs_in;
        IData/*31:0*/ top_ysyx_24110017__DOT__mepc;
        IData/*31:0*/ top_ysyx_24110017__DOT__mstatus;
        IData/*31:0*/ top_ysyx_24110017__DOT__mcause;
        IData/*31:0*/ top_ysyx_24110017__DOT__mtvec;
        IData/*31:0*/ top_ysyx_24110017__DOT__AXI_AWADDR;
        IData/*31:0*/ top_ysyx_24110017__DOT__AXI_WDATA;
        IData/*31:0*/ top_ysyx_24110017__DOT__PCU__DOT____VdfgTmp_h051484d1__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__IFU__DOT__axi_araddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__axi_rdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__tmp;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h56110f4f__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5d6feb86__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h57160f83__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hecdda523__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b8471d5__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h2b7712a5__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h37e52d1e__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha4994cf9__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h12d66a67__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h31150b40__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hece52006__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_araddr_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awaddr_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wdata_reg;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_araddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_awaddr;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__axi_wdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT____VdfgTmp_hd43fef8a__0;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__axi_rdata;
        IData/*31:0*/ top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__s_rdata;
        IData/*31:0*/ __Vfunc_top_ysyx_24110017__DOT__SRAM_IFU_ysyx_24110017__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top_ysyx_24110017__DOT__EXU__DOT__LSU_ysyx_24110017__DOT__SRAM_LSU_ysyx_24110017__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vdly__pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top_ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h72806210__0;
        VlUnpacked<IData/*31:0*/, 32> top_ysyx_24110017__DOT__RF__DOT__rf;
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
