#include <stdio.h>
using namespace std;

int main()
{
	int a[800],b[800],so[800],x;
	for (int i=0; i<800; i++)
	{
		a[i]=0;
		b[i]=0;
		so[i]=0;
		}
	printf("Nhap so: ");
	scanf("%d",&x);
	a[0]=1;
	max=0;
	for (int i=2; i<=x; i++)
	{
		if (i<10) b[0]=i;
		else if (i<100)
		{
			b[0]=i%10;
			b[1]=i/10;
			}
		else
		{
			b[0]=i%100;
			b[1]=(i/10)%10;
			b[2]=i/100;
			}
		
		}
	}
