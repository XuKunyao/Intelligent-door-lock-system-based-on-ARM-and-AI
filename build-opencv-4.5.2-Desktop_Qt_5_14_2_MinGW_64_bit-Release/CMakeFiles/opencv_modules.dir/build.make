# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = F:\EXE\CMake\bin\cmake.exe

# The command to remove a file.
RM = F:\EXE\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\opencv-4.5.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release

# Utility rule file for opencv_modules.

# Include any custom commands dependencies for this target.
include CMakeFiles/opencv_modules.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/opencv_modules.dir/progress.make

opencv_modules: CMakeFiles/opencv_modules.dir/build.make
.PHONY : opencv_modules

# Rule to build all files generated by this target.
CMakeFiles/opencv_modules.dir/build: opencv_modules
.PHONY : CMakeFiles/opencv_modules.dir/build

CMakeFiles/opencv_modules.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\opencv_modules.dir\cmake_clean.cmake
.PHONY : CMakeFiles/opencv_modules.dir/clean

CMakeFiles/opencv_modules.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\opencv-4.5.2 E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\opencv-4.5.2 E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release E:\Program\Linux\Linux_Projects\ARM-DoorLock-Project\build-opencv-4.5.2-Desktop_Qt_5_14_2_MinGW_64_bit-Release\CMakeFiles\opencv_modules.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencv_modules.dir/depend

