#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,y,z;
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
		z=(y-1)/2;
		for (int i=0; i<=y; i++)
		{
			for (int j=0; j<=z; j++)
			{
				if (a[i][j]!=a[i][y-1-j]) m=0;
				}
			}
		printf("%d\n",m);
		}
	}
