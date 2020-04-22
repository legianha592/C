#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Nhap ba so nguyen duong bat ki: ";
	cin >> a >> b >> c;
	if ((a+b>c) && (a+c>b) && (b+c>a)) //phai co ngoac don bao trum tat ca cac dieu kien
	{
		float p,S;
		p=static_cast<float> (a+b+c)/2; //khong phai ep kieu bien neu a,b,c thuc, co phai ep kieu khi a,b,c nguyen
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "Dien tich cua tam giac la: " <<S;
		}
	else
	{
		cout << "Khong phai la tam giac.";
		}
	}
