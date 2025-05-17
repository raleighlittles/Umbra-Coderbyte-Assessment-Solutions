#include "binary_reversal.cpp"
#include <gtest/gtest.h>

TEST(q1_easy, test1) {
    EXPECT_EQ(BinaryReversal("47"), "244");
}

TEST(q1_easy, test2) {
    EXPECT_EQ(BinaryReversal("213"), "171");
}