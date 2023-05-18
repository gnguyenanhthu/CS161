//ID: 1751023
//Name: Nguyen Anh Thu
//Ex16: Nhap 3 canh, cho biet co phai tam giac hay khong, kiem tra do la tam giac gi

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	double a, b, c, x, y, z;
	cout << "Day la chuong trinh nhap 3 canh, cho biet co phai tam giac hay khong, kiem tra do la tam giac gi." << endl;
	cout << "Moi nhap canh a: ";
	cin >> a;
	cout << "Moi nhap canh b: ";
	cin >> b;
	cout << "Moi nhap canh c: ";
	cin >> c;
	while ((a <= 0) || (b <= 0) || (c <= 0))
	{
		cout << "Co canh <=0, xin moi nhap lai."<<endl;
		cout << "Moi nhap canh a: ";
		cin >> a;
		cout << "Moi nhap canh b: ";
		cin >> b;
		cout << "Moi nhap canh c: ";
		cin >> c;
	}
	x = pow(a, 2);
	y = pow(b, 2);
	z = pow(c, 2);
	if ((a + b == c) || (a + c == b) || (b + c == a))
		cout << "Ba diem nay thang hang." << endl;
	else
	{
		if ((a == b) && (b == c))
			cout << "Day la tam giac deu." << endl;
		else
		{
			if ((a == b) || (b == c) || (a==c))
				cout << "Day la tam giac can." << endl;
			else
			{
				if ((x + y == z) || (x + z == y) || (y + z == x))
					cout << "Day la tam giac vuong." << endl;
				else
				{
					if (((a == b) || (b == c) || (a == c)) && ((x + y == z) || (x + z == y) || (y + z == x)))
						cout << "Day la tam giac vuong can." << endl;
					else
						cout << "Day la tam giac binh thuong." << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}