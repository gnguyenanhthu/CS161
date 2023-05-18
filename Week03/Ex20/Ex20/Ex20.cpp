//ID: 1751023
//Name: Nguyen Anh Thu
//Ex20: Tinh gia ve xem phim 2D o cac rap Galaxy Cinema

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Day la chuong trinh tinh gia ve xem phim 2D o cac rap Galaxy Cinema." << endl;
	cout << "Moi ban nhap thu trong ngay, neu chu nhat thi nhap so 8: ";
	cin >> a;
	cout << "Moi ban nhap thoi diem xem phim (24h): ";
	cin >> b;
	
	while ((a < 2) || (a > 8) || (b < 0) || (b > 24))
	{
		cout << "Co so lieu khong phu hop, moi ban nhap lai." << endl;
		cout << "Moi ban nhap thu trong ngay, neu chu nhat thi nhap so 8: ";
		cin >> a;
		cout << "Moi ban nhap thoi diem xem phim (24h): ";
		cin >> b;
	}
	if ((a == 2) || (a == 4) || (a == 5))
	{
		if (b < 17)
			cout << "So tien ban phai tra la 60000 dong." << endl;
		else
			cout << "So tien ban phai tra la 70000 dong." << endl;
	}
	if (a == 3)
	{
		cout << "Happy day !" << endl;
		cout << "So tien ban phai tra la 50000 dong." << endl;
	}
	if ((a == 6) || (a == 7) || (a == 8))
	{
		if (b < 17)
		cout << "So tien ban phai tra la 75000 dong." << endl;
		else 
		cout << "So tien ban phai tra la 80000 dong." << endl;
	}
	system("pause");
	return 0;
}


