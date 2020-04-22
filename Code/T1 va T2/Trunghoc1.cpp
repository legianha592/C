#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100], x,m,n,tong;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d%d",&m,&n);
		printf("Nhap ma tran:\n");
		tong=0;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				tong=tong+a[i][j];
				}
			}
		printf("\nTong cac phan tu la: %d",tong);
		}
	}
		
