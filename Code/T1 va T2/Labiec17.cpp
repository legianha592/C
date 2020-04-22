#include <iostream>
using namespace std;

int languyento(int x)
{
	int a;
	a=1;
	if (x<=1)
	{
		a=0;
		}
	else 
	{
		for (int i=2; i<x; i++)
		{
			if (x%i == 0) a=0;
			break;
			}
		}
	return a;
	}

int main()
{
	int x,y;
	cout << "Nhap so cac so can xet: ";
	cin >> x;
	cout << "Nhap cac so can xet: ";
	for (int i=1; i<=x; i++)
	{
		cin >> y;
		if (languyento(y) == 1) cout << y << " la so nguyen to" << endl;
		else cout << y << " khong phai la so nguyen to" << endl;
		}
	}
