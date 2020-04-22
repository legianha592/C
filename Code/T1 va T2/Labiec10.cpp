#include <iostream>
using namespace std;

int main()
{
	int a,b,x,y;
	cout << "Nhap hai so nguyen duong bat ki: ";
	cin >> a >> b;
	x = 1;
	y = a*b;
	if (a<=b)
	{
		for (int i=1; i<=a; i++)
		{
			if ((a%i == 0) and (b%i == 0))
			{
				x = i;
				}
			}
		for (int i=y; i>=b; i--)
		{
			if ((i%a == 0) and (i%b == 0))
			{
				y = i;
				}
			}
		}
	else
	{
		for (int i=1; i<=b; i++)
		{
			if ((a%i == 0) and (b%i == 0))
			{
				x = i;
				}
			}
		for (int i=y; i>=a; i--)
		{
			if ((i%a == 0) and (i%b == 0))
			{
				y = i;
				}
			}
		}
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << y << endl;
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << x;
	}
