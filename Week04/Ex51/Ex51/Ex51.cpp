//ID: 1751023
//Name: Nguyen Anh Thu
//Ex51: Find the biggest digit of a positive integer

#include <iostream>
using namespace std;

int main()
{
	long x, n, d, max;
	cout << "Find the biggest digit of a positive integer." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	n = x;
	max = 0;
	do
	{
		d = n % 10;
		if (d > max)
			max = d;
		n = n / 10;
	}
	while (n != 0);
	cout <<"The biggest digit of a positive integer: "<< max << endl;
	system("pause");
	return 0;
}