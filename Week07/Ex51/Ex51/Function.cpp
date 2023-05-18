#include "Function.h"

int max(int k)
{
	int d, m = 0;
	do
	{
		d = k % 10;
		if (d > m)
			m = d;
		k = k / 10;
	} while (k != 0);
	return m;
}