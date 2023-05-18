#include "Function.h"

int main()
{
	int n;
	float s;
	cout << "Calculate S(n)" << endl;
	cout << "Please input a positive integer: ";
	cin >> n;
	s = cals(n);
	cout << "S(n) = " << fixed << setprecision(2) << s << endl;
	system("pause");
	return 0;
}