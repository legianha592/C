#include <stdio.h>
using namespace std;

int main()
{
	freopen("trunghoc1a.txt","r",stdin);
	freopen("trunghoc1a.out","w",stdout);
	int x;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&x);
	int a[100][100];
	int b[100];
	printf("Nhap cac phan tu cua ma tran: ");
	for (int i=0;i<x; i++)
	{
		for (int j=0; j<x; j++)
		{
			scanf("%d",&a[i][j]);
			}
		}
	for (int i=0; i<x; i++) 
	{
		b[i]=0;
		for (int j=0; j<x; j++)
		{
			b[i]=b[i]+a[i][j];
			}
		printf("%d\n",b[i]);
		}
	}
