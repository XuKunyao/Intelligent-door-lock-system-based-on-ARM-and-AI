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
CMAKE_COMMAND = D:\CMAKE\bin\cmake.exe

# The command to remove a file.
RM = D:\CMAKE\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\SeetaFace2\SeetaFace2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\SeetaFace_BY

# Include any dependencies generated for this target.
include FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.make

# Include the progress variables for this target.
include FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/progress.make

# Include the compile flags for this target's objects.
include FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/includes_CXX.rsp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj: D:/SeetaFace2/SeetaFace2/FaceLandmarker/src/seeta/FaceLandmarker.cpp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj -MF CMakeFiles\SeetaFaceLandmarker.dir\src\seeta\FaceLandmarker.cpp.obj.d -o CMakeFiles\SeetaFaceLandmarker.dir\src\seeta\FaceLandmarker.cpp.obj -c D:\SeetaFace2\SeetaFace2\FaceLandmarker\src\seeta\FaceLandmarker.cpp

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.i"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SeetaFace2\SeetaFace2\FaceLandmarker\src\seeta\FaceLandmarker.cpp > CMakeFiles\SeetaFaceLandmarker.dir\src\seeta\FaceLandmarker.cpp.i

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.s"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SeetaFace2\SeetaFace2\FaceLandmarker\src\seeta\FaceLandmarker.cpp -o CMakeFiles\SeetaFaceLandmarker.dir\src\seeta\FaceLandmarker.cpp.s

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/includes_CXX.rsp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj: D:/SeetaFace2/SeetaFace2/FaceLandmarker/seeta/FaceLandmarkerPrivate.cpp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj -MF CMakeFiles\SeetaFaceLandmarker.dir\seeta\FaceLandmarkerPrivate.cpp.obj.d -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\FaceLandmarkerPrivate.cpp.obj -c D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\FaceLandmarkerPrivate.cpp

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.i"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\FaceLandmarkerPrivate.cpp > CMakeFiles\SeetaFaceLandmarker.dir\seeta\FaceLandmarkerPrivate.cpp.i

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.s"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\FaceLandmarkerPrivate.cpp -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\FaceLandmarkerPrivate.cpp.s

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/includes_CXX.rsp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj: D:/SeetaFace2/SeetaFace2/FaceLandmarker/seeta/ImageProcess.cpp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj -MF CMakeFiles\SeetaFaceLandmarker.dir\seeta\ImageProcess.cpp.obj.d -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\ImageProcess.cpp.obj -c D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\ImageProcess.cpp

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.i"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\ImageProcess.cpp > CMakeFiles\SeetaFaceLandmarker.dir\seeta\ImageProcess.cpp.i

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.s"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\ImageProcess.cpp -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\ImageProcess.cpp.s

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/includes_CXX.rsp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj: D:/SeetaFace2/SeetaFace2/FaceLandmarker/seeta/common_alignment.cpp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj -MF CMakeFiles\SeetaFaceLandmarker.dir\seeta\common_alignment.cpp.obj.d -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\common_alignment.cpp.obj -c D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\common_alignment.cpp

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.i"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\common_alignment.cpp > CMakeFiles\SeetaFaceLandmarker.dir\seeta\common_alignment.cpp.i

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.s"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\common_alignment.cpp -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\common_alignment.cpp.s

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/flags.make
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/includes_CXX.rsp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj: D:/SeetaFace2/SeetaFace2/FaceLandmarker/seeta/graphics2d.cpp
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj -MF CMakeFiles\SeetaFaceLandmarker.dir\seeta\graphics2d.cpp.obj.d -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\graphics2d.cpp.obj -c D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\graphics2d.cpp

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.i"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\graphics2d.cpp > CMakeFiles\SeetaFaceLandmarker.dir\seeta\graphics2d.cpp.i

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.s"
	cd /d D:\SeetaFace_BY\FaceLandmarker && E:\QT\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SeetaFace2\SeetaFace2\FaceLandmarker\seeta\graphics2d.cpp -o CMakeFiles\SeetaFaceLandmarker.dir\seeta\graphics2d.cpp.s

# Object files for target SeetaFaceLandmarker
SeetaFaceLandmarker_OBJECTS = \
"CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj" \
"CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj" \
"CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj" \
"CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj" \
"CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj"

# External object files for target SeetaFaceLandmarker
SeetaFaceLandmarker_EXTERNAL_OBJECTS =

bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/src/seeta/FaceLandmarker.cpp.obj
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/FaceLandmarkerPrivate.cpp.obj
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/ImageProcess.cpp.obj
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/common_alignment.cpp.obj
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/seeta/graphics2d.cpp.obj
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/build.make
bin/libSeetaFaceLandmarker.dll: lib/libSeetaNet.dll.a
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/linklibs.rsp
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/objects1.rsp
bin/libSeetaFaceLandmarker.dll: FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\SeetaFace_BY\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ..\bin\libSeetaFaceLandmarker.dll"
	cd /d D:\SeetaFace_BY\FaceLandmarker && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SeetaFaceLandmarker.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/build: bin/libSeetaFaceLandmarker.dll
.PHONY : FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/build

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/clean:
	cd /d D:\SeetaFace_BY\FaceLandmarker && $(CMAKE_COMMAND) -P CMakeFiles\SeetaFaceLandmarker.dir\cmake_clean.cmake
.PHONY : FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/clean

FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\SeetaFace2\SeetaFace2 D:\SeetaFace2\SeetaFace2\FaceLandmarker D:\SeetaFace_BY D:\SeetaFace_BY\FaceLandmarker D:\SeetaFace_BY\FaceLandmarker\CMakeFiles\SeetaFaceLandmarker.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : FaceLandmarker/CMakeFiles/SeetaFaceLandmarker.dir/depend

