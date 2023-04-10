//ID: 1751023
//Name: Nguyen Anh Thu
//Problem 6A

#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if ((((a + b) > c) && ((a + c) > b) && ((b + c) > a)) ||
		(((a + c) > d) && ((a + d) > c) && ((c + d) > a)) ||
		(((a + b) > d) && ((a + d) > b) && ((b + d) > a)) ||
		(((b + c) > d) && ((b + d) > c) && ((c + d) > b)))
		cout << "TRIANGLE";
	else if (((a + b) == c) || ((a + b) == d) || ((a + c) == b) || ((a + c) == d) || ((a + d) == b) || ((a + d) == c) ||
		((b + c) == a) || ((b + c) == d) || ((b + d) == a) || ((b + d) == c) || ((c + d) == a) || ((c + d) == b))
		cout << "SEGMENT";
	else
		cout << "IMPOSSIBLE";
	return 0;
}