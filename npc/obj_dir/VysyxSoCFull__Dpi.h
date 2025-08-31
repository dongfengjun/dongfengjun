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


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_24110017_LSU.v:187:30
    extern void diff_skip_ref();
    // DPI import at ../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5975:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at ../ysyxSoC/perip/psram/psram.v:122:30
    extern void psram_read(int addr, int* data);
    // DPI import at ../ysyxSoC/perip/psram/psram.v:121:30
    extern void psram_write(int addr, int data, char len);

#ifdef __cplusplus
}
#endif

#endif  // guard
