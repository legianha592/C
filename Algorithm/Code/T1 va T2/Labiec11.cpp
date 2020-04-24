#include <iostream>
using namespace std;

int main()
{
	int a, b, i;
	cout << "Nhap hai so nguyen duong bat ki va lon hon 2: ";
	cin >> a >> b;
	for (int j=1; j<=a; j++)
	{
		cout << "*";
		}
	cout << endl;
	for (i=2; i<b; i++)
	{
		cout << "*";
		for (int j=2; j<a; j++)
		{
			cout << " ";
			}
		cout << "*" << endl;
		}
	for (int j=1; j<=a; j++)
	{
		cout << "*";
		}
	cout << endl;
	}
