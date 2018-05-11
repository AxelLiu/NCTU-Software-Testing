#include <cstdio>
#include <iostream>
#include "hw1.h"

std::string IsTriangle(int a, int b, int c)
{
	if(a < 1 || a > 200 || b < 1 || b > 200 || c < 1 || c > 200)
		return "INVALID";
	if(a + b <= c || b + c <= a || a + c <= b)
		return "INVALID";
	if(a==b && a==c)
		return "EQUILATERAL";
	if((a == b && b != c) || (a == c && a != b) || (b == c && a != b))
		return "ISOSCELES";

	return "SCALENE";
}
