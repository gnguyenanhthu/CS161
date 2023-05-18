//ID: 1751023
//Name: Nguyen Anh Thu
//Ex02: Soldier and Bananas

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int k, w, i, m;
	long n;
	cin >> k >> n >> w;
	i = 1;
	m = 0;
	while (i <= w)
	{
		m += i*k;
		i=i+1;
	}
	if (m > n)
		cout << (m - n);
	else
		cout << 0;
	return 0;
}