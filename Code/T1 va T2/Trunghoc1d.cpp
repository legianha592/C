#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100], x,y;
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
				b[y-1-i][j]=a[i][j];
				}
			}
		printf("Ma tran sau khi thay doi:\n");
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				printf("%d ",b[i][j]);
				}
			printf("\n");
			}	
		}
	}
