//ID: 1751023
//Name: Nguyen Anh Thu
//Problem 59A

#include<iostream>
using namespace std;
#include<string.h>

int main()
{

	char s[1000];
	int a, up = 0, low = 0, i = 0;
	cin.getline(s, 1000);
	a = strlen(s) - 1;
	while (a >= 0)
	{
		if (('A' <= s[a]) && (s[a] <= 'Z'))
			++up;
		if (('a' <= s[a]) && (s[a] <= 'z'))
			++low;
		--a;
	}
	if (up > low)
	{
		while (i <= (strlen(s) - 1))
		{
			s[i] = toupper(s[i]);
			++i;
		}
	}
	else
	{
		while (i <= (strlen(s) - 1))
		{
			s[i] = tolower(s[i]);
			++i;
		}
	}
	cout << s << endl;
	return 0;
}