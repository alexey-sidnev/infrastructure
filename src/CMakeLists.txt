file(GLOB_RECURSE CPPS *.cpp)
file(GLOB_RECURSE HPPS ../include/*.h ../include/*.hpp)

include_directories(../include)

add_library(code_lib ${CPPS} ${HPPS})

