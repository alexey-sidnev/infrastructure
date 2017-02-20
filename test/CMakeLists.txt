file(GLOB CPPS "*.cpp")
file(GLOB HPPS "*.h")

find_package( Threads )

include_directories(../3rdparty/gtest/include)
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

if(MSVC)
    #vc 2012 fix for vararg templates
    #set(MSVC_COMPILER_DEFS "-D_VARIADIC_MAX=10")
    ADD_DEFINITIONS (/D_VARIADIC_MAX=10)
    MESSAGE(STATUS "MSVC: Set variadic max to 10 for MSVC compatibility")
endif()

add_executable(mytest ${CPPS} ${HPPS})

target_link_libraries(mytest gtest code  ${CMAKE_THREAD_LIBS_INIT})
