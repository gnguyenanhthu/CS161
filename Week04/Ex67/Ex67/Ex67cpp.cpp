//ID: 1751023
//Name: Nguyen Anh Thu
//Ex67: Calculate S(x,n)=x-x^2+x^3+...+(-1)^(n+1)*x^n

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, n, i, t;
	float sum;
	cout << "Calculate S(x,n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;
	i = 1;
	sum = 0;
	t = x;
	while (i <= n)
	{
		sum = sum + t;
		t = -(t*x);
		++i;
	}
	cout <<"S(x,n) = " << sum << endl;
	system("pause");
	return 0;
}
