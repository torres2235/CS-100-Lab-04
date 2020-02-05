#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"

TEST(AddTest, AddEvaluateNonZero) {
	Add* test = new Add(2,2);
	EXPECT_EQ(test->evaluate(), 4);
}

TEST(AddTest, AddEvaluateNegative) {
	Add* test = new Add(-3,-3);
	EXPECT_EQ(test->evaluate(), -6);
}

TEST(AddTest, AddEvalulateDecimals) {
	Add* test = new Add(5.4,-3.1);
	EXPECT_EQ(test->evaluate(), 2.3);
}

TEST(AddTest, AddString) {
	Add* test = new Add(9,9);
	EXPECT_EQ(test->stringify(), "9+9");
}

TEST(AddTest, AddStringNegative) {
	Add* test = new Add(4,-2);
	EXPECT_EQ(test->stringify(), "4+-2");
}

#endif //__ADD_TEST_HPP__
