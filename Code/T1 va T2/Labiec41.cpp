#include <iostream>
using namespace std;

int main()
{
	int h,x;
	cout << "Nhap chieu cao cua con ca: ";
	cin >> h;
	x=h/2;
	for (int i=1; i<=x; i++)
	{
		for (int j=1; j<=i; j++) cout << "*";
		for (int j=1; j<=(x-i)*2+1; j++) cout << " ";
		for (int j=1; j<=2*i-1; j++) cout << "*";
		cout << endl;
		}
	for (int i=1; i<=x+h; i++) cout << "*";
	cout << endl;
	for (int i=1; i<=x; i++)
	{
		for (int j=1; j<=x-i+1; j++) cout << "*";
		for (int j=1; j<=2*i-1; j++) cout << " ";
		for (int j=1; j<=2*(x-i)+1; j++) cout << "*";
		cout << endl;
		}
	}
