//ID: 1751023
//Name: Nguyen Anh Thu
//Ex31: Input n, check if n is prime

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, i;
	float x;
	cout << "Input n, check if n is prime." << endl;
	cout << "Please input n: ";
	cin >> n;
	i = 2;
	x = 1;
	while ((i <= sqrt(n)) && (x != 0))
	{
		x = n%i;
		++i;
	}
	if ((x == 0)||(n == 1))
		cout << n << " is not prime" << endl;
	else
		cout << n << " is a prime" << endl;
	system("pause");
	return 0;
}