#include <stdio.h>

using namespace std;

int test_case, map[25][25], max;
bool mark_map[25][25];

int number_letter(char string[]){
	int count = 0;
	while(true){
		if (string[count] == '0' || string[count] == '1'){
			count++;
		}
		else{
			return count;
		}
	}
}

void setup_mark_map(int size){
	for (int i=0; i<size; i++){
		for (int j=0; j<size; j++){
			mark_map[i][j] = true;
		}
	}
}

bool inside_map(int i, int j, int size){
	if (i>=size || i<0){
		return false;
	}
	if (j>=size || j<0){
		return false;
	}
	return true;
}

void DFS(int pos_i, int pos_j, int size){
	int first = -1, last = 0;
	int queue_i[625], queue_j[625];
	queue_i[0] = pos_i, queue_j[0] = pos_j;
	mark_map[pos_i][pos_j] = false;
	
	while(first<last){
		first++;
		for (int i = queue_i[first]-1; i<= queue_i[first]+1; i++){
			for (int j = queue_j[first]-1; j<= queue_j[first]+1; j++){
				if (inside_map(i, j, size) == true){
					if (i != pos_i || j != pos_j){
						if (map[i][j] == 1 && mark_map[i][j] == true){
							last++;
							queue_i[last] = i;
							queue_j[last] = j;
							mark_map[i][j] = false;
						}
					}
				}
			}
		}
	}
	
//	printf("mark map = \n");
//	for (int i=0; i<size; i++){
//		for (int j=0; j<size; j++){
//			if (mark_map[i][j] == true){
//				printf("T");
//			}
//			else{
//				printf("F");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	if (last+1 > max){
		max = last+1;
	}
}

int main(){
	freopen("cells.inp", "r", stdin);
	freopen("cells.out", "w", stdout);
	
	scanf("%d", &test_case);
	for (int count_test = 0; count_test<test_case; count_test++){
		char string[25];
		scanf("%s", &string);
		int size = number_letter(string);
		for (int i=0; i<size; i++){
			if(string[i] == '0'){
				map[0][i] = 0;
			}
			else{
				map[0][i] = 1;
			}
		}
		
		for (int i=1; i<size; i++){
			scanf("%s", &string);
			for (int j=0; j<size; j++){
				if (string[j] == '0'){
					map[i][j] = 0;
				}
				else{
					map[i][j] = 1;
				}
			}
		}
		
//		printf("size = %d\n", size);
//		printf("map = \n");
//		for (int i=0; i<size; i++){
//			for (int j=0; j<size; j++){
//				printf("%d", map[i][j]);
//			}
//			printf("\n");
//		}
		
		max = 0;
		setup_mark_map(size);
		for (int i=0; i<size; i++){
			for (int j=0; j<size; j++){
				if (map[i][j] == 1 && mark_map[i][j] == true){
					DFS(i, j, size);
				}
			}
		}
		
		printf("%d\n", max);
	}
}
