#include "pch.h"
#include "CppUnitTest.h"

#include "../math_lib/Logic.h"
#include "../math_lib/Trigonometry.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace math_lib;

namespace mathlibtests
{
	TEST_CLASS(vector_test_class)
	{
	public:

		TEST_METHOD(_test_method)
		{
			
		}
	};

	TEST_CLASS(matrix_test_class)
	{
	public:

		TEST_METHOD(_test_method)
		{

		}
	};

	TEST_CLASS(trig_test_class)
	{
	public:
		
		TEST_METHOD(cosine_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::cos(1.0f), 0.540302f, TOLERANCE));
		}

		TEST_METHOD(sine_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::sin(1.0f), 0.841470f, TOLERANCE));
		}

		TEST_METHOD(tan_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::tan(1.0f), 1.557407f, TOLERANCE));
		}

		TEST_METHOD(cosine_sine_test_method)
		{
			float x, y = 0.000000f;
			Trigonometry::cossin(x, y, 1.000000f);
			Assert::IsTrue(Logic::IsEqual(x, 0.540302f, TOLERANCE));
			Assert::IsTrue(Logic::IsEqual(y, 0.841470f, TOLERANCE));
		}
		
		TEST_METHOD(acosine_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::acos(1.000000f), 0.000000f, TOLERANCE));
		}

		TEST_METHOD(asine_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::asin(1.000000f), 1.570796f, TOLERANCE));
		}

		TEST_METHOD(atan_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::atan(1.000000f), 0.785398f, TOLERANCE));
		}

		TEST_METHOD(atan2_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::atan2(0.000000f, 0.000000f), 0.000000f, TOLERANCE));
		}

		TEST_METHOD(sqrt_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::sqrt(4.000000f), 2.000000f, TOLERANCE));
		}

		TEST_METHOD(rsqrt_test_method)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::rsqrt(1.000000f), 1.000000f, TOLERANCE));
		}
	};
}
