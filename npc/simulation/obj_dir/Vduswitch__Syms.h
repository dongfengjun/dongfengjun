// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUSWITCH__SYMS_H_
#define VERILATED_VDUSWITCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vduswitch.h"

// INCLUDE MODULE CLASSES
#include "Vduswitch___024root.h"

// SYMS CLASS (contains all model state)
class Vduswitch__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vduswitch* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vduswitch___024root            TOP;

    // CONSTRUCTORS
    Vduswitch__Syms(VerilatedContext* contextp, const char* namep, Vduswitch* modelp);
    ~Vduswitch__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
