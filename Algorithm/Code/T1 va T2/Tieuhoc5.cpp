#include <stdio.h>
using namespace std;

void swap(int &x, int &y)
{
	int m=x;
	x=y;
	y=m;
	}
	
void arrange(int a[], int x)
{
	bool kt;
	for (int i=0; i<x-1; i++)
	{
		kt=false;
		for (int j=0; j<x-1-i; j++)
		{
			if (a[j]<a[j+1]) 
			{
				swap (a[j],a[j+1]);
				kt=true;
				}
			}
		if (kt==false) break;
		}
	}
	
int main()
{
	int a[100],x,y,z;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap so cac so nguyen va so thu tu: ");
		scanf("%d%d",&y,&z);
		for (int t=0; t<y; t++)
		{
			scanf("%d",&a[t]);
			}
		arrange(a,y);
				for (int t=0; t<y; t++)
		{
			printf("%d",a[t]);
			}
		printf("So lon thu %d trong day la: %d",z,a[z-1]);
		}
	}
