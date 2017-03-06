file(GLOB CPPS *.cpp)
file(GLOB HPPS *.h *.hpp)

include_directories(../include)

add_executable(app ${CPPS} ${HPPS})
target_link_libraries(app code)