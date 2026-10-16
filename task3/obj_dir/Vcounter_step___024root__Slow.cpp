// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_step.h for the primary calling header

#include "Vcounter_step__pch.h"

void Vcounter_step___024root___ctor_var_reset(Vcounter_step___024root* vlSelf);

Vcounter_step___024root::Vcounter_step___024root(Vcounter_step__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcounter_step___024root___ctor_var_reset(this);
}

void Vcounter_step___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounter_step___024root::~Vcounter_step___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
