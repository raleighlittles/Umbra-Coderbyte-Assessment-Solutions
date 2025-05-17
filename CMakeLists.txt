cmake_minimum_required(VERSION 3.30)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(UmbraAssessment
  DESCRIPTION "Umbra Interview Assessment (2023)"
  LANGUAGES CXX
  HOMEPAGE_URL "https://github.com/raleighlittles/Umbra-Coderbyte-Assessment-Solutions")

enable_testing()

# See: https://cmake.org/cmake/help/latest/module/FetchContent.html
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)
FetchContent_MakeAvailable(googletest)

# Add subdirectories
add_subdirectory(q1_easy)
add_subdirectory(q2_medium)
add_subdirectory(tests)