#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100], b[100], x,m,n;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		bool kt=true;
		printf("Nhap so cua hang va so thang: ");
		scanf("%d%d",&m,&n);
		printf("Nhap so tien cac thang:\n");
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				}
			b[i]=1;
			}
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n-2; j++)
			{
				if ((a[i][j]>a[i][j+1]) and (a[i][j+1]>a[i][j+2])) b[i]=0;
				if (b[i]==0) kt=false;
				}
			}
		if (kt==true) printf("0\n");
		else 
		{
			printf("Cua hang bi dung hoat dong la: ");
			for (int i=0; i<m; i++)
			{
				if (b[i]==0) printf ("%d ",i+1);
				}
			printf("\n");
			}
		}
	}
