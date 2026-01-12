#include <gtest/gtest.h>

#include "fibonacci.hpp"

TEST(FibonacciTests, firstElementShouldBeOne)
{
    ASSERT_EQ(fibonacci(1), 1);
}
