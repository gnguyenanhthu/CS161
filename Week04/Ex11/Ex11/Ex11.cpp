//ID: 1750123
//Name :Nguyen Anh Thu
//Ex11: Caculate S(n)=1+1*2+1*2*3+...+1*2*3*...*n

#include <iostream>
using namespace std;
#include <iomanip>
#include <math.h>

int main()
{
	float n, i, temp;
	double kq;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;
	i = 1;
	temp = 1;
	kq = 0;
	while (i <= n)
	{
		kq = kq + i*temp;
		temp = temp*i;
		++i;
	}
	cout << "S(n) = " << fixed << setprecision(2) << kq<<endl;
	system("pause");
	return 0;
}