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

TEST(FibonacciTests, shouldNieWiemJeszczeCoForInvalidParameters)
{
    EXPECT_THROW(fibonacci(-1), std::invalid_argument);
}
