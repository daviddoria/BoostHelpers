cmake_minimum_required(VERSION 2.8)

project(BoostHelpers)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(CMakeHelpers)

# Build the library
add_library(BoostHelpers BoostHelpers.cpp)
set(BoostHelpers_libraries ${BoostHelpers_libraries} BoostHelpers)

# Enable C++11.
if(UNIX)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++11")
endif(UNIX)

# Build the tests if requested
option(BoostHelpers_BuildTests "Build BoostHelpers tests?" OFF)

if(BoostHelpers_BuildTests)
  add_subdirectory(Tests)
endif(BoostHelpers_BuildTests)

# Add the files to the project
add_custom_target(BoostHelpersSources SOURCES
BoostHelpers.h
BoostHelpers.hpp
)

# Allow this project to be detected and used as a submodule
CreateSubmodule(BoostHelpers)
