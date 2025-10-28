#include <gtest/gtest.h>
#include "OS_colloquium_1.h"

TEST(FibonacciTests, FirstNumbers) {
    std::vector<unsigned long long> fib = firstFibonacciNumbers(10);
    std::vector<unsigned long long> expected = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
    EXPECT_EQ(fib, expected);
}

TEST(FibonacciTests, EmptyResult) {
    std::vector<unsigned long long> fib = firstFibonacciNumbers(0);
    std::vector<unsigned long long> expected = {};
    EXPECT_EQ(fib, expected);
}

TEST(FibonacciTests, ThrowsOnInvalidInput) {
    EXPECT_THROW(firstFibonacciNumbers(-1), std::invalid_argument);
    EXPECT_THROW(firstFibonacciNumbers(95), std::invalid_argument);
}