#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	freopen("labiec36.txt", "r", stdin);
	freopen("labiec36.out","w",stdout);
	int n,x;
	cout << "Nhap so chu Z va do rong cua chu Z: " << endl;
	cin >> n >> x;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=x; j++) cout << "*";
		cout << endl;
		for (int j=1; j<x-1; j++)
		
		{
			for (int k=1; k<=x-1-j; k++) cout << " ";
			cout << "*" << endl;
			}
		}
	for (int i=1; i<=x; i++) cout << "*";
	}
