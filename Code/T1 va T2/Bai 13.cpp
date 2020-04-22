#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap so diem cua hoc sinh: ";
	cin >> a;
	if (a>=9)
		cout << "Xuat sac";
	else if (a>=8)
		cout << "Gioi";
	else if (a>=7)
		cout << "Kha";
	else if (a>=6)
		cout << "TB kha";
	else if (a>=5)
		cout << "TB";
	else 
		cout << "Yeu";
	}
