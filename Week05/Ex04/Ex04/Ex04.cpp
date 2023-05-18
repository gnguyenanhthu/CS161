//ID: 1751023
//Name: Nguyen Anh Thu
//Ex04: Magnets

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, i, a, b, t, d;
	cin >> n;
	i = 0;
	t = 0;
	d = 1;
	while (i < n)
	{
		cin >> a;
		b = t + a;
		if (b == 11)
			++d;
		t = a;
		++i;
	}
	cout << d;
	return 0;
}