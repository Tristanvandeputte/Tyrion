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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/uauser/Desktop/Tyrion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uauser/Desktop/Tyrion

# Include any dependencies generated for this target.
include src/CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/game.dir/flags.make

src/CMakeFiles/game.dir/sfml/main.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/main.cpp.o: src/sfml/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/main.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/main.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/main.cpp

src/CMakeFiles/game.dir/sfml/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/main.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/main.cpp > CMakeFiles/game.dir/sfml/main.cpp.i

src/CMakeFiles/game.dir/sfml/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/main.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/main.cpp -o CMakeFiles/game.dir/sfml/main.cpp.s

src/CMakeFiles/game.dir/sfml/main.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/main.cpp.o.requires

src/CMakeFiles/game.dir/sfml/main.cpp.o.provides: src/CMakeFiles/game.dir/sfml/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/main.cpp.o.provides

src/CMakeFiles/game.dir/sfml/main.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/main.cpp.o

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o: src/sfml/KeyBoard.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/KeyBoard.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/KeyBoard.cpp

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/KeyBoard.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/KeyBoard.cpp > CMakeFiles/game.dir/sfml/KeyBoard.cpp.i

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/KeyBoard.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/KeyBoard.cpp -o CMakeFiles/game.dir/sfml/KeyBoard.cpp.s

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides

src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o

src/CMakeFiles/game.dir/sfml/Player.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Player.cpp.o: src/sfml/Player.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Player.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Player.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/Player.cpp

src/CMakeFiles/game.dir/sfml/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Player.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/Player.cpp > CMakeFiles/game.dir/sfml/Player.cpp.i

src/CMakeFiles/game.dir/sfml/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Player.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/Player.cpp -o CMakeFiles/game.dir/sfml/Player.cpp.s

src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Player.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Player.cpp.o

src/CMakeFiles/game.dir/sfml/Game.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Game.cpp.o: src/sfml/Game.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Game.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Game.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/Game.cpp

src/CMakeFiles/game.dir/sfml/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Game.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/Game.cpp > CMakeFiles/game.dir/sfml/Game.cpp.i

src/CMakeFiles/game.dir/sfml/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Game.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/Game.cpp -o CMakeFiles/game.dir/sfml/Game.cpp.s

src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Game.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Game.cpp.o

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o: src/sfml/PlayerFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/PlayerFactory.cpp

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/PlayerFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/PlayerFactory.cpp > CMakeFiles/game.dir/sfml/PlayerFactory.cpp.i

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/PlayerFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/PlayerFactory.cpp -o CMakeFiles/game.dir/sfml/PlayerFactory.cpp.s

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.requires

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.provides: src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.provides

src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o: src/sfml/StopWatch.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/StopWatch.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/StopWatch.cpp

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/StopWatch.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/StopWatch.cpp > CMakeFiles/game.dir/sfml/StopWatch.cpp.i

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/StopWatch.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/StopWatch.cpp -o CMakeFiles/game.dir/sfml/StopWatch.cpp.s

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides

src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Bullet.cpp.o: src/sfml/Bullet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Bullet.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Bullet.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/Bullet.cpp

src/CMakeFiles/game.dir/sfml/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Bullet.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/Bullet.cpp > CMakeFiles/game.dir/sfml/Bullet.cpp.i

src/CMakeFiles/game.dir/sfml/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Bullet.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/Bullet.cpp -o CMakeFiles/game.dir/sfml/Bullet.cpp.s

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o: src/sfml/BulletFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/BulletFactory.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/BulletFactory.cpp

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/BulletFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/BulletFactory.cpp > CMakeFiles/game.dir/sfml/BulletFactory.cpp.i

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/BulletFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/BulletFactory.cpp -o CMakeFiles/game.dir/sfml/BulletFactory.cpp.s

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.requires

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.provides: src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.provides

src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/Enemy.cpp.o: src/sfml/Enemy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/Enemy.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/Enemy.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/Enemy.cpp

src/CMakeFiles/game.dir/sfml/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/Enemy.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/Enemy.cpp > CMakeFiles/game.dir/sfml/Enemy.cpp.i

src/CMakeFiles/game.dir/sfml/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/Enemy.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/Enemy.cpp -o CMakeFiles/game.dir/sfml/Enemy.cpp.s

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides

src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o: src/sfml/EnemyFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o -c /home/uauser/Desktop/Tyrion/src/sfml/EnemyFactory.cpp

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/sfml/EnemyFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/sfml/EnemyFactory.cpp > CMakeFiles/game.dir/sfml/EnemyFactory.cpp.i

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/sfml/EnemyFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/sfml/EnemyFactory.cpp -o CMakeFiles/game.dir/sfml/EnemyFactory.cpp.s

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.requires

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.provides: src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.provides

src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/sfml/main.cpp.o" \
"CMakeFiles/game.dir/sfml/KeyBoard.cpp.o" \
"CMakeFiles/game.dir/sfml/Player.cpp.o" \
"CMakeFiles/game.dir/sfml/Game.cpp.o" \
"CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o" \
"CMakeFiles/game.dir/sfml/StopWatch.cpp.o" \
"CMakeFiles/game.dir/sfml/Bullet.cpp.o" \
"CMakeFiles/game.dir/sfml/BulletFactory.cpp.o" \
"CMakeFiles/game.dir/sfml/Enemy.cpp.o" \
"CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

src/game: src/CMakeFiles/game.dir/sfml/main.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Player.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Game.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o
src/game: src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o
src/game: src/CMakeFiles/game.dir/build.make
src/game: /usr/lib/x86_64-linux-gnu/libsfml-system.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-window.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-network.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
src/game: src/libgamelogic.a
src/game: src/CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable game"
	cd /home/uauser/Desktop/Tyrion/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/game.dir/build: src/game
.PHONY : src/CMakeFiles/game.dir/build

src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/main.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/KeyBoard.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Player.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Game.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/PlayerFactory.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/StopWatch.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Bullet.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/BulletFactory.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/Enemy.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/sfml/EnemyFactory.cpp.o.requires
.PHONY : src/CMakeFiles/game.dir/requires

src/CMakeFiles/game.dir/clean:
	cd /home/uauser/Desktop/Tyrion/src && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/game.dir/clean

src/CMakeFiles/game.dir/depend:
	cd /home/uauser/Desktop/Tyrion && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uauser/Desktop/Tyrion /home/uauser/Desktop/Tyrion/src /home/uauser/Desktop/Tyrion /home/uauser/Desktop/Tyrion/src /home/uauser/Desktop/Tyrion/src/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/game.dir/depend

