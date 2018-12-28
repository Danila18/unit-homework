#include "gtest/gtest.h"
#include "example.h"

TEST(example, divide)
{
    double res = divide_numbers(2.0, 2.0);
    ASSERT_EQ(res, 1);
}
