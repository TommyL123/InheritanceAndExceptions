include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW6BasicTests-0 basic_check.cpp)
target_link_libraries(runHW6BasicTests-0 hw6_library gtest gtest_main)
