#include <iostream>
using namespace std;

int main()
{
	int n,x,y;
	cout << "Nhap so hinh thoi va chieu rong hinh thoi (chieu rong la so le): ";
	cin >> n >> x;
	y = x/2;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=y; j++) cout << " ";
		cout << "*" << endl;
		for (int j=1; j<=y; j++)
		{
			for (int k=1; k<=y-j; k++) cout << " ";
			cout << "*";
			for (int k=1; k<=2*j-1; k++) cout << " ";
			cout << "*" << endl;
			}
		for (int j=1; j<y; j++)
		{
			for (int k=1; k<=j; k++) cout << " ";
			cout << "*";
			for (int k=1; k<=(2*(y-j)-1); k++) cout << " ";
			cout << "*" << endl;
			}
		}
	for (int i=1; i<=y; i++) cout << " ";
	cout << "*";
	}
