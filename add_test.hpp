#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"

TEST(AddTest, AddEvaluateNonZero) {
	Add* test = new Add(2,2);
	EXPECT_EQ(test->evaluate(), 4);
}

#endif //__ADD_TEST_HPP__
