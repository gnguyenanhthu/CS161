//ID: 1751023
//Name: Nguyen Anh Thu
//Ex10: Petya and Strings

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[1000], b[1000];
	int i = 0;
	cin.getline(a, 1000);
	cin.getline(b, 1000);
	for (int i = 0; i <= (strlen(a) - 1); ++i)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if (a[i] < b[i])
		{
			cout << -1;
			break;
		}
		if (a[i] > b[i])
		{
			cout << 1;
			break;
		}
	}
	if (strcmp(a, b) == 0)
		cout << 0;
	return 0;
}