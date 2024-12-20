// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP_YSYX_24110017__DPI_H_
#define VERILATED_VTOP_YSYX_24110017__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/RegisterFile_ysyx_24110017.v:21:14
    extern int gpr_reg_display(int addr);

    // DPI IMPORTS
    // DPI import at vsrc/IDU_ysyx_24110017.v:25:30
    extern void npc_trap();
    // DPI import at vsrc/EXU_ysyx_24110017.v:76:29
    extern int pmem_read(svLogic raddr);
    // DPI import at vsrc/EXU_ysyx_24110017.v:77:30
    extern void pmem_write(svLogic waddr, svLogic wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
