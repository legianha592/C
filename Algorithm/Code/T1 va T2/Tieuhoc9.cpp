#include <stdio.h>
#include<cmath>
using namespace std;

int main()
{
	int a[100],x,y,z;
	for (int i=0; i<100; i++)  a[i]=pow((i+1),2);
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so can kiem tra: ");
		scanf("%d",&y);
		z=sqrt(y);
		if (y==a[z-1]) printf("So thu tu la: %d\n",z);
		else printf("So thu tu la: 0\n");
		}
	}
