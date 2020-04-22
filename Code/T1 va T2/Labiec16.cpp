#include <iostream>
using namespace std;

int giaithua (int x)
{
	int a;
	a = 1;
	for (int i=1; i<=x; i++)
	{
		a = a*i;
		}
	return a;
	}

int main()
{
	int a,b;
	cout << "Nhap so nguyen duong nho hon hoac bang 7: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		cin >> b;
		cout << giaithua(b) << " ";
		}
	}
	
