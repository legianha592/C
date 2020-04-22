#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap so nguyen duong lon hon 2: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		cout << " ";
		}
	cout << "*" << endl;
	for (int i=2; i<a; i++)
	{
		for (int j=a; j>=i; j--)
		{
			cout << " ";
			}
		cout << "*";
		for (int k=1; k<=(2*i)-3; k++)
		{
			cout << " ";
			}
		cout << "*" << endl;
		}
	cout << " ";
	for (int i=1; i<=(2*a)-1; i++)
	{
		cout << "*";
		}
	}
