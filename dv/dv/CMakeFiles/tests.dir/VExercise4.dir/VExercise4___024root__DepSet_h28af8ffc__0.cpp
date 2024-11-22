// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "VExercise4__pch.h"
#include "VExercise4___024root.h"

void VExercise4___024root___ico_sequent__TOP__0(VExercise4___024root* vlSelf);

void VExercise4___024root___eval_ico(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VExercise4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VExercise4___024root___eval_triggers__ico(VExercise4___024root* vlSelf);

bool VExercise4___024root___eval_phase__ico(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VExercise4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VExercise4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VExercise4___024root___eval_act(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VExercise4___024root___eval_nba(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VExercise4___024root___eval_triggers__act(VExercise4___024root* vlSelf);

bool VExercise4___024root___eval_phase__act(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VExercise4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VExercise4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VExercise4___024root___eval_phase__nba(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VExercise4___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__ico(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__nba(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__act(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VExercise4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 13, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VExercise4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VExercise4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VExercise4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 13, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VExercise4___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VExercise4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VExercise4___024root___eval_debug_assertions(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((vlSelfRef.cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
}
#endif  // VL_DEBUG
