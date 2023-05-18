#include "Function.h"

int lcm(int m, int n)
{
	int a, x = m, y = n;
	while (m != n) //Tim UCLN
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	a = (x*y) / m;
	return a;
}