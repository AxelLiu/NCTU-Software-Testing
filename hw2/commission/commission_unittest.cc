#include "gtest/gtest.h"
#include "commission.h"

TEST(Pathtesting, C0)
{
    EXPECT_EQ(10.0, commission(1,1,1));
    EXPECT_EQ(-1.0, commission(0,30,25));
    EXPECT_EQ(103.75, commission(10,10,11));
    EXPECT_EQ(260.0, commission(20,20,20));
}