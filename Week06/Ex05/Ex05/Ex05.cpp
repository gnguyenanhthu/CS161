//ID: 1751023
//Name: Nguyen Anh Thu
//Ex05: Trip for meal

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, a, b, c, s, min;
	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	if (n == 1)
		cout << 0;
	else
	{
		if (a < b)
		{
			min = a;
			s = a;
		}
		else
		{
			min = b;
			s = b;
		}
		if (n == 2)
			cout << min;
		else
		{
			if (c < min)
				min = c;
			for (int i = 2; i < n; i += 1)
				s = s + min;
			cout << s;
		}
	}
	return 0;
}