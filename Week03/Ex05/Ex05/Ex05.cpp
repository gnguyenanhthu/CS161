//ID: 1751023
//Name: Nguyen Anh Thu
//Ex05: Nhap diem trung binh, xep loai hoc luc sinh vien

#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Day la chuong trinh nhap diem trung binh, xep loai hoc luc sinh vien." << endl;
	cout << "Moi nhap diem trung binh: ";
	cin >> a;
	if ((9 <= a) && (a <= 10))
		cout << "Sinh vien nay xep loai xuat sac"<<endl;
	else 
		if (8 <= a)
		cout << "Sinh vien nay xep loai gioi"<<endl; 
		else 
			if (7 <= a )
			cout << "Sinh vien nay xep loai kha"<<endl;
			else 
				if (6 <= a)
				cout << "Sinh vien nay xep loai trung binh kha"<<endl;
				else
					if (5 <= a )
					cout << "Sinh vien nay xep loai trung binh"<<endl;
					else
						if (4 <= a )
						cout << "Sinh vien nay xep loai yeu"<<endl;
						else
							cout << "Sinh vien nay xep loai kem"<<endl;
	system("pause");
	return 0;




}