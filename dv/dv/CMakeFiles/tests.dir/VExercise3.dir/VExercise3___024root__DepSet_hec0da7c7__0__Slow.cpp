// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "VExercise3__pch.h"
#include "VExercise3___024root.h"

VL_ATTR_COLD void VExercise3___024root___eval_static(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VExercise3___024root___eval_initial(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VExercise3___024root___eval_final(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VExercise3___024root___eval_phase__stl(VExercise3___024root* vlSelf);

VL_ATTR_COLD void VExercise3___024root___eval_settle(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VExercise3___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VExercise3___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___stl_sequent__TOP__0(VExercise3___024root* vlSelf);

VL_ATTR_COLD void VExercise3___024root___eval_stl(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VExercise3___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VExercise3___024root___eval_triggers__stl(VExercise3___024root* vlSelf);

VL_ATTR_COLD bool VExercise3___024root___eval_phase__stl(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VExercise3___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VExercise3___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__ico(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__act(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__nba(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___ctor_var_reset(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->c = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT__a_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT__b_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->Exercise3__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->Exercise3__DOT____Vtogcov__a = VL_RAND_RESET_I(4);
    vlSelf->Exercise3__DOT____Vtogcov__b = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__c = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__out = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__a_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT____Vtogcov__b_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT__gamma__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
