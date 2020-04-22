#include <stdio.h>
#include <cmath>

using namespace std;

int k, n, result, divided;

int find_UCLN(int a, int b){
	while(a%b != 0 && b%a != 0){
		if (a>b){
			a -= b;
		}
		else{
			b -= a;
		}
		printf("a and b = %d %d\n", a, b);
	}
	if(a>b){
		return b;
	}
	return a;
}

int main(){
	freopen("530.inp", "r", stdin);
	freopen("530.out", "w", stdout);
	
	while(true){
		scanf("%d %d", &n, &k);
		if (n == 0 || k == 0){
			break;
		}
		result = 1, divided = 1;
		for (int i=k+1; i<=n; i++){
			result *= i;
			divided *= (i-k);
			int UCLN = find_UCLN(result, divided);
			result /= UCLN;
			divided /= UCLN;
		}
		printf("%d\n", result);
	}
}
