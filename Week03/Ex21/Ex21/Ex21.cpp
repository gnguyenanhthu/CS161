//ID: 1751023
//Name: Nguyen Anh Thu
//Ex21: Tinh tien dien phai tra

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float a, b, c;
	cout << "Day la chuong trinh tinh tien dien phai tra." << endl;
	cout << "Nhap chi so dien thang truoc: ";
	cin >> a;
	cout << "Nhap chi so dien thang nay: ";
	cin >> b;
	while ((a < 0) || (b <= 0))
	{
		cout << "Co chi so khong thich hop, moi ban nhap lai." << endl;
		cout << "Nhap chi so dien thang truoc: ";
		cin >> a;
		cout << "Nhap chi so dien thang nay: ";
		cin >> b;
	}
	c = b - a;
	if (c <= 0)
		cout << "Dong ho dien hu roi!" << endl;
	else
	{
		float tong;
		if (c <= 50)
			tong = (c * 1484)*1.1;
		else
			if (c <= 100)
				tong = (1484 * 50 + (c - 50) * 1533)*1.1;
			else
				if (c <= 200)
					tong = (1484 * 50 + 1533 * 50 + (c - 100) * 1786)*1.1;
				else
					if (c <= 300)
						tong = (1484 * 50 + 1533 * 50 + 1786 * 100 + (c - 200) * 2242)*1.1;
					else
						if (c <= 400)
							tong = (1484 * 50 + 1533 * 50 + 1786 * 100 + 2242 * 100 + (c - 300) * 2503)*1.1;
						else
							tong = (1484 * 50 + 1533 * 50 + 1786 * 100 + 2242 * 100 + 2503 * 100 + (c - 400) * 2587)*1.1;
		cout << "So tien ban phai tra la: " <<fixed <<setprecision(2) << tong <<" dong." << endl;
	}
	system("pause");
	return 0;
}