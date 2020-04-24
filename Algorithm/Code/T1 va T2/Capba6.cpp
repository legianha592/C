#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char A[]="abcdefghijklmnopqrstuvwxyz", B[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",str[256];
	int x;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap chuoi: ");
		scanf("%s",&str);
		for (int i=0; i<strlen(str); i++)
		{
			for (int j=0; j<=25; j++)
			{
				if (str[i]==A[j])
				{
					str[i]=B[j];
					break;
					}
				}
			}
		printf("Chuoi moi la: ");
		for (int i=0; i<strlen(str); i++) printf("%c",str[i]);
		printf("\n");
		}
	}
