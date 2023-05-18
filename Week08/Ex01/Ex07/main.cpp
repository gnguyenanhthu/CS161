#include"Function.h"

int main()
{
	char s[1000];
	int a, b;
	cin.getline(s, 100);
	
	a = sentences(s);
	b = words(s);

	cout << s << endl;
	cout << "There are " << a << " sentences." << endl;
	cout << "There are " << b << " words." << endl;
	system("pause");
	return 0;
}