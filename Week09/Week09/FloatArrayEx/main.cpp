#include "Function.h"

int main()
{
	int n;
	float a[1000];
	cin >> n;
	inputarray(a, n);
	outputarray(a, n);
	
	cout << "These are positions of negative numbers: ";
	negpos(a, n);
	cout << endl;
	
	float m;
	m = max(a, n);
	cout << "Max = " << m << endl;

	int fpos;
	fpos = firstpos(a, n);
	cout <<"The first positive is: "<< fpos << endl;

	int mp;
	mp = minpos(a, n);
	cout << "Min position: " << mp << endl;
	
	float d;
	d = min(a, n);
	cout << "Min = " << d <<endl;
	
	int neg;
	neg = negnum(a, n);
	cout << neg << endl;

	cout << "These are positions of max number: ";
	maxpos(a, n);
	cout << endl;

	float sb;
	sb = sumbigger(a, n);
	cout << "Sum of the bigger number: " << sb << endl;

	int x;
	cout << "Input a number to compare and get the sum of bigger number: ";
	cin >> x;
	float tbc;
	tbc = tbcbigger(a, n, x);
	cout << "Arithmetic average of numbers bigger than " << x << " = " << tbc;
	cout << endl;

	int y;
	cout << "Input a number to find the frequency of it: ";
	cin >> y;
	int f;
	f = frequencyy(a, n, y);
	cout << "Frequency of " << y << " is: " << f << endl;

	int cb;
	cb = countbiggest(a, n);
	cout << "The number of biggest number exist in the array: " << cb << endl;

	sort(a, n);
	cout << "Sort a : ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	
	system("pause");
	return 0;
}