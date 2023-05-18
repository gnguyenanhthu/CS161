//ID: 1751023
//Name: Nguyen Anh Thu
//Ex01: Tim so nho hon giua 2 so nguyen

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int a, b;
	cout << "Day la chuong trinh nhap 2 so nguyen, tim ra so nho hon." << endl;
	cout << "Moi nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "Moi nhap so nguyen thu hai: ";
	cin >> b;
	if (a == b)
		cout << "Hai so nay bang nhau." << endl;
	else
	{
		if (a > b)
			cout << "So nho hon giua " << a << " va " << b << " la " << b << endl;
		else
			cout << "So nho hon giua " << a << " va " << b << " la " << a << endl;
	}
	system("pause");
	return 0;
}