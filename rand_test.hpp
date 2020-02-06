#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    EXPECT_LE(test->evaluate(), 100);
}

TEST(RandTest, RandEvaluateString) {
	Rand* test = new Rand();
	EXPECT_NE(test->stringify(), "100");
}

#endif //__RAND_TEST_HPP__
