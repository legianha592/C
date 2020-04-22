#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	char str[1000],A[]=" ",mau[]="0123456789";
	int so[100][100],kt[100],dem,start,fin,bac,count,loop,z;
	bool m;
	freopen ("496s.txt","r",stdin);
	freopen ("496s.out","w",stdout);
	z=0;
	while (gets(str)!=0)
	{
		dem=0;
		for (int i=0; i<strlen(str); i++)
		{
			if (str[i]==A[0]) dem+=1;
			}
		loop=0;
		start=0;
		for (int i=0; i<strlen(str); i++)
		{
			if (str[i]==A[0])
			{
				fin=i-1;
				count=0;
				for (int j=start; j<=fin; j++)
				{
					bac=fin-j;
					for (int k=0; k<=9; k++)
					{					
						if (str[j]==mau[k])
						{
							count=count+k*pow(10,bac);
							break;
							}
						}
					}
				so[z][loop]=count;	
				start = fin+2;
				loop +=1;
				}
			}
		fin=strlen(str)-1;
		for (int j=start; j<=fin; j++)
		{
			bac=fin-start;
			count=0;
			for (int k=0; k<=9; k++)
			{					
				if (str[j]==mau[k])
				{
					count=count+k*pow(10,bac);
					break;
					}
				}
			bac--;
			}
		so[z][loop]=count;
		kt[z]=loop+1;
		z++;
		}
	
	for (int i=0; i<z; i=i+2)
	{
		for (int j=0; j<kt[i]; j++)
		{
			m=false;
			for (int k=0; k<kt[i+1]; k++)
			{
				if (so[i][j]==so[i+1][k])
				{
					m=true;
					break;
					}
				}
			if (m==false)
			{
				printf("A is not a subset of B\n");
				break;
				}
			}
		if (m==true) printf("A is a subset of B\n");
		}
	}
	
