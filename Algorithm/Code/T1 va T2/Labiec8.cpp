#include <iostream>
using namespace std;

int main()
{
	int a;
	float e;
	cout << "Nhap so nguyen duong bat ki: ";
	cin >> a;
	e = 0;
	cout << "Tong nghich dao cua cac so tu 1 den " << a << " la: ";
	for (float i=1; i<=a; i++)
		{
			e = e + 1/i;
			}
	cout << e;
	}
