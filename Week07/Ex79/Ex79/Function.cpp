#include "Function.h"

bool leapyear(int y) //Check leapyear
{
	bool leapyear;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		leapyear = true;
	else
		leapyear = false;
	return leapyear;
}

int dom(int m, int y) //Days in a specific month
{
	int d;
	if ((m==1)|| (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
		d = 31;
	else
	{
		if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
			d = 30;
		else
		{
			if (leapyear(y) == true)
				d = 29;
			else
				d = 28;
		}
	}
		return d;
}

int findn(int d, int m, int y)
{
	int n=0;
	for (int i = 1; i <= m; ++i)
	{
		if (i < m)
			n += dom(i, y);
		else
			n += d;
	}
	return n;
}

int findm(int d, int m, int y)
{
	int a=0;
	for (int k = 1; k <= y; ++k)
	{
		if (k < y)
			if (leapyear(y) == true)
				a += 366;
			else
				a += 365;
		else
			for (int i = 1; i <= m; ++i)
			{
				if (i < m)
					a += dom(i, y);
				else
					a += d;
			}
	}
	return a;
}

void tomorrow(int & d, int & m, int & y)
{
	if ((m == 12) && (d == 31))
	{
		d = 1;
		m = 1;
		y += 1;
		return;
	}
	if (m == 2)
	{
		if ((leapyear(y) == true) && (d == 28))
			d = 29;
		else
			if (((leapyear(y) == false) && (d == 28)) || (d == 29))
			{
				d = 1;
				m += 1;
			}
			else
				d += 1;
	}
	else 
	{
		if ((((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10)) && (d == 31)) || (((m == 4) || (m == 6) || (m == 9) || (m == 11)) && (d == 30)))
		{
			d = 1;
			m += 1;
		}
		else
			d += 1;
	}
}

void yesterday(int & d, int & m, int & y)
{
	if (d == 1)
	{
		if (m == 1)
		{
			d = 31;
			m = 12;
			y -= 1;
		}
		else
		{
			if ((m == 2) || (m == 4) || (m == 6) ||(m == 8) || (m == 9) || (m == 11))
				d = 31;
			if ((m == 5) || (m == 7) || (m == 10) || (m == 12))
				d = 30;
			if (m == 3)
				if (leapyear(y) == true)
					d = 29;
				else
					d = 28;
			m -= 1;
		}
	}
	else
		d -= 1;
}