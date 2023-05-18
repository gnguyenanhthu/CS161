#include "Function.h"

float cals(float k)
{
	float s = 0;
	for (float i = 1; i <= k; ++i)
	{
		s += 1 / i;
	}
	return s;
}
