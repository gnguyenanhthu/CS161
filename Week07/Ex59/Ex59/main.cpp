#include "Funtion.h"

int main()
{
	int x, y;
	cout << "Check if a number is symmetrical." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	y = symmetrical(x);
	if (y == x)
		cout << x << " is a symmetrical number." << endl;
	else
		cout << x << " is not a symmetrical number." << endl;
	system("pause");
	return 0;
}