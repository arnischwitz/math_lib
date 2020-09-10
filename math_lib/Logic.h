#pragma once

#ifndef LOGIC_H
#define LOGIC_H

#include <cmath>

namespace math_lib
{
	// CONSTANTS

	const float	TOLERANCE = 0.001f;

	/**
	 * A class that performs logical tests for numerical comparisons
	 */

	class Logic
	{
	public:

		// comparisons

		const inline static bool IsEqual(const float x, const float y, const float tolerance)
		{
			return (std::fabs(x - y) < tolerance);
		}

	};
}

#endif
