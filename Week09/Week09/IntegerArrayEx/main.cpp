#include "Function.h"

int main()
{
	int a[1000], n;
	cin >> n;
	
	inputarray(a, n);
	outputarray(a, n);
	cout << endl;

	int fpr;
	fpr = firstprime(a, n);
	cout << "The first prime number is: " << fpr << endl;

	cout << "These are positions of prime number: " << endl;
	primepos(a, n);
	cout << endl;
	
	int sum;
	sum = sumarray(a, n);
	cout << "Sum = " << sum << endl;

	float tbc;
	tbc = tbcprime(a, n);
	cout << "Arithmetic average of prime: " << tbc << endl;
	
	int ce;
	ce = counteven(a, n);
	cout << "There are " << ce << " even numbers." << endl;

	int cp;
	cp = countprime(a, n);
	cout << "There are " << cp << " prime numbers." << endl;
	
	bool z;
	z = checkzero(a, n);
	cout << "Check zero: ";
	if (z)
		cout << 0 << endl;
	else
		cout << -1 << endl;

	int px;
	px = primeexist(a, n);
	cout << "Check if there is prime: " << px << endl;

	sort(a, n);
	cout << "Sort a : ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;

	int x, y;
	cout << "Input a number: ";
	cin >> x;
	cout << "Input a position you want to insert: ";
	cin >> y;
	insert(a, n, x, y);
	int ni = n + 1;
	outputarray(a, ni);
	cout << endl;

	int k;
	cout << "Input a position you want to delete: ";
	cin >> k;
	delk(a, n, k);
	outputarray(a, n);
	cout << endl;

	cout << "The reverse array: " << endl;
	reverse(a, n);
	outputarray(a, n);
	cout << endl;

	cout << "These are sub arrays: " << endl;
	subarray(a, n);
	cout << endl;

	cout << "Array b: " << endl;
	createb(a, n);

	system("pause");
	return 0;
}