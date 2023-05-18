//ID: 1751023
//Name: Nguyen Anh Thu
//Ex09: Word Capitalization

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[10000];
	cin.getline(s, 10000);
	s[0] = toupper(s[0]);
	cout << s;
	return 0;
}