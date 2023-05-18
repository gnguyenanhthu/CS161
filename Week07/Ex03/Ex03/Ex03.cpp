#include<iostream>
using namespace std;
#include<math.h>
#include<iomanip>

float cals(float k);

int main()
{
	float n;
	cout << "Calculate S(n)" << endl;
	cout << "Please input n: ";
	cin >> n;

	float result;
	result = cals(n);

	cout << "S(n) = " << fixed << setprecision(2) << result << endl;
	
	system("pause");
	return 0;
}

float cals(float k)
{
	float s = 0;
	for(float i=1;i <= k;++i)
	{
		s +=  1 / i;
	}
	return s;
}

