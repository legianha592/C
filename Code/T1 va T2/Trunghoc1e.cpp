#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100], x,m,n;
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
				if (a[i][j]%2==1) b[i][j]=a[i][j]*2;
				else b[i][j]=a[i][j]*3;
				}
			}
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				printf("%4d ",b[i][j]);
				}
			printf("\n");
			}
		printf("\n");
		}
		}
