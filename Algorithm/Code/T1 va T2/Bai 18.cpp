#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap so nguyen bat ki: ";
	cin >> a;
	if (a<0)
	{
		cout << a << " la so am";
		}
	else
	{
		if (a%2 == 1)
		{
			cout << a << " la so le";
			}
		else cout << a << " la so chan";
		}
	}
