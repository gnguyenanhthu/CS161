//ID: 1751023
//Name: Nguyen Anh Thu
//Ex09: Giai pt bac 1

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float a, b;

	cout << "Giai pt bac 1 ax+b=0" << endl;
	cout << "Moi nhap so a: ";
	cin >> a;
	cout << "Moi nhap so b: ";
	cin >> b;

	if (a == 0)
		if (b != 0)
			cout << "Pt nay vo nghiem."<<endl;
		else
			cout << "Pt co vo so nghiem."<<endl;
	else
	{
		float x;
		x = -b / a;
		cout << "Nghiem cua pt " << a << "x+" << b << "=0 la: " << "x="
			<< setprecision(2) << x<<endl;
	}
	system("pause");
	return 0;
}