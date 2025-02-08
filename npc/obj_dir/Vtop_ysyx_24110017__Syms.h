// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_YSYX_24110017__SYMS_H_
#define VERILATED_VTOP_YSYX_24110017__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_ysyx_24110017.h"

// INCLUDE MODULE CLASSES
#include "Vtop_ysyx_24110017___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop_ysyx_24110017__Vcb_gpr_reg_display_t = void (*) (Vtop_ysyx_24110017__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);

// SYMS CLASS (contains all model state)
class Vtop_ysyx_24110017__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_ysyx_24110017* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_ysyx_24110017___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_top_ysyx_24110017__GPRs;

    // CONSTRUCTORS
    Vtop_ysyx_24110017__Syms(VerilatedContext* contextp, const char* namep, Vtop_ysyx_24110017* modelp);
    ~Vtop_ysyx_24110017__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
