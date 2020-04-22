#include <stdio.h>

using namespace std;

int test_case, map[3];

int max(){
	int number = 0;
	for (int i=0; i<3; i++){
		if (map[i] > number){
			number = map[i];
		}
	}
	return number;
}

int min(){
	int number = max();
	for (int i=0; i<3; i++){
		if (map[i]<number){
			number = map[i];
		}
	}
	return number;
}

int main(){
	freopen("cutcost.inp", "r", stdin);
	freopen("cutcost.out", "w", stdout);
	
	scanf("%d", &test_case);
	for (int i=1; i<=test_case; i++){
		for (int j=0; j<3; j++){
			scanf("%d", &map[j]);
		}
		for (int j=0; j<3; j++){
			if (map[j] != max() && map[j] != min()){
				printf("Case %d: %d\n",i, map[j]);
				break;
			}
		}
	}
}
