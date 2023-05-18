//ID: 1751023
//Name: Nguyen Anh Thu
//Ex43: Count digit of a number

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, c, n;
	cout << "Count digits of a number." << endl;
	cout << "Please input a positive integer: ";
	cin >> x;
	c = 0;
	while (x != 0)
	{
		++c;
		x = x / 10;
	}
	cout <<"The number of digits is: "<<c<<endl;
	system("pause");
	return 0;
}