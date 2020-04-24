#include <stdio.h> //thu vien printf, scanf
using namespace std;

int main()
{
	printf("Bang cuu chuong:\n");
	for (int i=1; i<=10; i++)
	{
		for (int j=1; j<=10; j++) printf ("%5d", i*j); //khuon doc can le phai 4 ki tu
		printf("\n");
		}
	}
