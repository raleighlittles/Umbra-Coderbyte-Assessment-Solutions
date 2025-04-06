#include "formatted_number.cpp"
#include <gtest/gtest.h>

TEST(q2_medium, test1) {

    std::string strArr[12] = {
        "1", ",", "0", "9", "3", ",", "2", "2", "2", ".", "0", "4"
    };
    EXPECT_EQ(FormattedNumber(strArr, 12), "true") << " '1,093,222.04' is a valid formatted number";
}

TEST(q2_medium, test2) {
    std::string strArr[11] = {
        "1", ",", "0", "9", "3", ",", "2", "2", ".", "0", "4"
    };
    EXPECT_EQ(FormattedNumber(strArr, 11), "false") << " '1,093,22.04' is NOT a valid formatted number";
}

TEST(q2_medium, test3) {
    std::string strArr[8] = {
        "0", ".", "2", "3", "2", "5", "6", "7"
    };
    EXPECT_EQ(FormattedNumber(strArr, 8), "true") << " '0.232567' is a valid formatted number";
}

TEST(q2_medium, test4) {
    std::string strArr[10] = {
        "2", ",", "5", "6", "7", ".", "0", "0", ".", "2"
    };
    EXPECT_EQ(FormattedNumber(strArr, 10), "false") << " '2,567.00.2' is NOT a valid formatted number";
}