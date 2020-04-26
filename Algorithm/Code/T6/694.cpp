#include <stdio.h>

using namespace std;

int start, limit, term, number_case;

int main(){
	freopen("694.inp", "r", stdin);
	freopen("694.out", "w", stdout);
	
	number_case = 1;
	while(true){
		scanf("%d %d", &start, &limit);
		if (start<0 || limit<0){
			break;
		}
		int number = start;
		term = 1;
		while(true){
			if (start == 1){
				break;
			}
			if (start%2 == 0){
				start /= 2;
			}
			else{
				start = start*3+1;
			}
			if (start > limit){
				break;
			}
			term++;
		}
		
		printf("Case %d: A = %d, limit = %d, number of terms = %d\n", number_case, number, limit, term);
		number_case++;
	}
}
