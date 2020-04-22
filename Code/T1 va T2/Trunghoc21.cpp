#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	int a[100],b[100],x,m,n,h,k,d,a1,b1,dem;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int A=0; A<x; A++)
	{
		printf("Nhap kich thuoc ban bida, toa do bida va so buoc: "); // vd bàn 0-5 => 0123456789 =>-5-4-3-2-101234 => x%10-5 lay tuyet doi => VD diem xuat phat la 1 va tang => x=1+5=6
		scanf("%d%d%d%d%d",&m,&n,&h,&k,&d); //chieu dai nam tu 0 den m-1 => x%(2m-2)-(m-1) lay tuyet doi  => vd diem xuat phat la 1 va giam => x=-1+5=4
		a[0]=h;
		b[0]=k;
		a1= -h+(m-1);
		b1= k+(n-1);
		dem=0;
		for (int i=1; i<=d; i++)
		{
			a1++;
			b1++;
			a[i]= abs(a1%(2*m-2)-(m-1));
			b[i]= abs(b1%(2*n-2)-(n-1));
			if ((a[i]==0) or (a[i]==(m-1))) dem +=1;
			if ((b[i]==0) or (b[i]==(n-1))) dem +=1;
			if (((a[i]==0) or (a[i]==(m-1))) and ((b[i]==0) or (b[i]==(n-1)))) dem -=1;
			}
		for (int i=1; i<=d; i++) printf("%3d",a[i]);
		printf("\n");
		for (int i=1; i<=d; i++) printf("%3d",b[i]);
		printf("\nSo lan cham ban la: %d\n",dem);
		}
	}
