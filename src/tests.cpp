#include <gtest/gtest.h>

#include "fibonacci.hpp"

using Element       = int;
using ExpectedValue = int;

struct Params
{
    Element element;
    ExpectedValue value;
};

struct FibonacciParamTests
    : testing::Test
    , testing::WithParamInterface<Params>
{
};

TEST_P(FibonacciParamTests, verifyElementValue)
{
    ASSERT_EQ(fibonacci(GetParam().element), GetParam().value);
}

INSTANTIATE_TEST_SUITE_P(FibonacciParamTests,
                         FibonacciParamTests,
                         testing::Values(Params{Element{1}, ExpectedValue{1}},
                                         Params{Element{3}, ExpectedValue{2}},
                                         Params{Element{7}, ExpectedValue{13}}));

TEST(FibonacciTests, shouldThrowExceptionInvalidParameters)
{
    EXPECT_THROW(fibonacci(0), std::invalid_argument);
    EXPECT_THROW(fibonacci(-1), std::invalid_argument);
    EXPECT_THROW(fibonacci(std::numeric_limits<int>::min()), std::invalid_argument);
}
