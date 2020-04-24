#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char str1[200],str2[200],mau[]="0123456789";
	int s1[200],s2[200],tich[200],mul[200];
	int x,dem,a;
	
	freopen("bignumb3.txt","r",stdin);
	freopen("bignumb3.out","w",stdout);
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap hai so: ");
		scanf("%s%s",&str1,&str2);
		
		
		for (int i=0; i<strlen(str1); i++)
		{
			for (int j=0; j<=9; j++)
			{				
				if (str1[i]==mau[j])
				{
					s1[i]=j;
					break;
					}
				}
			}
		for (int i=strlen(str2)-1; i>=0; i--)
		{
			for (int j=0; j<=9; j++)
			{
				if (str2[i]==mau[j])
				{
					s2[i+200-strlen(str2)]=j;
					break;
					}
				}
			}
		for (int i=0; i<200; i++) tich[i]=0; 
		
			
		for (int i=199; i>199-strlen(str2); i--)
		{
			for (int j=i; j>=i-strlen(str1); j--) mul[j]=0;
			for (int j=strlen(str1)-1; j>=0; j--)
			{
				dem=mul[i-strlen(str1)+1+j]+s2[i]*s1[j];
				mul[i-strlen(str1)+1+j]=dem%10;
				mul[i-strlen(str1)+j]=dem/10;
				}
			for (int j=i; j>=i-strlen(str1); j--)
			{
				dem=tich[j]+mul[j];
				tich[j]=dem%10;
				tich[j-1]=tich[j-1]+dem/10;
				}
			}
			
		printf("Tich cua hai so la: ");
		if ((200-strlen(str1)-strlen(str2))==0)
		{
			for (int i=201-strlen(str1)-strlen(str2); i<200; i++) printf("%d",tich[i]);
			}
		else
		{
			for (int i=200-strlen(str1)-strlen(str2); i<200; i++) printf("%d",tich[i]);
			}
		printf("\n");
		}
	}
