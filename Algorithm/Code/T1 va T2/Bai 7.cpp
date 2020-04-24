#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float r,S,V,pi,n;
	pi = 3.14;
	n = static_cast <float> (4)/3; //cau truc static_cast ep kieu cho bien x lam cho x/y la so thap phan thay vi chi lay phan nguyen
	cout << "Nhap ban kinh hinh cau: ";
	cin >> r;
	cout << "Dien tich be mat hinh cau la: " << 4*pi*pow (r,2) << endl;
	cout << "The tich hinh cau la: " << n*pi*pow (r,3) ;
	}
