#include <gtest/gtest.h>

#include "fibonacci.hpp"

TEST(FibonacciTests, firstElementShouldBeOne)
{
    ASSERT_EQ(fibonacci(1), 1);
}

TEST(FibonacciTests, thirdElementShouldEqualTwo)
{
    ASSERT_EQ(fibonacci(3), 2);
}

TEST(FibonacciTests, seventhElementShouldEqualThirteen)
{
    ASSERT_EQ(fibonacci(7), 13);
}

TEST(FibonacciTests, shouldThrowExceptionInvalidParameters)
{
    EXPECT_THROW(fibonacci(0), std::invalid_argument);
    EXPECT_THROW(fibonacci(-1), std::invalid_argument);
    EXPECT_THROW(fibonacci(std::numeric_limits<int>::min()), std::invalid_argument);
}

