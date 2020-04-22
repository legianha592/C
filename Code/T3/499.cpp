#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char a[]="abcdefghijklmnopqrstuvwxyz", A[]="ABCDEFGHIJKLMNOPQ",str[1000];
	int b[26],B[26],max;
	freopen ("499.txt","r",stdin);
	freopen ("499.out","w",stdout);
	while (gets(str)!=0)
	{
		for (int i=0; i<26; i++)
		{
			b[i]=0;
			B[i]=0;
			}
		for (int i=0; i<strlen(str); i++)
		{
			for (int j=0; j<26; j++)
			{
				if (str[i]==a[j])
				{
					b[j] +=1;
					break;
					}
				if (str[i]==A[j])
				{
					B[j] +=1;
					break;
					}
				}
			}
		max=0;
		for (int i=0; i<26; i++)
		{
			if (b[i]>max) max=b[i];
			if (B[i]>max) max=B[i];
			}
		for (int i=0; i<26; i++)
		{
			if (max==B[i]) printf("%c",A[i]);
			}
		for (int i=0; i<25; i++)
		{
			if (max==b[i]) printf("%c",a[i]);
			}
		printf(" %d\n",max);
		}
	}
