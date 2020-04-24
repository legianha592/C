#include <iostream>
using namespace std;

int main()
{
	int a,b,E;
	cout << "Nhap so dien cua thang (tinh theo KWh): ";
	cin >> a;
	b=a-50;
	if (b<0)
		E = a*230;
	else if (b<=50)
		E = a*480;
	else if (b<100)
		E = a*700;
	else
		E = a*900;
	cout << "Tong tien dien phai tra la: " << E+1000;
	}
