#include <stdio.h>

using namespace std;

int number_brick, test = 1;

int main(){
	freopen("591.inp", "r", stdin);
	freopen("591.out", "w", stdout);
	
	while(true){
		scanf("%d", &number_brick);
		if (number_brick == 0){
			break;
		}
		int list_brick[number_brick], average = 0, step = 0;
		for (int i=0; i<number_brick; i++){
			scanf("%d", &list_brick[i]);
			average += list_brick[i];
		}
		average /= number_brick;
		for (int i=0; i<number_brick; i++){
			if (list_brick[i] < average){
				step += (average-list_brick[i]);
			}
		}
		printf("Set #%d\n", test);
		printf("The minimum number of moves is %d\n", step);
		test++;
	}
}
