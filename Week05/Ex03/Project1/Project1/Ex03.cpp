//ID: 1751023
//Name: Nguyen Anh Thu
//Ex03: Team

#include <iostream>
using namespace std;
#include <string>

int main()
{
	int n, i, a, b, c, dem;
	cin >> n;
	dem = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		dem += (a + b + c) >= 2;
	}
	cout << dem;
	return 0;
}