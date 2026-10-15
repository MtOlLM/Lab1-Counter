// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNTER_CH__SYMS_H_
#define VERILATED_VCOUNTER_CH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcounter_ch.h"

// INCLUDE MODULE CLASSES
#include "Vcounter_ch___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcounter_ch__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcounter_ch* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vcounter_ch___024root          TOP;

    // CONSTRUCTORS
    Vcounter_ch__Syms(VerilatedContext* contextp, const char* namep, Vcounter_ch* modelp);
    ~Vcounter_ch__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
