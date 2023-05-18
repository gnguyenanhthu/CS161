#include "Function.h"

int main()
{
	int x, a;
	cout << "Find the biggest digit of a positive integer." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	a = max(x);
	cout << "The biggest digit of a positive integer: " << a << endl;
	system("pause");
	return 0;
}