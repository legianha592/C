#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap chieu cao cua tam giac can: ";
	cin >> a;
	for (int i=1; i<=(2*a-1); i++) cout << "*";
	cout << endl;
	for (int i=2; i<=a; i++)
	{
		for (int j=1; j<i; j++) cout << " ";
		for (int j=1; j<=(2*(a-i)+1); j++) cout << "*";
		cout << endl; 
		}
	}
