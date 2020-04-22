#include <iostream>
using namespace std;

int main()
{
	int a,b,c,x;
	cout << "Nhap chieu cao, chieu rong, khoang cach giua cac cot cua hang rao: ";
	cin >> a >> b >> c;
	for (int i=1; i<a; i++)
	{
		cout << "*";
		x=b-1;
		while (x-c>=0)
		{
			for (int j=1; j<c; j++) cout << " ";
			cout << "*";
			x=x-c;
			}
		cout << endl;
		}
	for (int i=1; i<=b; i++) cout << "*";
	}
