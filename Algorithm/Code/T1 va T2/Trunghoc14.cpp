#include <stdio.h>
using namespace std;

int main()
{
	int a[100][100],x,m,n,z,count,sum;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap canh hinh vuong lon va hinh vuong nho: ");
		scanf("%d%d",&m,&n);
		z=(m-n)/2;
		count=0;
		sum=0;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<m; j++)
			{
				count +=1;
				a[i][j]=count;
				}
			}
		for (int i=z; i<z+n; i++)
		{
			for (int j=z; j<z+n; j++)
			{
				sum=sum+a[i][j];
				}
			}
		printf("Tong cua hinh vuong nho la: %d\n",sum);
		}
	}
