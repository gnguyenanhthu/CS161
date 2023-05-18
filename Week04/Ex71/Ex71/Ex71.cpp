//ID: 1751023
//Name: Nguyen Anh Thu
//Ex71: Calculate S(x,n)=-x+x^2/(1+2)-x^3/(1+2+3)+...

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int x, n, i;
	float tu, mau, sum;
	cout << "Calculate S(x,n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;
	i = 1;
	tu = 1;
	mau = 0;
	sum = 0;
	while (i <= n)
	{
		tu = tu*(-x);
		mau = mau + i;
		sum = sum + (tu / mau);
		++i;
	}
	cout <<"S(x,n) = " << fixed << setprecision(2) << sum << endl;
	system("pause");
	return 0;
}