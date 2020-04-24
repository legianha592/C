#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,m,n,z,bk,tong;
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
		bk=0;
		if (m>n) z=(n-1)/2;
		else z=(m-1)/2;
		for (int t=z; t>0; t--)
		{
			for (int i1=t; i1<=m-1-t; i1++)
			for (int j1=t; j1<=n-1-t; j1++)
			{
				tong=0;
				for (int j2=j1-t; j2<=j1+t; j2++) tong=tong+a[i1][j2];
				for (int v=1; v<=t; v++)
				{
					int i2;
					i2=i1+v;
					for (int j2=j1-(t-v); j2<=j1+(t-v); j2++) tong=tong+a[i2][j2];
					}
				for (int v=1; v<=t; v++)
				{
					int i2;
					i2=i1-v;
					for (int j2=j1-(t-v); j2<=j1+(t-v); j2++) tong=tong+a[i2][j2];
					}
				if (tong==0) bk=t;
				}
			if (bk>0) break;
			}
		printf("Kich thuoc lon nhat cua vien kim cuong la: %d\n",2*bk+1);
		}
	}
