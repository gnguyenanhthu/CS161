#include"Function.h"

bool checkemail(char a[100], char b[100])
{
	bool c=true;
	for (int i = 0; i <= (strlen(a) - 1); ++i)
	{
		if (a[i] = '@')
		{
			c = true;
			break;
		}
		else
		{
			c = false;
			return c;
		}
	}
	if (strcmp(a, b) == 0)
		c = true;
	else
		c = false;
	return c;
}

bool checkpass(char a[100], char b[100])
{
	bool c = true;
	if (strcmp(a, b) == 0)
		c = true;
	else
	{
		c = false;
		return c;
	}
	for (int i = 0; i <= (strlen(a) - 1); ++i)
	{
		if ((((65<=int(a[i]))&&(int(a[i])<=90))||((97<=int(a[i]))&&(int(a[i])<=122)))&&((48<=int(a[i+1]))&&(int(a[i+1]<=57))))
		{
			c = true;
			break;
		}
		else
			c = false;
	}
	return c;
}

bool leapyear(int y) 
{
	bool leapyear;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		leapyear = true;
	else
		leapyear = false;
	return leapyear;
}

bool checkdob(int d, int m, int y)
{
	bool c = true;
	if ((((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && ((1 <= d) && (d <= 31))) ||
		(((m == 4) || (m == 6) || (m == 9) || (m == 11)) && ((1 <= d) && (d <= 30))) ||
		(((m == 2) && ((1 <= d) && (d <= 28))) || ((m == 2) && (d == 29) && (leapyear(y) == true))))
		c = true;
	else
		c = false;
	return c;
}

