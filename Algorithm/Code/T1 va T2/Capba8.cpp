#include<stdio.h>
#include<cstring>
using namespace std;
	
int main()
{
	char s1[256],s2[256],s[256],lenh[256];
	int x,y,z;
	printf("Nhap so test: ");
	scanf("%d",&z);
	for (int i=0; i<z; i++)
	{
		printf("Nhap phep: ");
		scanf("%s",&lenh);
		if (strcmp(lenh,"append")==0)
		{
			scanf("%s%s",&s1,&s2);
			for (int i=0; i<strlen(s1); i++) s[i]=s1[i];
			for (int i=0; i<strlen(s2); i++) s[i+strlen(s1)]=s2[i];
			printf("Chuoi moi la: ");
			for (int i=0; i<strlen(s1)+strlen(s2); i++) printf("%c",s[i]);
			printf("\n");
			}
		if (strcmp(lenh,"right")==0)
		{
			scanf("%d%s",&x,&s);
			printf("Chuoi moi la: ");
			for (int i=strlen(s)-x; i<strlen(s); i++) printf("%c",s[i]);
			printf("\n");
			}
		if (strcmp(lenh,"left")==0)
		{
			scanf("%d%s",&x,&s);
			printf("Chuoi moi la: ");
			for (int i=0; i<x; i++) printf("%c",s[i]);
			printf("\n");
			}
		if (strcmp(lenh,"delete")==0)
		{
			scanf("%d%d%s",&x,&y,&s);
			for (int i=0; i<y-1; i++) s1[i]=s[i];
			for (int i=x+y-1; i<strlen(s); i++) s1[i-x]=s[i];
			char A[]="_", B[]=" ";
			for (int i=0; i<strlen(s)-x; i++)
			{
				if (s1[i]==A[0]) s1[i]=B[0];
				}
			printf("Chuoi moi la: ");
			for (int i=0; i<strlen(s)-x; i++) printf("%c",s1[i]);
			printf("\n");
			}
		if (strcmp(lenh,"proper")==0)
		{
			scanf("%s",&s);
			char A1[]="abcdefghijklmnopqrstuvwxyz", B1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", A2[]="_", B2[]=" ";
			for (int i=0; i<26; i++)
			{
				if (s[0]==A1[i]) s[0]=B1[i];
				}
			for (int i=1; i<strlen(s); i++)
			{
				if (s[i]==A2[0])
				{
					s[i]=B2[0];
					for (int j=0; j<26; j++)
					{
						if (s[i+1]==A1[j])
						{
							s[i+1]=B1[j];
							break;
							}
						}
					}
				}
			printf("Chuoi moi la: ");
			for (int i=0; i<strlen(s); i++) printf("%c",s[i]);
			printf("\n");
			}
		}
	}
