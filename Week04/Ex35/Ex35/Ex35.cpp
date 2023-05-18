//ID: 1751023
//Name: Nguyen Anh Thu
//Ex35: Calculate S(n)=sqrt(1+sqrt(2+sqrt(3+...+sqrt(n-1)+sqrt(n)))...)

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int n;
	float sum;
	cout << "Calculate S(n)" << endl;
	cout << "Please input a positive integer: ";
	cin >> n;
	sum = 0;
	if (n >= 0)
	{
		while (n > 0)
		{
			sum = sqrt(n + sum);
			--n;
		}
		cout << "S(n) = " << fixed << setprecision(2) << sum << endl;
	}
	else
		cout << "The square root of a negative is undefined." << endl;
	system("pause");
	return 0;
}