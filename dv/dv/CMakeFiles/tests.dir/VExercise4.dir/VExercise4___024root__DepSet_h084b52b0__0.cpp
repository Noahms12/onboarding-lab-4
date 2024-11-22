// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "VExercise4__pch.h"
#include "VExercise4__Syms.h"
#include "VExercise4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__ico(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval_triggers__ico(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise4___024root___ico_sequent__TOP__0(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.cs) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__cs))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.Exercise4__DOT____Vtogcov__cs = vlSelfRef.cs;
    }
    if ((1U & ((IData)(vlSelfRef.sel) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__sel)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.Exercise4__DOT____Vtogcov__sel = 
            ((2U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__sel)) 
             | (1U & (IData)(vlSelfRef.sel)));
    }
    if ((2U & ((IData)(vlSelfRef.sel) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__sel)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.Exercise4__DOT____Vtogcov__sel = 
            ((1U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__sel)) 
             | (2U & (IData)(vlSelfRef.sel)));
    }
    if ((1U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xfeU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (1U & (IData)(vlSelfRef.alpha)));
    }
    if ((2U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xfdU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (2U & (IData)(vlSelfRef.alpha)));
    }
    if ((4U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xfbU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (4U & (IData)(vlSelfRef.alpha)));
    }
    if ((8U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xf7U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (8U & (IData)(vlSelfRef.alpha)));
    }
    if ((0x10U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xefU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (0x10U & (IData)(vlSelfRef.alpha)));
    }
    if ((0x20U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xdfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (0x20U & (IData)(vlSelfRef.alpha)));
    }
    if ((0x40U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0xbfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (0x40U & (IData)(vlSelfRef.alpha)));
    }
    if ((0x80U & ((IData)(vlSelfRef.alpha) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.Exercise4__DOT____Vtogcov__alpha 
            = ((0x7fU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__alpha)) 
               | (0x80U & (IData)(vlSelfRef.alpha)));
    }
    if ((1U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xfeU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (1U & (IData)(vlSelfRef.beta)));
    }
    if ((2U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xfdU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (2U & (IData)(vlSelfRef.beta)));
    }
    if ((4U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xfbU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (4U & (IData)(vlSelfRef.beta)));
    }
    if ((8U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xf7U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (8U & (IData)(vlSelfRef.beta)));
    }
    if ((0x10U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xefU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (0x10U & (IData)(vlSelfRef.beta)));
    }
    if ((0x20U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xdfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (0x20U & (IData)(vlSelfRef.beta)));
    }
    if ((0x40U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0xbfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (0x40U & (IData)(vlSelfRef.beta)));
    }
    if ((0x80U & ((IData)(vlSelfRef.beta) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.Exercise4__DOT____Vtogcov__beta = 
            ((0x7fU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__beta)) 
             | (0x80U & (IData)(vlSelfRef.beta)));
    }
    if ((1U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xfeU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (1U & (IData)(vlSelfRef.gamma)));
    }
    if ((2U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xfdU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (2U & (IData)(vlSelfRef.gamma)));
    }
    if ((4U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xfbU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (4U & (IData)(vlSelfRef.gamma)));
    }
    if ((8U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xf7U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (8U & (IData)(vlSelfRef.gamma)));
    }
    if ((0x10U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xefU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (0x10U & (IData)(vlSelfRef.gamma)));
    }
    if ((0x20U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xdfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (0x20U & (IData)(vlSelfRef.gamma)));
    }
    if ((0x40U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0xbfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (0x40U & (IData)(vlSelfRef.gamma)));
    }
    if ((0x80U & ((IData)(vlSelfRef.gamma) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.Exercise4__DOT____Vtogcov__gamma 
            = ((0x7fU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__gamma)) 
               | (0x80U & (IData)(vlSelfRef.gamma)));
    }
    if (vlSelfRef.cs) {
        if ((0U == (IData)(vlSelfRef.sel))) {
            vlSelfRef.out = vlSelfRef.alpha;
            ++(vlSymsp->__Vcoverage[35]);
        } else if ((1U == (IData)(vlSelfRef.sel))) {
            ++(vlSymsp->__Vcoverage[36]);
            vlSelfRef.out = vlSelfRef.beta;
        } else if ((2U == (IData)(vlSelfRef.sel))) {
            ++(vlSymsp->__Vcoverage[37]);
            vlSelfRef.out = vlSelfRef.gamma;
        } else {
            ++(vlSymsp->__Vcoverage[38]);
            vlSelfRef.out = ((IData)(vlSelfRef.alpha) 
                             & ((IData)(vlSelfRef.beta) 
                                | (IData)(vlSelfRef.gamma)));
        }
        ++(vlSymsp->__Vcoverage[40]);
    } else {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.out = 0U;
    }
    ++(vlSymsp->__Vcoverage[41]);
    if ((1U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xfeU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (1U & (IData)(vlSelfRef.out)));
    }
    if ((2U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xfdU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (2U & (IData)(vlSelfRef.out)));
    }
    if ((4U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xfbU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (4U & (IData)(vlSelfRef.out)));
    }
    if ((8U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xf7U & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (8U & (IData)(vlSelfRef.out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xefU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (0x10U & (IData)(vlSelfRef.out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xdfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (0x20U & (IData)(vlSelfRef.out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0xbfU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (0x40U & (IData)(vlSelfRef.out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.out) ^ (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.Exercise4__DOT____Vtogcov__out = 
            ((0x7fU & (IData)(vlSelfRef.Exercise4__DOT____Vtogcov__out)) 
             | (0x80U & (IData)(vlSelfRef.out)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__act(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval_triggers__act(VExercise4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
