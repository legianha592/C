#include <stdio.h>

using namespace std;

int test, sum1, sum2;
char mau[] = "0123456789";

int find_number (char num){
	for (int i=0; i<10; i++){
		if (num==mau[i]){
			return i;
		}
	}
	return -1;
}

void convert_string(char string[]){
	int numb1 = find_number(string[0]), numb2 = find_number(string[2]);
	sum1 += find_number(string[1]) + find_number(string[3]);
	numb1 *= 2;
	numb2 *= 2;
	while (numb1>0){
		sum2 += numb1%10;
		numb1 /= 10;
	}
	while (numb2>0){
		sum2 += numb2%10;
		numb2 /= 10;
	}
}

int main(){
	freopen("credit.inp", "r", stdin);
	freopen("credit.out", "w", stdout);
	
	scanf("%d", &test);
	for (int i=0; i<test; i++){
		sum1 = 0;
		sum2 = 0;
		for (int j=0; j<4; j++){
			char string[4];
			scanf("%s", &string);
			convert_string(string);
		}
		
		int sum = sum1+sum2;
//		printf("sum = %d\n", sum);
		if (sum%10 == 0){
			printf("Valid.\n");
		}
		else{
			printf("Invalid.\n");
		}
	}
}
