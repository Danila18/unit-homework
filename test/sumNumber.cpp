//
// Created by dangreb on 28.12.18.
//
#include "gtest/gtest.h"
#include "example12/example12.h"

TEST(sumNumber, sum)
{
    double res;
    res = sumNumber(1, 2, 3);
    ASSERT_EQ(res, 5);
}
