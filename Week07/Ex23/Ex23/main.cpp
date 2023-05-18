#include "Function.h"

int main()
{
	int x;
	cout << "Count divisors of an integer." << endl;
	cout << "Please input an integer: ";
	cin >> x;

	int c;
	c = count(x);

	cout << "The number of divisors is: " << c << endl;
	system("pause");
	return 0;
}