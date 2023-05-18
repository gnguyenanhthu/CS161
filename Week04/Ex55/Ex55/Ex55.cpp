//ID: 1751023
//Name: Nguyen Anh Thu
//Ex55: Count number of the first digit 

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long x, n, d, a, b, c;
	cout << "Count number of the first digit.";
	cout << "Please input a positive integer: ";
	cin >> x;
	n = x;
	b = x;
	c = 0;
	while ((n != 0) || (b != 0))
	{
		if (n != 0)
		{
			d = n % 10;
			n = n / 10;
		}
		if (n==0)
		{
			a = b % 10;
			b = b / 10;
			if (a == d)
				++c;
		}
	}
	cout <<"Number of the first digits are: " << c << endl;
	system("pause");
	return 0;
}