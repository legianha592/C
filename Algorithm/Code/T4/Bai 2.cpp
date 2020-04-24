#include <stdio.h>
using namespace std;

int dem;
int kq[100];

int chinhhop(int k, int n)
{
	if (k==0) return 1;
	else
	{
		return (chinhhop(k-1,n)*(n-k+1));
		}
	}
	
	
void  dequy(int vitri, int d, int k, int n){
	if (d < k){
		d++;
		for (int i=vitri+1; i<= n-k+d ; i++){
			kq[d]=i;
			dequy(i, d, k, n);
		}	
	}
	else if (d==k){
		for (int j=1; j<=k; j++) printf("%d ",kq[j]);
		printf("\n");
		}
	else return;	
}
							
int main()
{
	int k,n,x,a[10];
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&x);
	for (int i=0; i<x; i++)
	{
		printf("Nhap k va n: ");
		scanf("%d%d",&k,&n);
		printf("Chinh hop chap %d cua %d la: %d\n",k,n,chinhhop(k,n));
		
		printf("Cac chinh hop: \n");
		for (int i=1; i<=n-k+1; i++){
			kq[1]=i;
			dequy(i,1,k,n);
	}
	}
}
