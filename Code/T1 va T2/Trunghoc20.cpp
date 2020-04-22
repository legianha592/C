#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,m,n,t,tong,dem;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d%d",&m,&n);
		printf("Nhap ma tran:\n");
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		dem=0;
		t=3;
		while ((t<=m) and (t<=n))
		{
			for (int i1=0; i1<=m-t; i1++)
			for (int j1=0; j1<=n-t; j1++)
			{
				tong=0;
				for (int j2=j1; j2<j1+t; j2++) 
				{
					tong=tong+a[i1][j2];
					tong=tong+a[i1+t-1][j2];
					}
				for (int v=1; v<t-1; v++)
				{
					int i2,j2;
					i2=i1+t-1-v;
					j2=j1+v;
					tong=tong+a[i2][j2];
					}
				if (tong==0) dem +=1;
				}
			t++;
			}
		printf("So chu Z la: %d\n",dem);
		}
	}
		
