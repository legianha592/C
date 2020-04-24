#include <stdio.h>
using namespace std;

int tohop(int k, int n)
{
	if ((k==0) or (k==n)) return 1;
	else return (tohop(k,n-1)+tohop(k-1,n-1));
	}
	
int main()
{
	int k,n,x,a[10];
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int m=0; m<x; m++)
	{
		printf("Nhap k va n: ");
		scanf("%d%d",&k,&n);
		printf("So to hop la: %d\n",tohop(k,n));
		
		printf("Cac to hop:\n");
		for (int i=1; i<=k; i++) a[i]=i;
		while (a[1]<=n)
		{	
			kt=true;
			for (int i=1; i<k; i++)
			{
				for (int j=i+1; j<=k; j++)
				{
					if (a[i]>=a[j])
					{
						kt=false;
						break;
						}
					}
				if (kt==false) break;
				}
			if (kt==true)
			{
				for (int i=1; i<=k; i++) printf("%d ",a[i]);
				printf("\n");
				}
			a[k]++;
			for (int i=k; i>1; i--)
			{
				if (a[i]>n)
				{
					a[i]=1;
					a[i-1]++;
					}
				}
			}
		}
	}
