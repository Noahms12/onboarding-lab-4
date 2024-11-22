// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "VExercise1__pch.h"
#include "VExercise1__Syms.h"
#include "VExercise1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__stl(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise1___024root___eval_triggers__stl(VExercise1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise1___024root___configure_coverage(VExercise1___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 10, 17, ".Exercise1", "v_toggle/Exercise1", "op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 10, 17, ".Exercise1", "v_toggle/Exercise1", "op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 11, 17, ".Exercise1", "v_toggle/Exercise1", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 12, 17, ".Exercise1", "v_toggle/Exercise1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 13, 24, ".Exercise1", "v_toggle/Exercise1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 17, 8, ".Exercise1", "v_line/Exercise1", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 18, 8, ".Exercise1", "v_line/Exercise1", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 19, 8, ".Exercise1", "v_line/Exercise1", "case", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 20, 8, ".Exercise1", "v_line/Exercise1", "case", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv", 15, 3, ".Exercise1", "v_line/Exercise1", "block", "15-16");
}
