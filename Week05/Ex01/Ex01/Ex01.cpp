//ID: 1751023
//Name: Nguyen Anh Thu
//Ex01: Theater Square

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long long m, n, a, x;
	cin >> n >> m >> a;
	if (m%a != 0)
		m = (m / a) + 1;
	else
		m = m / a;
	if (n%a != 0)
		n = (n / a) + 1;
	else
		n = n / a;
	x = (m*n);
	cout << x;
	return 0;
}