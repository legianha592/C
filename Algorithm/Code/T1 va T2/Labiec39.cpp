#include <iostream>
using namespace std;

int main()
{
	int n,h;
	cout << "Nhap so chu V va chieu cao cua chu V: ";
	cin >> n >> h;
	cout << "*";
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=2*h-3; j++) cout << " ";
		cout << "*";
		}
	cout << endl;
	for (int i=1; i<h-1; i++)
	{
		for (int j=1; j<=i; j++) cout << " ";
		for (int j=1; j<=n; j++)
		{
			cout << "*";
			for (int k=1; k<=(h-i-1)*2-1; k++) cout << " ";
			cout << "*";
			for (int k=1; k<=2*i-1; k++) cout << " ";
			}
		cout << endl;
		}
	for (int i=1; i<h; i++) cout << " ";
	for (int i=1; i<=n; i++)
	{
		cout << "*";
		for (int j=1; j<=2*h-3; j++) cout << " ";
		}
	}
