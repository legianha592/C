#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char name[10][12],a[12];
	int dai[10],tien[10],x,m,n;
	bool kt;
	printf("Nhap so nguoi: ");
	scanf("%d",&x);
	printf("Nhap nguoi: ");
	for (int i=0; i<x; i++)
	{
		scanf("%s",&a);
		dai[i]=strlen(a);
		tien[i]=0;
		for (int j=0; j<dai[i]; j++)
		{
			name[i][j]=a[j];
			}
		}
	printf("Nhap tien:\n");
	for (int i=0; i<x; i++)
	{
		scanf("%s",&a);
		scanf("%d%d",&m,&n);
		for (int k=0; k<x; k++)
		{
			kt=true;
			for (int z=0; z<dai[k]; z++)
			{				
				if (a[z]!=name[k][z])
				{
					kt=false;
					break;
					}
				if (kt==true)
				{
					tien[k]=tien[k]-m;
					break;
					}
				}
			}
		for (int j=0; j<n; j++)
		{
			scanf("%s",&a);
			for (int k=0; k<x; k++)
			{
				kt=true;
				for (int z=0; z<dai[k]; z++)
				{				
					if (a[z]!=name[k][z])
					{
						kt=false;
						break;
						}
					if (kt==true)
					{
						tien[k]=tien[k]+m/n;
						break;
						}
					}
				}
			}
		}
		printf("Ket qua:\n");
		for (int i=0; i<x; i++)
		{
			for (int j=0; j<dai[i]; j++) printf("%c",name[i][j]);
			printf(" %d\n",tien[i]);
			}
	}
