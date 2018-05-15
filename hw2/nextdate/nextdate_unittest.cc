#include "gtest/gtest.h"
#include "nextdate.h"

TEST(PathTesting, C0)
{
    EXPECT_EQ("Invalid", nextDate(2017,11,32));
    EXPECT_EQ("2018/1/1", nextDate(2017,12,31));
    EXPECT_EQ("2012/2/28", nextDate(2012,2,27));
    EXPECT_EQ("Invalid", nextDate(2017,2,31));
    EXPECT_EQ("2018/2/1", nextDate(2018,1,31));
}

TEST(PathTesting, C1)
{
    EXPECT_EQ("Invalid", nextDate(2017,11,32));
    EXPECT_EQ("2018/1/1", nextDate(2017,12,31));
    EXPECT_EQ("2012/2/29", nextDate(2012,2,28));
    EXPECT_EQ("Invalid", nextDate(2017,2,31));
    EXPECT_EQ("2018/3/1", nextDate(2018,2,28));
    EXPECT_EQ("2018/11/2", nextDate(2018,11,1));
}

TEST(PathTesting, C2)
{
    EXPECT_EQ("Invalid", nextDate(2017,11,32));
    EXPECT_EQ("2018/1/1", nextDate(2017,12,31));
    EXPECT_EQ("2012/2/29", nextDate(2012,2,28));
    EXPECT_EQ("Invalid", nextDate(2017,2,31));
    EXPECT_EQ("2018/3/1", nextDate(2018,2,28));
    EXPECT_EQ("2018/11/2", nextDate(2018,11,1));
}

TEST(Pathtesting, MCDC)
{
    EXPECT_EQ("1900/8/1", nextDate(1900,8,0));
    EXPECT_EQ("Invalid", nextDate(1900,6,31));
    EXPECT_EQ("Invalid", nextDate(2001,2,29));
    EXPECT_EQ("Invalid", nextDate(1900,2,30));
    EXPECT_EQ("2013/2/1", nextDate(2013,1,31));
    EXPECT_EQ("2013/5/1", nextDate(2013,4,30));
    EXPECT_EQ("2014/3/1", nextDate(2014,2,28));
    EXPECT_EQ("2012/3/1", nextDate(2012,2,29));
    EXPECT_EQ("2014/1/1", nextDate(2013,12,31));
    EXPECT_EQ("2015/1/1", nextDate(2014,12,31));
    EXPECT_EQ("2015/1/2", nextDate(2015,1,1));
    EXPECT_EQ("2015/2/2", nextDate(2015,2,1));
}