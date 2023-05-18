//ID: 1751023
//Name: Nguyen Anh Thu
//Ex22: Tinh tien nuoc phai tra

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float a, b, c, tong;
	cout << "Day la chuong trinh tinh so tien nuoc phai tra." << endl;
	cout << "Moi ban nhap chi so nuoc thang truoc: ";
	cin >> a;
	cout << "Moi ban nhap chi so nuoc thang nay: ";
	cin >> b;
	c = b - a;
	while ((a < 0) || (b <= 0) || (c <= 0))
	{
		cout << "Co so lieu khong phu hop, moi ban nhap lai." << endl;
		cout << "Moi ban nhap chi so nuoc thang truoc: ";
		cin >> a;
		cout << "Moi ban nhap chi so nuoc thang nay: ";
		cin >> b;
		c = b - a;
	}
	if (c <= 4)
		tong = c * 3300;
	else
	{
		if (c <= 6)
			tong = 4 * 3300 + (c - 4) * 5200;
		else
			tong = 4 * 3300 + 2 * 5200 + (c - 6) * 7000;
	}
	cout << "So tien nuoc ban phai tra la: " << fixed << setprecision(2) << tong << " dong."<<endl;
	system("pause");
	return 0;
}