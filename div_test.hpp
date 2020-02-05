#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
	Div* test = new Div(2,2);
	EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivNegative) {
	Div* test = new Div(-14,2);
	EXPECT_EQ(test->evaluate(), -7);
}

TEST(DivTest, DivDecimal) {
	Div* test = new Div(1,4);
	EXPECT_EQ(test->evaluate(), 0.25);
}

TEST(DivTest, DivEvaluateString) {
	Div* test = new Div(6,3);
	EXPECT_EQ(test->stringify(), "6/3");
}

TEST(DivTest, DivEvaluateNegString) {
	Div* test = new Div(5,-6);
	EXPECT_EQ(test->stringify(), "5/-6");
}

#endif //__DIV_TEST_HPP__
