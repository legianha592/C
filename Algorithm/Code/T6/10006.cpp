#include <stdio.h>
#include <cmath>

using namespace std;

int number;

bool check_prime(){
	int biggest = sqrt(number);
	for (int i=2; i<=biggest; i++){
		if (number%i == 0){
			return false;
		}
	}
	return true;
}

bool check_one_case(int current){
	int exceed = current;
	for (int i=1; i<number; i++){
		exceed *= current;
		exceed = exceed%number;
	}
	if (exceed == current){
		return true;
	}
	return false;
}

bool check_number(){
	for (int i=2; i<number; i++){
		if (check_one_case(i) == false){
			return false;
		}
	}
	return true;
}

int main(){
	freopen("10006.inp", "r", stdin);
	freopen("10006.out", "w", stdout);
	
	while(true){
		scanf("%d", &number);
		if (number==0){
			break;
		}
		if (check_prime() == false){
			if (check_number() == true){
				printf("The number %d is a Carmichael number.\n", number);
			}
			else{
				printf("%d is not a Carmichael number.\n", number);
			}
		}
		else{
			printf("%d is normal.\n", number);
		}
	}
}
