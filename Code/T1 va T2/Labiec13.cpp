#include <iostream>
using namespace std;

int main()
{
	int a, b, x, y, z;
	cout << "Nhap so cac so nguyen trong day: ";
	cin >> a;
	x = 0;
	y = 0;
	z = 0;
	for (int i=1; i<=a; i++)
	{
		cin >> b;
		if (b>0)
		{
			x++;
			}
		else if (b<0)
		{
			y++;
			}
		else
		{
			z++;
			}
		}
	cout << "So cac so nguyen duong la: " << x << endl;
	cout << "So cac so nguyen am la: " << y << endl;
	cout << "So cac so khong la: " << z;
	}
