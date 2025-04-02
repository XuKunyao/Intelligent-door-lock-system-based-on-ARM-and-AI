# CMake generated Testfile for 
# Source directory: E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/modules/flann
# Build directory: E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release/bin/opencv_test_flann.exe" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release/test-reports/accuracy" _BACKTRACE_TRIPLES "E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/cmake/OpenCVUtils.cmake;1707;add_test;E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/cmake/OpenCVModule.cmake;1313;ocv_add_test_from_target;E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/cmake/OpenCVModule.cmake;1077;ocv_add_accuracy_tests;E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/modules/flann/CMakeLists.txt;2;ocv_define_module;E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/opencv-4.5.2/modules/flann/CMakeLists.txt;0;")
