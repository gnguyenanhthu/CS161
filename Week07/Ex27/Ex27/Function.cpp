#include "Function.h"

int count(int k)
{
	int s = 0;
	for (int i = 1; i <= k; ++i)
	{
		if (((k%i) == 0) && (i % 2 == 0))
			++s;
	}
	return s;
}

