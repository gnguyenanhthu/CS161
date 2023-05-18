#include "Function.h"

int main()
{
	int x, y;
	cout << "Check if a 4 byte number is 2^k" << endl;
	cout << "Please input a number: ";
	cin >> x;
	y = check2k(x);
	if ((y == 0) || (x == 1))
		cout << x << " is 2^k" << endl;
	else
		cout << x << " is not 2^k" << endl;
	system("pause");
	return 0;
}