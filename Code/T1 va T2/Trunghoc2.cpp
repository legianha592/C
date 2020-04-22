#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100], x,y,min,max;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d",&y);
		printf("Nhap ma tran:\n");
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				scanf("%d",&a[i][j]);
				}
			}
		min=a[0][0];
		max=a[0][0];
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				if (min>a[i][j]) min=a[i][j];
				if (max<a[i][j]) max=a[i][j];
				}
			}
		if (max != min) printf("Min=%d, Max=%d",min,max);
		else printf("0");
		}
	}
