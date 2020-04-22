#include <stdio.h>
#include <cstring>

int main()
{
	char a[236];
	bool kt=true;
	int x,m;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap chuoi: ");
		scanf("%s",&a);
		m = strlen(a);
		for (int j=0; j<=(m-1)/2; j++)
		{
			if (a[j]!=a[m-1-j])
			{
				kt=false;
				break;
				}
			}
		if (kt==true) printf("1\n");
		else printf("0\n");
		}
	}
