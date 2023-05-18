#include "Function.h"

int main()
{
	int x, n;
	float s;
	cout << "Calculate S(x,n)" << endl;
	cout << "Please input x: ";
	cin >> x;
	cout << "Please input n: ";
	cin >> n;
	s = cals(x, n);
	cout << "S(x,n) = " << fixed << setprecision(2) << s << endl;
	system("pause");
	return 0;
}
