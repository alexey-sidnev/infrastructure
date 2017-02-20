#include <gtest/gtest.h>
#include "add.h"

TEST(Addition, CanAddTwoNumbers) {
  EXPECT_EQ(add(2, 2), 4);
  EXPECT_EQ(add(-2, 2), 0);
}

int main(int ac, char* av[]) {
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
