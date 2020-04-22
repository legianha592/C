#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],b[100][100],x,y;
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
				scanf("%d",&a[j][k]);
				b[j][y-1-k]=a[j][k];
				}
			}
		printf("Ma tran sau khi doi:\n");
		for (int j=0; j<y; j++)
		{
			for (int k=0; k<y; k++)
			{
				printf("%d ",b[j][k]);
				}
			printf("\n");
			}
		}
	}
