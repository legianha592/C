#include <iostream>
using namespace std;

int tong(int a, int b)
{
	int x,m;
	x=0;
	for (int i=a; i<=b; i++)
	{
		m=1;
		for (int j=2; j<i; j++)
		{
			if (i%j == 0)
			{
				m=0;
				break;
				}
			}
		if (m==1) x=x+i;
		}
	return x;
	}
	
int count(int a, int b)
{
	int x,m;
	x=0;
	for (int i=a; i<=b; i++)
	{
		m=1;
		for (int j=2; j<i; j++)
		{
			if (i%j == 0)
			{
				m=0;
				break;
				}
			}
		if (m==1) x++;
		}
	return x;
	}
	
int main()
{
	int a,b,x;
	cout << "Nhap so cac cap so: ";
	cin >> x;
	for (int i=1; i<=x; i++)
	{
	cout << "Nhap hai so nguyen duong a, b (a<b): ";
	cin >> a >> b;
	cout << "So cac so nguyen to tu " << a << " den " << b << " la: " << count(a, b) << endl;
	cout << "Tong cac so nguyen to tu " << a << " den " << b << " la: " << tong(a, b) << endl;
	}
	}
	
