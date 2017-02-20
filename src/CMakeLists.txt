cmake_minimum_required(VERSION 3.0)

file(GLOB_RECURSE CPPS "*.cpp")
file(GLOB_RECURSE HPPS "*.h")

include_directories(../include)

add_library(code ${CPPS} ${HPPS})

