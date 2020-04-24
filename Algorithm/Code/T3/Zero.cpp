#include <stdio.h>
using namespace std;

int main()
{
	int x,m,a,dem,s5,s2;
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap day: ");
		scanf("%d",&m);
		dem=0; s5=0; s2=0;
		kt=false;
		for (int i=0; i<m; i++)
		{
			scanf("%d",&a);
			if (a==0)
			{
				kt=true;
				}
			else
			{
			while (true)
			{
				if (a%10 == 0)
				{
					a=a/10;
					dem +=1;
					}
				else if (a%5 == 0)
				{
					a=a/5;
					s5 +=1;
					}
				else if (a%2 == 0)
				{
					a=a/2;
					s2 +=1;
					}
				else 
				{
					break;
					}
				}	
			}
			}
		if (s5>s2)
		{
			dem = dem + s2;
			}
		else 
		{
			dem = dem + s5;
			}
		if (kt==true) dem=1;
		printf("So so 0 la: %d", dem);
		printf("\n");
		}
	}
