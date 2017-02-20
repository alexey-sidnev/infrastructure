file(GLOB CPPS "*.cpp")
file(GLOB HPPS "*.h")

include_directories(../include)

add_executable(app ${CPPS} ${HPPS})
target_link_libraries(app code)