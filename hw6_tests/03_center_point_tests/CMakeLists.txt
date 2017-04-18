include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW6CenterPointTests-3 cneter_point_tests.cpp)
target_link_libraries(runHW6CenterPointTests-3 hw6_library gtest gtest_main)