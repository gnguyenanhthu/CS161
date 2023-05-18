#include "Function.h"

int main()
{
	int x, y;
	cout << "Count number of the first digit.";
	cout << "Please input a positive integer: ";
	cin >> x;
	y = count(x);
	cout << "Number of the first digits are: " << y << endl;
	system("pause");
	return 0;
}