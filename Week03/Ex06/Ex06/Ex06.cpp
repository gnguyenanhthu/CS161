//ID: 1751023
//Name: Nguyen Anh Thu
//Ex05: Nhap diem trung binh thang 10, tinh thang diem chu ABCDF cua sinh vien

#include <iostream>
using namespace std;

int main()
{
	float a;
	cout<<"Day la chuong trinh hap diem trung binh thang 10, tinh thang diem chu ABCDF cua sinh vien."<<endl;
	cout << "Moi nhap diem trung binh: ";
	cin >> a;
	if ((8.5 <= a) && (a <= 10))
		cout << "Sinh vien dat diem A" << endl;
	else
		if (7 <= a)
			cout << "Sinh vien dat diem B" << endl;
		else
			if (5.5 <= a)
				cout << "Sinh vien dat diem C" << endl;
			else
				if (4.0 <= a)
					cout << "Sinh vien dat diem D" << endl;
				else
					cout << "Sinh vien dat diem F" << endl;
	system("pause");
	return 0;
}