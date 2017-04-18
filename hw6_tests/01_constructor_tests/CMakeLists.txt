include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW6ConstructorTest-1 constructor_tests.cpp)
target_link_libraries(runHW6ConstructorTest-1 hw6_library gtest gtest_main)