//ID: 1751023
//Name: Nguyen Anh Thu
//Ex14: Nhap vao 1 nam, cho biet co phai la nam nhuan hay khong

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n;
	cout << "Day la chuong trinh nhap vao 1 nam, cho biet co phai la nam nhuan hay khong." << endl;
	cout << "Moi nhap 1 nam bat ki: ";
	cin >> n;
	if (n <= 0)
		cout << "Ban nhap sai roi !" << endl;
	else
	{
		int a, b, c;
		a = n % 400;
		b = n % 4;
		c = n % 100;
		if ((a == 0) || ((b == 0) && (c != 0)))
			cout << "Day la nam nhuan." << endl;
		else
			cout << "Day khong phai nam nhuan." << endl;
	}
	system("pause");
	return 0;
}