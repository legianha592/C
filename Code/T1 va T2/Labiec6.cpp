#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap mot so nguyen duong bat ki lon hon 1: ";
	cin >> a;
	cout << "Cac uoc so nguyen cua " << a << " la: ";
	for (int i=1; i<=a; i++)
	{
		if (a%i == 0) cout << i << " ";
		}
	}
