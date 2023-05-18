#include "Function.h"

int main()
{
	int d, m, y, b, c, e;
	bool a;
	cout << "Date handle.";
	cout << "Please input a date: ";
	cin >> d >> m >> y;
	
	a = leapyear(y);
	if (a == true)
		cout << y << " is leap year." << endl;
	else
		cout << y << " is not leap year." << endl;

	b = dom(m, y);
	cout << "There are " << b << " days in this month." << endl;

	c = findn(d, m, y);
	cout << "This is the " << c << " th day of the year." << endl;

	e = findm(d, m, y);
	cout << "This is the " << e << " th day." << endl;

	tomorrow(d, m, y);
	cout << "Tomorrow is " << d << "/" << m << "/" << y << endl;

	yesterday(d, m, y);
	yesterday(d, m, y);
	cout << "Yesterday is " << d << "/" << m << "/" << y << endl;

	system("pause");
	return 0;
}