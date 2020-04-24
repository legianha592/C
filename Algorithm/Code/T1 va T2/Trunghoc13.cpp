#include <stdio.h>
using namespace std;

int main()
{
	int a[100],b[100],x,y,max,sum,tong;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap so cac so trong day: ");
		scanf("%d",&y);
		b[0]=1;
		max=1;
		sum=0;
		for (int i=0; i<y; i++)
		{
			scanf("%d",&a[i]);
			if (i>0)
			{
				if (a[i]>a[i-1]) b[i]=b[i-1]+1;
				else b[i]=1;
				if (b[i]>=max) max=b[i];
				}
			}
		for (int i=y-1; i>=0; i--)
		{
			if (b[i]==max)
			{
				tong=0;
				for (int j=i; j>=i+1-max; j--) tong=tong+a[j];
				if (tong>=sum) sum=tong;
				}
			}
		printf("Day tang dan lon nhat la: %d, tong la: %d\n",max,sum);
		}
	}
