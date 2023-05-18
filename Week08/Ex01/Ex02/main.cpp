#include"Function.h"

int main()
{
	char f[100], l[100], e1[100], e2[100], p1[100], p2[100];
	int d, m, y;
	bool a, b, c;
	cout << "First name: ";
	cin.getline(f, 100);
	cout << "Last name: ";
	cin.getline(l, 100);
	cout << "Email: ";
	cin.getline(e1, 100);
	cout << "Email: ";
	cin.getline(e2, 100);
	cout << "Password: ";
	cin.getline(p1, 100);
	cout << "Password: ";
	cin.getline(p2, 100);
	cout << "Day of birth: ";
	cin >> d >> m >> y;

	a = checkemail(e1, e2);
	b = checkpass(p1, p2);
	c = checkdob(d, m, y);

	if (a == false)
		cout << "Your email is invalid." << endl;
	if (b == false)
		cout << "Your password is invalid." << endl;
	if (c == false)
		cout << "Your day of birth is invalid." << endl;
	if ((a) && (b) && (c))
		cout << "SUCCESSFUL REGISTRATION" << endl;

	system("pause");
	return 0;
}