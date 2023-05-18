//ID: 1751023
//Name: Nguyen Anh Thu
//Ex01: Check whether it is a correct account

#include <iostream>
using namespace std;
#include<string.h>

int main()
{
	int i;
	char u[10], p[10];
	cin.getline(u, 10);
	cin.getline(p, 10);
	for (int i = 0; u[i] != '\0'; i++)
	{
		u[i] = tolower(u[i]);
	}
	if ((strcmp(u, "tploc") == 0) && (strcmp(p, "loctp")) == 0)
		cout << "Correct account." << endl;
	else
		cout << "Wrong account." << endl;
	system("pause");
	return 0;
}

