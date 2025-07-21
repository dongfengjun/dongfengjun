// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"

void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_grab_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &csr_grab__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dpic_grab_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ i, IData/*31:0*/ &dpic_grab__Vfuncrtn);
void VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__gpr_reg_grab_TOP(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ &gpr_reg_grab__Vfuncrtn);

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar.configure(this, name(), "ysyxSoCFull.asic.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__atomics.configure(this, name(), "ysyxSoCFull.asic.chipMaster.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.atomics.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4frag.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank_1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4yank_1", "axi4yank_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank_1__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4yank_1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__rx.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__tx.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__err.configure(this, name(), "ysyxSoCFull.asic.chipMaster.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.err.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__ferr.configure(this, name(), "ysyxSoCFull.asic.chipMaster.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer_1.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.hints.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4.configure(this, name(), "ysyxSoCFull.asic.chipMaster.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.tl2axi4.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu", "cpu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__PCU.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.PCU", "PCU", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__RFU.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.RFU", "RFU", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__atomics.configure(this, name(), "ysyxSoCFull.fpga.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__atomics__monitor.configure(this, name(), "ysyxSoCFull.fpga.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__atomics__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.atomics.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi42tl.configure(this, name(), "ysyxSoCFull.fpga.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi42tl__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.axi42tl.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4deint.configure(this, name(), "ysyxSoCFull.fpga.axi4deint", "axi4deint", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4frag.configure(this, name(), "ysyxSoCFull.fpga.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank.configure(this, name(), "ysyxSoCFull.fpga.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank_1.configure(this, name(), "ysyxSoCFull.fpga.axi4yank_1", "axi4yank_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank_1__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.axi4yank_1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank_2.configure(this, name(), "ysyxSoCFull.fpga.axi4yank_2", "axi4yank_2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.axi4yank.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__rx.configure(this, name(), "ysyxSoCFull.fpga.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__tx.configure(this, name(), "ysyxSoCFull.fpga.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__err.configure(this, name(), "ysyxSoCFull.fpga.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__err__monitor.configure(this, name(), "ysyxSoCFull.fpga.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__err__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.err.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__ferr.configure(this, name(), "ysyxSoCFull.fpga.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__ferr__monitor.configure(this, name(), "ysyxSoCFull.fpga.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__ferr__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.ferr.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer_1__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.fixer_1.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer__monitor.configure(this, name(), "ysyxSoCFull.fpga.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.fixer.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__hints__monitor.configure(this, name(), "ysyxSoCFull.fpga.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__hints__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.hints.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4_1.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4_1", "tl2axi4_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar.configure(this, name(), "ysyxSoCFull.fpga.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar_1.configure(this, name(), "ysyxSoCFull.fpga.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar_1__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar__monitor.configure(this, name(), "ysyxSoCFull.fpga.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar__monitor__unnamedblk1.configure(this, name(), "ysyxSoCFull.fpga.xbar.monitor.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__mem__axi4frag.configure(this, name(), "ysyxSoCFull.mem.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__psram.configure(this, name(), "ysyxSoCFull.psram", "psram", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__psram__psram_cmd_i.configure(this, name(), "ysyxSoCFull.psram.psram_cmd_i", "psram_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "csr_grab", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_grab_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.exportInsert(__Vfinal, "dpic_grab", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dpic_grab_TOP));
        __Vscope_ysyxSoCFull__asic__cpu__cpu__RFU.exportInsert(__Vfinal, "gpr_reg_grab", (void*)(&VysyxSoCFull___024root____Vdpiexp_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__gpr_reg_grab_TOP));
    }
}
