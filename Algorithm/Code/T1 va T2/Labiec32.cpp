#include <iostream>
using namespace std;

int main()
{
	int a, n;
	cout << "Nhap chieu cao cua chu X (chieu cao la so le): ";
	cin >> a;
	n=a/2;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=(i-1); j++) cout << " ";
		cout << a-i+1;
		for (int j=1; j<=(2*(n-i)+1); j++) cout << " ";
		cout << a-i+1 << endl;
		}
	for (int i=1; i<=n; i++) cout << " ";
	cout << n+1 << endl;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=(n-i); j++) cout << " ";
		cout << n-i+1;
		for (int j=1; j<=(2*i-1); j++) cout << " ";
		cout << n-i+1 << endl;
		}
	}
