//ID: 1751023
//Name: Nguyen Anh Thu
//Ex17: Tinh dung luong dropbox cua ban

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float a, b, c, tong;
	cout << "Day la chuong trinh tinh dung luong Dropbox cua ban." << endl;
	cout << "Moi nhap dung luong Dropbox hien tai cua ban: ";
	cin >> a;
	cout << "Moi nhap so nguoi da accept invite: ";
	cin >> b;
	c = b*0.5;
	if (c < 16)

	{
		tong = a + c;
		cout << "Dung luong Dropbox cua ban la: " << tong << endl;
	}
	else
	{
		tong = a + 16;
		cout << "Dung luong Dropbox cua ban la: " << tong << endl;
	}
	system("pause");
	return 0;
}