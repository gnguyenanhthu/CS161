//ID: 1751023
//Name: Nguyen Anh Thu
//Ex03: Nhap vao 3 diem, xet xem sv dau hay rot

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float a, b, c, tong;
	cout << "Day la chuong trinh nhap vao 3 cot diem, xet xem sv dau hay rot." << endl;
	cout << "Moi nhap diem thuc hanh: ";
	cin >> a;
	cout << "Moi nhap diem bai tap li thuyet: ";
	cin >> b;
	cout << "Moi nhap diem thi li thuyet: ";
	cin >> c;
	tong = 0.3*a + 0.3*b + 0.4*c;
	if (tong >= 5)
		cout << "Sinh vien nay dau" << endl;
	else
		cout << "Sinh vien nay rot" << endl;
	system("pause");
	return 0;
}