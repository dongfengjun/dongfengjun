// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_24110017_CLINT__SYMS_H_
#define VERILATED_VYSYX_24110017_CLINT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_24110017_CLINT.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_24110017_CLINT___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vysyx_24110017_CLINT__Vcb_csr_display_t = void (*) (Vysyx_24110017_CLINT__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_display__Vfuncrtn);
using Vysyx_24110017_CLINT__Vcb_gpr_reg_display_t = void (*) (Vysyx_24110017_CLINT__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);

// SYMS CLASS (contains all model state)
class Vysyx_24110017_CLINT__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_24110017_CLINT* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_24110017_CLINT___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx_24110017;
    VerilatedScope __Vscope_ysyx_24110017__RFU;

    // CONSTRUCTORS
    Vysyx_24110017_CLINT__Syms(VerilatedContext* contextp, const char* namep, Vysyx_24110017_CLINT* modelp);
    ~Vysyx_24110017_CLINT__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
