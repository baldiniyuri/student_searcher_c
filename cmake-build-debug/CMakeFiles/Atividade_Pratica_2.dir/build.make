# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yuri/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yuri/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yuri/CLionProjects/Atividade_Pratica_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Atividade_Pratica_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Atividade_Pratica_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Atividade_Pratica_2.dir/flags.make

CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o: CMakeFiles/Atividade_Pratica_2.dir/flags.make
CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o -c /home/yuri/CLionProjects/Atividade_Pratica_2/main.cpp

CMakeFiles/Atividade_Pratica_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Atividade_Pratica_2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuri/CLionProjects/Atividade_Pratica_2/main.cpp > CMakeFiles/Atividade_Pratica_2.dir/main.cpp.i

CMakeFiles/Atividade_Pratica_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Atividade_Pratica_2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuri/CLionProjects/Atividade_Pratica_2/main.cpp -o CMakeFiles/Atividade_Pratica_2.dir/main.cpp.s

# Object files for target Atividade_Pratica_2
Atividade_Pratica_2_OBJECTS = \
"CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o"

# External object files for target Atividade_Pratica_2
Atividade_Pratica_2_EXTERNAL_OBJECTS =

Atividade_Pratica_2: CMakeFiles/Atividade_Pratica_2.dir/main.cpp.o
Atividade_Pratica_2: CMakeFiles/Atividade_Pratica_2.dir/build.make
Atividade_Pratica_2: CMakeFiles/Atividade_Pratica_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Atividade_Pratica_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Atividade_Pratica_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Atividade_Pratica_2.dir/build: Atividade_Pratica_2

.PHONY : CMakeFiles/Atividade_Pratica_2.dir/build

CMakeFiles/Atividade_Pratica_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Atividade_Pratica_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Atividade_Pratica_2.dir/clean

CMakeFiles/Atividade_Pratica_2.dir/depend:
	cd /home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuri/CLionProjects/Atividade_Pratica_2 /home/yuri/CLionProjects/Atividade_Pratica_2 /home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug /home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug /home/yuri/CLionProjects/Atividade_Pratica_2/cmake-build-debug/CMakeFiles/Atividade_Pratica_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Atividade_Pratica_2.dir/depend

