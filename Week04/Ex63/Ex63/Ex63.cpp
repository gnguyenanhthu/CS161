//ID: 1751023
//Name: Nguyen Anh Thu
//Ex63: Find the least common multiple (Tim BCNN)

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b, x, y;
	cout << "Find the least common multiple." << endl;
	cout << "Please input a: ";
	cin >> a;
	cout << "Please input b: ";
	cin >> b;
	x = a; y = b;
	while (a != b) //Tim UCLN
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	cout << "The least common multiple is: "<< (x*y)/ a << endl;
	system("pause");
	return 0;
}