//ID: 1751023
//Name: Nguyen Anh Thu
//Ex23: Count even divisors of an integer

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, i, n, count;
	cout << "Count even divisors of an integer." << endl;
	cout << "Please input an integer: ";
	cin >> x;
	i = 1;
	count = 0;
	while (i <= x)
	{
		n = x % i;
		if ((n == 0) && (i % 2 == 0))
			++count;
		++i;
	}
	cout << "The number of even divisors is: " << count << endl;
	system("pause");
	return 0;
}