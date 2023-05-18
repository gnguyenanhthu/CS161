//ID: 1751023
//Name: Nguyen Anh Thu
//Ex08: Quasi-palindrome

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long long x, t;
	int d, r;
	cin >> x;
	while ((x % 10) == 0)
	{
		x = x / 10;
	}
	t = x;
	r = 0;
	while (t != 0)
	{
		d = t % 10;
		r = r * 10 + d;
		t = t / 10;
	}
	if (r == x)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}