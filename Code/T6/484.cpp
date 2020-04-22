#include <stdio.h>

using namespace std;

int main(){
	freopen("484.inp", "r", stdin);
	freopen("484.out", "w", stdout);
	
	int size=0, number;
	int array[size];
	while(scanf("%d", &number) > 0){
		size++;
		array[size-1] = number;
	}
	
	int map_number[size][2];
	int count = 0;
	for (int i=0; i<size; i++){
		bool check = false;
		for (int j=0; j<count; j++){
			if (array[i] == map_number[j][0]){
				map_number[j][1]++;
				check = true;
				break;
			}
		}
		if (check == false){
			map_number[count][0] = array[i];
			map_number[count][1] = 1;
			count++;
		}
	}
	for (int i=0; i<count; i++){
		printf("%d %d\n", map_number[i][0], map_number[i][1]);
	}
}
