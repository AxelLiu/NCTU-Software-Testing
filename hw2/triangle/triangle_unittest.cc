#include "triangle.h"
#include "gtest/gtest.h"

TEST(PathTesting, C0)
{
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 100, 100));
}
