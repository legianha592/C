#include <iostream>
using namespace std;

int main()
{
	int x,N,K,a,chan,le,chia;
	cout << "Nhap so luong test: ";
	cin >> x;
	for (int i=1;i<=x;i++)
	{
		cout << "Nhap so cac so va so chia: ";
		cin >> N >> K;
		chan = 0;
		le = 0;
		chia = 0;
		for (int j=1; j<=N; j++)
		{
			cin >> a;
			if (a%2 == 0)
			{
				chan = chan + a;
				}
			else 
			{
				le = le + a;
				}
			if (a%K == 0)
			{
				chia = chia + a;
				}
			}
		cout << "Tong cac so chan la: " << chan << endl;
		cout << "Tong cac so le la: " << le << endl;
		cout << "Tong cac so chia het cho " << K << " la: " << chia << endl;
		}
	}
