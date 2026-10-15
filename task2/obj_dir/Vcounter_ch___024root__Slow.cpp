// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_ch.h for the primary calling header

#include "Vcounter_ch__pch.h"

void Vcounter_ch___024root___ctor_var_reset(Vcounter_ch___024root* vlSelf);

Vcounter_ch___024root::Vcounter_ch___024root(Vcounter_ch__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcounter_ch___024root___ctor_var_reset(this);
}

void Vcounter_ch___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounter_ch___024root::~Vcounter_ch___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
