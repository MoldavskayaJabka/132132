#include <gtest/gtest.h>
#include <vector>
#include "increase_elements.h"

TEST(IncreaseElementsTest, PositiveIncrease) {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 6, 7, 8, 9, 10 };
    EXPECT_EQ(increase_elements(input, 5), expected);
}

TEST(IncreaseElementsTest, ZeroIncrease) {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(increase_elements(input, 0), expected);
}

TEST(IncreaseElementsTest, NegativeIncrease) {
    std::vector<int> input = { 5, 6, 7, 8, 9 };
    std::vector<int> expected = { 3, 4, 5, 6, 7 };
    EXPECT_EQ(increase_elements(input, -2), expected);
}

TEST(IncreaseElementsTest, EmptyVector) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(increase_elements(input, 5), expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
