// test/test_my_class.cpp

#include "gtest/gtest.h"
#include "../include/functions.h"
#include <limits.h>

int Gen[5] = {4, 27, 14, 0, -1} ;
int Moys[5] = {10, 8, 18, 14, 2};

namespace {

  // Tests Factorial().

  // Tests factorial of negative numbers.
  TEST(FactorialTest, Negative) {
    // This test is named "Negative", and belongs to the "FactorialTest"
    // test case.
    EXPECT_EQ(1, Factorial(-5));
    EXPECT_EQ(1, Factorial(-1));
    EXPECT_GT(Factorial(-10), 0);

  }

  // Tests factorial of 0.
  TEST(FactorialTest, Zero) { EXPECT_EQ(1, Factorial(0)); }

  // Tests factorial of positive numbers.
  TEST(FactorialTest, Positive) {
    EXPECT_EQ(1, Factorial(1));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_EQ(6, Factorial(3));
    EXPECT_EQ(40320, Factorial(8));
  }

  // Tests IsPrime()

  // Tests negative input.
  TEST(IsPrimeTest, Negative) {
    // This test belongs to the IsPrimeTest test case.

    EXPECT_FALSE(IsPrime(-1));
    EXPECT_FALSE(IsPrime(-2));
    EXPECT_FALSE(IsPrime(INT_MIN));
  }

  // Tests some trivial cases.
  TEST(IsPrimeTest, Trivial) {
    EXPECT_FALSE(IsPrime(0));
    EXPECT_FALSE(IsPrime(1));
    EXPECT_TRUE(IsPrime(2));
    EXPECT_TRUE(IsPrime(3))  << " 3 is a prime number";
  }

  // Tests positive input.
  TEST(IsPrimeTest, Positive) {
    EXPECT_FALSE(IsPrime(4)) << "4 isn't prime number";
    EXPECT_TRUE(IsPrime(5));
    EXPECT_FALSE(IsPrime(6));
    EXPECT_TRUE(IsPrime(23));
  }

  //EXPECT_LT(val1,val2)
  // EXPECT_LT(Order(VAL, DIM)[0],Order(VAL,DIM)[4]);

  TEST(MaxTest, Getmax){

    EXPECT_EQ(27, Max(Gen, 5)); // valeur max

  }

  TEST(MinTest, GetMin){

    EXPECT_EQ(-1, Min(Gen, DIM)); // valeur min 

  }

  TEST(MaxTestMoy, LessThan21)
  {
    EXPECT_LT(Max(Moys, DIM), 21); // val1 < val2 -> moy <= 20 or moy < 21
  }
  

  TEST(MinTestMoy, GreatThanZero)
  {
    EXPECT_GE(Max(Moys, DIM), 0); // Verifies that val1>=val2  moy >= 0
  }
 
 }
