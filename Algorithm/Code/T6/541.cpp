#include <stdio.h>

using namespace std;

int size;

int main(){
	freopen("541.inp", "r", stdin);
	freopen("541.out", "w", stdout);
	
	while(true){
		scanf("%d", &size);
		if (size == 0){
			break;
		}
		
		int map[size][size];
		int row, column, number_row, number_column, total;
		
		row = 0;
		number_row = -1;
		for (int i=0; i<size; i++){
			total = 0;
			for (int j=0; j<size; j++){
				scanf("%d", &map[i][j]);
				total += map[i][j];
			}
			if (total%2 != 0){
				row++;
				number_row = i;
			}
			if (row>=2){
				break;
			}
		}
		if (row<2){
			column= 0;
			number_column = -1;
			for (int j=0; j<size; j++){
				total = 0;
				for (int i=0; i<size; i++){
					total += map[i][j];
				}
				if (total%2 != 0){
					column++;
					number_column = j;
				}
				if (column>=2){
					break;
				}
			}
		}
		if (row == 0 && column == 0){
			printf("OK\n");
		}
		else if (row == 1 && column == 1){
			printf("Change bit (%d,%d)\n", number_row+1, number_column+1);
		}
		else{
			printf("Corrupt\n");
		}
	}
}
