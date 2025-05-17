add_executable(umbra_assessment_tests test_q1_easy.cpp test_q2_medium.cpp)
target_link_libraries(umbra_assessment_tests
    PRIVATE
    q1_easy
    q2_medium
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(umbra_assessment_tests)