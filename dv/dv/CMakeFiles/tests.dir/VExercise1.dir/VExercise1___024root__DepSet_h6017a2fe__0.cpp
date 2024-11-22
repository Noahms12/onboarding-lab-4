// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "VExercise1__pch.h"
#include "VExercise1__Syms.h"
#include "VExercise1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__ico(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise1___024root___eval_triggers__ico(VExercise1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise1___024root___ico_sequent__TOP__0(VExercise1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.op) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.Exercise1__DOT____Vtogcov__op = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__op)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.op)));
    }
    if ((2U & ((IData)(vlSelfRef.op) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.Exercise1__DOT____Vtogcov__op = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__op)) 
                                                   | (2U 
                                                      & (IData)(vlSelfRef.op)));
    }
    if ((1U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xfeU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((2U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xfdU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((4U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xfbU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((8U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xf7U 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xefU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xdfU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0xbfU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.Exercise1__DOT____Vtogcov__a = ((0x7fU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__a)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelfRef.a)));
    }
    if ((1U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xfeU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((2U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xfdU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((4U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xfbU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((8U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xf7U 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xefU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xdfU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0xbfU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.Exercise1__DOT____Vtogcov__b = ((0x7fU 
                                                   & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__b)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelfRef.b)));
    }
    if ((0U == (IData)(vlSelfRef.op))) {
        vlSelfRef.out = ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.b));
        ++(vlSymsp->__Vcoverage[26]);
    } else if ((1U == (IData)(vlSelfRef.op))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.out = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b)));
    } else if ((2U == (IData)(vlSelfRef.op))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.out = (0xffU & VL_MODDIV_III(8, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b)));
    } else if ((3U == (IData)(vlSelfRef.op))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.out = (0xffU & (~ ((IData)(vlSelfRef.a) 
                                     & (IData)(vlSelfRef.b))));
    }
    ++(vlSymsp->__Vcoverage[30]);
    if ((1U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xfeU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (1U & (IData)(vlSelfRef.out)));
    }
    if ((2U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xfdU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (2U & (IData)(vlSelfRef.out)));
    }
    if ((4U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xfbU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (4U & (IData)(vlSelfRef.out)));
    }
    if ((8U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xf7U & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (8U & (IData)(vlSelfRef.out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xefU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (0x10U & (IData)(vlSelfRef.out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xdfU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (0x20U & (IData)(vlSelfRef.out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0xbfU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (0x40U & (IData)(vlSelfRef.out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.Exercise1__DOT____Vtogcov__out = 
            ((0x7fU & (IData)(vlSelfRef.Exercise1__DOT____Vtogcov__out)) 
             | (0x80U & (IData)(vlSelfRef.out)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__act(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise1___024root___eval_triggers__act(VExercise1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
