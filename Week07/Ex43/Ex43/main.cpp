#include "Function.h"

int main()
{
	int x, d;
	cout << "Count digits of a number." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	d = count(x);
	cout << "The number of digits is: " << d << endl;
	system("pause");
	return 0;
}