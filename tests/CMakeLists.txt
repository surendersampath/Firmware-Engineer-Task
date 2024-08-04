cmake_minimum_required(VERSION 3.0)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.10.0
)
FetchContent_MakeAvailable(googletest)

# Disable warnings
target_compile_options(gtest PRIVATE -w)
target_compile_options(gtest_main PRIVATE -w)

# Include the main utility library header files
include_directories(${CMAKE_SOURCE_DIR}/utility)

# Add the test source file
add_executable(UtilityTests ut_utility.cpp)

# Link the test executable against Google Test and the utility library
target_link_libraries(UtilityTests gtest gtest_main utility)

# Add the test executable to CMake's testing framework
add_test(NAME UtilityTests COMMAND UtilityTests)
