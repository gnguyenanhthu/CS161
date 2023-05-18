#include "Function.h"

int count(int k)
{
	int c = 0;
	while (k != 0)
	{
		++c;
		k = k / 10;
	}
	return c;
}