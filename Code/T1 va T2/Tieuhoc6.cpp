#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int temp=x;
	x=y;
	y=temp;
	}
	
void arrange(int a[], int x)
{
	bool kt;
	for (int i=0; i<x-1; i++)
	{
		kt=false;
		for (int j=0; j<x-1-i; j++)
		{
			if (a[j]>a[j+1]) 
			{
				swap (a[j],a[j+1]);
				kt = true;
				}
			}
		if (kt==false) break;
		}
	}
	
int main()
{
	int a[100],b[100],x,y,dem,lan,max;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so cac so nguyen: ");
		scanf("%d",&y);
		printf("Nhap day so: ");
		for (int j=0; j<y; j++)
		{
			scanf("%d",&a[j]);
			}
		arrange(a,y);
		dem=1;
		lan=1;
		max=a[0];
		b[0]=1;
		for (int j=1; j<y; j++)
		{
			if (a[j]==a[j-1]) b[j] = b[j-1]+1;
			else b[j]=1;
			}
		for (int j=0; j<y; j++)
		{
			if (b[j]>=lan)
			{
				lan=b[j];
				max=a[j];
				}
			}
		printf("So lon nhat la: %d\n", max);
		printf("So lan xuat hien la: %d\n",lan);
			}
		}
