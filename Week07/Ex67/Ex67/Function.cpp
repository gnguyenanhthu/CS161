#include "Function.h"

float cals(int a, int b)
{
	int t = a;
	float sum = 0;
	t = a;
	for (int i=1;i<=b;++i)
	{
		sum += t;
		t = -(t*a);
	}
	return sum;
}