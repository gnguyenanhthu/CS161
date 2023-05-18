//ID: 1751023
//Name: Nguyen Anh Thu
//Ex39: Calculate S(n)

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int n, i;
	float a, b;
	double sum;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;
	a = 1;
	i = 1;
	b = 2;
	sum = 0;
	while (i <= n)
	{
		a = a*i;
		sum = pow((a + sum), (1 / b));
		++i;
		++b;
	}
	cout << fixed << setprecision(2) << sum << endl;
	system("pause");
	return 0;
}