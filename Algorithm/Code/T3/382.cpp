#include <stdio.h>
using namespace std;

int kt(int x)
{
	int m,tong;
	tong=0;
	for (int k=1; k<x; k++)
	{
		if (x%k==0) tong=tong+k;
		}
	if (tong>x) m=1;
	else if (tong<x) m=-1;
	else m=0;
	return(m);
	}

int main()
{
	int mau[60001],a[100],b[100],i,m;
	for (int k=1; k<=60000; k++)
	{
		if (kt(k)==1) mau[k]=1;
		else if (kt(k)==-1) mau[k]=-1;
		else mau[k]=0;
		}
	for (i=0;;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]==0) break;
		b[i]=mau[a[i]];
		}
	printf("PERFECTION OUTPUT\n");
	for (int j=0; j<i; j++)
	{
		printf("%5d  ",a[j]);
		if (b[j]==1) printf("ABUNTDANT");
		else if (b[j]==-1) printf("DEFICIENT");
		else printf("PERFECT");
		printf("\n");
		}
	printf("END OF OUTPUT");
	}

