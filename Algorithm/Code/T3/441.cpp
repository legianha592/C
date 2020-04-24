#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	int a[12],x,m1,m2,m3,m4,m5,m6;
	scanf("%d",&x);
	for (int i=0; i<x; i++) scanf("%d",&a[i]);
	printf("Day so la:\n");
	for (m6=5; m6<x; m6++)
	for (m5=4; m5<m6; m5++)
	for (m4=3; m4<m5; m4++)
	for (m3=2; m3<m4; m3++)
	for (m2=1; m2<m3; m2++)
	for (m1=0; m1<m2; m1++)
	{
		printf("%d %d %d %d %d %d",a[m1],a[m2],a[m3],a[m4],a[m5],a[m6]);
		printf("\n");
		}
	}
