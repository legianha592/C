#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char a[256],kq[256];
	int x,y,max,dem;
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap so chuoi: ");
		scanf("%d",&y);
		max=0;
		for (int i=0; i<y; i++)
		{
			printf("Nhap chuoi thu %d: ", i+1);
			scanf("%s",&a);
			dem=1;
			for (int j=1; j<strlen(a); j++)
			{
				kt=true;
				for (int z=0; z<j; z++)
				{
					if (a[j]==a[z])
					{
						kt=false;
						break;
						}
					}
				if (kt==true) dem+=1;
				}
			if (dem>max)
			{
				max=dem;
				for (int j=0; j<strlen(a); j++) kq[j]=a[j];
				}
			}
		printf("Chuoi can tim la: %s\n",kq);
		printf("So ki tu khac nhau la: %d\n",max);
		}
	}

