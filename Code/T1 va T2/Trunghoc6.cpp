#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,y;
	bool kt=true;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d",&y);
		printf("Nhap ma tran:\n");
		for (int i=0; i<y; i++)
		{
			for (int j=0; j<y; j++)
			{
				scanf("%d",&a[i][j]);
				if ((i<j) and (a[i][j]<0)) kt = false;
				if ((i>j) and (a[i][j]>0)) kt = false;
				if ((i==j) and (a[i][j]!=0)) kt = false;
				}
			}
		if (kt==true) printf("Hop le\n");
		else printf("Khong hop le\n");
		}
	}
