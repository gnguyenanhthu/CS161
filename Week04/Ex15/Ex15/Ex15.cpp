//ID: 1751023
//Name: Nguyen Anh Thu
//Ex15: Calculate S(n)=1+1/(1+2)+1/(1+2+3)+...+1+(1+2+3+...+n)

#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main()
{
	float n, i, temp;
	double kq;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;
	i = 1;
	temp = 0;
	kq = 0;
	while (i <= n)
	{
		kq = kq + (1 / (temp + i));
		temp = temp + i;
		++i;
	}
	cout << "S(n) = " << fixed << setprecision(2) << kq<<endl;
	system("pause");
	return 0;
}