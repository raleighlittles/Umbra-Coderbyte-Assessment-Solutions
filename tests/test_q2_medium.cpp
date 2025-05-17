#include "formatted_number.cpp"
#include <gtest/gtest.h>

TEST(q2_medium, test1) {

    std::string strArr = {
        "1,093,222.04"
    };
    EXPECT_EQ(FormattedNumber(strArr, 12), "true") << " " << strArr << " is a valid formatted number";
}

TEST(q2_medium, test2) {
    std::string strArr = {
        "1,093,22.04"
    };
    EXPECT_EQ(FormattedNumber(strArr, 11), "false") <<  " " << strArr << " is NOT a valid formatted number";
}

TEST(q2_medium, test3) {
    std::string strArr = {
        "0.232567"
    };
    EXPECT_EQ(FormattedNumber(strArr, 8), "true") << " " << strArr << " is a valid formatted number";
}

TEST(q2_medium, test4) {
    std::string strArr = {
        "2,567.00.2"
    };
    EXPECT_EQ(FormattedNumber(strArr, 10), "false") << strArr << " is NOT a valid formatted number";
}