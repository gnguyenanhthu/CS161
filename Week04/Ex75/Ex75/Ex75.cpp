//ID: 1751023
//Name: Nguyen Anh Thu
//Ex75: Check if a 4 byte number is 2^k

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	unsigned long x, n, d;
	cout << "Check if a 4 byte number is 2^k" << endl;
	cout << "Please input a number: ";
	cin >> x;
	n = x;
	d = x % 2;
	while ((d==0)&&(n!=1))
	{
		d = n % 2;
		n = n / 2;
	}
	if ((d == 0)||(x==1))
		cout << x << " is 2^k" << endl;
	else
		cout << x << " is not 2^k" << endl;
	system("pause");
	return 0;
}

