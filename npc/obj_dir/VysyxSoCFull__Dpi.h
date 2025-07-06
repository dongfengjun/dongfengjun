// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_24110017.v:288:14
    extern int csr_grab(int i);
    // DPI export at vsrc/ysyx_24110017.v:295:14
    extern int dpic_grab(int i);
    // DPI export at vsrc/ysyx_24110017_RegisterFile.v:22:14
    extern int gpr_reg_grab(int addr);

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_24110017_CLINT.v:71:30
    extern void diff_skip_ref();
    // DPI import at ../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:4629:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/ysyx_24110017_IDU.v:159:30
    extern void npc_trap();
    // DPI import at ../ysyxSoC/perip/psram/psram.v:122:30
    extern void psram_read(int addr, int* data);
    // DPI import at ../ysyxSoC/perip/psram/psram.v:121:30
    extern void psram_write(int addr, int data, char len);

#ifdef __cplusplus
}
#endif

#endif  // guard
