#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
	Div* test = new Div(2,2);
	EXPECT_EQ(test->evaluate(), 1);
}

#endif //__DIV_TEST_HPP__
