#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;


int add (int a, int b){
  return a+b;
}

TEST(AddTest, PassingTest){
  ASSERT_EQ(8, add(3,2));
}

