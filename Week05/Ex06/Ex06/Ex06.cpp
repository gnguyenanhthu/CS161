//ID: 1751023
//Name: Nguyen Anh Thu
//Ex06: Fashion in Berland

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, i, a, d;
	cin >> n;
	i = 0;
	d = 0;
	while (i < n)
	{
		cin >> a;
		if (n == 1) goto endloop;
		else
			if (a == 0)
				++d;
		if (d == 2) goto endloop;
		++i;
	}
endloop:
	{
		if (((n==1)&&(a==0))||(d==2)||(n!=1)&&(d==0))
		cout << "NO";
		else
		cout << "YES";
	}
	return 0;
}