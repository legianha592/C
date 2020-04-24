#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char str1[100],str2[100],mau[]="0123456789";
	int s1[100],s2[100],tong[100],x,dem;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap hai so: ");
		scanf("%s%s",&str1,&str2);
		if (strlen(str1)>strlen(str2))
		{
			for (int i=0; i<strlen(str1); i++)
			{
				for (int j=0; j<=9; j++)
				{
					if (str1[i]==mau[j])
					{
						s1[i+1]=j;
						break;
						}
					}
				}
			for (int i=0; i<strlen(str2); i++)
			{
				for (int j=0; j<=9; j++)
				{
					if (str2[i]==mau[j])
					{
						s2[i+1+strlen(str1)-strlen(str2)]=j;
						break;
						}
					}
				}
			s1[0]=0;
			for (int i=0; i<=strlen(str1)-strlen(str2); i++) s2[i]=0;
			for (int i=0; i<=strlen(str1); i++) tong[i]=0;
			
			for (int i=strlen(str1); i>=0; i--)
			{
				dem=s1[i]+s2[i];
				if ((tong[i]+dem)>9)
				{
					tong[i]=tong[i]+dem-10;
					tong[i-1]=1;
					}
				else
				{
					tong[i]=tong[i]+dem;
					}
				}
			printf("Tong la: ");
			if (tong[0]==1)
			{
				for (int i=0; i<=strlen(str1); i++) printf("%d",tong[i]);
				printf("\n");
				}
			else 
			{
				for (int i=1; i<=strlen(str1); i++) printf("%d",tong[i]);
				printf("\n");
				}
			}
		else
		{
			for (int i=0; i<strlen(str2); i++)
			{
				for (int j=0; j<=9; j++)
				{
					if (str2[i]==mau[j])
					{
						s2[i+1]=j;
						break;
						}
					}
				}
			for (int i=0; i<strlen(str1); i++)
			{
				for (int j=0; j<=9; j++)
				{
					if (str1[i]==mau[j])
					{
						s1[i+1+strlen(str2)-strlen(str1)]=j;
						break;
						}
					}
				}
			s2[0]=0;
			for (int i=0; i<=strlen(str2)-strlen(str1); i++) s1[i]=0;
			for (int i=0; i<=strlen(str2); i++) tong[i]=0;
			for (int i=strlen(str2); i>=0; i--)
			{
				dem=s2[i]+s1[i];
				if ((tong[i]+dem)>9)
				{
					tong[i]=tong[i]+dem-10;
					tong[i-1]=1;
					}
				else
				{
					tong[i]=tong[i]+dem;
					}
				}
			printf("Tong la: ");
			if (tong[0]==1)
			{
				for (int i=0; i<=strlen(str2); i++) printf("%d",tong[i]);
				printf("\n");
				}
			else 
			{
				for (int i=1; i<=strlen(str2); i++) printf("%d",tong[i]);
				printf("\n");
				}
			}
		}
	}
