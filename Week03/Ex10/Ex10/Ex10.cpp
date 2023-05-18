//ID: 1751023
//Name: Nguyen Anh Thu
//Ex10: Giai pt bac 2 ax^2+bx+c=0

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
	float a, b, c;
	cout << "Giai pt bac 2 ax^2+bx+c=0."<< endl;
	cout << "Moi nhap so a: ";
	cin >> a;
	cout << "Moi nhap so b: ";
	cin >> b;
	cout << "Moi nhap so c: ";
	cin >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "Pt nay co vo so nghiem." << endl;
			else
				cout << "Pt nay vo nghiem." << endl;
		}
		else
		{
			float x;
			x = -c / b;
			cout << "Nghiem cua pt " << a << "x^2+" << b << "x+" << c << "=0 la: x="
					<< setprecision(2) << x<<endl;
		}
	}

	else
	{
		float delta;
		delta = b*b - 4 * a*c;

		if (delta < 0)
			cout << "Pt nay vo nghiem."<<endl;
		else
			if (delta > 0)
		{
			float x1, x2;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Nghiem cua pt " << a << "x^2+" << b << "x+" << c << " =0 la:" << endl;
			cout << "x1 = " << setprecision(2) << x1<<endl;
			cout << "x2 = " << setprecision(2) << x2<<endl;
		}
			else
			{
				float x;
				x = -b / (2 * a);
				cout << "Pt " << a << "x^2+" << b << "x+" << c << "=0 co nghiem kep la x=" << setprecision(2) << x<<endl;
			}
	}
	system("pause");
	return 0;
}
