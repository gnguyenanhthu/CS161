//ID: 1751023
//Name: Nguyen Anh Thu
//Ex19: Calculate S(n)=1+x+x^3/3!+x^5/5!+...+(x^(2n+1))/((2n+1)!)

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int i;
	float x, n;
	double tu, mau, kq;
	cout << "Calculate S(n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;
	kq = 1;
	i = 1;
	mau = 1;
	tu = 1;
	while (i <= (2*n+1))
	{
		mau = mau*i;
		tu = tu*x;
		if (i%2!=0)
			kq = kq + (tu / mau);
		++i;
	}
	cout << "S(n) = " << fixed << setprecision(2) << kq << endl;
	system("pause");
	return 0;
}
