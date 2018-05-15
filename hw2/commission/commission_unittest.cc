#include "gtest/gtest.h"
#include "commission.h"

TEST(PathTesting, C0)
{
    EXPECT_EQ(10.0, commission(1,1,1));
    EXPECT_EQ(-1.0, commission(0,30,25));
    EXPECT_EQ(103.75, commission(10,10,11));
    EXPECT_EQ(260.0, commission(20,20,20));
}

TEST(PathTesting, C1)
{
    EXPECT_EQ(10.0, commission(1,1,1));
    EXPECT_EQ(-1.0, commission(0,30,25));
    EXPECT_EQ(115.0, commission(11,11,11));
    EXPECT_EQ(260.0, commission(20,20,20));
}

TEST(PathTesting, C2)
{
    EXPECT_EQ(10.0, commission(1,1,1));
    EXPECT_EQ(-1.0, commission(0,30,25));
    EXPECT_EQ(115.0, commission(11,11,11));
    EXPECT_EQ(260.0, commission(20,20,20));
}

TEST(PathTesting, MCDC)
{
    // invalid == -1.0
    EXPECT_EQ(-1.0, commission(0,20,20));
    EXPECT_EQ(-1.0, commission(0,20,20));
    EXPECT_EQ(-1.0, commission(71,20,20));
    EXPECT_EQ(-1.0, commission(20,0,20));
    EXPECT_EQ(-1.0, commission(20,20,91));
    EXPECT_EQ(10.0, commission(1,1,1));
    EXPECT_EQ(121.75, commission(1,20,20));
    EXPECT_EQ(260.0, commission(20,20,20));
    EXPECT_EQ(-1.0, commission(-1,20,20));
}