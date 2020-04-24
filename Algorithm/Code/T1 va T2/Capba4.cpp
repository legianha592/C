#include <stdio.h>
#include <cstring>

int main()
{
	char s[256],s1[256],s2[256];
	int a[256],x;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap chuoi S, S1, S2: ");
		scanf("%s%s%s",&s,&s1,&s2);
		
		for (int i=0; i<=strlen(s)-strlen(s1); i++)
		{
			a[i]=1;
			for (int j=0; j<strlen(s1); j++)
			{
				if (s1[j]!=s[i+j])
				{
					a[i]=0;
					break;
					}
				}
			}
		for (int i=strlen(s)-strlen(s1)+1; i<strlen(s); i++) a[i]=0;
		for (int i=0; i<=strlen(s)-strlen(s1); i++)
		{
			if (a[i]==1)
			{
				for (int j=i+1; j<i+strlen(s1); j++) a[j]=2;
				}
			}
		printf("Chuoi moi la: ");
		for (int i=0; i<strlen(s); i++)
		{
			if (a[i]==0) printf("%c",s[i]);
			else if (a[i]==1) printf("%s",s2);
			}
		printf("\n");
		}
	}
