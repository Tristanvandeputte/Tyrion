# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tristan/Desktop/Tyrion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tristan/Desktop/Tyrion

# Include any dependencies generated for this target.
include src/CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/game.dir/flags.make

src/CMakeFiles/game.dir/sfml/main.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/main.cpp.o: src/sfml/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/main.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/main.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/main.cpp

src/CMakeFiles/game.dir/sfml/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/main.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/main.cpp > CMakeFiles/game.dir/sfml/main.cpp.i

src/CMakeFiles/game.dir/sfml/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/main.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/main.cpp -o CMakeFiles/game.dir/sfml/main.cpp.s

src/CMakeFiles/game.dir/sfml/main.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/main.cpp.o.requires

src/CMakeFiles/game.dir/sfml/main.cpp.o.provides: src/CMakeFiles/game.dir/sfml/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/main.cpp.o.provides

src/CMakeFiles/game.dir/sfml/main.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/main.cpp.o

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o: src/sfml/KeyBoard.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/KeyBoard.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/KeyBoard.cpp

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/KeyBoard.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/KeyBoard.cpp > CMakeFiles/game.dir/sfml/KeyBoard.cpp.i

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/KeyBoard.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/KeyBoard.cpp -o CMakeFiles/game.dir/sfml/KeyBoard.cpp.s

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o

src/CMakeFiles/game.dir/sfml/Player.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Player.cpp.o: src/sfml/Player.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Player.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Player.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Player.cpp

src/CMakeFiles/game.dir/sfml/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Player.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Player.cpp > CMakeFiles/game.dir/sfml/Player.cpp.i

src/CMakeFiles/game.dir/sfml/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Player.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Player.cpp -o CMakeFiles/game.dir/sfml/Player.cpp.s

src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Player.cpp.o

src/CMakeFiles/game.dir/sfml/Game.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Game.cpp.o: src/sfml/Game.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Game.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Game.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Game.cpp

src/CMakeFiles/game.dir/sfml/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Game.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Game.cpp > CMakeFiles/game.dir/sfml/Game.cpp.i

src/CMakeFiles/game.dir/sfml/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Game.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Game.cpp -o CMakeFiles/game.dir/sfml/Game.cpp.s

src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Game.cpp.o

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o: src/sfml/StopWatch.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/StopWatch.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/StopWatch.cpp

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/StopWatch.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/StopWatch.cpp > CMakeFiles/game.dir/sfml/StopWatch.cpp.i

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/StopWatch.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/StopWatch.cpp -o CMakeFiles/game.dir/sfml/StopWatch.cpp.s

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Bullet.cpp.o: src/sfml/Bullet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Bullet.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Bullet.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Bullet.cpp

src/CMakeFiles/game.dir/sfml/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Bullet.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Bullet.cpp > CMakeFiles/game.dir/sfml/Bullet.cpp.i

src/CMakeFiles/game.dir/sfml/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Bullet.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Bullet.cpp -o CMakeFiles/game.dir/sfml/Bullet.cpp.s

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Enemy.cpp.o: src/sfml/Enemy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Enemy.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Enemy.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Enemy.cpp

src/CMakeFiles/game.dir/sfml/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Enemy.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Enemy.cpp > CMakeFiles/game.dir/sfml/Enemy.cpp.i

src/CMakeFiles/game.dir/sfml/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Enemy.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Enemy.cpp -o CMakeFiles/game.dir/sfml/Enemy.cpp.s

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o: src/sfml/EntityFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/EntityFactory.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/EntityFactory.cpp

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/EntityFactory.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/EntityFactory.cpp > CMakeFiles/game.dir/sfml/EntityFactory.cpp.i

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/EntityFactory.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/EntityFactory.cpp -o CMakeFiles/game.dir/sfml/EntityFactory.cpp.s

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.requires

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.provides: src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.provides

src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o

src/CMakeFiles/game.dir/sfml/Background.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Background.cpp.o: src/sfml/Background.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Background.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Background.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Background.cpp

src/CMakeFiles/game.dir/sfml/Background.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Background.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Background.cpp > CMakeFiles/game.dir/sfml/Background.cpp.i

src/CMakeFiles/game.dir/sfml/Background.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Background.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Background.cpp -o CMakeFiles/game.dir/sfml/Background.cpp.s

src/CMakeFiles/game.dir/sfml/Background.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Background.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Background.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Background.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Background.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Background.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Background.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Background.cpp.o

src/CMakeFiles/game.dir/sfml/Powerup.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Powerup.cpp.o: src/sfml/Powerup.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Powerup.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Powerup.cpp.o -c /home/tristan/Desktop/Tyrion/src/sfml/Powerup.cpp

src/CMakeFiles/game.dir/sfml/Powerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Powerup.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/sfml/Powerup.cpp > CMakeFiles/game.dir/sfml/Powerup.cpp.i

src/CMakeFiles/game.dir/sfml/Powerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Powerup.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/sfml/Powerup.cpp -o CMakeFiles/game.dir/sfml/Powerup.cpp.s

src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Powerup.cpp.o

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o: src/parsing/tinyxml2.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/parsing/tinyxml2.cpp.o -c /home/tristan/Desktop/Tyrion/src/parsing/tinyxml2.cpp

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/parsing/tinyxml2.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/parsing/tinyxml2.cpp > CMakeFiles/game.dir/parsing/tinyxml2.cpp.i

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/parsing/tinyxml2.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/parsing/tinyxml2.cpp -o CMakeFiles/game.dir/parsing/tinyxml2.cpp.s

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.requires

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.provides: src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.provides

src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.provides.build: src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o

src/CMakeFiles/game.dir/parsing/compactxml.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/parsing/compactxml.cpp.o: src/parsing/compactxml.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/parsing/compactxml.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/parsing/compactxml.cpp.o -c /home/tristan/Desktop/Tyrion/src/parsing/compactxml.cpp

src/CMakeFiles/game.dir/parsing/compactxml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/parsing/compactxml.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/parsing/compactxml.cpp > CMakeFiles/game.dir/parsing/compactxml.cpp.i

src/CMakeFiles/game.dir/parsing/compactxml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/parsing/compactxml.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/parsing/compactxml.cpp -o CMakeFiles/game.dir/parsing/compactxml.cpp.s

src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.requires

src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.provides: src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.provides

src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.provides.build: src/CMakeFiles/game.dir/parsing/compactxml.cpp.o

src/CMakeFiles/game.dir/parsing/levelparser.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/parsing/levelparser.cpp.o: src/parsing/levelparser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tristan/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/parsing/levelparser.cpp.o"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/parsing/levelparser.cpp.o -c /home/tristan/Desktop/Tyrion/src/parsing/levelparser.cpp

src/CMakeFiles/game.dir/parsing/levelparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/parsing/levelparser.cpp.i"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tristan/Desktop/Tyrion/src/parsing/levelparser.cpp > CMakeFiles/game.dir/parsing/levelparser.cpp.i

src/CMakeFiles/game.dir/parsing/levelparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/parsing/levelparser.cpp.s"
	cd /home/tristan/Desktop/Tyrion/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tristan/Desktop/Tyrion/src/parsing/levelparser.cpp -o CMakeFiles/game.dir/parsing/levelparser.cpp.s

src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.requires

src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.provides: src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.provides

src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.provides.build: src/CMakeFiles/game.dir/parsing/levelparser.cpp.o

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/sfml/main.cpp.o" \
"CMakeFiles/game.dir/sfml/KeyBoard.cpp.o" \
"CMakeFiles/game.dir/sfml/Player.cpp.o" \
"CMakeFiles/game.dir/sfml/Game.cpp.o" \
"CMakeFiles/game.dir/sfml/StopWatch.cpp.o" \
"CMakeFiles/game.dir/sfml/Bullet.cpp.o" \
"CMakeFiles/game.dir/sfml/Enemy.cpp.o" \
"CMakeFiles/game.dir/sfml/EntityFactory.cpp.o" \
"CMakeFiles/game.dir/sfml/Background.cpp.o" \
"CMakeFiles/game.dir/sfml/Powerup.cpp.o" \
"CMakeFiles/game.dir/parsing/tinyxml2.cpp.o" \
"CMakeFiles/game.dir/parsing/compactxml.cpp.o" \
"CMakeFiles/game.dir/parsing/levelparser.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

src/game: src/CMakeFiles/game.dir/sfml/main.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Player.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Game.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Background.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Powerup.cpp.o
src/game: src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o
src/game: src/CMakeFiles/game.dir/parsing/compactxml.cpp.o
src/game: src/CMakeFiles/game.dir/parsing/levelparser.cpp.o
src/game: src/CMakeFiles/game.dir/build.make
src/game: /usr/lib/x86_64-linux-gnu/libsfml-system.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-window.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-network.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
src/game: src/libgamelogic.a
src/game: src/CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable game"
	cd /home/tristan/Desktop/Tyrion/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/game.dir/build: src/game
.PHONY : src/CMakeFiles/game.dir/build

src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/main.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/EntityFactory.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Background.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Powerup.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/parsing/tinyxml2.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/parsing/compactxml.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/parsing/levelparser.cpp.o.requires
.PHONY : src/CMakeFiles/game.dir/requires

src/CMakeFiles/game.dir/clean:
	cd /home/tristan/Desktop/Tyrion/src && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/game.dir/clean

src/CMakeFiles/game.dir/depend:
	cd /home/tristan/Desktop/Tyrion && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tristan/Desktop/Tyrion /home/tristan/Desktop/Tyrion/src /home/tristan/Desktop/Tyrion /home/tristan/Desktop/Tyrion/src /home/tristan/Desktop/Tyrion/src/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/game.dir/depend

