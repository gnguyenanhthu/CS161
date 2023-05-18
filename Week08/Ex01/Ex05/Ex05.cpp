//ID: 1751023
//Name: Nguyen Anh Thu
//Ex05: Extract file name and file extension

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i = 0, k = 0, h = 0, n, m, p, q = 0;
	char s[300], a[100] = "", b[100] = "", x[100] = "", y[100] = "";
	cin.getline(s, 300);
	n = strlen(s)-1;
	while (s[n] != '.')
	{
		a[i]=s[n];
		--n;
		++i;
	}
	m = strlen(a)-1;
	while (m >= 0)
	{
		b[k] = a[m];
		--m;
		++k;
	}
	n -= 1;
	while (s[n] != '/' )
	{
		x[h]=s[n];
		--n;
		++h;
	}
	p = strlen(x)-1;
	while (p >= 0)
	{
		y[q] = x[p];
		--p;
		++q;
	}
	cout <<y<<" and "<<b<< endl;
	system("pause");
	return 0;
}