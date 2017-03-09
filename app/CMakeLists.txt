file(GLOB CPPS *.cpp)
file(GLOB HPPS ../include/*.h ../include/*.hpp)

include_directories(../include)

add_executable(app ${CPPS} ${HPPS})
target_link_libraries(app code_lib)