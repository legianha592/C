#include<stdio.h>
using namespace std;

int main()
{
	int a,i,j;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&a);
	for (i=1; i<=a; i++)
	{
		for (j=1; j<=i; j++) printf("%d",j);
		if (i>=2)
		{
			for (j=i-1; j>=1; j--) printf("%d",j);
			}
		printf("\n");
		}
	}
