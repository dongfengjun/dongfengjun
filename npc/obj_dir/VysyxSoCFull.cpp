// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VysyxSoCFull::VysyxSoCFull(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VysyxSoCFull__Syms(contextp(), _vcname__, this)}
    , ysyxSoCTop__02Eclock{vlSymsp->TOP.ysyxSoCTop__02Eclock}
    , ysyxSoCTop__02Ereset{vlSymsp->TOP.ysyxSoCTop__02Ereset}
    , sdram_top_axi__02Eclock{vlSymsp->TOP.sdram_top_axi__02Eclock}
    , sdram_top_axi__02Ereset{vlSymsp->TOP.sdram_top_axi__02Ereset}
    , axi4_delayer__02Eclock{vlSymsp->TOP.axi4_delayer__02Eclock}
    , axi4_delayer__02Ereset{vlSymsp->TOP.axi4_delayer__02Ereset}
    , axi4_delayer__02Ein_arready{vlSymsp->TOP.axi4_delayer__02Ein_arready}
    , axi4_delayer__02Ein_arvalid{vlSymsp->TOP.axi4_delayer__02Ein_arvalid}
    , axi4_delayer__02Ein_arid{vlSymsp->TOP.axi4_delayer__02Ein_arid}
    , axi4_delayer__02Ein_arlen{vlSymsp->TOP.axi4_delayer__02Ein_arlen}
    , axi4_delayer__02Ein_arsize{vlSymsp->TOP.axi4_delayer__02Ein_arsize}
    , axi4_delayer__02Ein_arburst{vlSymsp->TOP.axi4_delayer__02Ein_arburst}
    , axi4_delayer__02Ein_rready{vlSymsp->TOP.axi4_delayer__02Ein_rready}
    , axi4_delayer__02Ein_rvalid{vlSymsp->TOP.axi4_delayer__02Ein_rvalid}
    , axi4_delayer__02Ein_rid{vlSymsp->TOP.axi4_delayer__02Ein_rid}
    , axi4_delayer__02Ein_rresp{vlSymsp->TOP.axi4_delayer__02Ein_rresp}
    , axi4_delayer__02Ein_rlast{vlSymsp->TOP.axi4_delayer__02Ein_rlast}
    , axi4_delayer__02Ein_awready{vlSymsp->TOP.axi4_delayer__02Ein_awready}
    , axi4_delayer__02Ein_awvalid{vlSymsp->TOP.axi4_delayer__02Ein_awvalid}
    , axi4_delayer__02Ein_awid{vlSymsp->TOP.axi4_delayer__02Ein_awid}
    , axi4_delayer__02Ein_awlen{vlSymsp->TOP.axi4_delayer__02Ein_awlen}
    , axi4_delayer__02Ein_awsize{vlSymsp->TOP.axi4_delayer__02Ein_awsize}
    , axi4_delayer__02Ein_awburst{vlSymsp->TOP.axi4_delayer__02Ein_awburst}
    , axi4_delayer__02Ein_wready{vlSymsp->TOP.axi4_delayer__02Ein_wready}
    , axi4_delayer__02Ein_wvalid{vlSymsp->TOP.axi4_delayer__02Ein_wvalid}
    , axi4_delayer__02Ein_wstrb{vlSymsp->TOP.axi4_delayer__02Ein_wstrb}
    , axi4_delayer__02Ein_wlast{vlSymsp->TOP.axi4_delayer__02Ein_wlast}
    , axi4_delayer__02Ein_bready{vlSymsp->TOP.axi4_delayer__02Ein_bready}
    , axi4_delayer__02Ein_bvalid{vlSymsp->TOP.axi4_delayer__02Ein_bvalid}
    , axi4_delayer__02Ein_bid{vlSymsp->TOP.axi4_delayer__02Ein_bid}
    , axi4_delayer__02Ein_bresp{vlSymsp->TOP.axi4_delayer__02Ein_bresp}
    , out_arready{vlSymsp->TOP.out_arready}
    , out_arvalid{vlSymsp->TOP.out_arvalid}
    , out_arid{vlSymsp->TOP.out_arid}
    , out_arlen{vlSymsp->TOP.out_arlen}
    , out_arsize{vlSymsp->TOP.out_arsize}
    , out_arburst{vlSymsp->TOP.out_arburst}
    , out_rready{vlSymsp->TOP.out_rready}
    , out_rvalid{vlSymsp->TOP.out_rvalid}
    , out_rid{vlSymsp->TOP.out_rid}
    , out_rresp{vlSymsp->TOP.out_rresp}
    , out_rlast{vlSymsp->TOP.out_rlast}
    , out_awready{vlSymsp->TOP.out_awready}
    , out_awvalid{vlSymsp->TOP.out_awvalid}
    , out_awid{vlSymsp->TOP.out_awid}
    , out_awlen{vlSymsp->TOP.out_awlen}
    , out_awsize{vlSymsp->TOP.out_awsize}
    , out_awburst{vlSymsp->TOP.out_awburst}
    , out_wready{vlSymsp->TOP.out_wready}
    , out_wvalid{vlSymsp->TOP.out_wvalid}
    , out_wstrb{vlSymsp->TOP.out_wstrb}
    , out_wlast{vlSymsp->TOP.out_wlast}
    , out_bready{vlSymsp->TOP.out_bready}
    , out_bvalid{vlSymsp->TOP.out_bvalid}
    , out_bid{vlSymsp->TOP.out_bid}
    , out_bresp{vlSymsp->TOP.out_bresp}
    , sdram_top_axi__02Ein_awready{vlSymsp->TOP.sdram_top_axi__02Ein_awready}
    , sdram_top_axi__02Ein_awvalid{vlSymsp->TOP.sdram_top_axi__02Ein_awvalid}
    , sdram_top_axi__02Ein_awid{vlSymsp->TOP.sdram_top_axi__02Ein_awid}
    , sdram_top_axi__02Ein_awlen{vlSymsp->TOP.sdram_top_axi__02Ein_awlen}
    , sdram_top_axi__02Ein_awsize{vlSymsp->TOP.sdram_top_axi__02Ein_awsize}
    , sdram_top_axi__02Ein_awburst{vlSymsp->TOP.sdram_top_axi__02Ein_awburst}
    , sdram_top_axi__02Ein_wready{vlSymsp->TOP.sdram_top_axi__02Ein_wready}
    , sdram_top_axi__02Ein_wvalid{vlSymsp->TOP.sdram_top_axi__02Ein_wvalid}
    , sdram_top_axi__02Ein_wstrb{vlSymsp->TOP.sdram_top_axi__02Ein_wstrb}
    , sdram_top_axi__02Ein_wlast{vlSymsp->TOP.sdram_top_axi__02Ein_wlast}
    , sdram_top_axi__02Ein_bready{vlSymsp->TOP.sdram_top_axi__02Ein_bready}
    , sdram_top_axi__02Ein_bvalid{vlSymsp->TOP.sdram_top_axi__02Ein_bvalid}
    , sdram_top_axi__02Ein_bresp{vlSymsp->TOP.sdram_top_axi__02Ein_bresp}
    , sdram_top_axi__02Ein_bid{vlSymsp->TOP.sdram_top_axi__02Ein_bid}
    , sdram_top_axi__02Ein_arready{vlSymsp->TOP.sdram_top_axi__02Ein_arready}
    , sdram_top_axi__02Ein_arvalid{vlSymsp->TOP.sdram_top_axi__02Ein_arvalid}
    , sdram_top_axi__02Ein_arid{vlSymsp->TOP.sdram_top_axi__02Ein_arid}
    , sdram_top_axi__02Ein_arlen{vlSymsp->TOP.sdram_top_axi__02Ein_arlen}
    , sdram_top_axi__02Ein_arsize{vlSymsp->TOP.sdram_top_axi__02Ein_arsize}
    , sdram_top_axi__02Ein_arburst{vlSymsp->TOP.sdram_top_axi__02Ein_arburst}
    , sdram_top_axi__02Ein_rready{vlSymsp->TOP.sdram_top_axi__02Ein_rready}
    , sdram_top_axi__02Ein_rvalid{vlSymsp->TOP.sdram_top_axi__02Ein_rvalid}
    , sdram_top_axi__02Ein_rresp{vlSymsp->TOP.sdram_top_axi__02Ein_rresp}
    , sdram_top_axi__02Ein_rlast{vlSymsp->TOP.sdram_top_axi__02Ein_rlast}
    , sdram_top_axi__02Ein_rid{vlSymsp->TOP.sdram_top_axi__02Ein_rid}
    , sdram_clk{vlSymsp->TOP.sdram_clk}
    , sdram_cke{vlSymsp->TOP.sdram_cke}
    , sdram_cs{vlSymsp->TOP.sdram_cs}
    , sdram_ras{vlSymsp->TOP.sdram_ras}
    , sdram_cas{vlSymsp->TOP.sdram_cas}
    , sdram_we{vlSymsp->TOP.sdram_we}
    , sdram_ba{vlSymsp->TOP.sdram_ba}
    , sdram_dqm{vlSymsp->TOP.sdram_dqm}
    , sdram_a{vlSymsp->TOP.sdram_a}
    , sdram_dq{vlSymsp->TOP.sdram_dq}
    , axi4_delayer__02Ein_araddr{vlSymsp->TOP.axi4_delayer__02Ein_araddr}
    , axi4_delayer__02Ein_rdata{vlSymsp->TOP.axi4_delayer__02Ein_rdata}
    , axi4_delayer__02Ein_awaddr{vlSymsp->TOP.axi4_delayer__02Ein_awaddr}
    , axi4_delayer__02Ein_wdata{vlSymsp->TOP.axi4_delayer__02Ein_wdata}
    , out_araddr{vlSymsp->TOP.out_araddr}
    , out_rdata{vlSymsp->TOP.out_rdata}
    , out_awaddr{vlSymsp->TOP.out_awaddr}
    , out_wdata{vlSymsp->TOP.out_wdata}
    , sdram_top_axi__02Ein_awaddr{vlSymsp->TOP.sdram_top_axi__02Ein_awaddr}
    , sdram_top_axi__02Ein_wdata{vlSymsp->TOP.sdram_top_axi__02Ein_wdata}
    , sdram_top_axi__02Ein_araddr{vlSymsp->TOP.sdram_top_axi__02Ein_araddr}
    , sdram_top_axi__02Ein_rdata{vlSymsp->TOP.sdram_top_axi__02Ein_rdata}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VysyxSoCFull::VysyxSoCFull(const char* _vcname__)
    : VysyxSoCFull(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VysyxSoCFull::~VysyxSoCFull() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VysyxSoCFull::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VysyxSoCFull___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VysyxSoCFull___024root___eval_static(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_initial(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VysyxSoCFull___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VysyxSoCFull::eventsPending() { return false; }

uint64_t VysyxSoCFull::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VysyxSoCFull::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull::final() {
    VysyxSoCFull___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VysyxSoCFull::hierName() const { return vlSymsp->name(); }
const char* VysyxSoCFull::modelName() const { return "VysyxSoCFull"; }
unsigned VysyxSoCFull::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VysyxSoCFull::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VysyxSoCFull___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VysyxSoCFull::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VysyxSoCFull___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
