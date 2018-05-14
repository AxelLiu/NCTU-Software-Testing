#include "gtest/gtest.h"
#include "nextdate.h"

TEST(Pathtesting, C0)
{
    EXPECT_EQ("Invalid", nextDate(2017,11,32));
    EXPECT_EQ("2018/1/1", nextDate(2017,12,31));
    EXPECT_EQ("2012/2/28", nextDate(2012,2,27));
    EXPECT_EQ("Invalid", nextDate(2017,2,31));
    EXPECT_EQ("2018/2/1", nextDate(2018,1,31));
}