#include "Function.h"

int main()
{
	int n, m;
	cout << "Input n, check if n is prime." << endl;
	cout << "Please input n: ";
	cin >> n;

	m = isprime(n);
	if ((m == 0) || (n == 1))
		cout << n << " is not prime" << endl;
	else
		cout << n << " is a prime" << endl;
	system("pause");
	return 0;
}