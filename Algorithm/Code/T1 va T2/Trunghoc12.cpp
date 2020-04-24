#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,y;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		int m=1;
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d",&y);
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		for (int i=1; i<y; i++)
		{
			for (int j=i; j<y; j++)
			{
				if (a[i][j]!=a[j][i]) m=0;	
				}
			}
		printf("%d\n",m);
		}
	}
