#pragma once

#ifndef MATH_LIBRARY_H
#define MATH_LIBRARY_H

#include <cmath>

namespace math_lib
{
	/**
	 * A class that wraps the std math lib and other math functionality.
	 * Focuses more on performance than robustness.
	 */

	class Trigonometry
	{
	public:

		// trig
		
		inline static float cos(float t)
		{
			return std::cosf(t);
		}

		inline static float sin(float t)
		{
			return std::sinf(t);
		}

		inline float tan(float t)
		{
			return std::tanf(t);
		}

		// combined trig

		inline void cossin(float& c, float &s, float t)
		{
			c = cosf(t);
			s = sinf(t);
		}

		// arc trig

		inline float acos(float t)
		{
			return std::acosf(t);
		}

		inline float asin(float t)
		{
			return std::asinf(t);
		}

		inline float atan(float t)
		{
			return std::atanf(t);
		}

		inline float atan2(float t)
		{
			return std::atanf(t);
		}

		// square root

		inline float sqrt(float x)
		{
			return std::sqrtf(x);
		}

		inline float rsqrt(float x)
		{
			return 1.0f / sqrt(x);
		}

	};
}

#endif
