// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
    vlSelfRef.__Vtrigprevexpr___TOP__v__0 = vlSelfRef.v;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__myDecoder__DOT__result = 0U;
    vlSelfRef.top__DOT__myDecoder__DOT__result = ((0x000fff00U 
                                                   & vlSelfRef.top__DOT__myDecoder__DOT__result) 
                                                  | (IData)(vlSelfRef.top__DOT__count));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000ff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x00000f00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 8U)) 
                                 << 8U)));
    }
    if ((5U <= (0x0000000fU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 0x0cU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0x000f0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0x0000f000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                 >> 0x0cU)) 
                                 << 0x0000000cU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0x000fffffU 
                                                  & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                                     << 1U));
    vlSelfRef.bcd = (0x00000fffU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                    >> 8U));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( en)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( v)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 260667111241363922ull);
    vlSelf->bcd = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13808063621230957514ull);
    vlSelf->top__DOT__count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 893189210593458384ull);
    vlSelf->top__DOT__myDecoder__DOT__result = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9727537705930217673ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__en__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__v__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
