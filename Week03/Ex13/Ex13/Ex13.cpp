//ID: 1751023
//Name: Nguyen Anh Thu
//Ex13: Tinh tien di taxi

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int x, tong;
	cout << "Day la chuong trinh tinh tien di taxi." << endl;
	cout << "Moi nhap so km (so nguyen): ";
	cin >> x;
	if (x <= 0)
		cout << "Ban nhap sai roi !" << endl;
	else
	{
		if (x <= 1)
			tong = 15000;
		else
		{
			if (x <= 5)
				tong = 15000 + (x - 1) * 13500;
			else
			{
				if (x <= 12)
					tong = 15000 + 13500 * 4 + (x - 5) * 11000;
				else
					tong = (15000 + 13500 * 4 + (x - 5) * 11000)*0.9;
			}
		}
	}
	cout << "So tien ban phai tra la: " << tong << endl;
	system("pause");
	return 0;
}