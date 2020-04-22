#include <iostream>
#include <algorithm> //thu vien chua ham hoan vi
using namespace std;

void hoanvi(int &m, int &n)
{
	int x = m;
	m = n;
	n = x;
	}

int main()
{
	int a,b,c;
	cout << "Nhap ba so nguyen bat ki: ";
	cin >> a >> b >> c;
	if (a<b)
	{
		if (b>c) 
		{
			hoanvi (b,c);
			if (a>b) hoanvi (a,b);
			}
		}
	else
	{
		hoanvi (a,b);
		if (b>c) 
		{
			hoanvi (b,c);
			if (a>b) hoanvi (a,b);
			}
		}
	cout << "Ba so nguyen theo thu tu tang dan la: " << a << " " << b << " "<< c;
		}
