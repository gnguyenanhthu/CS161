#include "Function.h"

int isprime(int k)
{
	int x, i;
	i = 2;
	x = 1;
	while ((i <= sqrt(k)) && (x != 0))
	{
		x = k%i;
		++i;
	}
	return x;
}