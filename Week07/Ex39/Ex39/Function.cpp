#include "Function.h"

float cals(int k)
{
	int i = 1;
	float a = 1, b = 2, sum = 0;
	while (i <= k)
	{
		a = a*i;
		sum = pow((a + sum), (1 / b));
		++i;
		++b;
	}
	return sum;
}