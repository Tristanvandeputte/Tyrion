# Set minimum CMake version
cmake_minimum_required(VERSION 2.8)

# Set project name
project(GP_Game)

# Add std=c++11 to the CXX flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Set the name of our executable
set(EXECUTABLE_NAME game)

# Add the src subdirectory
add_subdirectory(src)
