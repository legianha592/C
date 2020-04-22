#include <stdio.h>
using namespace std;

int main()
{
	freopen("trunghoc15.txt","r",stdin);
	freopen("trunghoc15.out","w",stdout);
	int a[100][100],x,m,n,z,tong,dem;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d%d",&m,&n);
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		dem=0;
		z=1;
		while ((z+1<=m) and (2*z+1<=n))
		{
			for (int i1=0; i1<=m-1-z; i1++)
			for (int j1=z; j1<=n-1-z; j1++)
			{
				tong=0;
				for (int k1=0; k1<=z; k1++)
				{
					int i2;
					i2=i1+k1;
					for (int j2=j1-k1; j2<=j1+k1; j2++)
					{
						tong=tong+a[i2][j2];
						}	
					}
				if (tong==0) dem +=1;
				}
			z++;
			}
		printf("Tong so tam giac la: %d\n",dem);
		}
	}
