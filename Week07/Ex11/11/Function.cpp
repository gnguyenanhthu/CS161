#include "Function.h"

float cals(float k)
{
	float s = 0, t = 1;
	for (int i = 1; i <= k; ++i)
	{
		s += i*t;
		t *= i;
	}
	return s;
}