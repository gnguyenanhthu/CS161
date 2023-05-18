#include "Function.h"

float cals(int k)
{
	float sum = 0;
	for (;k > 0;--k)
	{
		sum = sqrt(k + sum);
	}
	return sum;
}