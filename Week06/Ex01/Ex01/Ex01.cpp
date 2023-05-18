//ID: 1751023
//Name: Nguyen Anh Thu
//Ex01: Caisa and Pylons

#include <iostream>
using namespace std;

int main()
{
	int n, h, d;
	cin >> n;
	d = 0;
	for (int i = 1; i <= n; i += 1)
	{
		cin >> h;
		if (h > d)
			d = h;
	}
	cout << d;
	return 0;
}