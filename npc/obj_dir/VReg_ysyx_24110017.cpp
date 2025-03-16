// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VReg_ysyx_24110017.h"
#include "VReg_ysyx_24110017__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VReg_ysyx_24110017::VReg_ysyx_24110017(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VReg_ysyx_24110017__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , DIFFTEST{vlSymsp->TOP.DIFFTEST}
    , pc{vlSymsp->TOP.pc}
    , dnpc{vlSymsp->TOP.dnpc}
    , inst{vlSymsp->TOP.inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VReg_ysyx_24110017::VReg_ysyx_24110017(const char* _vcname__)
    : VReg_ysyx_24110017(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VReg_ysyx_24110017::~VReg_ysyx_24110017() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VReg_ysyx_24110017___024root___eval_debug_assertions(VReg_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
void VReg_ysyx_24110017___024root___eval_static(VReg_ysyx_24110017___024root* vlSelf);
void VReg_ysyx_24110017___024root___eval_initial(VReg_ysyx_24110017___024root* vlSelf);
void VReg_ysyx_24110017___024root___eval_settle(VReg_ysyx_24110017___024root* vlSelf);
void VReg_ysyx_24110017___024root___eval(VReg_ysyx_24110017___024root* vlSelf);

void VReg_ysyx_24110017::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VReg_ysyx_24110017::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VReg_ysyx_24110017___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VReg_ysyx_24110017___024root___eval_static(&(vlSymsp->TOP));
        VReg_ysyx_24110017___024root___eval_initial(&(vlSymsp->TOP));
        VReg_ysyx_24110017___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VReg_ysyx_24110017___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VReg_ysyx_24110017::eventsPending() { return false; }

uint64_t VReg_ysyx_24110017::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VReg_ysyx_24110017::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VReg_ysyx_24110017___024root___eval_final(VReg_ysyx_24110017___024root* vlSelf);

VL_ATTR_COLD void VReg_ysyx_24110017::final() {
    VReg_ysyx_24110017___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VReg_ysyx_24110017::hierName() const { return vlSymsp->name(); }
const char* VReg_ysyx_24110017::modelName() const { return "VReg_ysyx_24110017"; }
unsigned VReg_ysyx_24110017::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VReg_ysyx_24110017::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VReg_ysyx_24110017___024root__trace_init_top(VReg_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VReg_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VReg_ysyx_24110017___024root*>(voidSelf);
    VReg_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VReg_ysyx_24110017___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VReg_ysyx_24110017___024root__trace_register(VReg_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VReg_ysyx_24110017::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VReg_ysyx_24110017::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VReg_ysyx_24110017___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
