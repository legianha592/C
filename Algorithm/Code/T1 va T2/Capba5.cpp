#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s1[256],s2[256];
	int x,dem;
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap chuoi S1, S2: ");
		scanf("%s%s",&s1,&s2);
		dem=0;
		for (int i=0; i<=strlen(s1)-strlen(s2); i++)
		{
			kt=true;
			for (int j=0; j<strlen(s2); j++)
			{
				if (s2[j]!=s1[i+j])
				{
					kt=false;
					break;
					}
				}
			if (kt==true) dem +=1;
			}
		printf("So lan lap lai la: %d\n",dem);
		}
	}
