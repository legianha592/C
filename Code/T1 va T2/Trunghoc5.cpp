#include <stdio.h>
using namespace std;

int SNT(int x)
{
	int dem=0;
	int KT=1;
	for (int k=2; k<=x; k++)
	{
		if (x%k==0) dem +=1;
		if (dem>=2)
		{
			KT=0;
			break;
			}
		}
	if (dem==0) KT=0;
	return(KT);
	}
	
int main()
{
	int a[100][100],x,m,n,count,z;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d%d",&m,&n);
		printf("Nhap ma tran:\n");
		count=0;
		z=1;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				if ((SNT(a[i][j])==1) and (a[i][j]>z)) z=a[i][j];
				}
			}
		if (SNT(z)==0) printf("0");
		else
		{
			for (int i=0; i<m; i++)
			{
				for (int j=0; j<n; j++)
				{
					if (a[i][j]==z) count +=1;
					}
				}
			printf("So nguyen to lon nhat la: %d. So lan xuat hien la: %d\n",z,count);
			}
		}
	}
