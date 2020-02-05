#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
	Sub* test = new Sub(2,2);
	EXPECT_EQ(test->evaluate(), 0);
}

#endif //__SUB_TEST_HPP__
