project("Brompton Bicycles" CXX)
cmake_minimum_required(VERSION 3.0)

# Set the C++ standard to C++17 (or your preferred version)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the subdirectory for the motor controller
add_subdirectory(utility)

# Add the subdirectory for the main application
add_subdirectory(main)
message("Building application")

# Include CTest for test discovery and execution
include(CTest)

# Add the subdirectory for external dependencies
add_subdirectory(external)

# Add the subdirectory for the test suite
add_subdirectory(test)
message("Building test suite")
