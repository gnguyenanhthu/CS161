#include "Function.h"

int main()
{
	float n;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;

	float result;
	result = cals(n);

	cout << "S(n) = " << fixed << setprecision(2) << result << endl;
	system("pause");
	return 0;
}