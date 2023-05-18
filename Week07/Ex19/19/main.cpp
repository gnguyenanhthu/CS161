#include "Function.h"

int main()
{
	float x, n;
	cout << "Calculate S(n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;

	float result;
	result = cals(x, n);

	cout << "S(n) = " << fixed << setprecision(2) << result << endl;
	system("pause");
	return 0;
}