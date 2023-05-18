#include "Funtion.h"

int symmetrical(int k)
{
	int d, r, t;
	r = 0;
	t = k;
	while (t != 0)
	{
		d = t % 10;
		r = r * 10 + d;
		t /= 10;
	}
	return r;
}