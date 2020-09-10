#include "pch.h"
#include "CppUnitTest.h"

#include "../math_lib/Logic.h"
#include "../math_lib/Trigonometry.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace math_lib;

namespace mathlibtests
{
	TEST_CLASS(vector)
	{
	public:

		TEST_METHOD(test)
		{
			
		}
	};

	TEST_CLASS(matrix)
	{
	public:

		TEST_METHOD(test)
		{

		}
	};

	TEST_CLASS(other)
	{
	public:
		
		TEST_METHOD(TrigTests)
		{
			Assert::IsTrue(Logic::IsEqual(Trigonometry::cos(1.0f), 0.540302f, TOLERANCE));
			Assert::IsTrue(Logic::IsEqual(Trigonometry::sin(1.0f), 0.841470f, TOLERANCE));
			/*Assert::IsTrue(Trigonometry::sin(1.0f) == 0.841470f);
			Assert::AreEqual(Trigonometry::tan(45.0f), 0.707f);

			float x, y = 0.0f;
			Trigonometry::cossin(x, y, 13.0f);
			Assert::AreEqual(x, 0.0f);
			Assert::AreEqual(y, 0.0f);

			Assert::AreEqual(Trigonometry::acos(13.0f), 0.0f);
			Assert::AreEqual(Trigonometry::asin(13.0f), 0.0f);
			Assert::AreEqual(Trigonometry::atan(13.0f), 0.0f);
			Assert::AreEqual(Trigonometry::atan2(13.0f), 0.0f);

			Assert::AreEqual(Trigonometry::sqrt(13.0f), 0.0f);
			Assert::AreEqual(Trigonometry::rsqrt(13.0f), 0.0f);*/
		}
	};
}
