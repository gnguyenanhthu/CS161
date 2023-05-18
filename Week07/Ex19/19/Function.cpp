#include "Function.h"

float cals(float k, float q)
{
	float tu = 1, mau = 1, s = 1;
	for (int i = 1; i <= (2 * q + 1); ++i)
	{
		mau = mau*i;
		tu = tu*k;
		if (i % 2 != 0)
			s += (tu / mau);
	}
	return s;
}