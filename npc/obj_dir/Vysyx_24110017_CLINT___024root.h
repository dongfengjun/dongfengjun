// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24110017_CLINT.h for the primary calling header

#ifndef VERILATED_VYSYX_24110017_CLINT___024ROOT_H_
#define VERILATED_VYSYX_24110017_CLINT___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24110017_CLINT__Syms;

class Vysyx_24110017_CLINT___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(DIFFTEST,0,0);
        CData/*0:0*/ ysyx_24110017__DOT__PCU_VALID;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_VALID;
        CData/*0:0*/ ysyx_24110017__DOT__IDU_READY;
        CData/*7:0*/ ysyx_24110017__DOT__IFU_AXI_WSTRB;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_AWVALID;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_WVALID;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_BREADY;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_ARVALID;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_RVALID;
        CData/*0:0*/ ysyx_24110017__DOT__IFU_AXI_RREADY;
        CData/*0:0*/ ysyx_24110017__DOT__IDU_VALID;
        CData/*0:0*/ ysyx_24110017__DOT__EXU_READY;
        CData/*6:0*/ ysyx_24110017__DOT__op;
        CData/*4:0*/ ysyx_24110017__DOT__rd;
        CData/*2:0*/ ysyx_24110017__DOT__funct3;
        CData/*4:0*/ ysyx_24110017__DOT__rs1;
        CData/*4:0*/ ysyx_24110017__DOT__rs2;
        CData/*6:0*/ ysyx_24110017__DOT__funct7;
        CData/*4:0*/ ysyx_24110017__DOT__shamt;
        CData/*0:0*/ ysyx_24110017__DOT__sram_lsu_read;
        CData/*0:0*/ ysyx_24110017__DOT__sram_lsu_write;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_DONE;
        CData/*0:0*/ ysyx_24110017__DOT__EXU_VALID;
        CData/*0:0*/ ysyx_24110017__DOT__WBU_READY;
        CData/*0:0*/ ysyx_24110017__DOT__ls_valid;
        CData/*0:0*/ ysyx_24110017__DOT__gpr_wen;
        CData/*0:0*/ ysyx_24110017__DOT__mepc_wen;
        CData/*0:0*/ ysyx_24110017__DOT__mstatus_wen;
        CData/*0:0*/ ysyx_24110017__DOT__mcause_wen;
        CData/*0:0*/ ysyx_24110017__DOT__mtvec_wen;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_AWVALID;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_WVALID;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_BVALID;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_BREADY;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_ARVALID;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_RVALID;
        CData/*0:0*/ ysyx_24110017__DOT__LSU_AXI_RREADY;
        CData/*1:0*/ ysyx_24110017__DOT__S_AXI_RRESP;
        CData/*0:0*/ ysyx_24110017__DOT__S_AXI_AWREADY;
        CData/*0:0*/ ysyx_24110017__DOT__S_AXI_WREADY;
        CData/*0:0*/ ysyx_24110017__DOT__S_AXI_BVALID;
        CData/*0:0*/ ysyx_24110017__DOT__S_AXI_ARREADY;
        CData/*0:0*/ ysyx_24110017__DOT__S_AXI_RVALID;
        CData/*1:0*/ ysyx_24110017__DOT__U_AXI_RRESP;
        CData/*0:0*/ ysyx_24110017__DOT__U_AXI_AWREADY;
        CData/*0:0*/ ysyx_24110017__DOT__U_AXI_WREADY;
        CData/*0:0*/ ysyx_24110017__DOT__U_AXI_BVALID;
        CData/*0:0*/ ysyx_24110017__DOT__U_AXI_ARREADY;
        CData/*0:0*/ ysyx_24110017__DOT__U_AXI_RVALID;
        CData/*1:0*/ ysyx_24110017__DOT__C_AXI_RRESP;
        CData/*0:0*/ ysyx_24110017__DOT__C_AXI_AWREADY;
        CData/*0:0*/ ysyx_24110017__DOT__C_AXI_WREADY;
        CData/*0:0*/ ysyx_24110017__DOT__C_AXI_BVALID;
        CData/*0:0*/ ysyx_24110017__DOT__C_AXI_ARREADY;
        CData/*0:0*/ ysyx_24110017__DOT__C_AXI_RVALID;
        CData/*0:0*/ ysyx_24110017__DOT__wbu_done;
        CData/*0:0*/ ysyx_24110017__DOT__difftest;
        CData/*4:0*/ ysyx_24110017__DOT__rf_addr;
        CData/*0:0*/ ysyx_24110017__DOT__rf_wen;
        CData/*0:0*/ ysyx_24110017__DOT__mepc_en;
        CData/*0:0*/ ysyx_24110017__DOT__mstatus_en;
    };
    struct {
        CData/*0:0*/ ysyx_24110017__DOT__mcause_en;
        CData/*0:0*/ ysyx_24110017__DOT__mtvec_en;
        CData/*0:0*/ ysyx_24110017__DOT__PCU__DOT__pcu_valid;
        CData/*0:0*/ ysyx_24110017__DOT__PCU__DOT__state;
        CData/*0:0*/ ysyx_24110017__DOT__PCU__DOT__next_state;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__ifu_ready;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__ifu_valid;
        CData/*1:0*/ ysyx_24110017__DOT__IFU__DOT__current_state;
        CData/*1:0*/ ysyx_24110017__DOT__IFU__DOT__next_state;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__axi_rready;
        CData/*1:0*/ ysyx_24110017__DOT__IFU__DOT__state;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__sram_start;
        CData/*0:0*/ ysyx_24110017__DOT__IFU__DOT__sram_ifu_done;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT__idu_ready;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT__idu_valid;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT__state;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT__next_state;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcabf9b88__0;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT____VdfgTmp_he7af239d__0;
        CData/*0:0*/ ysyx_24110017__DOT__IDU__DOT____VdfgTmp_hcbeae6d0__0;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT__exu_ready;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT__exu_valid;
        CData/*1:0*/ ysyx_24110017__DOT__EXU__DOT__state;
        CData/*1:0*/ ysyx_24110017__DOT__EXU__DOT__next_state;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT__ecall_en;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT__mstatus_wen;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT__mtvec_wen;
        CData/*7:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4a93__0;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2b38c4__0;
        CData/*0:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h4e2d1b28__0;
        CData/*1:0*/ ysyx_24110017__DOT__LSU__DOT__state;
        CData/*0:0*/ ysyx_24110017__DOT__LSU__DOT__axi_arvalid;
        CData/*0:0*/ ysyx_24110017__DOT__LSU__DOT__axi_rready;
        CData/*0:0*/ ysyx_24110017__DOT__LSU__DOT__axi_awvalid;
        CData/*0:0*/ ysyx_24110017__DOT__LSU__DOT__axi_wvalid;
        CData/*7:0*/ ysyx_24110017__DOT__LSU__DOT__axi_wstrb;
        CData/*0:0*/ ysyx_24110017__DOT__LSU__DOT__axi_bready;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWVALID;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWREADY;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WVALID;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_BREADY;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARVALID;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARREADY;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RVALID;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RREADY;
        CData/*1:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__state;
        CData/*1:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__next_state;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_uart;
        CData/*0:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__sel_clint;
        CData/*2:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h45f5e0cd__0;
        CData/*2:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h532913bf__0;
        CData/*2:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_hc4546201__0;
        CData/*2:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h1cca5099__0;
        CData/*2:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_h92f2a7ff__0;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_arready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rvalid;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_awready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_wready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bvalid;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rresp;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_bresp;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_wen;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_arready;
    };
    struct {
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rvalid;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_awready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_wready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bvalid;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rresp;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_bresp;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_arready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rvalid;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_awready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_wready;
        CData/*0:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bvalid;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rresp;
        CData/*1:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_bresp;
        CData/*0:0*/ ysyx_24110017__DOT__WBU__DOT__wbu_ready;
        CData/*1:0*/ ysyx_24110017__DOT__WBU__DOT__state;
        CData/*1:0*/ ysyx_24110017__DOT__WBU__DOT__next_state;
        CData/*0:0*/ __VdfgTmp_h9f8b16d6__0;
        CData/*6:0*/ __Vtableidx1;
        CData/*0:0*/ __Vdly__ysyx_24110017__DOT__IFU__DOT__ifu_valid;
        CData/*0:0*/ __Vdly__ysyx_24110017__DOT__IDU__DOT__idu_valid;
        CData/*0:0*/ __Vdly__ysyx_24110017__DOT__ysyx_24110017_UART__DOT__ureg_wen;
        CData/*0:0*/ __Vdly__ysyx_24110017__DOT__LSU_DONE;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h71bb4899__0;
        SData/*8:0*/ __Vtableidx2;
        VL_OUT(pc,31,0);
        VL_OUT(dnpc,31,0);
        VL_OUT(inst,31,0);
        IData/*31:0*/ ysyx_24110017__DOT__IFU_AXI_AWADDR;
        IData/*31:0*/ ysyx_24110017__DOT__IFU_AXI_WDATA;
        IData/*31:0*/ ysyx_24110017__DOT__imm;
        IData/*31:0*/ ysyx_24110017__DOT__res;
        IData/*31:0*/ ysyx_24110017__DOT__mepc;
        IData/*31:0*/ ysyx_24110017__DOT__o_mepc;
        IData/*31:0*/ ysyx_24110017__DOT__mstatus;
        IData/*31:0*/ ysyx_24110017__DOT__o_mstatus;
        IData/*31:0*/ ysyx_24110017__DOT__mcause;
        IData/*31:0*/ ysyx_24110017__DOT__o_mcause;
        IData/*31:0*/ ysyx_24110017__DOT__mtvec;
        IData/*31:0*/ ysyx_24110017__DOT__o_mtvec;
        IData/*31:0*/ ysyx_24110017__DOT__xrd;
        IData/*31:0*/ ysyx_24110017__DOT__w_mepc;
        IData/*31:0*/ ysyx_24110017__DOT__w_mstatus;
        IData/*31:0*/ ysyx_24110017__DOT__w_mcause;
        IData/*31:0*/ ysyx_24110017__DOT__w_mtvec;
        IData/*31:0*/ ysyx_24110017__DOT__r1;
        IData/*31:0*/ ysyx_24110017__DOT__r2;
        IData/*31:0*/ ysyx_24110017__DOT__IFU__DOT__axi_araddr;
        IData/*31:0*/ ysyx_24110017__DOT__IDU__DOT__imm;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT__a;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT__b;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT__res;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT__csr;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT__w_csrs;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h7a84a28f__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h8a6dd475__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07f18ffe__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b9fb43d__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h5b938a5d__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h0221fda6__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h40793b73__0;
    };
    struct {
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hab0375df__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h02f63d20__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_h07e96c0a__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hb1793970__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_he40f06ef__0;
        IData/*31:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_hea5e8f81__0;
        IData/*31:0*/ ysyx_24110017__DOT__LSU__DOT__axi_araddr;
        IData/*31:0*/ ysyx_24110017__DOT__LSU__DOT__axi_awaddr;
        IData/*31:0*/ ysyx_24110017__DOT__LSU__DOT__axi_wdata;
        IData/*31:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_AWADDR;
        IData/*31:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_WDATA;
        IData/*31:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_ARADDR;
        IData/*31:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT__X_AXI_RDATA;
        VlWide<3>/*95:0*/ ysyx_24110017__DOT__Xbar_ysyx_24110017__DOT____VdfgTmp_had8d0b36__0;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_rdata;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__axi_araddr;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__s_rdata;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_rdata;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__axi_araddr;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_UART__DOT__device_uart_reg;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_rdata;
        IData/*31:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__axi_araddr;
        IData/*31:0*/ __VdfgTmp_h007721a4__0;
        IData/*31:0*/ __Vfunc_ysyx_24110017__DOT__ysyx_24110017_SRAM__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_24110017__DOT__EXU__DOT____VdfgTmp_ha05d5428__0;
        QData/*63:0*/ ysyx_24110017__DOT__ysyx_24110017_CLINT__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24110017__DOT__RFU__DOT__rf;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24110017_CLINT__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24110017_CLINT___024root(Vysyx_24110017_CLINT__Syms* symsp, const char* v__name);
    ~Vysyx_24110017_CLINT___024root();
    VL_UNCOPYABLE(Vysyx_24110017_CLINT___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
