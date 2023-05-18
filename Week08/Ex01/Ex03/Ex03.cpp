//ID: 1751023
//Name: Nguyen Anh Thu
//Ex03: How many strings did he/she has entered?

#include<iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[256];
	cin.getline(s, 256);
	int count = 1;
	while ((strcmp(s, "yolo") != 0) && (strcmp(s, "give up")))
	{
		++count;
		cin.getline(s, 256);
	}
	cout <<"You have entered " << count <<" times." << endl;
	system("pause");
	return 0;
}