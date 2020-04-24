#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap hai so nguyen bat ki: ";
	cin >> a >> b;
	if (a<b)
		cout << a << " nho hon " << b;
	else if (a==b)
		cout  << a << " bang " << b;
	else 
		cout << a << " lon hon " << b;
	}
