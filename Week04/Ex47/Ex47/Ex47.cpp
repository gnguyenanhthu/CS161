//ID: 1751023
//Name: Nguyen Anh Thu
//Ex47: Sum all of even numbers of a digit

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	long x, d, n, sum;
	cout << "Sum all of even numbers of a digit." << endl;
	cout << "Please input a positive integer number: ";
	cin >> x;
	n = x;
	sum = 0;
	do
	{
		d = n % 10;
		n = n / 10;
		if (d % 2 == 0)
			sum = sum + d;
	} while ((n != 0) && (d != 0));
	cout << sum<<endl;
	system("pause");
	return 0;
}