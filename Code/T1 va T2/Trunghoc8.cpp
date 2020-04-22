#include <stdio.h>
using namespace std;

int main()
{
	int a[10001],x,m,n,max,count;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=1; i<=10000; i++)
	{
		count=1;
		int j=i;
		while (j>1)
		{
			if (j%2==0) j=j/2;
			else (j=3*j+1);
			count +=1;
			}
		a[i]=count;
		}
	for (int i=0; i<x; i++)
	{
		printf("Nhap dau tren va dau duoi: ");
		scanf("%d%d",&m,&n);
		max=a[m];
		for (int j=m; j<=n; j++)
		{
			if (a[j]>max) max=a[j];
			}
		printf("Chu ki dai nhat la: %d\n",max);
		}
	}
