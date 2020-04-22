#include <stdio.h>
using namespace std;

int SNT(int x)
{
	int dem=0;
	int KT=1;
	for (int k=2; k<=x; k++)
	{
		if (x%k==0) dem +=1;
		if (dem>=2)
		{
			KT=0;
			break;
			}
		}
	if (dem==0) KT=0;
	return(KT);
	}
	
int main()
{
	int a[100][100],x,m,n,count,sum;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int k=0; k<x; k++)
	{
		printf("Nhap kich thuoc ma tran: ");
		scanf("%d%d",&m,&n);
		printf("Nhap ma tran:\n");
		count=0;
		sum=0;
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				scanf("%d",&a[i][j]);
				if (SNT(a[i][j])==1)
				{
					count +=1;
					sum=sum+a[i][j];
					}
				}
			}
		if (count==0) printf("0");
		else
		{
			printf("So cac so nguyen to la: %d",count);
			printf("\nTong cac so nguyen to la: %d\n",sum);
			}
		}
	}
