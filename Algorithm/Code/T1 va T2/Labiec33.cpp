#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap chieu cao va chieu rong cua chu H (chieu cao la so le, chieu rong lon hon 2): ";
	cin >> a >> b;
	for (int i=1; i<=a/2; i++)
	{
		cout << "*";
		for (int j=2; j<=b-1; j++) cout << " ";
		cout << "*" << endl;
		}
	for (int i=1; i<=b; i++) cout << "*";
	cout << endl;
	for (int i=1; i<=a/2; i++)
	{
		cout << "*";
		for (int j=2; j<=b-1; j++) cout << " ";
		cout << "*" << endl;
		}	
	}
