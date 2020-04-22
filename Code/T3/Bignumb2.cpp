#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char str1[100],str2[100],mau[]="0123456789";
	int s1[100],s2[100],hieu[100],x,dem;
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
			for (int i=0; i<strlen(str2); i++)
			{
				for (int j=0; j<=9; j++)
				{
					if (str2[i]==mau[j])
					{
						s2[i+strlen(str1)-strlen(str2)]=j;
						break;
						}
					}
				}
			for (int i=0; i<strlen(str1)-strlen(str2); i++) s2[i]=0;
			for (int i=0; i<=strlen(str1); i++) hieu[i]=0;
			for (int i=strlen(str1)-1; i>=0; i--)
			{
				if ((hieu[i]+s1[i])>=s2[i])
				{
					hieu[i]=hieu[i]+s1[i]-s2[i];
					}
				else
				{
					hieu[i]=10+hieu[i]+s1[i]-s2[i];
					hieu[i-1]=-1;
					}
				}
			printf("Hieu hai so la: ");
			for (int i=0; i<strlen(str1); i++) printf("%d",hieu[i]);
			printf("\n");
		}
	}
			
