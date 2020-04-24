#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap mot so nguyen duong bat ki: ";
	cin >> a;
	if (a%2 != 0)
	{
		cout << "So cap so la: " << (a/2) << endl;
		for (int i=1; i<((a/2)+1); i++)
		{
			cout << a-i << " " << i << endl;
			}
		}
	else
	{
		cout << "So cap so la: " << (a/2)-1 << endl;
		for (int i=1; i<(a/2); i++)
		{
			cout << a-i << " " << i << endl;
			}
		}
	}
