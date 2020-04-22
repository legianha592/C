#include <iostream>
using namespace std;

int main()
{
	int m,a,b,x,y,z,CSC;
	cout << "Nhap so test: ";
	cin >> m;7
	for (int i=1; i<=m; i++)
	{
		cout << "Nhap so cac so trong day (lon hon hoac bang 3): ";
		cin >> a;
		cout << "Nhap cac so trong day: ";
		cin >> x >> y;
		CSC = y-x;
		b=1;
		for (int j=3; j<=a; j++)
		{
			cin >> z;
			if (z-y==CSC) y=z;
			else b=0;
				}
		if (b==0) cout << "Day tren khong phai la cap so cong" << endl;
		else cout << "Day cap so cong co cong sai la " << CSC << endl;
			}
		
		}
