#include <stdio.h>
using namespace std;

int main()
{
	freopen("tieuhoc3.inp","r",stdin);
	freopen("tieuhoc3.out","w",stdout);
	int a[5],x,y;
	int b[5]={1,5,10,20,50};
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so tien can doi: ");
		scanf("%d",&y);
		for (int j=4; j>=0; j--)
		{
			a[j]=y/b[j];
			y=y%b[j];
			}
		for (int j=0;j<5;j++)
		{
			printf("(%d)=%d\t",b[j],a[j]);
			}
		printf("\n");
		}
	}
