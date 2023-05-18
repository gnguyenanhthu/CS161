#include "Function.h"

float cals(float k)
{
	float s = 0, t = 0;
	for (int i = 1; i <= k; ++i)
	{
		s += (1 / (t + i));
		t += i;
	}
	return s;
}