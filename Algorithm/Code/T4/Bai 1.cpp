#include <stdio.h>
using namespace std;

int giaithua(int n)
{
	if (n==0) return 1;
	else
	{
		return n*giaithua(n-1);
		}
	}

int fibo(int n)
{
	if (n==0) return 0;
	else if (n==1) return 1;
	else
	{
		return (fibo(n-1)+fibo(n-2));
		}
	}

int main()
{
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	printf("%d!= %d\n",n,giaithua(n));
	printf("fibo(%d)= %d",n,fibo(n));
	}
