#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int SNT(int x)
{
	int dem,m;
	dem=0;
	m=1;
	if (x<2) 
	{
		m=0;
		}
	else
	{
		for (int i=2; i<=x; i++)
		{
			if (x%i==0) dem +=1;
			if (dem>1)
			{
				m=0;
				break;
				}
			}
		}
	return(m);
	}
	
int main()
{
	freopen("406.txt","r",stdin);
	freopen("406.out","w",stdout);
	int a[168];
	int x,n,c,z,max,st;
	a[0]=1;
	z=1;
	for (int k=2; k<=1000; k++)
	{
		if (SNT(k)==1)
		{
			a[z]=k;
			z +=1;
			}
		}

		while (scanf("%d %d", &n, &c) > 0)
		{	
		//n=0; c=0;
		//scanf("%d%d",&n,&c);
		//if(n == 0 && c == 0)
		//	break;
		for (int i=168; i>=0; i--)
		{
			if (a[i]<=n)
			{
				max=i;
				break;
				}
			}
		printf("%d %d: ",n,c);
		if (max%2==1)
		{
		
			if (2*c>max+1)
			{
				for (int j=0; j<=max; j++) printf("%d ",a[j]);
				}
			else
			{
				st=(max/2)-c+1;
				for (int j=st; j<st+2*c; j++) printf("%d ",a[j]);
				}
			printf("\n\n");
			}
		else
		{
		
			if (2*c-1>max+1)
			{
				for (int j=0; j<=max; j++) printf("%d ",a[j]);
				}
			else
			{
				st=(max/2)-c+1;
				for (int j=st; j<st+2*c-1; j++) printf("%d ",a[j]);
				}
			printf("\n\n");
			}
		
		}
	}
