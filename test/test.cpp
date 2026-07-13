#include "index.h"
#include <gtest/gtest.h>

// TEST(TestSuiteName, IndividualTestName)
TEST(AdditionTest, CanAddTwoPositiveNumbers)
{
  // This will pass silently
  EXPECT_EQ(add(2, 2), 4);
}

TEST(AdditionTest, IntentionalFailure)
{
  // This will fail and give you the detailed "Expected vs Got" output!
  EXPECT_EQ(add(2, 2), 5);
}
