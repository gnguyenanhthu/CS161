#include "Function.h"

int sum(int k)
{
	int d, sum = 0;
	do
	{
		d = k % 10;
		k = k / 10;
		if (d % 2 == 0)
			sum = sum + d;
	} while ((k != 0) && (d != 0));
	return sum;
}