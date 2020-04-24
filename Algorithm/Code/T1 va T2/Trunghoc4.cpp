#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,y,t1,n1,t2,n2;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d",&y);
		printf("Nhap ma tran:\n");
		t1=0;
		t2=0;
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		n1=a[0][0];
		n2=a[0][y-1];
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				if (i==j)
				{
					t1=t1+a[i][j];
					if (a[i][j]<n1) n1=a[i][j];
					}
				if (i+j==y-1)
				{
					t2=t2+a[i][j];
					if (a[i][j]<n2) n2=a[i][j];
					}
				}
			}
		printf("Tong duong cheo 1 la: %d. So nho nhat la: %d\n",t1,n1);
		printf("Tong duong cheo 2 la: %d. So nho nhat la: %d\n",t2,n2);
		}
	}
