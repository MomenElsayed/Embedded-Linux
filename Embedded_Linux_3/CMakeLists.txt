#   Check The min. Requierment for CMake Version
cmake_minimum_required(VERSION 3.22)

#   Used to just add Describtion to the Project
project(Calculator
        DESCRIPTION "Caculator Project That Support (add,sub,mul,div and mod) ")


#   Add Executable file with the same name of the project name
add_executable(${PROJECT_NAME} main.c)

#   Add the Include Directories to the Project
#   Note : if the includes are in the usr/lib we don't need this line because it is seen to all files
target_include_directories(${PROJECT_NAME} INTERFACE Calculator_Libraries/Library_Lab/Include)

add_subdirectory(Calculator_Libraries/)

#   Link the dependent file PROJECT NAME to the Created Static Library
target_link_libraries(${PROJECT_NAME} PRIVATE Operations_static)

#   Link the dependent file PROJECT NAME to the created Dynamic Library 
target_link_libraries(${PROJECT_NAME} PRIVATE Operations_dynamic)

#   Since we added the Includes in line 25 as INTERFACE so we don't need these lines
# set(HEADER Calculator_Libraries/staticLibrary_Lab/Include/operations.h)
# target_include_directories(calculator_static PRIVATE ${HEADER})
# target_include_directories(calculator_dynamic PRIVATE ${HEADER})
