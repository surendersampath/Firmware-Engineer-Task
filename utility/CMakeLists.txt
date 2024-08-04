cmake_minimum_required(VERSION 3.0)

# Set the project name
project(UtilityLibrary CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the library target
add_library(utility STATIC
    utility.cpp
    utility.h
)

# Include directories for the library
target_include_directories(utility PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

