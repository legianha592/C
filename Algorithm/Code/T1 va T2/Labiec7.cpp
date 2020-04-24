#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap chieu cao cua hinh tam giac can: ";
	cin >> a;
	for (int i=1; i<=a; i++)
	{
		for (int x=(a-i); x>=0; x--) cout << " ";
		for (int y=1; y<=(i*2)-1; y++) cout << "*";
		cout << endl;
		}
	}
