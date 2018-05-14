#include "gtest/gtest.h"
#include "commission.h"

TEST(Pathtesting, C0)
{
    EXPECT_EQ(10.0, commission(1,1,1));
}