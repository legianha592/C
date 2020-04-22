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
	int a[100],b[100],x,y,lan,min;
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
		lan=y;
		min=a[0];
		b[0]=1;
		for (int j=1; j<y; j++)
		{
			if (a[j]==a[j-1])	b[j] = b[j-1]+1;
			else b[j]=1;
			}
		for (int j=y-1; j>0; j--)
		{
			if (b[j]==b[j-1])
			{
				min=a[j-1];
				lan=1;
				}
			else
			{
				if ((b[j]<b[j-1]) and (b[j-1]<=lan))
				{
					lan=b[j-1];
					min=a[j-1];
					}
				}
			}
		printf("So nho nhat la: %d\n", min);
		printf("So lan xuat hien la: %d\n",lan);
		}
	}
	
		
