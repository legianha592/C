#include <stdio.h>
using namespace std;

int a[100], n, m, y;
float x;

float TB(int a[],int m)
{
	x=0;
	for (int k=0; k<m; k++) x=x+a[k];
	x=x/m;
	return(x);
	}
	
int tich(int a[],int m)
{
	y=1;
	for (int k=0; k<m; k++) y=y*a[k];
	return(y);
	}
	
int main()
{
	freopen("tieuhoc2.inp","r",stdin);
	freopen("tieuhoc2.out","w",stdout);
	printf("Nhap so test: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		x=0;
		y=1;
		printf("Nhap so cac so trong day: ");
		scanf("%d",&m);
		printf("Nhap cac so trong day: ");
		for (int j=0; j<m; j++)
		{
			scanf("%d",&a[j]);
			}
		printf("TB cua day la: %f\n", TB(a,m));
		printf("Tich cua day la: %d\n", tich(a,m));
		}
		}
		
		
