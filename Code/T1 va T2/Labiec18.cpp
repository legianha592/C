#include <iostream>
using namespace std;

int SLN(int a, int b)
{
	int x;
	x = a;
	if (b>a) x = b;
	return x;
	}
	
int main()
{
	int x,a,b;
	cout << "Nhap so cac cap so: ";
	cin >> x;
	cout << "Nhap cac cap so: ";
	for (int i=1; i<=x; i++)
	{
		cin >> a >> b;
		cout << "So lon nhat la: " << SLN (a,b) << endl;
		}
	}
