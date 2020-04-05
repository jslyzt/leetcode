#include "gtest/gtest.h"
#include "arithmetic/arithmetic.h"
#include "arithmetic/tool.hpp"

///////////////////////////////////////////////////////////////////////////////////////
TEST(removeDuplicates, def) {
    std::vector<int> arr = { 1, 1, 2 };
    auto size = removeDuplicates(arr);
    arr.resize(size);
    EXPECT_EQ(size, 2);
    std::cout << "remove duplicates: " << toString(arr) << std::endl;
}

TEST(removeDuplicates, repeat) {
    std::vector<int> arr = { 1, 1, 1, 2, 2, 3 };
    auto size = removeDuplicates_repeat(arr);
    arr.resize(size);
    EXPECT_EQ(size, 5);
    std::cout << "remove duplicates repeat: " << toString(arr) << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////
TEST(searchRotateSArr, def) {
    std::vector<int> arr = { 4, 5, 6, 7, 0, 1, 2 };
    auto pos = searchRotateSortArr(arr, 0);
    EXPECT_EQ(pos, 4);
    pos = searchRotateSortArr(arr, 3);
    EXPECT_EQ(pos, -1);
}

TEST(searchRotateSArr, repeat) {
    std::vector<int> arr = { 1, 3, 1, 1, 1 };
    auto pos = searchRotateSortArr_repeat(arr, 1);
    EXPECT_EQ(pos, 2);
}
