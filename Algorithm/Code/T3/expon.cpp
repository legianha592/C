#include <stdio.h>
using namespace std;

int main()
{
	char a[6], mau[]="0123456789", phay[]=".";
	int so1[200], so2[6], tich[200], loop, tp, dem, cuoi;
	

	while (scanf("%s%d",&a,&loop) > 0)
	{
		for (int i=0; i<200; i++)
		{
			so1[i]=0;
			tich[i]=0;
			}
		dem=4;
		for (int i=0; i<6; i++)
		{
			if (a[i]==phay[0]) tp=5-i;
			for (int j=0; j<10; j++)
			{
				if (a[i]==mau[j])
				{
					so1[dem]=j;
					dem--;
					break;
					}
				}
			}
		for (int i=0; i<5; i++)
		{
			so2[i]=so1[i];
			}
	
			
		
		if (loop==1)
		{
			for (int i=0; i<6; i++) printf("%c",a[i]);
			}

		dem=4;
		for (int z=2; z<=loop; z++)
		{
			for (int i=0; i<5; i++)
			{
				for (int j=0; j<=dem; j++)
				{	
					tich[i+j]=tich[i+j]+so2[i]*so1[j];
					if (tich[i+j]>=10)
					{
						tich[i+j+1]=tich[i+j+1]+tich[i+j]/10;
						tich[i+j]=tich[i+j]%10;
						}
					}
				}
			if ((tich[dem+5])!=0)
			{
				dem +=5;
				}
			else 
			{
				dem +=4;
				}
			for (int i=0; i<=dem; i++)
			{
				so1[i]=tich[i];
				tich[i]=0;
				}
			}
		tp=tp*loop;
		cuoi=0;
		while (so1[cuoi]==0)
		{
			cuoi++;
			}
		printf("KQ = ");
		for (int i=dem; i>=tp; i--) printf("%d",so1[i]);
		printf(".");
		for (int i=tp-1; i>=cuoi; i--) printf("%d",so1[i]);
		printf("\n");
		}
	}
