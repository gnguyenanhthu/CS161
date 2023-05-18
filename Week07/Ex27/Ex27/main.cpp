#include "Function.h"

int main()
{
	int x;
	cout << "Count even divisors of an integer." << endl;
	cout << "Please input an integer: ";
	cin >> x;

	int c;
	c = count(x);

	cout << "The number of even divisors is: " << c << endl;
	system("pause");
	return 0;
}
