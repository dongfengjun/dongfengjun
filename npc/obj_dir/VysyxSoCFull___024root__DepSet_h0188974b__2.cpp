// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram3__DOT__counter;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v0;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1feU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v1;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1fdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v2;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1fcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v3;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1fbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v4;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1faU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v5;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v6;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v7;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v8;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v9;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v10;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v11;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v12;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v13;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v14;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1f0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v15;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1efU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v16;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1eeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v17;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1edU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v18;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v19;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v20;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1eaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v21;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v22;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v23;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v24;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v25;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v26;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v27;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v28;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v29;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v30;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1e0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v31;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1dfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v32;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1deU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v33;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v34;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1dcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v35;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1dbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v36;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1daU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v37;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v38;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v39;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v40;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v41;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v42;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v43;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v44;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v45;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v46;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1d0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v47;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1cfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v48;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v49;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1cdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v50;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1ccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v51;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1cbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v52;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1caU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v53;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v54;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v55;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v56;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v57;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v58;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v59;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v60;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v61;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v62;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1c0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v63;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1bfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v64;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1beU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v65;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1bdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v66;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1bcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v67;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1bbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v68;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1baU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v69;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v70;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v71;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v72;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v73;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v74;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v75;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v76;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v77;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v78;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1b0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v79;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1afU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v80;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1aeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v81;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1adU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v82;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1acU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v83;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1abU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v84;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1aaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v85;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v86;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v87;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v88;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v89;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v90;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v91;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v92;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v93;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v94;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1a0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v95;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v96;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v97;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v98;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v99;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v100;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v101;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x199U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v102;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x198U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v103;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x197U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v104;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x196U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v105;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x195U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v106;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x194U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v107;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x193U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v108;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x192U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v109;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x191U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v110;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x190U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v111;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v112;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v113;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v114;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v115;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v116;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v117;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x189U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v118;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x188U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v119;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x187U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v120;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x186U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v121;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x185U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v122;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x184U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v123;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x183U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v124;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x182U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v125;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x181U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v126;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x180U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v127;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v128;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v129;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v130;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v131;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v132;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v133;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x179U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v134;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x178U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v135;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x177U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v136;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x176U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v137;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x175U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v138;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x174U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v139;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x173U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v140;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x172U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v141;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x171U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v142;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x170U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v143;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v144;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v145;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v146;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v147;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v148;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v149;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x169U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v150;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x168U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v151;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x167U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v152;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x166U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v153;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x165U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v154;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x164U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v155;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x163U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v156;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x162U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v157;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x161U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v158;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x160U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v159;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v160;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v161;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v162;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v163;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v164;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v165;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x159U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v166;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x158U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v167;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x157U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v168;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x156U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v169;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x155U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v170;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x154U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v171;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x153U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v172;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x152U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v173;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x151U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v174;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x150U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v175;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v176;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v177;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v178;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v179;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v180;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v181;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x149U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v182;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x148U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v183;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x147U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v184;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x146U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v185;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x145U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v186;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x144U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v187;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x143U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v188;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x142U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v189;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x141U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v190;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x140U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v191;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v192;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v193;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v194;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v195;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v196;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v197;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x139U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v198;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x138U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v199;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x137U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v200;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x136U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v201;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x135U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v202;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x134U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v203;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x133U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v204;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x132U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v205;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x131U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v206;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x130U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v207;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v208;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v209;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v210;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v211;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v212;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v213;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x129U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v214;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x128U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v215;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x127U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v216;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x126U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v217;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x125U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v218;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x124U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v219;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x123U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v220;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x122U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v221;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x121U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v222;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x120U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v223;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v224;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v225;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v226;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v227;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v228;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v229;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x119U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v230;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x118U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v231;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x117U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v232;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x116U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v233;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x115U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v234;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x114U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v235;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x113U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v236;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x112U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v237;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x111U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v238;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x110U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v239;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v240;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v241;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v242;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v243;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v244;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v245;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x109U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v246;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x108U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v247;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x107U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v248;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x106U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v249;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x105U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v250;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x104U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v251;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x103U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v252;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x102U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v253;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x101U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v254;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x100U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v255;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v256;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v257;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v258;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v259;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v260;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v261;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v262;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v263;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v264;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v265;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v266;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v267;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v268;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v269;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v270;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xf0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v271;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xefU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v272;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xeeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v273;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xedU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v274;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v275;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v276;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xeaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v277;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v278;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v279;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v280;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v281;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v282;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v283;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v284;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v285;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v286;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xe0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v287;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v288;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v289;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v290;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v291;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v292;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v293;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v294;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v295;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v296;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v297;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v298;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v299;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v300;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v301;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v302;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xd0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v303;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xcfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v304;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v305;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xcdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v306;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v307;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xcbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v308;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xcaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v309;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v310;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v311;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v312;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v313;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v314;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v315;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v316;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v317;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v318;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xc0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v319;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v320;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v321;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v322;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v323;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v324;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v325;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v326;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v327;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v328;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v329;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v330;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v331;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v332;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v333;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v334;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xb0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v335;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xafU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v336;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xaeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v337;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xadU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v338;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xacU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v339;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xabU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v340;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xaaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v341;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v342;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v343;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v344;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v345;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v346;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v347;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v348;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v349;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v350;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xa0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v351;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v352;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v353;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v354;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v355;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v356;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x9aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v357;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x99U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v358;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x98U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v359;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x97U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v360;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x96U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v361;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x95U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v362;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x94U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v363;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x93U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v364;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x92U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v365;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x91U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v366;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x90U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v367;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v368;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v369;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v370;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v371;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v372;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x8aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v373;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x89U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v374;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x88U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v375;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x87U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v376;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x86U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v377;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x85U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v378;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x84U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v379;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x83U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v380;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x82U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v381;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x81U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v382;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x80U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v383;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v384;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v385;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v386;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v387;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v388;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x7aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v389;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x79U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v390;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x78U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v391;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x77U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v392;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x76U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v393;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x75U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v394;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x74U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v395;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x73U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v396;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x72U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v397;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x71U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v398;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x70U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v399;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v400;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v401;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v402;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v403;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v404;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x6aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v405;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x69U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v406;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x68U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v407;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x67U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v408;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x66U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v409;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x65U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v410;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x64U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v411;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x63U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v412;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x62U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v413;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x61U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v414;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x60U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v415;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v416;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v417;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v418;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v419;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v420;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x5aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v421;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x59U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v422;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x58U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v423;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x57U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v424;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x56U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v425;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x55U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v426;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x54U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v427;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x53U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v428;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x52U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v429;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x51U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v430;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x50U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v431;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v432;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v433;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v434;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v435;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v436;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x4aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v437;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x49U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v438;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x48U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v439;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x47U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v440;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x46U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v441;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x45U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v442;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x44U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v443;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x43U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v444;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x42U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v445;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x41U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v446;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x40U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v447;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v448;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v449;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v450;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v451;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v452;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x3aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v453;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x39U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v454;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x38U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v455;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x37U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v456;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x36U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v457;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x35U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v458;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x34U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v459;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x33U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v460;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x32U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v461;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x31U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v462;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x30U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v463;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v464;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v465;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v466;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v467;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v468;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x2aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v469;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x29U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v470;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x28U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v471;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x27U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v472;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x26U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v473;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x25U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v474;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x24U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v475;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x23U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v476;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x22U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v477;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x21U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v478;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x20U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v479;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v480;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v481;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v482;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v483;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v484;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x1aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v485;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x19U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v486;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x18U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v487;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x17U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v488;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x16U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v489;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x15U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v490;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x14U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v491;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x13U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v492;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x12U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v493;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x11U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v494;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0x10U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v495;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v496;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v497;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v498;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v499;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v500;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0xaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v501;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v502;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v503;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v504;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v505;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v506;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v507;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v508;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v509;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v510;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v511;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512) {
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512))) 
                & vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v512))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513) {
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513))) 
                & vlSelf->ysyxSoCFull__DOT__sdram3__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram3__DOT__sense_amp__v513))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram2__DOT__counter;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v0;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1feU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v1;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1fdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v2;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1fcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v3;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1fbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v4;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1faU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v5;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v6;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v7;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v8;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v9;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v10;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v11;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v12;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v13;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v14;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1f0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v15;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1efU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v16;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1eeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v17;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1edU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v18;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v19;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v20;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1eaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v21;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v22;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v23;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v24;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v25;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v26;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v27;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v28;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v29;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v30;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1e0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v31;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1dfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v32;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1deU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v33;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v34;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1dcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v35;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1dbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v36;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1daU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v37;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v38;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v39;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v40;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v41;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v42;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v43;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v44;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v45;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v46;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1d0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v47;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1cfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v48;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v49;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1cdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v50;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1ccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v51;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1cbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v52;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1caU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v53;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v54;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v55;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v56;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v57;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v58;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v59;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v60;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v61;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v62;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1c0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v63;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1bfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v64;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1beU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v65;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1bdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v66;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1bcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v67;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1bbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v68;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1baU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v69;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v70;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v71;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v72;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v73;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v74;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v75;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v76;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v77;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v78;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1b0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v79;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1afU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v80;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1aeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v81;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1adU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v82;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1acU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v83;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1abU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v84;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1aaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v85;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v86;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v87;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v88;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v89;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v90;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v91;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v92;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v93;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v94;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1a0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v95;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v96;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v97;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v98;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v99;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v100;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v101;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x199U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v102;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x198U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v103;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x197U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v104;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x196U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v105;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x195U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v106;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x194U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v107;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x193U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v108;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x192U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v109;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x191U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v110;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x190U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v111;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v112;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v113;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v114;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v115;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v116;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v117;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x189U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v118;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x188U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v119;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x187U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v120;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x186U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v121;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x185U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v122;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x184U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v123;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x183U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v124;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x182U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v125;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x181U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v126;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x180U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v127;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v128;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v129;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v130;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v131;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v132;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v133;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x179U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v134;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x178U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v135;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x177U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v136;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x176U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v137;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x175U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v138;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x174U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v139;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x173U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v140;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x172U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v141;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x171U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v142;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x170U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v143;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v144;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v145;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v146;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v147;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v148;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v149;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x169U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v150;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x168U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v151;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x167U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v152;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x166U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v153;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x165U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v154;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x164U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v155;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x163U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v156;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x162U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v157;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x161U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v158;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x160U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v159;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v160;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v161;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v162;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v163;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v164;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v165;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x159U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v166;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x158U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v167;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x157U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v168;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x156U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v169;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x155U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v170;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x154U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v171;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x153U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v172;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x152U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v173;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x151U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v174;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x150U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v175;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v176;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v177;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v178;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v179;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v180;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v181;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x149U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v182;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x148U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v183;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x147U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v184;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x146U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v185;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x145U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v186;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x144U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v187;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x143U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v188;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x142U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v189;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x141U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v190;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x140U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v191;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v192;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v193;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v194;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v195;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v196;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v197;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x139U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v198;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x138U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v199;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x137U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v200;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x136U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v201;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x135U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v202;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x134U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v203;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x133U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v204;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x132U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v205;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x131U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v206;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x130U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v207;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v208;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v209;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v210;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v211;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v212;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v213;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x129U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v214;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x128U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v215;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x127U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v216;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x126U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v217;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x125U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v218;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x124U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v219;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x123U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v220;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x122U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v221;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x121U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v222;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x120U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v223;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v224;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v225;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v226;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v227;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v228;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v229;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x119U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v230;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x118U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v231;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x117U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v232;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x116U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v233;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x115U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v234;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x114U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v235;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x113U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v236;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x112U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v237;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x111U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v238;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x110U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v239;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v240;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v241;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v242;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v243;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v244;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v245;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x109U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v246;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x108U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v247;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x107U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v248;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x106U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v249;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x105U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v250;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x104U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v251;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x103U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v252;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x102U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v253;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x101U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v254;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x100U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v255;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v256;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v257;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v258;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v259;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v260;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v261;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v262;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v263;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v264;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v265;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v266;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v267;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v268;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v269;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v270;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xf0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v271;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xefU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v272;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xeeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v273;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xedU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v274;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v275;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v276;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xeaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v277;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v278;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v279;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v280;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v281;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v282;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v283;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v284;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v285;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v286;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xe0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v287;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v288;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v289;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v290;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v291;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v292;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v293;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v294;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v295;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v296;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v297;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v298;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v299;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v300;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v301;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v302;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xd0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v303;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xcfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v304;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v305;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xcdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v306;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v307;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xcbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v308;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xcaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v309;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v310;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v311;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v312;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v313;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v314;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v315;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v316;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v317;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v318;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xc0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v319;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v320;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v321;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v322;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v323;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v324;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v325;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v326;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v327;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v328;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v329;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v330;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v331;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v332;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v333;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v334;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xb0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v335;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xafU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v336;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xaeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v337;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xadU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v338;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xacU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v339;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xabU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v340;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xaaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v341;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v342;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v343;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v344;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v345;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v346;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v347;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v348;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v349;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v350;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xa0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v351;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v352;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v353;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v354;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v355;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v356;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x9aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v357;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x99U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v358;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x98U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v359;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x97U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v360;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x96U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v361;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x95U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v362;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x94U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v363;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x93U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v364;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x92U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v365;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x91U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v366;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x90U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v367;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v368;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v369;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v370;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v371;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v372;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x8aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v373;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x89U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v374;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x88U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v375;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x87U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v376;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x86U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v377;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x85U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v378;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x84U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v379;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x83U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v380;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x82U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v381;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x81U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v382;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x80U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v383;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v384;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v385;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v386;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v387;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v388;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x7aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v389;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x79U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v390;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x78U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v391;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x77U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v392;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x76U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v393;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x75U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v394;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x74U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v395;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x73U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v396;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x72U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v397;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x71U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v398;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x70U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v399;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v400;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v401;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v402;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v403;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v404;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x6aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v405;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x69U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v406;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x68U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v407;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x67U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v408;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x66U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v409;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x65U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v410;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x64U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v411;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x63U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v412;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x62U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v413;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x61U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v414;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x60U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v415;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v416;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v417;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v418;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v419;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v420;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x5aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v421;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x59U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v422;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x58U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v423;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x57U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v424;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x56U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v425;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x55U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v426;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x54U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v427;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x53U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v428;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x52U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v429;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x51U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v430;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x50U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v431;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v432;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v433;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v434;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v435;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v436;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x4aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v437;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x49U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v438;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x48U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v439;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x47U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v440;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x46U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v441;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x45U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v442;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x44U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v443;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x43U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v444;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x42U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v445;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x41U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v446;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x40U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v447;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v448;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v449;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v450;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v451;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v452;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x3aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v453;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x39U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v454;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x38U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v455;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x37U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v456;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x36U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v457;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x35U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v458;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x34U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v459;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x33U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v460;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x32U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v461;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x31U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v462;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x30U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v463;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v464;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v465;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v466;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v467;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v468;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x2aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v469;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x29U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v470;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x28U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v471;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x27U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v472;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x26U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v473;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x25U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v474;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x24U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v475;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x23U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v476;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x22U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v477;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x21U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v478;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x20U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v479;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v480;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v481;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v482;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v483;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v484;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x1aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v485;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x19U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v486;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x18U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v487;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x17U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v488;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x16U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v489;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x15U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v490;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x14U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v491;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x13U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v492;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x12U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v493;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x11U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v494;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0x10U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v495;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v496;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v497;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v498;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v499;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v500;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0xaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v501;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v502;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v503;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v504;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v505;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v506;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v507;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v508;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v509;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v510;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v511;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512) {
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512))) 
                & vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v512))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513) {
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513))) 
                & vlSelf->ysyxSoCFull__DOT__sdram2__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram2__DOT__sense_amp__v513))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram1__DOT__counter;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v0;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1feU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v1;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1fdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v2;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1fcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v3;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1fbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v4;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1faU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v5;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v6;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v7;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v8;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v9;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v10;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v11;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v12;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v13;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v14;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1f0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v15;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1efU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v16;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1eeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v17;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1edU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v18;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v19;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v20;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1eaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v21;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v22;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v23;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v24;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v25;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v26;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v27;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v28;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v29;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v30;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1e0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v31;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1dfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v32;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1deU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v33;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v34;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1dcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v35;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1dbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v36;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1daU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v37;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v38;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v39;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v40;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v41;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v42;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v43;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v44;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v45;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v46;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1d0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v47;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1cfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v48;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v49;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1cdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v50;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1ccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v51;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1cbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v52;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1caU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v53;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v54;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v55;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v56;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v57;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v58;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v59;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v60;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v61;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v62;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1c0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v63;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1bfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v64;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1beU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v65;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1bdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v66;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1bcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v67;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1bbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v68;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1baU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v69;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v70;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v71;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v72;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v73;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v74;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v75;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v76;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v77;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v78;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1b0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v79;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1afU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v80;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1aeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v81;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1adU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v82;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1acU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v83;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1abU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v84;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1aaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v85;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v86;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v87;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v88;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v89;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v90;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v91;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v92;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v93;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v94;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1a0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v95;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v96;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v97;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v98;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v99;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v100;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v101;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x199U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v102;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x198U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v103;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x197U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v104;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x196U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v105;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x195U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v106;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x194U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v107;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x193U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v108;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x192U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v109;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x191U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v110;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x190U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v111;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v112;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v113;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v114;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v115;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v116;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v117;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x189U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v118;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x188U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v119;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x187U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v120;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x186U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v121;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x185U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v122;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x184U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v123;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x183U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v124;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x182U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v125;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x181U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v126;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x180U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v127;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v128;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v129;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v130;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v131;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v132;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v133;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x179U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v134;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x178U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v135;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x177U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v136;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x176U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v137;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x175U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v138;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x174U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v139;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x173U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v140;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x172U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v141;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x171U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v142;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x170U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v143;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v144;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v145;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v146;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v147;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v148;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v149;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x169U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v150;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x168U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v151;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x167U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v152;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x166U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v153;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x165U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v154;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x164U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v155;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x163U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v156;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x162U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v157;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x161U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v158;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x160U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v159;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v160;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v161;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v162;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v163;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v164;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v165;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x159U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v166;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x158U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v167;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x157U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v168;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x156U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v169;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x155U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v170;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x154U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v171;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x153U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v172;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x152U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v173;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x151U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v174;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x150U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v175;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v176;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v177;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v178;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v179;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v180;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v181;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x149U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v182;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x148U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v183;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x147U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v184;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x146U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v185;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x145U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v186;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x144U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v187;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x143U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v188;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x142U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v189;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x141U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v190;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x140U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v191;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v192;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v193;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v194;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v195;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v196;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v197;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x139U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v198;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x138U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v199;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x137U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v200;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x136U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v201;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x135U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v202;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x134U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v203;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x133U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v204;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x132U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v205;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x131U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v206;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x130U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v207;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v208;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v209;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v210;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v211;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v212;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v213;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x129U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v214;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x128U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v215;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x127U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v216;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x126U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v217;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x125U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v218;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x124U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v219;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x123U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v220;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x122U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v221;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x121U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v222;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x120U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v223;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v224;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v225;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v226;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v227;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v228;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v229;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x119U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v230;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x118U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v231;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x117U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v232;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x116U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v233;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x115U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v234;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x114U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v235;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x113U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v236;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x112U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v237;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x111U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v238;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x110U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v239;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v240;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v241;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v242;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v243;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v244;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v245;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x109U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v246;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x108U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v247;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x107U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v248;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x106U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v249;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x105U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v250;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x104U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v251;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x103U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v252;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x102U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v253;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x101U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v254;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x100U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v255;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v256;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v257;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v258;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v259;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v260;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v261;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v262;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v263;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v264;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v265;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v266;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v267;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v268;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v269;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v270;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xf0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v271;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xefU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v272;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xeeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v273;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xedU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v274;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v275;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v276;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xeaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v277;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v278;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v279;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v280;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v281;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v282;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v283;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v284;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v285;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v286;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xe0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v287;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v288;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v289;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v290;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v291;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v292;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v293;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v294;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v295;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v296;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v297;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v298;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v299;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v300;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v301;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v302;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xd0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v303;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xcfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v304;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v305;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xcdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v306;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v307;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xcbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v308;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xcaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v309;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v310;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v311;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v312;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v313;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v314;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v315;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v316;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v317;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v318;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xc0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v319;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v320;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v321;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v322;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v323;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v324;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v325;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v326;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v327;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v328;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v329;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v330;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v331;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v332;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v333;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v334;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xb0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v335;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xafU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v336;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xaeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v337;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xadU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v338;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xacU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v339;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xabU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v340;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xaaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v341;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v342;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v343;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v344;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v345;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v346;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v347;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v348;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v349;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v350;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xa0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v351;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v352;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v353;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v354;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v355;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v356;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x9aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v357;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x99U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v358;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x98U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v359;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x97U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v360;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x96U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v361;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x95U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v362;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x94U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v363;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x93U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v364;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x92U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v365;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x91U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v366;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x90U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v367;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v368;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v369;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v370;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v371;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v372;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x8aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v373;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x89U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v374;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x88U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v375;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x87U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v376;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x86U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v377;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x85U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v378;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x84U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v379;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x83U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v380;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x82U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v381;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x81U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v382;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x80U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v383;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v384;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v385;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v386;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v387;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v388;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x7aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v389;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x79U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v390;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x78U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v391;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x77U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v392;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x76U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v393;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x75U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v394;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x74U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v395;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x73U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v396;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x72U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v397;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x71U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v398;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x70U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v399;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v400;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v401;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v402;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v403;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v404;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x6aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v405;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x69U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v406;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x68U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v407;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x67U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v408;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x66U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v409;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x65U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v410;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x64U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v411;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x63U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v412;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x62U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v413;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x61U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v414;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x60U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v415;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v416;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v417;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v418;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v419;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v420;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x5aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v421;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x59U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v422;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x58U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v423;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x57U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v424;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x56U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v425;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x55U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v426;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x54U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v427;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x53U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v428;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x52U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v429;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x51U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v430;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x50U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v431;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v432;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v433;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v434;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v435;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v436;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x4aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v437;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x49U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v438;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x48U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v439;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x47U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v440;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x46U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v441;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x45U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v442;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x44U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v443;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x43U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v444;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x42U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v445;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x41U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v446;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x40U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v447;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v448;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v449;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v450;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v451;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v452;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x3aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v453;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x39U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v454;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x38U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v455;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x37U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v456;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x36U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v457;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x35U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v458;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x34U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v459;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x33U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v460;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x32U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v461;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x31U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v462;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x30U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v463;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v464;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v465;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v466;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v467;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v468;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x2aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v469;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x29U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v470;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x28U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v471;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x27U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v472;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x26U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v473;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x25U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v474;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x24U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v475;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x23U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v476;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x22U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v477;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x21U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v478;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x20U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v479;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v480;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v481;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v482;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v483;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v484;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x1aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v485;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x19U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v486;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x18U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v487;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x17U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v488;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x16U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v489;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x15U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v490;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x14U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v491;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x13U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v492;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x12U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v493;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x11U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v494;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0x10U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v495;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v496;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v497;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v498;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v499;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v500;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0xaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v501;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v502;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v503;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v504;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v505;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v506;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v507;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v508;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v509;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v510;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v511;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512) {
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512))) 
                & vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v512))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513) {
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513))) 
                & vlSelf->ysyxSoCFull__DOT__sdram1__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram1__DOT__sense_amp__v513))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram__DOT__counter;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v0;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1feU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v1;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1fdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v2;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1fcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v3;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1fbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v4;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1faU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v5;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v6;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v7;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v8;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v9;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v10;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v11;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v12;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v13;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v14;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1f0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v15;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1efU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v16;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1eeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v17;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1edU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v18;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v19;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v20;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1eaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v21;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v22;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v23;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v24;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v25;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v26;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v27;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v28;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v29;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v30;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1e0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v31;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1dfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v32;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1deU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v33;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v34;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1dcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v35;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1dbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v36;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1daU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v37;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v38;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v39;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v40;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v41;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v42;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v43;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v44;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v45;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v46;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1d0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v47;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1cfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v48;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v49;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1cdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v50;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1ccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v51;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1cbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v52;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1caU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v53;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v54;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v55;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v56;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v57;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v58;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v59;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v60;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v61;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v62;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1c0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v63;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1bfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v64;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1beU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v65;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1bdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v66;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1bcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v67;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1bbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v68;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1baU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v69;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v70;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v71;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v72;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v73;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v74;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v75;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v76;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v77;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v78;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1b0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v79;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1afU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v80;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1aeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v81;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1adU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v82;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1acU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v83;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1abU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v84;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1aaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v85;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v86;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v87;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v88;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v89;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v90;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v91;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v92;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v93;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v94;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1a0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v95;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v96;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v97;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v98;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v99;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v100;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v101;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x199U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v102;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x198U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v103;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x197U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v104;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x196U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v105;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x195U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v106;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x194U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v107;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x193U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v108;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x192U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v109;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x191U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v110;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x190U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v111;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v112;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v113;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v114;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v115;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v116;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v117;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x189U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v118;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x188U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v119;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x187U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v120;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x186U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v121;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x185U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v122;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x184U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v123;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x183U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v124;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x182U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v125;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x181U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v126;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x180U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v127;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v128;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v129;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v130;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v131;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v132;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v133;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x179U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v134;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x178U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v135;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x177U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v136;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x176U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v137;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x175U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v138;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x174U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v139;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x173U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v140;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x172U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v141;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x171U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v142;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x170U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v143;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v144;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v145;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v146;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v147;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v148;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v149;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x169U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v150;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x168U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v151;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x167U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v152;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x166U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v153;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x165U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v154;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x164U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v155;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x163U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v156;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x162U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v157;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x161U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v158;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x160U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v159;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v160;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v161;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v162;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v163;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v164;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v165;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x159U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v166;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x158U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v167;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x157U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v168;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x156U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v169;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x155U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v170;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x154U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v171;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x153U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v172;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x152U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v173;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x151U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v174;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x150U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v175;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v176;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v177;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v178;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v179;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v180;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v181;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x149U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v182;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x148U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v183;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x147U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v184;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x146U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v185;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x145U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v186;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x144U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v187;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x143U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v188;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x142U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v189;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x141U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v190;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x140U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v191;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v192;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v193;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v194;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v195;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v196;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v197;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x139U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v198;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x138U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v199;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x137U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v200;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x136U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v201;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x135U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v202;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x134U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v203;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x133U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v204;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x132U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v205;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x131U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v206;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x130U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v207;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v208;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v209;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v210;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v211;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v212;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v213;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x129U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v214;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x128U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v215;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x127U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v216;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x126U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v217;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x125U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v218;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x124U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v219;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x123U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v220;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x122U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v221;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x121U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v222;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x120U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v223;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v224;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v225;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v226;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v227;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v228;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v229;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x119U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v230;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x118U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v231;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x117U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v232;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x116U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v233;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x115U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v234;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x114U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v235;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x113U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v236;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x112U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v237;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x111U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v238;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x110U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v239;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v240;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v241;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v242;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v243;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v244;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v245;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x109U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v246;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x108U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v247;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x107U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v248;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x106U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v249;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x105U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v250;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x104U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v251;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x103U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v252;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x102U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v253;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x101U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v254;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x100U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v255;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xffU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v256;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v257;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v258;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v259;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v260;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v261;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v262;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v263;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v264;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v265;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v266;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v267;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v268;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v269;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v270;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xf0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v271;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xefU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v272;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xeeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v273;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xedU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v274;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xecU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v275;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xebU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v276;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xeaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v277;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v278;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v279;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v280;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v281;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v282;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v283;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v284;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v285;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v286;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xe0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v287;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v288;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v289;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xddU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v290;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v291;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v292;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v293;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v294;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v295;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v296;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v297;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v298;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v299;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v300;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v301;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v302;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xd0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v303;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xcfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v304;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xceU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v305;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xcdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v306;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xccU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v307;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xcbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v308;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xcaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v309;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v310;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v311;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v312;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v313;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v314;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v315;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v316;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v317;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v318;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xc0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v319;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v320;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v321;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v322;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v323;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v324;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v325;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v326;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v327;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v328;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v329;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v330;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v331;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v332;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v333;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v334;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xb0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v335;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xafU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v336;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xaeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v337;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xadU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v338;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xacU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v339;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xabU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v340;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xaaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v341;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v342;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v343;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v344;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v345;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v346;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v347;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v348;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v349;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v350;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xa0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v351;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v352;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v353;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v354;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v355;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v356;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x9aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v357;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x99U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v358;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x98U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v359;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x97U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v360;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x96U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v361;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x95U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v362;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x94U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v363;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x93U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v364;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x92U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v365;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x91U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v366;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x90U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v367;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v368;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v369;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v370;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v371;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v372;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x8aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v373;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x89U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v374;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x88U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v375;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x87U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v376;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x86U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v377;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x85U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v378;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x84U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v379;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x83U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v380;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x82U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v381;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x81U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v382;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x80U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v383;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v384;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v385;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v386;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v387;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v388;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x7aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v389;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x79U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v390;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x78U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v391;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x77U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v392;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x76U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v393;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x75U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v394;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x74U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v395;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x73U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v396;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x72U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v397;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x71U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v398;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x70U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v399;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v400;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v401;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v402;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v403;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v404;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x6aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v405;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x69U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v406;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x68U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v407;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x67U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v408;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x66U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v409;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x65U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v410;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x64U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v411;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x63U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v412;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x62U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v413;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x61U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v414;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x60U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v415;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v416;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v417;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v418;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v419;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v420;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x5aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v421;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x59U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v422;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x58U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v423;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x57U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v424;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x56U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v425;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x55U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v426;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x54U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v427;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x53U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v428;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x52U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v429;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x51U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v430;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x50U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v431;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v432;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v433;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v434;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v435;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v436;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x4aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v437;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x49U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v438;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x48U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v439;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x47U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v440;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x46U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v441;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x45U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v442;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x44U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v443;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x43U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v444;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x42U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v445;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x41U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v446;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x40U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v447;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v448;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v449;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v450;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v451;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v452;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x3aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v453;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x39U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v454;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x38U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v455;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x37U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v456;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x36U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v457;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x35U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v458;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x34U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v459;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x33U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v460;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x32U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v461;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x31U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v462;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x30U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v463;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v464;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v465;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v466;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v467;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v468;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x2aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v469;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x29U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v470;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x28U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v471;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x27U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v472;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x26U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v473;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x25U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v474;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x24U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v475;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x23U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v476;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x22U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v477;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x21U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v478;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x20U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v479;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1fU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v480;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1eU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v481;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1dU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v482;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1cU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v483;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1bU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v484;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x1aU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v485;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x19U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v486;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x18U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v487;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x17U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v488;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x16U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v489;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x15U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v490;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x14U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v491;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x13U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v492;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x12U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v493;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x11U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v494;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0x10U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v495;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xfU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v496;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xeU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v497;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xdU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v498;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xcU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v499;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xbU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v500;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0xaU] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v501;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[9U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v502;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[8U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v503;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[7U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v504;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[6U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v505;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[5U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v506;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[4U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v507;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v508;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v509;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v510;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v511;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v512))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sense_amp
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513]) 
               | (0xffffU & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513) 
                             << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sense_amp__v513))));
    }
    if (vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset) {
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1 = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1 = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1 = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1 = 3U;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg 
                = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm;
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg 
                = ((0xff00U & (((- (IData)((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm) 
                                                   >> 1U))))) 
                                << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire))) 
                   | (0xffU & ((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm))))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire))));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write)))) {
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__dqm_reg = 3U;
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_i_reg = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg 
                = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm;
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg 
                = ((0xff00U & (((- (IData)((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm) 
                                                   >> 1U))))) 
                                << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))) 
                   | (0xffU & ((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm))))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write)))) {
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__dqm_reg = 3U;
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_i_reg = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg 
                = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm;
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg 
                = ((0xff00U & (((- (IData)((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm) 
                                                   >> 1U))))) 
                                << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire))) 
                   | (0xffU & ((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm))))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT___dq1_wire))));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write)))) {
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__dqm_reg = 3U;
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_i_reg = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg 
                = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg 
                = ((0xff00U & (((- (IData)((1U & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm) 
                                                   >> 1U))))) 
                                << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))) 
                   | (0xffU & ((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm))))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT___dq_wire))));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_reg = 3U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_i_reg = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode) {
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__mode_reg 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__mode_reg 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode_reg 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode_reg 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        }
    }
    vlSelf->ysyxSoCFull__DOT__dq__en6 = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                          ? 0xffffU
                                          : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                              ? 0xffffU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                                  ? 0xffffU
                                                  : 0U)));
    if (vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read) {
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg1 
            = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm;
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg1 
            = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm;
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg1 
            = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg1 
            = vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm;
        vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__column 
            = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active) {
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__row 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__bank 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__row 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__bank 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__row 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__bank 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__row 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write) {
            vlSelf->ysyxSoCFull__DOT__sdram3__DOT__column 
                = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram2__DOT__column 
                = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram1__DOT__column 
                = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__column 
                = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelf->ysyxSoCFull__DOT__dq__en5 = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                          ? 0xffffU
                                          : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                              ? 0xffffU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                                  ? 0xffffU
                                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__dq__en4 = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                          ? 0xffffU
                                          : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                              ? 0xffffU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                                  ? 0xffffU
                                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__dq__en3 = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                          ? 0xffffU
                                          : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                              ? 0xffffU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                                  ? 0xffffU
                                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram3__DOT__state;
    vlSelf->ysyxSoCFull__DOT__sdram2__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram2__DOT__state;
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram1__DOT__state;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__sdram__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_flag 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_flag;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU____pinNumber5 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isCHazard)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_valid_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2 
        = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2))
            ? (((- (IData)((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                [8U]) | (((- (IData)((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                          [9U]) | (((- (IData)((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [0xaU]) | (((- (IData)(
                                                           (0xbU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                [0xbU]) 
                                               | (((- (IData)(
                                                              (0xcU 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                   [0xcU]) 
                                                  | (((- (IData)(
                                                                 (0xdU 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                      [0xdU]) 
                                                     | (((- (IData)(
                                                                    (0xeU 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                         [0xeU]) 
                                                        | ((- (IData)(
                                                                      (0xfU 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                           [0xfU]))))))))
            : (((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                [1U]) | (((- (IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                          [2U]) | (((- (IData)((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                    [3U]) | (((- (IData)(
                                                         (4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                              [4U]) 
                                             | (((- (IData)(
                                                            (5U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                 [5U]) 
                                                | (((- (IData)(
                                                               (6U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                    [6U]) 
                                                   | ((- (IData)(
                                                                 (7U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2)))) 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RFU__DOT__rf
                                                      [7U]))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT____VdfgTmp_h6e830ee8__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_arvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id 
            = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                        >> 2U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__unvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT____VdfgTmp_h6e830ee8__0) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_check 
              != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc 
                  >> 8U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__updata 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata;
    }
    if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0 
            = (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0 
            = (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb77cc038__0 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf783c9d1__0 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he37daa1c__0 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           | (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en 
        = ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0d08be77__0)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__updata 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel 
        = ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))) 
            | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                   >> 0xaU)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb77cc038__0)))
            ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hb77cc038__0) 
                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                        >> 0xaU)) ? 1U : ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))) 
                                           | ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                              & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                   >> 0xaU)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                           ? 2U : (
                                                   (((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                     & ((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                        | (3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))) 
                                                    | ((0xcU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                       & ((~ 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                            >> 0xaU)) 
                                                          & ((2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                                             | (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))))
                                                    ? 5U
                                                    : 
                                                   ((((4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))) 
                                                     | ((0xcU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                        & ((~ 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                             >> 0xaU)) 
                                                           & (4U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                                     ? 8U
                                                     : 
                                                    (((~ 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                        >> 0xaU)) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf783c9d1__0) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he37daa1c__0)))
                                                      ? 3U
                                                      : 
                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf783c9d1__0) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he37daa1c__0)) 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                          >> 0xaU))
                                                       ? 4U
                                                       : 
                                                      ((((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                         & (6U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                           & ((~ 
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                                >> 0xaU)) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                                        ? 7U
                                                        : 
                                                       ((((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                          & (7U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))) 
                                                         | ((0xcU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                            & ((~ 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id 
                                                                 >> 0xaU)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))))
                                                         ? 6U
                                                         : 0U)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0) 
            | (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))) 
           & (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
               | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                  | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
               ? VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
               : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res 
        = ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
             | ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                | ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0))))
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1
             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id) 
           + ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2
               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_wen 
        = ((((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_heb1bd787__0)) 
            << 3U) | ((((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h1553f272__0)) 
                       << 2U) | ((((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcb39cad6__0)) 
                                  << 1U) | (((0x1cU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hcc3c598f__0)) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csrs_w 
        = (((- (IData)((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1) 
           | (((- (IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))) 
               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr)) 
              | (((- (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))) 
                  & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1) 
                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__csr)) 
                 | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb68e3e2e__0 
        = ((0x18U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                               >> 2U))) | ((8U == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                      >> 2U))) 
                                           | (0xcU 
                                              == (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hac2a130d__0 
        = (IData)((0x80000060U == (0x8000007cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0 
        = ((0xdU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                              >> 2U))) | (5U == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                    >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h26248598__0 
        = ((0x19U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                               >> 2U))) | ((0U == (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                      >> 2U))) 
                                           | ((4U == 
                                               (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                   >> 2U))) 
                                              | (0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                     >> 2U))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0 
            = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_res 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                   - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0))
                        : 0U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                      ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                         >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h7b86cc8f__0))
                                      : 0U) : ((4U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                                                    ? 
                                                   (((0x1fU 
                                                      >= 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)))
                                                      ? 
                                                     ((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                                  >> 0x1fU))) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)))
                                                      : 0U) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_id)))
                                                    : 
                                                   (((0x1fU 
                                                      >= 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))
                                                      ? 
                                                     ((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                                  >> 0x1fU))) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))
                                                      : 0U) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                                      : 0U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                       | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                                       : 0U)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_sel))
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h95169ac6__0)
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                                                        ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0bc2acfe__0)
                                                        : 0U)
                                                       : 0U)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__dnpc 
        = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
            : ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id))
                ? (0xfffffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res)
                : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                    & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                          == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                    : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                        & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r1 
                              != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r2)))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                        : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                            & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                            : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)) 
                                   & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                                : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                    & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                                    : (((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__slt_res)) 
                                           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__add_res
                                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ecall_en)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec
                                            : (((0x1cU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                                                & ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_h0d08be77__0)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_id)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__prevalid)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hac2a130d__0)
                ? 1U : ((0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                            >> 2U)))
                         ? 2U : 0U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h86c6dcd9__0)
            ? (0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if)
            : ((0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                   >> 2U))) ? (((- (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                              >> 0x14U))))))
                : ((0x18U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                       >> 2U))) ? (
                                                   ((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                                  >> 7U))))))
                    : ((8U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                        >> 2U))) ? 
                       (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                     >> 0x1fU))) << 0xcU) 
                        | ((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                      >> 0x14U)) | 
                           (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                     >> 7U)))) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h26248598__0)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                      >> 0x14U))
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                        >> 2U)))
                                                    ? 
                                                   (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                                       >> 0x14U))
                                                    : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hcfb7eb94__0 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hccb273ed__0 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb860dcf7__0 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prepc 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hac2a130d__0) 
            | (0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if 
                                  >> 2U)))) ? (0x1fffffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_if 
                                                  + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
            : 0U);
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__state)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m 
        = ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid) 
                 | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit 
        = (((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                   >> 7U)) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__tag_reg
            [(7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                    >> 4U))]) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__valid_reg
                                 [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                         >> 2U))] >> 
                                 (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                        >> 4U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awburst;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arburst;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wdata;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                    & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                       | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                    ? 0U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)) 
                                | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id))))
                             ? 1U : 2U));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0)
                    ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op_id)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                             ? 1U : 2U)) : 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_wvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
                = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                    ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                             ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf1da5ac6__0) 
                                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                      ? 0xfU : (((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                 ? 2U
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                  ? 4U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hc348b5d7__0) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                   ? 0xcU
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h7582b190__0)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb993dc96__0))
                                                    ? 8U
                                                    : 0U)))))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 1U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_araddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rready;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_hafa17882__0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr 
                       >> 0x1fU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 
        = (0xfU & (0xaU ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr 
                               >> 0x1cU) : 0U)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__log2__3__value 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit;
    if (vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__log2__3__value) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__log2__3__value = 0U;
        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__log2__3__Vfuncout = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__cache_reg
           [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                   >> 2U))][(7U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_araddr 
                                    >> 4U) + vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__log2__3__Vfuncout))]
            : 0U);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_hafa17882__0) 
           | (0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_hafa17882__0) 
                      << 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                 ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awaddr 
                                          >> 0x1cU))
                                 : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id 
        = ((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR) 
           | (0x1000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint 
        = ((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR) 
           | (0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
             & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                          & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (7U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                       & (7U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                          & (7U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                             & (7U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                & (7U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                   & (7U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                      & (7U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                         & (7U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                            & (7U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                               & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST) 
               << 2U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN) 
               << 8U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID) 
               << 1U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID) 
               << 4U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
            = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)) 
               << 0x20U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY) 
               << 1U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE) 
               << 3U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARBURST;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARLEN;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARVALID;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARID;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
            = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RREADY;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARSIZE;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0) 
                    >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hcdcd14ea__0));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                             >> 0x1fU))) | (0U == (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                                   >> 0x1fU))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                                 >> 0x1cU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & (4U ^ (0x7ffffffcU & ((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                                       >> 0x1cU)) 
                                              >> 1U)))) 
                  | (3U & (2U ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0 
                                         >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
             & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                          & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (7U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                       & (7U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                          & (7U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                             & (7U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                & (7U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                   & (7U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                      & (7U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                         & (7U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                            & (7U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                               & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x1eU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)))) 
                               | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 0x18U)))) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN) 
                 >> (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                           >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(
                                                                                (0x3fffffffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr), vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__5__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__5__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelf->__VdfgTmp_h5025d6ea__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
    } else {
        vlSelf->__VdfgTmp_h5025d6ea__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__17\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__18(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__18\n"); );
    // Body
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__mosi_reg = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT___bitrev_miso = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state) {
            vlSelf->ysyxSoCFull__DOT___bitrev_miso 
                = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg) 
                         >> (7U & ((IData)(7U) - (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter)))));
            vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter)));
            if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter = 0U;
                vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__mosi_reg 
            = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter)));
        if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = 1U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__state;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__mosi_reg;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg 
        = ((0xf8U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg)) 
           | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                     >> 3U)) | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                                       >> 5U)) | (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                                                     >> 7U)))));
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg 
        = ((0xc7U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg)) 
           | ((0x20U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                        << 3U)) | ((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                                             << 1U)) 
                                   | (8U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                                            >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg 
        = ((0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__miso_reg)) 
           | ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                        << 7U)) | (0x40U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__mosi_reg) 
                                            << 5U))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->externalPins_vga_valid = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h17f9845e__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__data
        [(0x7ffffU & (((IData)(0x280U) * ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                           ? (0x3ffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                 - (IData)(0x24U)))
                                           : 0U)) + 
                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                        ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                     - (IData)(0x91U)))
                        : 0U)))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->externalPins_vga_r = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h17f9845e__0 
                                           >> 0x10U));
    vlSelf->externalPins_vga_g = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h17f9845e__0 
                                           >> 8U));
    vlSelf->externalPins_vga_b = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h17f9845e__0);
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__19(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read)) 
                                         & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state))
                                             ? (((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                 & (0xe0U 
                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                & (0xf0U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer)))
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state))
                                                 ? 
                                                (((0xaU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                  & (0xe0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                 & (0xf0U 
                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state)) 
                                                 & ((((0xaU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                      & (0xe0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                     & (0xf0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1))) 
                                                    | ((0xaU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                       & (0xf0U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read)
                                           ? 0U : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state))
                                                    ? 
                                                   ((((0xaU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                      & (0xe0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                     & (0xf0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state))
                                                     ? 
                                                    ((((0xaU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                       & (0xe0U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                      & (0xf0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1))
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__state))
                                                      ? 
                                                     ((((0xaU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                        & (0xe0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer))) 
                                                       & (0xf0U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1)))
                                                       ? 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer1) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2)))
                                                       : 
                                                      (((0xaU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter)) 
                                                        & (0xf0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer2))
                                                        : 0U))
                                                      : 0U)))));
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__20(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__reset = 
        (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & VL_CLOG2_I((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q)));
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 7U : 4U);
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                            = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 0xaU));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 1U));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xdU));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                            | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                            ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                            = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                ? 0x20U : 0U);
                    }
                }
                if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xffU & ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                >> 0xaU)))));
                    }
                }
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hada35e22__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram__dqm 
        = (3U & ((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                   >> 2U)))) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram1__dqm 
        = (3U & ((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                >> 2U)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram2__dqm 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                      >> 2U))))) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__sdram3__dqm 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                      >> 2U))))) | 
                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                  >> 2U)));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__active = 
        (((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0) 
          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
             >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h50b78ab2__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hd0133cc5__0));
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h265d7a60__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hada35e22__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hb327f5d5__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hada35e22__0));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__autorefresh 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h50b78ab2__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__mode = (
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h50b78ab2__0));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__burstterm 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h265d7a60__0));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__nop = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_h265d7a60__0) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__read = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hb327f5d5__0) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelf->ysyxSoCFull__DOT__sdram1__DOT__write = 
        ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT____VdfgTmp_hb327f5d5__0));
    vlSelf->__Vtableidx12 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx12][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx12][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx12][2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___dq1_wire = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg)
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                                   ? 
                                                  (0xff00U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__rdqm_reg2))
                                                    ? 
                                                   (0xffU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1__DOT__data_o_reg))
                                                    : 0U))) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en4)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en4)) 
                                           | (((((0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                                   ? 
                                                  (0xff00U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__rdqm_reg2))
                                                    ? 
                                                   (0xffU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__sdram3__DOT__data_o_reg))
                                                    : 0U))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en6)) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en6)) 
                                              | ((vlSelf->ysyxSoCFull__DOT____Vcelloutt__asic__sdram_dq__out 
                                                  >> 0x10U) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                     ? 0U
                                                     : 0xffffU))));
    vlSelf->ysyxSoCFull__DOT___dq_wire = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg)
                                              : ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                                  ? 
                                                 (0xff00U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rdqm_reg2))
                                                   ? 
                                                  (0xffU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__data_o_reg))
                                                   : 0U))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en3)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en3)) 
                                          | (((((0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                                  ? 
                                                 (0xff00U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__rdqm_reg2))
                                                   ? 
                                                  (0xffU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2__DOT__data_o_reg))
                                                   : 0U))) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en5)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__dq__en5)) 
                                             | (vlSelf->ysyxSoCFull__DOT____Vcelloutt__asic__sdram_dq__out 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                    ? 0U
                                                    : 0xffffU))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__21(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__wdata__v0) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__wdata__v4) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__wdata__v4] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__wdata__v4;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__ren = ((0xebU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wen = ((0x38U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                                 & ((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                                    & ((2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)) 
                                                       | ((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)) 
                                                          | (8U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__len = (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen) 
                                                  & (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen) 
                                                   & (4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wen) 
                                                    & (8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                                                    ? 4U
                                                    : 0U)));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_trap_TOP();

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
           | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0 
        = (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)) 
           | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                  >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awburst = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h661126f5__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h5af3c074__0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h0c663435__0);
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
             ? (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                         >> 2U)) : 0U) << 2U);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr 
            = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc05bc550__0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                ? (IData)(vlSelf->__VdfgTmp_h5025d6ea__0)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc0e32ddd__0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 8U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
               >> 0x18U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 
            = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0xcU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
            = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0 
            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                     >> 0x1cU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
               & ((IData)(vlSelf->__VdfgTmp_h5025d6ea__0) 
                  >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
               & ((IData)(vlSelf->__VdfgTmp_h5025d6ea__0) 
                  >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable 
            = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd556670b__0 
            = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                     >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0 
            = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                     >> 0x1dU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc05bc550__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc0e32ddd__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd556670b__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                      ? (2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                      : 0U) ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                 ? (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                 : 0U) ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                          >> 0x18U)
                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                   >> 0x10U)) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                   ? 
                                                  (1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                                   : 0U)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                                  >> 8U)
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                     ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc0e32ddd__0)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0 
        = ((0x10001000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr) 
           & (0x10001fffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0 
        = (0x30000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0) 
                   << 4U) | ((8U & (8U ^ (0x7fff8U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 
                                             >> 0xdU)))) 
                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd556670b__0) 
                                 << 2U) | (3U & (2U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0) 
                   << 4U) | ((8U & (8U ^ (0x7fff8U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 
                                             >> 0xdU)))) 
                             | ((4U & (0x4004U ^ (0x3ffffffcU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 
                                                     >> 2U)))) 
                                | (3U & (1U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0) 
                    << 4U) | ((8U & (8U ^ (0x7fff8U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0 
                                              >> 0xdU)))) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd556670b__0) 
                                  << 2U) | (3U & (1U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd544b1e4__0)))))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0) 
              & (0x30000000U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5e32105__0) 
                   << 4U) | ((8U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0) 
                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU))) 
                                    << 3U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd556670b__0) 
                                                << 2U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                      >> 0xcU))
                                                   : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__is_write 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)) 
           & ((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite) 
                 & ((0x21000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr) 
                    & (0x21200000U > vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb)
                : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(7U) 
                                       + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
               & (IData)(vlSelf->__VdfgTmp_h5025d6ea__0)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc05bc550__0)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc0e32ddd__0)
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                           & (((IData)(vlSelf->__VdfgTmp_h5025d6ea__0) 
                               >> 3U) & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)
                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_hc05bc550__0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h7a406c34__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
            = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                           << 8U)) 
                             | ((0xff00U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                            >> 8U)) 
                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                   >> 0x18U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i 
            = (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pwrite;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_psel;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_penable;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i 
            = (0x1fU & 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits)) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                     >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
            | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
            ? 3U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? 8U : (0xfU & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                         >> 0x14U) : 
                                     ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                       ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                          >> 0x10U)
                                       : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                              >> 0xcU)
                                           : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                               : ((6U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x14U)
                                                          : 0U)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                           ? 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x10U)
                                                           : 0U)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                            >> 0x1cU)
                                                            : 0U)
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_hfb738304__0)
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                            >> 0x18U)
                                                            : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i) 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__write_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h7a406c34__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__read_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT____VdfgTmp_h7a406c34__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__is_read 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_h7234b35d__0)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT____VdfgTmp_hfe7a4dcd__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__flash_pready)))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))) 
                          | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ready)) 
                                   & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT____VdfgTmp_hd5fed7e8__0))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h2a60abe8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0xaU))) & ((0x1fffU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                      >> 0xdU)) 
                                                  == 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                                  [
                                                  (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                      >> 0xaU))]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xdU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                >> 0xaU))) & ((0x1fffU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0xdU)) 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                              [(7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0xaU))]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0xaU))))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                            ? 8U : 3U);
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x16U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_arready)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARREADY));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                       >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                       >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                       >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                      >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                      >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                      >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                      >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                     >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                     >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                     >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                     >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                  >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
                  >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1) 
           & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_hd71bf101__0))) 
              >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
             & (0xcU == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                        & (8U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                   & (4U == (0x1cU 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (0U == 
                                               (0x1cU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rvalid)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RVALID));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                       >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                       >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                       >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                      >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                      >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                      >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                      >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                     >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                     >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                     >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                     >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                  >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
                  >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid)) 
              >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                        >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rdata
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_id)
                ? ((0x1000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_ARADDR)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__mvendorid
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__marchid)
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                          ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                          : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hf132a334__0 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? vlSelf->__VdfgTmp_hf132a334__0
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                               : 0U)))
                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata
                               : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                           ? 0U : 3U) : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h7baceb85__0) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                   << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h5f8756ca__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                  << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                               << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                            << 0xdU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5ac7b__0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h054136f2__0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                        >> 8U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h0563e924__0 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                        >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5d271__0 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h056669c7__0 
            = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                     >> 0xfU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h05312a87__0 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
               >> 0x1fU);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5ac7b__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h054136f2__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h0563e924__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5d271__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h056669c7__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h05312a87__0 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h52ee47fe__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT____VdfgTmp_h3cb40b25__0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_clint)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__c_axi_rlast)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                ? (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                                   >> 7U)))) << 8U) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5ac7b__0))
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hcfb7eb94__0) 
                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h056669c7__0))) 
                        << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h054136f2__0))
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hccb273ed__0) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                        ? (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                                           >> 0x17U)))) 
                            << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h0563e924__0))
                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb860dcf7__0) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                            ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h05312a87__0))) 
                                << 8U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                                              >> 0x18U)
                                           : 0U)) : 
                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                             ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h056669c7__0))) 
                                 << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5d271__0))
                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hccb273ed__0) 
                                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                 ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h05312a87__0))) 
                                     << 0x10U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__X_AXI_RDATA 
                                                   >> 0x10U)
                                                   : 0U))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0) 
                                     & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5ac7b__0)
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hcfb7eb94__0) 
                                         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h054136f2__0)
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hccb273ed__0) 
                                             & (4U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h0563e924__0)
                                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb860dcf7__0) 
                                                 & (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata 
                                                 >> 0x18U)
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hf85314d0__0) 
                                                  & (5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h04a5d271__0)
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hccb273ed__0) 
                                                   & (5U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__funct3_id)))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_rdata 
                                                   >> 0x10U)
                                                   : 0U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arlen))
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT____VdfgTmp_h6e830ee8__0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__hit))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_axi_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid_enable)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICACHE__DOT__axi_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Xbar__DOT__sel_m) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ls_valid)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ls_read_done) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bready) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ls_axi_bvalid)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__counter)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__updata) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
         & (0x100073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_if))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__npc_trap_TOP();
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT____VdfgTmp_h32df4496__0) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready))) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}
