#include "Function.h"

int check2k(int k) 
{
	int d;
	d = k % 2;
	while ((d == 0) && (k != 1))
	{
		d = k % 2;
		k = k / 2;
	}
	return d;
}
