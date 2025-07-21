// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCFull.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VysyxSoCFull__Vcb_csr_grab_t = void (*) (VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_grab__Vfuncrtn);
using VysyxSoCFull__Vcb_dpic_grab_t = void (*) (VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &dpic_grab__Vfuncrtn);
using VysyxSoCFull__Vcb_gpr_reg_grab_t = void (*) (VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_grab__Vfuncrtn);

// SYMS CLASS (contains all model state)
class VysyxSoCFull__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCFull* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCFull___024root         TOP;
    VysyxSoCFull___024unit         TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__atomics;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank_1__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__rx;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__tx;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__err;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__ferr;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__PCU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__cpu__cpu__RFU;
    VerilatedScope __Vscope_ysyxSoCFull__asic__lmrom;
    VerilatedScope __Vscope_ysyxSoCFull__flash;
    VerilatedScope __Vscope_ysyxSoCFull__flash__flash_cmd_i;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__atomics;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__atomics__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__atomics__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi42tl;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi42tl__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4deint;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank_1__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank_2;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__rx;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__tx;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__err;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__err__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__err__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__ferr;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__ferr__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__ferr__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer_1__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__hints__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__hints__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar_1__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar__monitor__unnamedblk1;
    VerilatedScope __Vscope_ysyxSoCFull__mem__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__psram;
    VerilatedScope __Vscope_ysyxSoCFull__psram__psram_cmd_i;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
