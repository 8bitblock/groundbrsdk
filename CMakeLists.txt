cmake_minimum_required(VERSION 3.10)
project(ExternalCheat)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(ExternalCheat src/main.cpp)

# Since the SDK headers are in the root directory, I need to add the root to the include directories.
include_directories(${CMAKE_SOURCE_DIR})
