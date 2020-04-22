#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],b[100],x,y;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d",&y);
		printf("Nhap ma tran:\n");
		for (int j=0; j<y; j++)
		{
			for (int k=0; k<y; k++)
			{
				scanf ("%d",&a[j][k]);
				}
			}
		for (int j=0; j<y; j++)
		{
			b[j]=0;
			for (int k=0; k<y; k++)
			{
				b[j]=b[j]+a[k][j];
				}
			}
		for (int j=0; j<y; j++) printf("%d\n",b[j]);
		}
	}
