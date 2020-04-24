#include <iostream>
using namespace std;

int main()
{
	int a, i, j, e;
	e = 0;
	cout << "Nhap so cac so nguyen duong: ";
	cin >> a;
	cout << "Nhap day so nguyen: ";
	for (int i=1; i<=a; i++)
	{
		cin >> j;
		e= e+j;
		}
	cout << "Tong cua day so nguyen la: " << e;
	}
