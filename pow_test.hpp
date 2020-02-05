#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvaluateNonZero) {
	Pow* test = new Pow(2,3);
	EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateNegativeBase) {
	Pow* test = new Pow(-5,5);
	EXPECT_EQ(test->evaluate(), -3125);
}

TEST(PowTest, PowString) {
	Pow* test = new Pow (7,7);
	EXPECT_EQ(test->stringify(), "7**7");
}

#endif //__POW_TEST_HPP__
