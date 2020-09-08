// math_lib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Trigonometry.h"

namespace math_lib
{
	void test_suite()
	{
		printf("cos(13) = %f\n", Trigonometry::cos(13.0f));
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
	// Test Suite

	math_lib::test_suite();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
