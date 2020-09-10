//-----------------------------------------------------------------------------
//
// math_lib.cpp
//
// a.r.n. 2020
//
//-----------------------------------------------------------------------------

#include <iostream>

#include "Trigonometry.h"

namespace math_lib
{
	void test()
	{
		printf("sin(13) = %f\n", Trigonometry::sin(13.0f));
		printf("tan(13) = %f\n", Trigonometry::tan(13.0f));

		float x, y = 0.0f;
		Trigonometry::cossin(x, y, 13.0f);
		printf("cossin(13, 13) = %f, %f\n", x, y);

		printf("acos(13) = %f\n", Trigonometry::acos(13.0f));
		printf("asin(13) = %f\n", Trigonometry::asin(13.0f));
		printf("atan(13) = %f\n", Trigonometry::atan(13.0f));
		printf("atan2(13) = %f\n", Trigonometry::atan2(13.0f));

		printf("sqrt(13) = %f\n", Trigonometry::sqrt(13.0f));
		printf("rsqrt(13) = %f\n", Trigonometry::rsqrt(13.0f));
	}
}

int main()
{
	// Test method

	math_lib::test();

	return 0;
}
