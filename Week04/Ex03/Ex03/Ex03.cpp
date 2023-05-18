//ID: 1751023
//Name: Nguyen Anh Thu
//Ex03: Calculate S(n)=1+1/2+1/3+...+1/n

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>


int main()
{
	float n, i;
	double kq;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;
	i = 1;
	kq = 0;
	while (i <= n)
	{
		kq = kq + 1 / i;
		i++;
	}
	cout << "S(n) = " << fixed << setprecision(2) << kq << endl;
	system("pause");
	return 0;
}