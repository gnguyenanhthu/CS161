#include "Function.h"

float cals(int a, int b)
{
	float tu, mau, sum;
	tu = 1;
	mau = 0;
	sum = 0;
	for (int i=1;i <= b;++i)
	{
		tu *= (-a);
		mau += i;
		sum += (tu / mau);
	}
	return sum;
}