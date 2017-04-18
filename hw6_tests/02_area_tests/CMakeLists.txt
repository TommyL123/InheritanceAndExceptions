include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW6AreaTests-2 area_tests.cpp)
target_link_libraries(runHW6AreaTests-2 hw6_library gtest gtest_main)