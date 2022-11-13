cmake_minimum_required(VERSION 3.16)

project("c-program" 
    VERSION 0.0.1 
    LANGUAGES C
    DESCRIPTION "A template c project")

# global variable   
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD_EXTEMSION OFF)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/") # Set CMAKE module path
set(LIB_NAME mylib)
Set(APP_NAME app)

# options
option(ENABLE_DOC       "Build documentation" OFF)
option(ENABLE_TESTING   "Execute unity tests" OFF)
option(ENABLE_COVERAGE  "Execute unity tests" OFF)

# Cmake Module
include(FetchContent)


if (ENABLE_COVERAGE)
    #include(CTest)
    include(CodeCoverage)
    append_coverage_compiler_flags()
endif()

# grab unity library for testing
FetchContent_Declare(
    unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
    GIT_TAG v2.5.2
    GIT_SHALLOW TRUE)
    FetchContent_MakeAvailable(unity)
    
# traversing sub directory   
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(docs)
add_subdirectory(tests)