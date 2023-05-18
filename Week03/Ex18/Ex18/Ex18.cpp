//ID: 1751023
//Name: Nguyen Anh Thu
//Ex18: Tinh cuoc phi 3G phai tra cho Mobifone

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float a;
	int b;
	cout << "Day la chuong trinh tinh cuoc phi 3G phai tra cho Mobifone." << endl;
	cout << "Moi ban nhap dung luong 3G su dung trong thang (KB): ";
	cin >> a;
	cout << "Ban co dung goi Miu khong?" << endl;
	cout << "Neu co moi bam so 1, neu khong thi bam so 0." << endl;
	cin >> b;
	while (a < 0)
	{
		cout << "Dung luong khong the am." << endl;
		cout << "Moi ban nhap dung luong 3G su dung trong thang (KB): ";
		cin >> a;
		cout << "Ban co dung goi Miu khong?" << endl;
		cout << "Neu co moi bam so 1, neu khong thi bam so 0." << endl;
		cin >> b;
	}
	while ((b != 0) && (b != 1))
	{
		cout << "Ban co dung goi Miu khong?" << endl;
		cout << "Neu co moi bam so 1, neu khong thi bam so 0." << endl;
		cin >> b;
	}
	if (b == 1)
		cout << "So tien ban phai tra la 70000 dong."<<endl;
	else
	{
		float tong;
		tong = 1.5 * a;
		cout << "So tien ban phai tra la "<<fixed<<setprecision(2)<<tong<<" dong." << endl;
	}
	system("pause");
	return 0;
}