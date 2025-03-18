// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCTop.h for the primary calling header

#ifndef VERILATED_VYSYXSOCTOP___024UNIT_H_
#define VERILATED_VYSYXSOCTOP___024UNIT_H_  // guard

#include "verilated.h"

class VysyxSoCTop__Syms;

class VysyxSoCTop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VysyxSoCTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCTop___024unit(VysyxSoCTop__Syms* symsp, const char* v__name);
    ~VysyxSoCTop___024unit();
    VL_UNCOPYABLE(VysyxSoCTop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
