#include "gtest/gtest.h"
#include "nextdate.h"

TEST(Pathtesting, C0)
{
    EXPECT_EQ("2017/11/2", nextDate(2017,11,1));
}