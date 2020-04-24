#include <stdio.h>
#include <iostream>
using namespace std;

int hh(int &x)
{
	int tong=0;
	int a;
	for (int k=1; k<x; k++)
	{
		if (x%k==0) tong=tong+k;
		}
	if (tong==x) a=1;
	else a=0;
	return(a);
	}

int main()
{
	int a[32768],x;
	for (int i=1; i<=32767; i++)
	{
		if (hh(i)==1) a[i]=1;
		else a[i]=0;
		}
	printf("Nhap so nguyen duong bat ki: ");
	scanf("%d",&x);
	printf("Cac so hoan hao nho hon %d la: ",x);
	for (int i=1; i<x; i++)
	{
		if (a[i]==1) printf("%d\t",i);
		}
	}
