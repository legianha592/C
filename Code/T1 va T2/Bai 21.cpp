#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, S, x1, x2;
	cout << "Nhap ba so nguyen la he so cua phuong trinh bac 2: ";
	cin >> a >> b >> c;
	S = pow(b,2) - 4*a*c;
	if (S<0)
		cout << "Phuong trinh vo nghiem";
	else if (S == 0)
		cout << "Phuong trinh co nghiem kep x1=x2= " << -b/(2*a);
	else 
		{
			x1 = (-b + sqrt(S))/(2*a);
			x2 = (-b - sqrt(S))/(2*a);
			cout << "Phuong trinh co 2 nghiem phan biet: x1= " << x1 << ", x2= " << x2;
			}
	
	}
