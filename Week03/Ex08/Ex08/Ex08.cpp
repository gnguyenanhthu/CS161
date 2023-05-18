//ID: 1751023
//Name: Nguyen Anh Thu
//Ex08: Doi 1 chu thuong thanh chu hoa va nguoc lai

#include <iostream>
using namespace std;
#include <ctype.h>
#include <stdio.h>

int main()
{
	char n;
	cout << "Day la chuong trinh doi 1 chu thuong thanh chu hoa va nguoc lai." << endl;
	cout << "Nhap 1 chu bat ki: ";
	cin >> n;
	if (isalpha(n))
	{
		if (islower(n))
		{
			n = toupper(n);
			cout << "Chu da duoc doi la: " << n << endl;
		}
		else
		{
			n = tolower(n);
			cout << "Chu da duoc doi la: " << n << endl;
		}
	}
	else
		cout << "Ki tu khong hop le !" << endl;
	system("pause");
	return 0;
}