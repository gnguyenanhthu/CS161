//ID: 1751023
//Name: Nguyen Anh Thu
//Ex08: Word

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[1000];
	int a, x = 0, y = 0, i = 0;
	cin.getline(s, 1000);
	a = strlen(s) - 1;
	while (a >= 0)
	{
		if ((65 <= int(s[a])) && (int(s[a]) <= 90))
			++x;
		if ((97 <= int(s[a])) && (int(s[a]) <= 122))
			++y;
		--a;
	}
	if (x > y)
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