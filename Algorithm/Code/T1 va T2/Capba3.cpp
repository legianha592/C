#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char a[256];
	bool kt;
	int x,m;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap chuoi: ");
		scanf("%s",&a);
		m=strlen(a);
		for (int i=m; i>0; i--)
		{
			for (int j=0; j<=m-i; j++)
			{
				kt=true;
				for (int z=0; z<=(i-1)/2; z++)
				{
					if (a[j+z]!=a[j+i-1-z])
					{
						kt=false;
						break;
						}
					}
				if (kt==true)
				{
					for (int z=0; z<i; z++) printf("%c",a[j+z]);
					printf("\n");
					break;
					}		
				}
			if (kt==true) break;
			}
		}
	}
