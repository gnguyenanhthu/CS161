//ID: 1751023
//Name: Nguyen Anh Thu
//Ex07: Arya and Bran

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long long k;
	int n, i, a, b, d, t;
	cin >> n >> k;
	a = 0;
	b = 0;
	i = 0;
	d = 0;
	while (i < n)
	{
		cin >> t;
		if ((a + t) >= 8)
		{
			b += 8;
			a += t - 8;
			++d;
		}
		else
		{
			b += a + t;
			a = 0;
			++d;
		}
		if (b >= k)
		{
			cout << d;
			return 0;
		}
		++i;
	}
	if(b<k)
		cout << -1;
	return 0;
}