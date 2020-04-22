#include <iostream>
using namespace std;

int main()
{
	int a,b,tong,du;
	cout << "Nháp so test: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		cout << "Nhap so nguyen duong nho hon 10000: ";
		cin >> b;
		tong=0;
		while (b>0)
		{
			du=b%10;
			tong=tong+du;
			b=b/10;
			}
		cout << "Tong cac chu so la: " << tong << endl;
		}
	}
