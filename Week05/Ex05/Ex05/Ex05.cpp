//ID: 1751023
//Name: Nguyen Anh Thu
//Ex05: Vanya and Fence

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long long n, h, i, a, w;
	cin >> n >> h;
	i = 0;
	w = 0;
	while (i < n)
	{
		cin >> a;
		if (a <= h)
			w = w + 1;
		else
			w = w + 2;
		++i;
	}
	cout << w;
	return 0;
}