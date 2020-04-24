#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str1[]="AEHIJLMOSTUVWXYZ12358",str2[]="A3HILJMO2TUVWXY51SEZ8";
	char a[20];
	int x,m;
	bool kt;
	while (scanf("%s",&a)>0)
	{
		x=3;
		for (int i=0; i<=strlen(a)/2; i++)
		{
			if (a[i]!=a[strlen(a)-1-i])
			{
				x -=1;
				break;
				}
			}
		for (int i=0; i<=strlen(a)/2; i++)
		{
			kt=false;
			for (int j=0; j<21; j++)
			{
				if ((a[i]==str1[j]) && (a[strlen(a)-1-i]==str2[j]))
				{
					kt=true;
					break;
					} 	
				}
			if (kt==false)
			{
				x -=2;
				break;
				}
			}
		printf("%s",a);
		if (x==0) printf(" -- is not a palindrome.\n");
		else if (x==1) printf(" -- is a regular palindrome.\n");
		else if (x==2) printf(" -- is a mirrored string.\n");
		else printf(" -- is a mirrored palindrome.\n");
		printf("\n");
		}
	}
