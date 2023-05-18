//ID: 1751023
//Name: Nguyen Anh Thu
//Ex15: Nhap 1 thang va nam, cho biet thang do co bao nhieu ngay

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, t;
	cout << "Day la chuong trinh nhap 1 thang va nam, cho biet thang do co bao nhieu ngay." << endl;
	cout << "Moi nhap nam: ";
	cin >> n;
	cout << "Moi nhap thang: ";
	cin >> t;
	if ((t == 1) || (t == 3) || (t == 5) || (t == 7) || (t == 8) || (t == 10) || (t == 12))
		cout << "Thang " << t << " nam " << n << " co 31 ngay." << endl;
	else
	{
		if ((t == 4) || (t == 6) || (t == 9) || (t == 11))
			cout << "Thang " << t << " nam " << n << " co 30 ngay." << endl;
		else
		{
			if (t == 2)
			{
				int a, b, c;
				a = n % 400;
				b = n % 4;
				c = n % 100;
				if ((a == 0) || ((b == 0) && (c != 0)))
					cout << "Thang 2 nam " << n << " co 29 ngay." << endl;
				else
					cout << "Thang 2 nam " << n << " co 28 ngay." << endl;
			}
			else
				cout << "Khong co thang nay." << endl;
		}
	}
	system("pause");
	return 0;
}