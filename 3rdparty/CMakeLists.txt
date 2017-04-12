if(MSVC)
     #vc 2012 fix for vararg templates
     ADD_DEFINITIONS (/D_VARIADIC_MAX=10)
     MESSAGE(STATUS "MSVC: Set variadic max to 10 for MSVC compatibility")
endif() 

add_subdirectory(gtest)