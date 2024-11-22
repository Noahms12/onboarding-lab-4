// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "VExercise2__pch.h"
#include "VExercise2__Syms.h"
#include "VExercise2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise2___024root___dump_triggers__stl(VExercise2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise2___024root___eval_triggers__stl(VExercise2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise2___024root___stl_sequent__TOP__0(VExercise2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.Exercise2__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.reset) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.Exercise2__DOT____Vtogcov__reset 
            = vlSelfRef.reset;
    }
    if ((1U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfffeU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (1U & (IData)(vlSelfRef.init)));
    }
    if ((2U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfffdU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (2U & (IData)(vlSelfRef.init)));
    }
    if ((4U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfffbU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (4U & (IData)(vlSelfRef.init)));
    }
    if ((8U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfff7U & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (8U & (IData)(vlSelfRef.init)));
    }
    if ((0x10U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xffefU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x10U & (IData)(vlSelfRef.init)));
    }
    if ((0x20U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xffdfU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x20U & (IData)(vlSelfRef.init)));
    }
    if ((0x40U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xffbfU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x40U & (IData)(vlSelfRef.init)));
    }
    if ((0x80U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xff7fU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x80U & (IData)(vlSelfRef.init)));
    }
    if ((0x100U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfeffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x100U & (IData)(vlSelfRef.init)));
    }
    if ((0x200U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfdffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x200U & (IData)(vlSelfRef.init)));
    }
    if ((0x400U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xfbffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x400U & (IData)(vlSelfRef.init)));
    }
    if ((0x800U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xf7ffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x800U & (IData)(vlSelfRef.init)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xefffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x1000U & (IData)(vlSelfRef.init)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xdfffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x2000U & (IData)(vlSelfRef.init)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0xbfffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x4000U & (IData)(vlSelfRef.init)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.init) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.Exercise2__DOT____Vtogcov__init = 
            ((0x7fffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__init)) 
             | (0x8000U & (IData)(vlSelfRef.init)));
    }
    if ((1U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfffeU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (1U & (IData)(vlSelfRef.out)));
    }
    if ((2U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfffdU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (2U & (IData)(vlSelfRef.out)));
    }
    if ((4U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfffbU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (4U & (IData)(vlSelfRef.out)));
    }
    if ((8U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfff7U & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (8U & (IData)(vlSelfRef.out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xffefU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x10U & (IData)(vlSelfRef.out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xffdfU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x20U & (IData)(vlSelfRef.out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xffbfU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x40U & (IData)(vlSelfRef.out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xff7fU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x80U & (IData)(vlSelfRef.out)));
    }
    if ((0x100U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfeffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x100U & (IData)(vlSelfRef.out)));
    }
    if ((0x200U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfdffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x200U & (IData)(vlSelfRef.out)));
    }
    if ((0x400U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xfbffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x400U & (IData)(vlSelfRef.out)));
    }
    if ((0x800U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xf7ffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x800U & (IData)(vlSelfRef.out)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xefffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x1000U & (IData)(vlSelfRef.out)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xdfffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x2000U & (IData)(vlSelfRef.out)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0xbfffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x4000U & (IData)(vlSelfRef.out)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.Exercise2__DOT____Vtogcov__out = 
            ((0x7fffU & (IData)(vlSelfRef.Exercise2__DOT____Vtogcov__out)) 
             | (0x8000U & (IData)(vlSelfRef.out)));
    }
}

VL_ATTR_COLD void VExercise2___024root___configure_coverage(VExercise2___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 10, 11, ".Exercise2", "v_toggle/Exercise2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 11, 11, ".Exercise2", "v_toggle/Exercise2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 16, 5, ".Exercise2", "v_branch/Exercise2", "if", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 16, 6, ".Exercise2", "v_branch/Exercise2", "else", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv", 15, 3, ".Exercise2", "v_line/Exercise2", "block", "15");
}
