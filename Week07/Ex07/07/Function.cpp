#include "Function.h"

float cals(float k)
{
	float s = 0;
	for (float i = 0; i <= k; ++i)
	{
		s += (i / (i + 1));
	}
	return s;
}