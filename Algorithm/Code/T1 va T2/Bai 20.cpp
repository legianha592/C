#include <iostream>
using namespace std;

int main ()
{
	int a, b;
	cout << "Nhap he so a va b cua phuong trinh bac nhat: ";
	cin >> a >> b;
	if ((a == 0) and (b != 0))
		cout << "Phuong trinh vo nghiem";
	else if ((a == 0) and (b == 0))
		cout << "Phuong trinh co vo so nghiem";
	else
		cout << "Phuong trinh co 1 nghiem la: x = " << static_cast <float> (-b)/a;
	}
