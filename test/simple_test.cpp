#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

int mult(int a, int b) {
	return a * b;
}

TEST(MulTest, PassingTest1){
	ASSERT_EQ(20, mult(5, 4));
}

TEST(MulTest, PassingTest2) {
	ASSERT_EQ(50, mult(10, 5));
}

