#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],m,n,h,k,x,max,tong;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int z=0; z<x; z++)
	{
		printf("Nhap kich thuoc ma tran va kich thuoc hinh chu nhat: ");
		scanf("%d%d%d%d",&m,&n,&h,&k);
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		max=0;
		if (h!=k)
		{
			for (int i1=0; i1<=m-h; i1++)
			for (int j1=0; j1<=n-k; j1++)
			{
				tong=0;
				for (int i2=i1; i2<i1+h; i2++)
				for (int j2=j1; j2<j1+k; j2++)
				{
					tong=tong+a[i2][j2];
					}
				if (tong>=max) max=tong;
				}
			for (int i1=0; i1<=m-k; i1++)
			for (int j1=0; j1<=n-h; j1++)
			{
				tong=0;
				for (int i2=i1; i2<i1+k; i2++)
				for (int j2=j1; j2<j1+h; j2++)
				{
					tong=tong+a[i2][j2];
					}
				if (tong>=max) max=tong;
				}			
			}
		else
		{
			for (int i1=0; i1<=m-h; i1++)
			for (int j1=0; j1<=n-k; j1++)
			{
				tong=0;
				for (int i2=i1; i2<i1+h; i2++)
				for (int j2=j1; j2<j1+k; j2++)
				{
					tong=tong+a[i2][j2];
					}
				if (tong>=max) max=tong;
				}	
			}
		printf("Tong lon nhat cua ma tran la: %d\n",max);
		}
	}
