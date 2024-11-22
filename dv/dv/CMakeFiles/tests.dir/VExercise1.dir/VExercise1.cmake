# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL, defaults to 'perl' if not set)")
set(PYTHON3 "python3" CACHE FILEPATH "Python3 executable (from $PYTHON3, defaults to 'python3' if not set)")
set(VERILATOR_ROOT "/usr/local/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")
set(VERILATOR_SOLVER "" CACHE STRING "Default SMT solver for constrained randomization (from $VERILATOR_SOLVER)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VExercise1_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VExercise1_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VExercise1_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VExercise1_COVERAGE 1)
# Timing mode?  0/1
set(VExercise1_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(VExercise1_THREADS 1)
# VCD Tracing output mode?  0/1 (from --trace)
set(VExercise1_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(VExercise1_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VExercise1_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_threads.cpp" )
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VExercise1_CLASSES_SLOW "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1___024root__Slow.cpp" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1___024root__DepSet_h6017a2fe__0__Slow.cpp" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1___024root__DepSet_h1de22222__0__Slow.cpp" )
# Generated module classes, fast-path, compile with highest optimization
set(VExercise1_CLASSES_FAST "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1.cpp" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1___024root__DepSet_h6017a2fe__0.cpp" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1___024root__DepSet_h1de22222__0.cpp" )
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VExercise1_SUPPORT_SLOW "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/CMakeFiles/tests.dir/VExercise1.dir/VExercise1__Syms.cpp" )
# Generated support classes, fast-path, compile with highest optimization
set(VExercise1_SUPPORT_FAST )
# All dependencies
set(VExercise1_DEPS "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise1.sv" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise2.sv" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise3.sv" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Exercise4.sv" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery1.sv" "/Users/noahmays-smith/VSCODE/onboarding-lab-4/rtl/Mysteries/Mystery2.sv" "/usr/local/share/verilator/bin/verilator_bin" "/usr/local/share/verilator/include/verilated_std.sv" )
# User .cpp files (from .cpp's on Verilator command line)
set(VExercise1_USER_CLASSES )
