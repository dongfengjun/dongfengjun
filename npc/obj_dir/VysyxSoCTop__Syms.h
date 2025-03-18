// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCTOP__SYMS_H_
#define VERILATED_VYSYXSOCTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCTop.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCTop___024root.h"
#include "VysyxSoCTop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VysyxSoCTop__Vcb_csr_display_t = void (*) (VysyxSoCTop__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_display__Vfuncrtn);
using VysyxSoCTop__Vcb_gpr_reg_display_t = void (*) (VysyxSoCTop__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_display__Vfuncrtn);

// SYMS CLASS (contains all model state)
class VysyxSoCTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCTop___024root          TOP;
    VysyxSoCTop___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__cpu__cpu__RFU;
    VerilatedScope __Vscope_ysyxSoCTop__dut__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCTop__dut__flash;
    VerilatedScope __Vscope_ysyxSoCTop__dut__flash__flash_cmd_i;

    // CONSTRUCTORS
    VysyxSoCTop__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCTop* modelp);
    ~VysyxSoCTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
