#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
}

#endif //__RAND_TEST_HPP__
