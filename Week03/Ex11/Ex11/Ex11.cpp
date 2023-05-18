//ID: 1751023
//Name: Nguyen Anh Thu
//Ex11: Nhap 4 so nguyen a,b,c,d, tim so nho nhat
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b, c, d, x;
	cout << "Day la chuong trinh nhap 4 so nguyen a,b,c,d, tim so nho nhat." << endl;
	cout << "Moi ban nhap so a: ";
	cin >> a;
	cout << "Moi ban nhap so b: ";
	cin >> b;
	cout << "Moi ban nhap so c: ";
	cin >> c;
	cout << "Moi ban nhap so d: ";
	cin >> d;
	if (a > b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (a > c)
	{
		x = a;
		a = c;
		c = x;
	}
	if (a > d)
	{
		x = a;
		a = d;
		d = x;
	}
	cout << "So nho nhat la: "<<a << endl;
	system("pause");
	return 0;
}