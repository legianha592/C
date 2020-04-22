#include <stdio.h>
using namespace std;

int SNT(int x)
{
	int a=1;
	int dem=0;
	if (x<2) a=0;
	else
	{
		for (int y=2; y<=x; y++)
		{
			if (x%y==0) dem +=1;
			if (dem>1)
			{
				a=0;
				break;
				}
			}
		}
	return(a);
	}

int main()
{
	int a[100][100],x,m,n,y,z,dem,max;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran va day hinh tam giac: ");
		scanf("%d%d%d",&m,&n,&y);
		z=y/2;
		printf("Nhap ma tran:\n");
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		max=0;
		for (int i1=m-1; i1>=z; i1--)
		for (int j1=z; j1<=n-1-z; j1++)
		{
			dem=0;
			for (int t=z; t>=0; t--)
			{
				int i2;
				i2=i1-t;
				for (int j2=j1-(z-t); j2<=j1+(z-t); j2++)
				{
					if (SNT(a[i2][j2])==1) dem +=1;
					}
				}
			if (dem>max) max=dem;
			}
		printf("Tam giac chua nhieu SNT nhat la: %d",max);
		}
	}
		
		
