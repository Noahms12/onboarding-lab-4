// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VExercise3__pch.h"
#include "VExercise3.h"
#include "VExercise3___024root.h"

// FUNCTIONS
VExercise3__Syms::~VExercise3__Syms()
{
}

VExercise3__Syms::VExercise3__Syms(VerilatedContext* contextp, const char* namep, VExercise3* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(31);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
