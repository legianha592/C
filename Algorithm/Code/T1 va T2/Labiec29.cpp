#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap chieu cao va cong sai: ";
	cin >> a >> b;
	for (int i=1; i<=(2*a-1); i++) cout << "1";
	cout << endl;
	for (int i=2; i<=a; i++)
	{
		for (int j=1; j<i; j++) cout << " ";
		for (int j=1; j<=(2*(a-i)+1); j++) cout << 1+(i-1)*b;
		cout << endl;
		}
	}
