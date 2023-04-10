#include"Function.h"

void inputarray(float a[], int n) //Ex128
{
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void outputarray(float a[], int n) //Ex131
{
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "]= ";
		cout << a[i] << endl;
	}
}

void negpos(float a[], int n) //Ex133
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
			cout << i << " ";
	}
}

float max(float a[], int n) //Ex134
{
	float m = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > m)
			m = a[i];
	}
	return m;
}

int firstpos(float a[], int n) //Ex135
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 0)
		{
			return a[i];
		}
	}
	return -1;
}

int minpos(float a[], int n) //Ex137
{
	int m = min(a, n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == m)
			return i;
	}
}

float min(float a[], int n) //Ex142
{
	float m = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < m)
			m = a[i];
	}
	return m;
}

int negnum(float a[], int n) //Ex176
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
			return a[i];
	}
}

void maxpos(float a[], int n) //Ex183
{
	int m = max(a, n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == m)
			cout << i << " ";
	}
}

float sumbigger(float a[], int n) //Ex204
{
	float sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < a[i + 1])
			sum += a[i + 1];
	}
	return sum;
}

float tbcbigger(float a[], int n, int x) //Ex213
{
	float sum = 0, d = 0, tbc;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > x)
		{
			sum += a[i];
			++d;
		}
	}
	tbc = sum / d;
	return tbc;
}

int frequencyy(float a[], int n, int y) //Ex219
{
	int f = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == y)
			++f;
	}
	return f;
}

int countbiggest(float a[], int n) //Ex225
{
	int c = 0;
	float m = max(a, n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == m)
			++c;
	}
	return c;
}

void sort(float a[], float n) //Ex255
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int temp;
			if (a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}