cmake_minimum_required(VERSION 3.0)
project("Brompton Bicycles" C CXX)

# Enable Testing
enable_testing()

# Add subdirectories for the different parts of the project
add_subdirectory(utility)
add_subdirectory(main)

# Add tests if the BUILD_TESTING option is enabled
add_subdirectory(tests)

# Set policy CMP0079 to NEW to allow linking targets across directories
if(POLICY CMP0079)
  cmake_policy(SET CMP0079 NEW)
endif()



# Link the main executable with the utility library
target_link_libraries(main_exe PRIVATE utility)

