#include <iostream>
using namespace std;
#include<math.h>
#include<iomanip>

float cals(float k, float q);

int main()
{
	float x, n;
	cout << "Calculate S(n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;

	float result;
	result = cals(x,n);

	cout << "S(n) = " << fixed << setprecision(2) << result << endl;
	system("pause");
	return 0;
}

float cals(float k, float q)
{
	float tu = 1, mau = 1, s = 1;
	for (int i = 1; i <= (2 * q + 1); ++i)
	{
		mau = mau*i;
		tu = tu*k;
		if (i % 2 != 0)
			s += (tu / mau);
	}
	return s;
}