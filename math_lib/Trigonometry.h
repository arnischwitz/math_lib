#pragma once

#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H

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
		
		const inline static float cos(const float t)
		{
			return std::cosf(t);
		}

		const inline static float sin(const float t)
		{
			return std::sinf(t);
		}

		const inline static float tan(const float t)
		{
			return std::tanf(t);
		}

		// combined trig

		inline static void cossin(float& c, float &s, const float t)
		{
			c = std::cosf(t);
			s = std::sinf(t);
		}

		// arc trig

		const inline static float acos(const float t)
		{
			return std::acosf(t);
		}

		const inline static float asin(const float t)
		{
			return std::asinf(t);
		}

		const inline static float atan(const float t)
		{
			return std::atanf(t);
		}

		const inline static float atan2(const float t)
		{
			return std::atanf(t);
		}

		// square root

		const inline static float sqrt(const float x)
		{
			return std::sqrtf(x);
		}

		const inline static float rsqrt(const float x)
		{
			return 1.0f / std::sqrtf(x);
		}

	};
}

#endif
