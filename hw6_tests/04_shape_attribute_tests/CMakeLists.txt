include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW6ShapeAttributeTests-4 shape_attribute_tests.cpp)
target_link_libraries(runHW6ShapeAttributeTests-4 hw6_library gtest gtest_main)