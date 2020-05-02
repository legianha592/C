#include <stdio.h>

using namespace std;

int main(){
	freopen("10013.inp", "r", stdin);
	freopen("10013.out", "w", stdout);
	
	int test_case;
	scanf("%d", &test_case);
	for (int count_test = 0; count_test<test_case; count_test++){
		int max;
		scanf("%d", &max);
		int numb1[max], numb2[max], total[max];
		for (int i=0; i<max; i++){
			scanf("%d %d", &numb1[i], &numb2[i]);
			total[i] = 0;
		}
		for (int i=max-1; i>=0; i--){
			total[i] += numb1[i] + numb2[i];
			if (total[i]>=10){
				total[i] -= 10;
				total[i-1] += 1;
			}
		}
		for (int i=0; i<max; i++){
			printf("%d", total[i]);
		}
		printf("\n\n");
	}
}
