//ID: 1751023
//Name: Nguyen Anh Thu
//Ex07: Nhap so nguyen tu 0-9, in ra cach doc so, nguoc lai thong bao khong doc duoc

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Day la chuong trinh Nhap so nguyen tu 0-9, in ra cach doc so." << endl;
	cout << "Moi nhap so nguyen tu 0 den 9: ";
	cin >> a;
	switch (a)
	{
	case 0:
		cout << "Khong" << endl; break;
	case 1:
		cout << "Mot" << endl; break;
	case 2:
		cout << "Hai" << endl; break;
	case 3:
		cout << "Ba" << endl; break;
	case 4:
		cout << "Bon" << endl; break;
	case 5:
		cout << "Nam" << endl; break;
	case 6:
		cout << "Sau" << endl; break;
	case 7:
		cout << "Bay" << endl; break;
	case 8:
		cout << "Tam" << endl; break;
	case 9:
		cout << "Chin" << endl; break;
	default:
		cout << "Khong doc duoc" << endl;
	}
	system("pause");
	return 0;
}