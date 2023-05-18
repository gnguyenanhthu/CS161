#include "Function.h"

int count(int k)
{
	int a, d, b = k, c = 0;
	while ((k != 0) || (b != 0))
	{
		if (k != 0)
		{
			d = k % 10;
			k = k / 10;
		}
		if (k == 0)
		{
			a = b % 10;
			b = b / 10;
			if (a == d)
				++c;
		}
	}
	return c;
}