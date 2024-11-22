// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "VExercise3__pch.h"
#include "VExercise3__Syms.h"
#include "VExercise3___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___eval_triggers__stl(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise3___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise3___024root___stl_sequent__TOP__0(VExercise3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.Exercise3__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.reset) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.Exercise3__DOT____Vtogcov__reset 
            = vlSelfRef.reset;
    }
    if ((1U & ((IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((6U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((5U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((3U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.Exercise3__DOT__gamma__DOT__count)));
    }
    if ((1U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a = ((0xeU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((2U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a = ((0xdU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((4U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a = ((0xbU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((8U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a = ((7U 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((1U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfffeU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((2U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfffdU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((4U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfffbU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((8U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfff7U 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xffefU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xffdfU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xffbfU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xff7fU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x100U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfeffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x200U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfdffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x400U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xfbffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x800U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xf7ffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xefffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xdfffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0xbfffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b = ((0x7fffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((1U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfffeU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((2U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfffdU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((4U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfffbU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((8U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfff7U 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x10U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xffefU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x20U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xffdfU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x40U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xffbfU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x80U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xff7fU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x100U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfeffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x200U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfdffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x400U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xfbffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x800U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xf7ffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xefffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xdfffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0xbfffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.c) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.Exercise3__DOT____Vtogcov__c = ((0x7fffU 
                                                   & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__c)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelfRef.c)));
    }
    if ((1U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfffeU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (1U & (IData)(vlSelfRef.out)));
    }
    if ((2U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfffdU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (2U & (IData)(vlSelfRef.out)));
    }
    if ((4U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfffbU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (4U & (IData)(vlSelfRef.out)));
    }
    if ((8U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfff7U & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (8U & (IData)(vlSelfRef.out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xffefU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x10U & (IData)(vlSelfRef.out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xffdfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x20U & (IData)(vlSelfRef.out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xffbfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x40U & (IData)(vlSelfRef.out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xff7fU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x80U & (IData)(vlSelfRef.out)));
    }
    if ((0x100U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfeffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x100U & (IData)(vlSelfRef.out)));
    }
    if ((0x200U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfdffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x200U & (IData)(vlSelfRef.out)));
    }
    if ((0x400U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xfbffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x400U & (IData)(vlSelfRef.out)));
    }
    if ((0x800U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xf7ffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x800U & (IData)(vlSelfRef.out)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xefffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x1000U & (IData)(vlSelfRef.out)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xdfffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x2000U & (IData)(vlSelfRef.out)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0xbfffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x4000U & (IData)(vlSelfRef.out)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.Exercise3__DOT____Vtogcov__out = 
            ((0x7fffU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__out)) 
             | (0x8000U & (IData)(vlSelfRef.out)));
    }
    if ((0U == (3U & (IData)(vlSelfRef.a)))) {
        vlSelfRef.Exercise3__DOT__a_in = ((0xc0U & 
                                           ((IData)(vlSelfRef.a) 
                                            << 6U)) 
                                          | ((0x38U 
                                              & ((IData)(vlSelfRef.b) 
                                                 << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelfRef.c))));
        ++(vlSymsp->__Vcoverage[70]);
    } else if ((1U == (3U & (IData)(vlSelfRef.a)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.Exercise3__DOT__a_in = ((0xc0U & 
                                           ((IData)(vlSelfRef.a) 
                                            << 6U)) 
                                          | ((0x38U 
                                              & ((IData)(vlSelfRef.c) 
                                                 << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelfRef.b))));
    } else if ((2U == (3U & (IData)(vlSelfRef.a)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.Exercise3__DOT__a_in = (0xffU & (IData)(vlSelfRef.b));
    } else if ((3U == (3U & (IData)(vlSelfRef.a)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.Exercise3__DOT__a_in = (0xffU & (IData)(vlSelfRef.c));
    }
    ++(vlSymsp->__Vcoverage[74]);
    if ((0U == (3U & ((IData)(vlSelfRef.a) >> 2U)))) {
        vlSelfRef.Exercise3__DOT__b_in = ((0xc0U & 
                                           ((IData)(vlSelfRef.a) 
                                            << 4U)) 
                                          | ((0x38U 
                                              & ((IData)(vlSelfRef.b) 
                                                 >> 5U)) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.c) 
                                                   >> 8U))));
        ++(vlSymsp->__Vcoverage[75]);
    } else if ((1U == (3U & ((IData)(vlSelfRef.a) >> 2U)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.Exercise3__DOT__b_in = ((0xc0U & 
                                           ((IData)(vlSelfRef.a) 
                                            << 4U)) 
                                          | ((0x38U 
                                              & ((IData)(vlSelfRef.c) 
                                                 >> 5U)) 
                                             | (7U 
                                                & ((IData)(vlSelfRef.b) 
                                                   >> 8U))));
    } else if ((2U == (3U & ((IData)(vlSelfRef.a) >> 2U)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.Exercise3__DOT__b_in = (0xffU & ((IData)(vlSelfRef.b) 
                                                   >> 8U));
    } else if ((3U == (3U & ((IData)(vlSelfRef.a) >> 2U)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.Exercise3__DOT__b_in = (0xffU & ((IData)(vlSelfRef.c) 
                                                   >> 8U));
    }
    ++(vlSymsp->__Vcoverage[79]);
    if ((1U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xfeU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (1U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((2U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xfdU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (2U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((4U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xfbU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (4U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((8U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xf7U & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (8U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((0x10U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xefU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (0x10U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((0x20U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xdfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (0x20U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((0x40U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0xbfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (0x40U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((0x80U & ((IData)(vlSelfRef.Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.Exercise3__DOT____Vtogcov__a_in = 
            ((0x7fU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__a_in)) 
             | (0x80U & (IData)(vlSelfRef.Exercise3__DOT__a_in)));
    }
    if ((1U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xfeU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (1U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((2U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xfdU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (2U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((4U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xfbU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (4U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((8U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
               ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xf7U & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (8U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((0x10U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xefU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (0x10U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((0x20U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xdfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (0x20U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((0x40U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0xbfU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (0x40U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
    if ((0x80U & ((IData)(vlSelfRef.Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.Exercise3__DOT____Vtogcov__b_in = 
            ((0x7fU & (IData)(vlSelfRef.Exercise3__DOT____Vtogcov__b_in)) 
             | (0x80U & (IData)(vlSelfRef.Exercise3__DOT__b_in)));
    }
}

VL_ATTR_COLD void VExercise3___024root___configure_coverage(VExercise3___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 13, 11, ".Exercise3", "v_toggle/Exercise3", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 14, 11, ".Exercise3", "v_toggle/Exercise3", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 18, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "18-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 23, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "23-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 28, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 29, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 16, 3, ".Exercise3.alpha", "v_line/Mystery1", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.beta", "v_toggle/Mystery1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.beta", "v_toggle/Mystery1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 18, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "18-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 23, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "23-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 28, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 29, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv", 16, 3, ".Exercise3.beta", "v_line/Mystery1", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 12, 11, ".Exercise3.gamma", "v_toggle/Mystery2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 13, 11, ".Exercise3.gamma", "v_toggle/Mystery2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 25, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 26, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 27, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 28, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 29, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 20, 5, ".Exercise3.gamma", "v_branch/Mystery2", "if", "20-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 20, 6, ".Exercise3.gamma", "v_branch/Mystery2", "else", "23-24,31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv", 19, 3, ".Exercise3.gamma", "v_line/Mystery2", "block", "19");
}
