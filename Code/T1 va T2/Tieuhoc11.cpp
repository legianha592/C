#include <stdio.h>
using namespace std;

int SNT(int x)
{
	int dem=0;
	int a=1;
	for (int b=2; b<=x; b++)
	{
		if (x%b==0) dem +=1;
		if (dem>1)
		{
			a=0;
			break;
			}
		}
	return(a);
	}
	
int main()
{
	int a[100];
	int x,y,m,count;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so cac so trong day: ");
		scanf("%d",&y);
		printf("Nhap cac so: ");
		for (int j=0; j<y; j++)
		{
			scanf("%d",&a[j]);
			}
		count=0;
		for (int j=y-1; j>=0; j--)
		{
			for (int k=0; k<j; k++)
			{
				m=a[k]+a[j];
				if (SNT(m)==1) count +=1;
				}
			}
		printf("So cap co tong la so nguyen to la: %d",count);
		}
	}
