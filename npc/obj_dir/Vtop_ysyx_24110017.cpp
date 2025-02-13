// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_ysyx_24110017.h"
#include "Vtop_ysyx_24110017__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop_ysyx_24110017::Vtop_ysyx_24110017(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_ysyx_24110017__Syms(contextp(), _vcname__, this)}
    , Sta_RegisterFile__02Eclk{vlSymsp->TOP.Sta_RegisterFile__02Eclk}
    , top_ysyx_24110017__02Eclk{vlSymsp->TOP.top_ysyx_24110017__02Eclk}
    , waddr{vlSymsp->TOP.waddr}
    , wen{vlSymsp->TOP.wen}
    , raddr1{vlSymsp->TOP.raddr1}
    , rst{vlSymsp->TOP.rst}
    , wdata{vlSymsp->TOP.wdata}
    , r1{vlSymsp->TOP.r1}
    , pc{vlSymsp->TOP.pc}
    , dnpc{vlSymsp->TOP.dnpc}
    , inst{vlSymsp->TOP.inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_ysyx_24110017::Vtop_ysyx_24110017(const char* _vcname__)
    : Vtop_ysyx_24110017(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_ysyx_24110017::~Vtop_ysyx_24110017() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_ysyx_24110017___024root___eval_debug_assertions(Vtop_ysyx_24110017___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_ysyx_24110017___024root___eval_static(Vtop_ysyx_24110017___024root* vlSelf);
void Vtop_ysyx_24110017___024root___eval_initial(Vtop_ysyx_24110017___024root* vlSelf);
void Vtop_ysyx_24110017___024root___eval_settle(Vtop_ysyx_24110017___024root* vlSelf);
void Vtop_ysyx_24110017___024root___eval(Vtop_ysyx_24110017___024root* vlSelf);

void Vtop_ysyx_24110017::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_ysyx_24110017::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_ysyx_24110017___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_ysyx_24110017___024root___eval_static(&(vlSymsp->TOP));
        Vtop_ysyx_24110017___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_ysyx_24110017___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_ysyx_24110017___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_ysyx_24110017::eventsPending() { return false; }

uint64_t Vtop_ysyx_24110017::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_ysyx_24110017::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_ysyx_24110017___024root___eval_final(Vtop_ysyx_24110017___024root* vlSelf);

VL_ATTR_COLD void Vtop_ysyx_24110017::final() {
    Vtop_ysyx_24110017___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_ysyx_24110017::hierName() const { return vlSymsp->name(); }
const char* Vtop_ysyx_24110017::modelName() const { return "Vtop_ysyx_24110017"; }
unsigned Vtop_ysyx_24110017::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop_ysyx_24110017::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_ysyx_24110017___024root__trace_init_top(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_ysyx_24110017___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ysyx_24110017___024root*>(voidSelf);
    Vtop_ysyx_24110017__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop_ysyx_24110017___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop_ysyx_24110017___024root__trace_register(Vtop_ysyx_24110017___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_ysyx_24110017::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_ysyx_24110017::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_ysyx_24110017___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
