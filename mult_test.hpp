#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Mult* test = new Mult(2,2);
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(MultTest, MultEvaluateNegative) {
    Mult* test = new Mult(-6,3);
    EXPECT_EQ(test->evaluate(), -18);
}

TEST(MultTest, MultEvaluateDecimal) {
    Mult* test = new Mult(2.5,2.5);
    EXPECT_EQ(test->evaluate(), 6.25);
}

TEST(MultTest, MultEvaluateString) {
    Mult* test = new Mult(5,3);
    EXPECT_EQ(test->stringify(), "5*3");
}

TEST(MultTest, MultEvaluateNegativeString) {
    Mult* test = new Mult(4,-2);
    EXPECT_EQ(test->stringify(), "4*-2");
}

#endif //__MULT_TEST_HPP__
