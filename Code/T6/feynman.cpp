#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	freopen("feynman.inp", "r", stdin);
	freopen("feynman.out", "w", stdout);
	
	float number;
	while (true){
		scanf("%f", &number);
		if (number == 0){
			break;
		}
		int integer = static_cast<int>(number);
		float mu = static_cast<float>(1)/3;
		integer = pow(integer, mu);
		
		float dx = mu*(number- static_cast<float> (pow(integer, 3)))/ (pow(integer, 2));
		float result = static_cast<float> (integer) + dx;
		printf("%0.4f\n", result);
	}
}
