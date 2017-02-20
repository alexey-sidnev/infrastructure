cmake_minimum_required(VERSION 3.0)

file(GLOB_RECURSE CPPS "*.cc")
file(GLOB_RECURSE HPPS "*.h")

include_directories(include)
include_directories(./)

if(MSVC)
    #vc 2012 fix for vararg templates
    #set(MSVC_COMPILER_DEFS "-D_VARIADIC_MAX=10")
    ADD_DEFINITIONS (/D_VARIADIC_MAX=10)
    MESSAGE(STATUS "MSVC: Set variadic max to 10 for MSVC compatibility")
endif() 

add_library(gtest ${CPPS} ${HPPS})

