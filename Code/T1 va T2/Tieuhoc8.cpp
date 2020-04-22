#include<stdio.h>
#include<cmath>

int main()
{
	freopen("tieuhoc8.txt","r",stdin);
	freopen("tieuhoc8.out","w",stdout);
	int a,b,m,x;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap so dau tien va so cuoi cung: ");
		scanf("%d%d",&a,&b);
		printf("Cac so chinh phuong tu %d den %d la: ",a,b);
		for (int j=a; j<=b; j++)
		{
			m=sqrt(j);
			if (j==pow(m,2)) printf("%d\t",j);
			}
		printf("\n");
		}
	}
