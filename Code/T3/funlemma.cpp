#include <stdio.h>
#include <math.h>

using namespace std;

int find_divisor(int a, int b){
	int big_number, small_number;
	if (a>b){
		big_number = a;
		small_number = b;
	}
	else{
		big_number = b;
		small_number = a;
	}
	while (big_number%small_number != 0){
		big_number = big_number - small_number;
		if (big_number < small_number){
			int x = big_number;
			big_number = small_number;
			small_number = x;
		}
	}
	return small_number;
}

int main(){
	int a;
	printf("Nhap so cac so trong day: ");
	scanf("%d", &a);
	
	int number[a];
	float total_couple, couple_divisor, pi;
	printf("Nhap cac so: ");
	for (int i=0; i<a; i++){
		scanf("%d",&number[i]);
	}
	total_couple = 0;
	couple_divisor = 0;
	for (int i=0; i<a-1; i++){
		for (int j=i+1; j<a; j++){
			total_couple++;
			if (find_divisor(number[i], number[j]) ==1){
				couple_divisor++;
			}
		}
	}
	if (couple_divisor != 0){
		pi = sqrt(6*total_couple/couple_divisor);
		printf("So pi = %f", pi);
	}
	else{
		printf("No estimate for this data set");
	}
}
