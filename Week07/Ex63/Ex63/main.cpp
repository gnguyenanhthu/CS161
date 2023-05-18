#include "Function.h"

int main()
{
	int a, b, c;
	cout << "Find the least common multiple." << endl;
	cout << "Please input a: ";
	cin >> a;
	cout << "Please input b: ";
	cin >> b;
	c = lcm(a, b);
	cout << "The least common multiple is: " << c << endl;
	system("pause");
	return 0;
}