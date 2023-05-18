#include <iostream>
using namespace std;
#include <math.h>

float cals(float k);

int main()
{
	float n;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;

	float result;
	result = cals(n);

	cout << "S(n) = " << result << endl;
	system("pause");
	return 0;
}

float cals(float k)
{
	float s = 0, t = 1;
	for (int i = 1; i <= k; ++i)
	{
		s += i*t;
		t *= i;
	}
	return s;
}