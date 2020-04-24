#include <iostream>
using namespace std;

int main()
{
	int n,x,a,b;
	cout << "Nhap so chu Z va do rong chu Z: ";
	cin >> n >> x;
	a=0;
	b=0;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=x; j++)
		{
			cout << b;
			a +=1;
			b = a%10;
			}
		cout << endl;
		for (int j=2; j<x; j++)
		{
			for (int k=1; k<=x-j; k++) cout << " ";
			cout << b << endl;
			a +=1;
			b = a%10;
			}
		}
	for (int i=1; i<=x; i++)
	{
		cout << b;
		a +=1;
		b = a%10;
		}
	}
