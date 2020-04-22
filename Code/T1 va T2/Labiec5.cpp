#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap mot so nguyen duong tu 1 den 9: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		for (int j=0; j<=10; j++) cout << (i-1) << " ";
		cout << endl;
		}
	}
