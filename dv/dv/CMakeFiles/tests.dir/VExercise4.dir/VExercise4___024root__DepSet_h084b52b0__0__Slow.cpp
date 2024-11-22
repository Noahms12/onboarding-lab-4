// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "VExercise4__pch.h"
#include "VExercise4__Syms.h"
#include "VExercise4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__stl(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise4___024root___eval_triggers__stl(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise4___024root___configure_coverage(VExercise4___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 14, 17, ".Exercise4", "v_toggle/Exercise4", "sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 14, 17, ".Exercise4", "v_toggle/Exercise4", "sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 15, 11, ".Exercise4", "v_toggle/Exercise4", "cs", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 17, 17, ".Exercise4", "v_toggle/Exercise4", "alpha[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 18, 17, ".Exercise4", "v_toggle/Exercise4", "beta[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 19, 17, ".Exercise4", "v_toggle/Exercise4", "gamma[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 21, 24, ".Exercise4", "v_toggle/Exercise4", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 27, 10, ".Exercise4", "v_line/Exercise4", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 28, 10, ".Exercise4", "v_line/Exercise4", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 29, 10, ".Exercise4", "v_line/Exercise4", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 30, 9, ".Exercise4", "v_line/Exercise4", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 24, 5, ".Exercise4", "v_branch/Exercise4", "if", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 24, 6, ".Exercise4", "v_branch/Exercise4", "else", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv", 23, 3, ".Exercise4", "v_line/Exercise4", "block", "23");
}