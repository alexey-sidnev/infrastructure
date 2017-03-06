file(GLOB_RECURSE CPPS *.cpp)
file(GLOB_RECURSE HPPS *.h *.hpp)

include_directories(../include)

add_library(code ${CPPS} ${HPPS})

