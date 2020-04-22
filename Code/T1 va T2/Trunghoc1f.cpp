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
				if (i%2==1) a[i][j]=a[i][j]/2;
				if (j%2==0) a[i][j]=a[i][j]/3;
				}
			}
		printf("\nMa tran moi:\n");
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				printf("%d ",a[i][j]);
				}
			printf("\n");
			}
		}
	}
