// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull___024root;
class VerilatedVcdC;
class VysyxSoCFull___024unit;


// This class is the main interface to the Verilated model
class VysyxSoCFull VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VysyxSoCFull__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&ysyxSoCTop__02Eclock,0,0);
    VL_IN8(&ysyxSoCTop__02Ereset,0,0);
    VL_IN8(&sdram_top_axi__02Eclock,0,0);
    VL_IN8(&sdram_top_axi__02Ereset,0,0);
    VL_IN8(&axi4_delayer__02Eclock,0,0);
    VL_IN8(&axi4_delayer__02Ereset,0,0);
    VL_OUT8(&axi4_delayer__02Ein_arready,0,0);
    VL_IN8(&axi4_delayer__02Ein_arvalid,0,0);
    VL_IN8(&axi4_delayer__02Ein_arid,3,0);
    VL_IN8(&axi4_delayer__02Ein_arlen,7,0);
    VL_IN8(&axi4_delayer__02Ein_arsize,2,0);
    VL_IN8(&axi4_delayer__02Ein_arburst,1,0);
    VL_IN8(&axi4_delayer__02Ein_rready,0,0);
    VL_OUT8(&axi4_delayer__02Ein_rvalid,0,0);
    VL_OUT8(&axi4_delayer__02Ein_rid,3,0);
    VL_OUT8(&axi4_delayer__02Ein_rresp,1,0);
    VL_OUT8(&axi4_delayer__02Ein_rlast,0,0);
    VL_OUT8(&axi4_delayer__02Ein_awready,0,0);
    VL_IN8(&axi4_delayer__02Ein_awvalid,0,0);
    VL_IN8(&axi4_delayer__02Ein_awid,3,0);
    VL_IN8(&axi4_delayer__02Ein_awlen,7,0);
    VL_IN8(&axi4_delayer__02Ein_awsize,2,0);
    VL_IN8(&axi4_delayer__02Ein_awburst,1,0);
    VL_OUT8(&axi4_delayer__02Ein_wready,0,0);
    VL_IN8(&axi4_delayer__02Ein_wvalid,0,0);
    VL_IN8(&axi4_delayer__02Ein_wstrb,3,0);
    VL_IN8(&axi4_delayer__02Ein_wlast,0,0);
    VL_IN8(&axi4_delayer__02Ein_bready,0,0);
    VL_OUT8(&axi4_delayer__02Ein_bvalid,0,0);
    VL_OUT8(&axi4_delayer__02Ein_bid,3,0);
    VL_OUT8(&axi4_delayer__02Ein_bresp,1,0);
    VL_IN8(&out_arready,0,0);
    VL_OUT8(&out_arvalid,0,0);
    VL_OUT8(&out_arid,3,0);
    VL_OUT8(&out_arlen,7,0);
    VL_OUT8(&out_arsize,2,0);
    VL_OUT8(&out_arburst,1,0);
    VL_OUT8(&out_rready,0,0);
    VL_IN8(&out_rvalid,0,0);
    VL_IN8(&out_rid,3,0);
    VL_IN8(&out_rresp,1,0);
    VL_IN8(&out_rlast,0,0);
    VL_IN8(&out_awready,0,0);
    VL_OUT8(&out_awvalid,0,0);
    VL_OUT8(&out_awid,3,0);
    VL_OUT8(&out_awlen,7,0);
    VL_OUT8(&out_awsize,2,0);
    VL_OUT8(&out_awburst,1,0);
    VL_IN8(&out_wready,0,0);
    VL_OUT8(&out_wvalid,0,0);
    VL_OUT8(&out_wstrb,3,0);
    VL_OUT8(&out_wlast,0,0);
    VL_OUT8(&out_bready,0,0);
    VL_IN8(&out_bvalid,0,0);
    VL_IN8(&out_bid,3,0);
    VL_IN8(&out_bresp,1,0);
    VL_OUT8(&sdram_top_axi__02Ein_awready,0,0);
    VL_IN8(&sdram_top_axi__02Ein_awvalid,0,0);
    VL_IN8(&sdram_top_axi__02Ein_awid,3,0);
    VL_IN8(&sdram_top_axi__02Ein_awlen,7,0);
    VL_IN8(&sdram_top_axi__02Ein_awsize,2,0);
    VL_IN8(&sdram_top_axi__02Ein_awburst,1,0);
    VL_OUT8(&sdram_top_axi__02Ein_wready,0,0);
    VL_IN8(&sdram_top_axi__02Ein_wvalid,0,0);
    VL_IN8(&sdram_top_axi__02Ein_wstrb,3,0);
    VL_IN8(&sdram_top_axi__02Ein_wlast,0,0);
    VL_IN8(&sdram_top_axi__02Ein_bready,0,0);
    VL_OUT8(&sdram_top_axi__02Ein_bvalid,0,0);
    VL_OUT8(&sdram_top_axi__02Ein_bresp,1,0);
    VL_OUT8(&sdram_top_axi__02Ein_bid,3,0);
    VL_OUT8(&sdram_top_axi__02Ein_arready,0,0);
    VL_IN8(&sdram_top_axi__02Ein_arvalid,0,0);
    VL_IN8(&sdram_top_axi__02Ein_arid,3,0);
    VL_IN8(&sdram_top_axi__02Ein_arlen,7,0);
    VL_IN8(&sdram_top_axi__02Ein_arsize,2,0);
    VL_IN8(&sdram_top_axi__02Ein_arburst,1,0);
    VL_IN8(&sdram_top_axi__02Ein_rready,0,0);
    VL_OUT8(&sdram_top_axi__02Ein_rvalid,0,0);
    VL_OUT8(&sdram_top_axi__02Ein_rresp,1,0);
    VL_OUT8(&sdram_top_axi__02Ein_rlast,0,0);
    VL_OUT8(&sdram_top_axi__02Ein_rid,3,0);
    VL_OUT8(&sdram_clk,0,0);
    VL_OUT8(&sdram_cke,0,0);
    VL_OUT8(&sdram_cs,0,0);
    VL_OUT8(&sdram_ras,0,0);
    VL_OUT8(&sdram_cas,0,0);
    VL_OUT8(&sdram_we,0,0);
    VL_OUT8(&sdram_ba,1,0);
    VL_OUT8(&sdram_dqm,1,0);
    VL_OUT16(&sdram_a,12,0);
    VL_INOUT16(&sdram_dq,15,0);
    VL_IN(&axi4_delayer__02Ein_araddr,31,0);
    VL_OUT(&axi4_delayer__02Ein_rdata,31,0);
    VL_IN(&axi4_delayer__02Ein_awaddr,31,0);
    VL_IN(&axi4_delayer__02Ein_wdata,31,0);
    VL_OUT(&out_araddr,31,0);
    VL_IN(&out_rdata,31,0);
    VL_OUT(&out_awaddr,31,0);
    VL_OUT(&out_wdata,31,0);
    VL_IN(&sdram_top_axi__02Ein_awaddr,31,0);
    VL_IN(&sdram_top_axi__02Ein_wdata,31,0);
    VL_IN(&sdram_top_axi__02Ein_araddr,31,0);
    VL_OUT(&sdram_top_axi__02Ein_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VysyxSoCFull___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VysyxSoCFull___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VysyxSoCFull(VerilatedContext* contextp, const char* name = "TOP");
    explicit VysyxSoCFull(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VysyxSoCFull();
  private:
    VL_UNCOPYABLE(VysyxSoCFull);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int csr_display(int i);
    static int gpr_reg_display(int addr);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
