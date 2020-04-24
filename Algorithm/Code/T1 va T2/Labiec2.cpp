#include <iostream>
using namespace std;

int main()
{
	int a, e;
	cout << "Nhap so nguyen duong bat ki: ";
	cin >> a;
	e = 0;
	for (int i=0; i<=a; i++)
	{
		if (i%2 == 1) e = e+i;
		}
	cout << "Tong cac so le tu 0 den " << a << " la: " << e;
	}
