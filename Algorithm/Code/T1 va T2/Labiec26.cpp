#include <iostream>
using namespace std;

int main()
{
	int a,b,x,y,day;
	cout << "Nhap so test: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		cout << "Nhap so cac so trong day: ";
		cin >> b;
		day = 1;
		cout << "Nhap cac so trong day: ";
		cin >> x;
		for (int j=2; j<=b; j++)
		{
			cin >> y;
			if (x*y<0) x=y;
			else day = 0;
			}
		cout << day << endl;
		}
	}
