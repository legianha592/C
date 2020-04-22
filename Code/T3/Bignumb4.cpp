#include <stdio.h>
using namespace std;

int main()
{
	int a[3], b[800], c[800], mau[10];
	int x,max1,max2;
	
	
	while (true)
	{
		for (int i=0; i<10; i++) mau[i]=0;
		
		scanf("%d",&x);
		if (x==0) break;
		max2=0;
		for (int i=0; i<800; i++)
		{
			b[i]=0;
			c[i]=0;
			}
		b[0]=1;
		
		for (int k=1; k<=x; k++)
		{
			if (k>99)
			{
				max1=2;
				a[0]=k%10;
				a[1]=(k/10)%10;
				a[2]=k/100;
				}
			else if (k>9) 
			{
				max1=1;
				a[0]=k%10;
				a[1]=k/10;
				}
			else
			{
			 	max1=0;
			 	a[0]=k;
			 	}
			 	
			for (int i=0; i<=max1; i++)
			{
				for (int j=0; j<=max2; j++)
				{
					c[i+j]=c[i+j]+a[i]*b[j];
					if (c[i+j]>9)
					{
						c[i+j+1]=c[i+j+1]+c[i+j]/10;
						c[i+j]=c[i+j]%10;
						}
					}
				}
				
			if (c[max1+max2+1] != 0) max2=max1+max2+1;
			else max2=max1+max2;
			
			for (int i=0; i<=max2; i++)
			{
				b[i]=c[i];
				c[i]=0;
				}
			}
			
		printf("Ket qua: ");
		for (int i=max2; i>=0; i--) printf("%d",b[i]);
		printf("\n");
		
		for (int i=0; i<=max2; i++)
		{
			for (int j=0; j<10; j++)
			{
				if (b[i]==j)
				{
					mau[j] ++;
					break;
					}
				}
			}
			
		for (int i=0; i<10; i++) printf("(%d) = %d\n",i,mau[i]);
		}
	}
