#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, x;
	cout << "Nhap mot so nguyen duong bat ki: ";
	cin >> a;
	b = sqrt(a);
	x = 1;
		for (int i=2; i<=b; i++)
		{
			if (a%i == 0)
			{
				x = 0;
				break;
				}
			}
	if (a<2)
	{
		cout << a << " khong phai la so nguyen to";
		}
	else if (x == 1)
	{
		cout << a << " la so nguyen to";
		}
	else
	{
		cout << a << " khong phai la so nguyen to";
		}
	}
