if(EXISTS "/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/tests-b12d07c_tests.cmake")
  include("/Users/noahmays-smith/VSCODE/onboarding-lab-4/dv/dv/tests-b12d07c_tests.cmake")
else()
  add_test(tests_NOT_BUILT-b12d07c tests_NOT_BUILT-b12d07c)
endif()