# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test

# Include any dependencies generated for this target.
include CMakeFiles/qt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/qt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qt.dir/flags.make

CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o: CMakeFiles/qt.dir/flags.make
CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o: qt_autogen/mocs_compilation.cpp
CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o: CMakeFiles/qt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o -c /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/qt_autogen/mocs_compilation.cpp

CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/qt_autogen/mocs_compilation.cpp > CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.i

CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/qt_autogen/mocs_compilation.cpp -o CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.s

CMakeFiles/qt.dir/main.cpp.o: CMakeFiles/qt.dir/flags.make
CMakeFiles/qt.dir/main.cpp.o: ../main.cpp
CMakeFiles/qt.dir/main.cpp.o: CMakeFiles/qt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qt.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt.dir/main.cpp.o -MF CMakeFiles/qt.dir/main.cpp.o.d -o CMakeFiles/qt.dir/main.cpp.o -c /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/main.cpp

CMakeFiles/qt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/main.cpp > CMakeFiles/qt.dir/main.cpp.i

CMakeFiles/qt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/main.cpp -o CMakeFiles/qt.dir/main.cpp.s

CMakeFiles/qt.dir/calculator.cpp.o: CMakeFiles/qt.dir/flags.make
CMakeFiles/qt.dir/calculator.cpp.o: ../calculator.cpp
CMakeFiles/qt.dir/calculator.cpp.o: CMakeFiles/qt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qt.dir/calculator.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qt.dir/calculator.cpp.o -MF CMakeFiles/qt.dir/calculator.cpp.o.d -o CMakeFiles/qt.dir/calculator.cpp.o -c /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/calculator.cpp

CMakeFiles/qt.dir/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qt.dir/calculator.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/calculator.cpp > CMakeFiles/qt.dir/calculator.cpp.i

CMakeFiles/qt.dir/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qt.dir/calculator.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/calculator.cpp -o CMakeFiles/qt.dir/calculator.cpp.s

# Object files for target qt
qt_OBJECTS = \
"CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qt.dir/main.cpp.o" \
"CMakeFiles/qt.dir/calculator.cpp.o"

# External object files for target qt
qt_EXTERNAL_OBJECTS =

qt.app/Contents/MacOS/qt: CMakeFiles/qt.dir/qt_autogen/mocs_compilation.cpp.o
qt.app/Contents/MacOS/qt: CMakeFiles/qt.dir/main.cpp.o
qt.app/Contents/MacOS/qt: CMakeFiles/qt.dir/calculator.cpp.o
qt.app/Contents/MacOS/qt: CMakeFiles/qt.dir/build.make
qt.app/Contents/MacOS/qt: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
qt.app/Contents/MacOS/qt: ../libcalc.a
qt.app/Contents/MacOS/qt: /usr/local/lib/QtGui.framework/Versions/A/QtGui
qt.app/Contents/MacOS/qt: /usr/local/lib/QtCore.framework/Versions/A/QtCore
qt.app/Contents/MacOS/qt: CMakeFiles/qt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable qt.app/Contents/MacOS/qt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qt.dir/build: qt.app/Contents/MacOS/qt
.PHONY : CMakeFiles/qt.dir/build

CMakeFiles/qt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qt.dir/clean

CMakeFiles/qt.dir/depend:
	cd /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test /Users/lightnin/projects/C7_SmartCalc_v1.0-0/src/qt/test/CMakeFiles/qt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qt.dir/depend
