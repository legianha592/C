#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,y,z,m,tong,count;
	printf("Nhap so test: ");
	scanf("%d",&m);
	for (int i=0; i<m; i++)
	{
		printf("Nhap kich thuoc ma tran va hinh vuong: ");
		scanf("%d%d%d",&x,&y,&z);
		printf("Nhap ma tran:\n");
		for (int i=0; i<x; i++)
		{
			for (int j=0; j<y; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		count=0;
		for (int i1=0; i1<=x-z; i1++)
		for (int j1=0; j1<=y-z; j1++)
		{
			tong=0;
			for (int i2=i1; i2<i1+z; i2++)
			for (int j2=j1; j2<j1+z; j2++)
			{
				tong=tong+a[i2][j2];
				}
			if (tong==z*z) count +=1;
			}
		printf("Tong so hinh vuong la: %d\n",count);
		}
	}
