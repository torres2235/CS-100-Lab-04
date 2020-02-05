#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Mult* test = new Mult(2,2);
    EXPECT_EQ(test->evaluate(), 4);
}

#endif //__MULT_TEST_HPP__
