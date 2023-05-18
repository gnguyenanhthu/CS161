//ID: 1751023
//Name: Nguyen Anh Thu
//Ex04: Lucky Division

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n, d, t;
	cin >> n;
	if ((n % 4 == 0) || (n % 7 == 0) || (n % 47 == 0) || (n % 74 == 0) || (n % 477 == 0))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
