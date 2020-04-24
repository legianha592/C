#include <stdio.h>

using namespace std;

int map[100][100], height, width, count;

bool inside_map(int pos_i, int pos_j){
	if (pos_i<0 || pos_i>= height || pos_j<0 || pos_j>=width){
		return false;
	}
	return true;
}

void DFS(int pos_i, int pos_j){
	count++;
	int queue_X[10000], queue_Y[10000];
	int first = -1, last = 0;
	queue_X[0] = pos_i, queue_Y[0] = pos_j;
	map[pos_i][pos_j] = '*';
	while(first<last){
		first++;
		for (int i=queue_X[first]-1; i<=queue_X[first]+1; i++){
			for (int j=queue_Y[first]-1; j<=queue_Y[first]+1; j++){
				if (inside_map(i, j) == true){
					if (i != queue_X[first] || j != queue_Y[first]){
						if (map[i][j] == '@'){
							last++;
							queue_X[last] = i;
							queue_Y[last] = j;
							map[i][j] = '*';
						}
					}
				}
			}
		}
	}
}

int main(){
	freopen("572.inp", "r", stdin);
	freopen("572.out", "w", stdout);
	
	while(true){
		scanf("%d %d", &height, &width);
		if (height == 0 || width == 0){
			break;
		}
		for (int i=0; i<height; i++){
			char string[width];
			scanf("%s", &string);
			for (int j=0; j<width; j++){
				map[i][j] = string[j];
			}
		}
		count = 0;
		for (int i=0; i<height; i++){
			for (int j=0; j<width; j++){
				if (map[i][j] == '@'){
					DFS(i, j);
				}
			}
		}
		printf("%d\n", count);
	}
}
