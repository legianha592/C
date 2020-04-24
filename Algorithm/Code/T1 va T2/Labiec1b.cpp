#include <iostream>
using namespace std;

int main()
{
	int a, e;
	cout << "Nhap mot so nguyen duong bat ki: ";
	cin >> a;
	e=0;
	for (int i=1; i<=a; i++)
	{
		e = e+i;
		}
	cout << "Tong cua cac so tu 1 den " << a << " la: " << e;
	}
