#include"Function.h"

void inputarray(int a[], int n) //Ex129
{
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void outputarray(int a[], int n) //Ex130
{
	for (int i = 0; i < n; ++i)
	{
		cout << "a[" << i << "]= ";
		cout << a[i] << " ";
	}
}

bool checkprime(int x)
{
	bool prime = true;
	if (x == 1)
		return prime = false;
	else 
	{
		if (x == 2)
			return prime;
		else
		{
			for (int i = 2; i < sqrt(x); ++i)
			{
				if (x%i == 0)
					return prime = false;
			}
		}
	}
	return prime;
}

int firstprime(int a[], int n) //Ex144
{
	for (int i = 0; i < n; ++i)
	{
		if (checkprime(a[i]) == true)
			return a[i];
	}
	return -1;
}

void primepos(int a[], int n) //Ex184
{
	for (int i = 0; i < n; ++i)
	{
		if (checkprime(a[i]) == true)
			cout << i << " ";
	}
}

int sumarray(int a[], int n) //Ex200
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	return sum;
}

float tbcprime(int a[], int n) //Ex211
{
	int sum = 0, d = 0;
	float tbc;
	for (int i = 0; i < n; ++i)
	{
		if (checkprime(a[i]) == true)
		{
			sum += a[i];
			++d;
		}
	}
	tbc = (sum / d);
	return tbc;
}

int counteven(int a[], int n)//Ex216
{
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
			++c;
	}
	return c;
}

int countprime(int a[], int n) //Ex223
{
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if (checkprime(a[i]) == true)
			++c;
	}
	return c;
}

bool checkzero(int a[], int n) //Ex240
{
	bool check = true;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 0)
			return check = false;
	}
	return check;
}

int primeexist(int a[], int n) //Ex243
{
	for (int i = 0; i < n; ++i)
	{
		if (checkprime(a[i]) == true)
			return 1;
	}
	return 0;
}

void sort(int a[], int n) //Ex255
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int temp;
			if (a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void insert(int a[], int n, int x, int y) //Ex266
{
	for (int i = n; i > y; i--)
	{
		a[i] = a[i - 1];
	}
	a[y] = x;
}

void delk(int a[], int n, int k) //Ex271
{
	for (int i = (k-1); i < n; i++)
	{
		a[i] = a[i + 1];
	}
}

void reverse(int a[], int n) //Ex283
{
	for (int i = 0; i < (n / 2); ++i)
	{
		swap(a[i], a[n]);
		--n;
	}
}

void subarray(int a[], int n) //Ex293
{
	for (int i = 0; i<n ; ++i)
	{
		cout<<a[i];
		for (int j = i; j<n; ++j)
		{
			cout << endl;
			for (int k = i; k <= j + 1; ++k)
				cout << a[k] << " ";
		}
	}
}

void createb(int a[], int n) //Ex307
{
	int b[1000], k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			cout << "b[" << k << "] = " << b[k] << " ";
			++k;
		}
	}
}
