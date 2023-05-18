//ID: 1751023
//Name: Nguyen Anh Thu
//Ex23: Count divisors of an integer

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int x, i, n, sum;
	cout << "Count divisors of an integer." << endl;
	cout << "Please input an integer: ";
	cin >> x;
	i = 1;
	sum = 0;
	while (i <= x)
	{
		n = x % i;
		if (n == 0)
			++sum;
		++i;
	}
	cout << "The number of divisors is: " << sum<<endl;
	system("pause");
	return 0;
}