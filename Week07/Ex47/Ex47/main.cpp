#include "Function.h"

int main()
{
	int x, s;
	cout << "Sum all of even numbers of a digit." << endl;
	cout << "Please input a positive integer number: ";
	cin >> x;
	s = sum(x);
	cout << s << endl;
	system("pause");
	return 0;
}