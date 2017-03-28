set(target tests)

file(GLOB CPPS *.cpp)
file(GLOB HPPS ../include/*.h ../include/*.hpp)

find_package(Threads)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

include_directories(../3rdparty/gtest/include)
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_executable(${target} ${CPPS} ${HPPS})
target_link_libraries(tests gtest code_lib  ${CMAKE_THREAD_LIBS_INIT})

file(GLOB lint_config ${CMAKE_SOURCE_DIR}/CPPLINT.cfg)
add_custom_target(${target}_lint ALL
                  COMMAND ${LINTING_COMMAND} ${CPPS} ${HPPS}
                  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                  SOURCES ${LINTING_APP} ${lint_config})
