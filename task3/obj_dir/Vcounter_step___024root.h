// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_step.h for the primary calling header

#ifndef VERILATED_VCOUNTER_STEP___024ROOT_H_
#define VERILATED_VCOUNTER_STEP___024ROOT_H_  // guard

#include "verilated.h"


class Vcounter_step__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter_step___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ld,0,0);
    VL_OUT8(count,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ld__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter_step__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcounter_step___024root(Vcounter_step__Syms* symsp, const char* namep);
    ~Vcounter_step___024root();
    VL_UNCOPYABLE(Vcounter_step___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
