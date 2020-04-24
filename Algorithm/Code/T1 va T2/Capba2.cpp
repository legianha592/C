#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char a[256],b[256];
	bool kt;
	int x,tong;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		kt=false;
		printf("Nhap chuoi 1, chuoi 2: ");
		scanf("%s%s",&a,&b);
		for (int i=0; i<=strlen(a)-strlen(b); i++)
		{
			tong=0;
			for (int j=0; j<strlen(b); j++)
			{
				if (b[j]!=a[i+j]) tong +=1;
				}
			if (tong==0)
			{
				kt=true;
				break;
				}
			}
		if (kt==true) printf("Chuoi 1 chua chuoi 2\n");
		else printf("Chuoi 1 khong chua chuoi 2\n");
		}
	}
