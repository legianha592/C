#include <stdio.h>

using namespace std;

void flood_number (int &count, int &a, int &b){
	if (a==0 && b==0){
		a = count;
		b = count;
	}
	else if (a==0 && b!=0){
		a = b;
	}
	else if (a!=0 && b==0){
		b = a;
	}
}

int main(){
	int village, bridge, count, village1, village2;
	printf("Nhap so lang va so con cau: ");
	scanf("%d %d",&village,&bridge);
	printf("Nhap cac cay cau: \n");
	count = 0;
	int number[village];
	for (int i=0; i<village; i++){
		number[i]=0;
	}
	for (int i=0; i<bridge; i++){
		scanf("%d %d",&village1, &village2);
		if (number[village1-1] == 0 && number[village2-1] == 0){
			count++;
		}
		flood_number(count, number[village1-1], number[village2-1]);
		printf("\n lang: ");
		for (int j=0; j<village; j++){
			printf("%2d", number[j]);
		}
		printf("%2d", count);
		printf("\n");
	}
	for (int i=0; i<village; i++){
		if (number[i]==0){
			count++;
		}
	}
	printf("So vung la: %d", count);
}
