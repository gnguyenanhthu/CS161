#include"Function.h"

int main()
{
	int count = 0;
	char s[256];
	cin.getline(s, 256);
	count = vowels(s);
	cout <<"There are " << count <<" vowels." << endl;
	system("pause");
	return 0;
}