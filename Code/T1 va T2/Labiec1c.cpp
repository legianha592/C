#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	cout << "Nhap hai so nguyen duong a, b nho hon 100 (a<b): ";
	cin >> a >> b;
	for (int i=a; i<=b; i++)
	{
		if (i%2 == 0)
		cout << i << endl;
		}
	}
