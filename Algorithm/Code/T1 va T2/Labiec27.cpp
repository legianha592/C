#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap chieu cao, chieu rong (chieu rong la so le): ";
	cin >> a >> b;
	for (int i=1; i<=b; i++) cout << "*";
	cout << endl;
	for (int i=2; i<=a; i++)
	{
		for (int j=1; j<=b/2; j++) cout << " ";
		cout << "*" << endl;
		}
	}
