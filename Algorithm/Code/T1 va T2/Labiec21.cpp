#include <iostream>
using namespace std;

int main()
{
	int x,a,b,min,count;
	cout << "Nhap so test: ";
	cin >> x;
	for (int i=1; i<=x; i++)
	{
		cout << "Nhap so cac so trong day: ";
		cin >> a;
		count = 1;
		cout << "Nhap cac so trong day: ";
		cin >> min;
		for (int j=2; j<=a; j++)
		{
			cin >> b;
			if (b==min) count++;
			if (b<min)
			{
				min=b;
				count=1;
				}
			}
		cout << "So nho nhat trong day la: " << min << endl;
		cout << "So lan xuat hien cua " << min << " la: " << count << endl;
		}
	}
