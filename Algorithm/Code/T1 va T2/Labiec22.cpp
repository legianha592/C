#include <iostream>
using namespace std;

int main()
{
	int a,b,du,d;
	cout << "Nhap so test: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		cout << "Nhap so nguyen duong nho hon 10000: ";
		cin >> b;
		du=0;
		while (b>0)
		{
			d=b%10;
			if (d>du) du=d;
			b=b/10;
			}
		cout << "Chu so lon nhat la: " << du << endl;
		}
	}
	
