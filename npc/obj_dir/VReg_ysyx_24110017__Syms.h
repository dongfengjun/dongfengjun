// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREG_YSYX_24110017__SYMS_H_
#define VERILATED_VREG_YSYX_24110017__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VReg_ysyx_24110017.h"

// INCLUDE MODULE CLASSES
#include "VReg_ysyx_24110017___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VReg_ysyx_24110017__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VReg_ysyx_24110017* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VReg_ysyx_24110017___024root   TOP;

    // CONSTRUCTORS
    VReg_ysyx_24110017__Syms(VerilatedContext* contextp, const char* namep, VReg_ysyx_24110017* modelp);
    ~VReg_ysyx_24110017__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
