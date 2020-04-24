#include <iostream>
using namespace std;

int main()
{
	int n,h,x;
	cout << "Nhap so vien kim cuong va chieu cao vien kim cuong: ";
	cin >> n >> h;
	x=h/2;
	for (int i=1; i<=x; i++) cout << " ";
	for (int i=1; i<=n; i++)
	{
		cout << "*";
		for (int j=1; j<=2*x-1; j++) cout << " ";
		}
	cout << endl;
	for (int i=1; i<x; i++)
	{
		for (int j=x-i; j>=1; j--) cout << " ";
		for (int j=1; j<=n; j++)
		{
			cout << "*";
			for (int k=1; k<=2*i-1; k++) cout << " ";
			cout << "*";
			for (int k=1; k<=(x-i)*2-1; k++) cout << " ";
			}
		cout << endl;
		}
	for (int i=1; i<=n; i++)
	{
		cout << "*";
		for (int j=1; j<=2*x-1; j++) cout << " ";
		}
	cout << "*" << endl;
	for (int i=1; i<x; i++)
	{
		for (int j=1; j<=i; j++) cout << " ";
		for (int j=1; j<=n; j++)
		{
			cout << "*";
			for (int k=1; k<=(x-i)*2-1; k++) cout << " ";
			cout << "*";
			for (int k=1; k<=2*i-1; k++) cout << " ";
			}
		cout << endl;
		}
	for (int i=1; i<=x; i++) cout << " ";
	for (int i=1; i<=n; i++)
	{
		cout << "*";
		for (int j=1; j<=2*x-1; j++) cout << " ";
		}
	}
