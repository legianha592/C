#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Nhap chieu cao, chieu rong, khoang cach giua cac bac thang: ";
	cin >> a >> b >> c;
	cout << "*";
	for (int i=2; i<=b-1; i++) cout << " ";
	cout << "*" << endl;
	a--;
	while (a-c>=0) 
	{
		for (int i=1; i<=b; i++) cout << "*";
		cout << endl;
		for (int i=1; i<c; i++)
		{
			cout << "*";
			for (int j=2; j<=b-1; j++) cout << " ";
			cout << "*" << endl;
			}
		a=a-c;
		}
	for (int i=1; i<=b; i++) cout << "*";
	cout << endl;
	for (int i=1; i<=a-1; i++)
	{
		cout << "*";
		for (int j=2; j<=b-1; j++) cout << " ";
		cout << "*" << endl;
		}
	}
