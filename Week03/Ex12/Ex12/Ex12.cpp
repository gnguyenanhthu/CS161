//ID: 1751023
//Name: Nguyen Anh Thu
//Ex12: Nhap 4 so nguyen a,b,c,d, sap xep theo thu tu tang dan

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b, c, d, x;
	cout << "Day la chuong trinh nhap 4 so nguyen a,b,c,d, sap xep theo thu tu tang dan." << endl;
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
	if (b > c)
	{
		x = b;
		b = c;
		c = x;
	}
	if (b > d)
	{
		x = b;
		b = d;
		d = x;
	}
	if (c > d)
	{
		x = c;
		c = d;
		d = x;
	}
	cout << "Cac so duoc sap xep theo thu tu tang dan la:" << endl;
	cout << a << " " << b << " " << c << " " << d << endl;
	system("pause");
	return 0;
}