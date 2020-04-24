#include <iostream>
using namespace std;

int main()
{
	int a, b, min, max;
	cout << "Nhap so cac so nguyen cua day: ";
	cin >> a;
	cout << "Nhap cac so nguyen trong day: ";
	cin >> b;
	max = b;
	min = b;
	for (int i=2; i<=a; i++)
	{
		cin >> b;
		if (b>max) max=b;
		if (b<min) min=b;
		}
	cout << "Gia tri lon nhat trong day la: " << max << endl;
	cout << "Gia tri nho nhat trong day la: " << min;
	}
