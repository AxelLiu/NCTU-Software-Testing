#include "triangle.h"
#include "gtest/gtest.h"

TEST(PathTesting, C0)
{
	EXPECT_EQ("SCALENE", IsTriangle(3, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(0, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 2));
	EXPECT_EQ("EQUILATERAL", IsTriangle(5, 5, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(2,2,1));
}
