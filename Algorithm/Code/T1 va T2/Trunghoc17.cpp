#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],m,n,x,t,z,tong,dem;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran va kich thuoc chu T: ");
		scanf("%d%d%d",&m,&n,&t);
		z=t/2;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		dem=0;
		for (int i1=0; i1<=m-t; i1++)
		{
			for (int j1=z; j1<=n-1-z; j1++)
			{
				tong=0;
				for (int i2=i1; i2<=i1+t-1; i2++) tong=tong+a[i2][j1];
				for (int j2=j1-z; j2<=j1+z; j2++) tong=tong+a[i1][j2];
				if (tong==(2*t)) dem +=1;
				}
			}
		printf("So chu T la: %d\n",dem);
		}
	}
