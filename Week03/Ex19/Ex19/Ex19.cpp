//ID: 1751023
//Name: Nguyen Anh Thu
//Ex19: Tinh tien thue phong karaoke

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	int v, d;
	float h, t, n, tong;
	cout << "Day la chuong trinh tinh tien thue phong thue phong karaoke." << endl;
	cout << "Moi ban nhap so gio thue phong: ";
	cin >> h;
	cout << "Moi ban nhap thoi diem thue phong (24h): ";
	cin >> t;
	cout << "Moi ban nhap thu trong tuan, neu chu nhat thi nhap so 8: ";
	cin >> d;
	cout << "Co phai phong VIP hay khong?" << endl;
	cout << "Neu co thi bam so 1, khong thi bam so 0." << endl;
	cin >> v;

	while ((d < 2) || (d > 8) || (h < 0) || (t < 0) || (t > 24))
	{
		cout << "Co so lieu khong phu hop, moi ban nhap lai." << endl;
		cout << "Moi ban nhap so gio thue phong: ";
		cin >> h;
		cout << "Moi ban nhap thoi diem thue phong (24h): ";
		cin >> t;
		cout << "Moi ban nhap thu trong tuan, neu chu nhat thi nhap so 8: ";
		cin >> d;
		cout << "Co phai phong VIP hay khong?" << endl;
		cout << "Neu co thi bam so 1, khong thi bam so 0." << endl;
		cin >> v;
	}
	while ((v != 0) && (v != 1))
	{
		cout << "Co phai phong VIP hay khong?" << endl;
		cout << "Neu co thi bam so 1, khong thi bam so 0." << endl;
		cin >> v;
	}

	n = t + h;
	if ((2 <= d) && (d <= 6))
	{
		if ((10 <= n) && (n <= 18))
		{
			if (t < 10)
			{
				if (v == 0)
					tong = (n - 10) * 80000;
				else
					tong = (n - 10) * 100000;
			}
			else
			{
				if (v == 0)
					tong = h * 80000;
				else
					tong = h * 100000;
			}
		}
		else
		{
			if (t < 10)
			{
				if (v == 0)
					tong = (n - 18) * 200000 + (h - (n - 18)) * 80000;
				else
					tong = (n - 18) * 300000 + (h - (n - 18)) * 100000;
			}
			else
			{
				if (v == 0)
					tong = ((n - 18) * 200000 + (h - (n - 18)) * 80000);
				else
					tong = ((n - 18) * 300000 + (h - (n - 18)) * 100000);
			}
		}
	}
	else
	{
		if (t < 10)
		{
			if (v == 0)
				tong = (n - 10) * 200000;
			else
				tong = (n - 10) * 400000;
		}
		{
			if (v == 0)
				tong = h * 200000;
			else
				tong = h * 400000;
		}
	}
	cout << "So tien ban phai tra la: " <<fixed<<setprecision(2) << tong << " dong." << endl;
	system("pause");
	return 0;
}