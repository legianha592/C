#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Lan luot nhap so gio lam va so luong theo gio: ";
	cin >> a >> b;
	if (a<=40)
	{
		cout << "Tong so tien luong la: " << a*b;
		}
	else
	{
		cout << "Tong so tien luong la: " << (2*a-40)*b;
		}
	}
