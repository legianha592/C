#include <iostream>
using namespace std;

int main()
{
	int a,b,x;
	cout << "Nhap so giay tu 0 den 86399: ";
	cin >> x;
	a= x/3600;
	b= x%3600;
	cout << "Thoi gian quy doi la: " <<a <<":" <<b/60 <<":" <<b%60;
	}
