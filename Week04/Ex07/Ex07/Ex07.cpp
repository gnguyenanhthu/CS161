//ID: 1751023
//Name: Nguyen Anh Thu
//Ex07: Calculate S(n)=1/2+2/3+3/4+...+n/(n+1)

#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main()
{
	float n, i;
	double kq;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;
	i = 0;
	kq = 0;
	while (i <= n)
	{
		kq = kq + (i / (i+1));
		++i;
	}
	cout << "S(n) = " << fixed << setprecision(2) << kq<<endl;
	system("pause");
	return 0;
}