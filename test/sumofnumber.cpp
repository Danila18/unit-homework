//
// Created by aetetic on 28.12.18.
//

#include "gtest/gtest.h"
#include "example.h"

TEST(sumofnumber, dummy_check) {
    double res = sumofnumber(2.0, 4, 5);
    ASSERT_EQ(res, 13);
}

TEST(sumofnumber, check_negative) {
    double res = sumofnumber(-1, 2, -3);
    ASSERT_EQ(res, -5);
}
TEST(sumofnumber, check_null) {
    double res = sumofnumber(-3, 0, 0);
    ASSERT_EQ(res, 0);
}