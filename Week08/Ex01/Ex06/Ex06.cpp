//ID: 1751023
//Name: Nguyen Anh Thu
//Ex06: Email

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[100] = "", k[50] = "", *a, *lsp;
	int n, x = 1;
	cout << "Please input your name: ";
	cin.getline(s, 100);
	cout << "Please input your ID number: ";
	cin >> n;
	for (int b = 0; b <= (strlen(s) - 1); ++b)
	{
		s[b] = tolower(s[b]);
	}
	k[0] = s[0];
	lsp = strrchr(s, ' ');
	for (int i = 0; i < (lsp - s); ++i)
	{
		if (s[i] == ' ')
		{
			k[x] = s[(i + 1)];
			++x;
		}
	}
	for (int y = 0; y <= (strlen(lsp) - 1); ++y)
	{
		lsp[y] = lsp[y + 1];
	}
	cout << k << lsp << "@apcs.vn" << endl;
	system("pause");
	return 0;
}
