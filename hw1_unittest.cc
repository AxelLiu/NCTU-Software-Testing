#include "hw1.h"
#include "gtest/gtest.h"

TEST(BoundaryValue, Normal)
{
		EXPECT_EQ("ISOSCELES", IsTriangle(1, 100, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(2, 100, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(199, 100, 100));
		EXPECT_EQ("INVALID", IsTriangle(200, 100, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 1, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 2, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 199, 100));
		EXPECT_EQ("INVALID", IsTriangle(100, 200, 100));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 1));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 2));
		EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 199));
		EXPECT_EQ("INVALID", IsTriangle(100, 100, 200));
		EXPECT_EQ("EQUILATERAL", IsTriangle(100, 100, 100));
}
