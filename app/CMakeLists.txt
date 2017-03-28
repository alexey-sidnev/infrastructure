set(target app)

file(GLOB CPPS *.cpp)
file(GLOB HPPS ../include/*.h ../include/*.hpp)

include_directories(../include)

add_executable(${target} ${CPPS} ${HPPS})
target_link_libraries(app code_lib)

file(GLOB lint_config ${CMAKE_SOURCE_DIR}/CPPLINT.cfg)
add_custom_target(${target}_lint ALL
                  COMMAND ${LINTING_COMMAND} ${CPPS} ${HPPS}
                  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                  SOURCES ${LINTING_APP} ${lint_config})