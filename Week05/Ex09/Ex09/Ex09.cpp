//ID: 1751023
//Name: Nguyen Anh Thu
//Ex09: Between the officces

#include <iostream>
using namespace std;

int main()
{
	int n, i, x, y;
	char a, b;
	cin >> n;
	i = 0;
	b = 0;
	x = 0;
	y = 0;
	while (i < n)
	{
		cin >> a;
		if ((b == 'S') && (a == 'F'))
			++x;
		if ((b == 'F') && (a == 'S'))
			++y;
		b = a;
		++i;
	}
	if (x > y)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}