#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
	Sub* test = new Sub(2,2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubNegative) {
	Sub* test = new Sub(0,5);
	EXPECT_EQ(test->evaluate(), -5);
}

#endif //__SUB_TEST_HPP__
