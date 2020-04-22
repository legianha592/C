#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char str1[256],str2[256];
	int x;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap 2 chuoi:\n");
		scanf("%s%s",&str1,&str2);
		if (strcmp(str1,str2)==0) printf("1\n");
		else printf("0\n");
		}
	}
