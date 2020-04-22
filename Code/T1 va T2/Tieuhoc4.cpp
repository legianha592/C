#include <stdio.h>
using namespace std;

int max(int a[], int y)
{
	int m;
	m=a[0];
	for (int k=1; k<y; k++)
	{
		if (a[k]>m) m=a[k];
		}
	return(m);
	}

int min(int a[], int y)
{
	int m;
	m=a[0];
	for (int k=1; k<y; k++)
	{
		if (a[k]<m) m=a[k];
		}
	return(m);
	}
	
int main()
{
	int a[100],x,y;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so cac so nguyen: ");
		scanf("%d",&y);
		for (int j=0; j<y; j++)
		{
			scanf("%d",&a[j]);
			}
		printf("So lon nhat la: %d\n",max(a,y));
		printf("So nho nhat la: %d\n",min(a,y));
		}
	}
