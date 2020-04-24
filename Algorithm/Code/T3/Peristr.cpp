#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char a[80];
	int x,m;
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap chuoi: ");
		scanf("%s",&a);
		for (int i=1; i<=strlen(a); i++)
		{
			kt=true;
			if (strlen(a)%i==0)
			{
				for (int j=0; j<i; j++)
				{
					m=strlen(a)/i;
					for (int z=1; z<m; z++)
					{
						if (a[j]!=a[j+i*z]) kt=false;
						if (kt==false) break;
						}
					if (kt==false) break;
					}
				}
			else
			{
				kt=false;
				}
			if (kt==true)
			{
				printf("Chu ki nho nhat la: %d",i);
				printf("\n");
				break;
				}
			}
		}
	}
