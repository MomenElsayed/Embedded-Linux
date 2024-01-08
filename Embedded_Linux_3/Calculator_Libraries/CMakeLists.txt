#   Check The min. Requierment for CMake Version
cmake_minimum_required(VERSION 3.22)

#   Used to just add Describtion to the Project
project(Operations
        DESCRIPTION "Operation Library That Support (add,sub,mul,div and mod) ")


#   Set SOURCE_DIR Variable That Have the Path for all source files for the libraries
set(SOURCE_LIB_DIR Library_Lab/Lib)

#   Set SOURCES Variable that Include all the Source Files That will be Compiled
set(SOURCES_LIB
    ${SOURCE_LIB_DIR}/addition.c
    ${SOURCE_LIB_DIR}/subtraction.c
    ${SOURCE_LIB_DIR}/division.c
    ${SOURCE_LIB_DIR}/multiplication.c
    ${SOURCE_LIB_DIR}/modulus.c
)

#   Make a static library libcalculator_static.a and directory called calculator_static
add_library(Operations_static STATIC ${SOURCES_LIB})

#   Make a Dynamic library libcalculator_dynamic.so and directory called calculator_dynamic
add_library(Operations_dynamic SHARED ${SOURCES_LIB})

#   Set HEADER Variable That Include Header Files Directory
set(HEADER Library_Lab/Include/operations.h)

#   Add the Include Directories to the Libraries
target_include_directories(Operations_static PRIVATE ${HEADER})
target_include_directories(Operations_dynamic PRIVATE ${HEADER})
