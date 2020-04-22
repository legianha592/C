#include <stdio.h>
using namespace std;

int main()
{
	int a,b;
	float tong,TB;
	printf("Nhap so test: ");
	scanf("%d",&a);
	for (int i=1; i<=a; i++)
	{
		tong=0;
		TB=0;
		printf("Nhap so cac so trong day: ");
		scanf("%d",&b);
		int so[b];
		for (int j=0; j<b; j++) 
		{
			scanf("%d",&so[j]);
			tong=tong+so[j];
			}
		TB = tong/b;
		printf("Tong cua day la: %f\n", tong);
		printf("TB cua day la: %f\n", TB);
		}
	}
