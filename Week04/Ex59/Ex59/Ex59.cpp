//ID: 1751023
//Name: Nguyen Anh Thu
//Ex59: Check if a number is symmetrical

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, r, d, t;
	cout << "Check if a number is symmetrical." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	r = 0;
	t = x;
	while (t != 0)
	{
		d = t % 10;
		r = r * 10 + d;
		t = t / 10;
	}
	if (r == x)
		cout << x << " is a symmetrical number." << endl;
	else
		cout << x << " is not a symmetrical number." << endl;
	system("pause");
	return 0;
}