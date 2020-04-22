#include <stdio.h>
using namespace std;

int main()
{
	int a[5000],b[5000],so[5000],x,max;
	freopen("fibo495.txt","r",stdin);
	freopen("fibo495.out","w",stdout);
	while (true)
	{
		x=0;
		scanf("%d",&x);
		if (x==0) break;
		for (int i=0; i<5000; i++)
		{
			a[i]=0;
			b[i]=0;
			so[i]=0;
			}
		a[0]=1;
		b[0]=1;
		max=0;
		for (int i=2; i<=x; i++)
		{
			for (int j=0; j<=max+1; j++)
			{
				so[j]=so[j]+a[j]+b[j];
				if (so[j]>=10)
				{
					so[j]=so[j]-10;
					so[j+1] +=1;
					}
				}
			if (so[max+1]==1) max +=1;
			for (int j=max; j>=0; j--)
			{
				a[j]=b[j];
				b[j]=so[j];
				so[j]=0;
				}
			}	
		printf("The fibonacci number for %d is ",x);
		for (int i=max; i>=0; i--) printf("%d",b[i]);
		printf("\n");
		}
	}
