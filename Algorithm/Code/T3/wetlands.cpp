#include <stdio.h>

using namespace std;


int main(){
	int row, column;
	printf("Input number of row and column: ");
	scanf("%d %d", &row, &column);
	
	int land[row][column];
	int check[row][column];
	
	printf("Input the map of land:\n");
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			scanf("%d", &land[i][j]);
		}
	}
	
	while (true){
		int x, y;
		printf("Input the location: ");
		scanf("%d %d", &x, &y);
		if (x<=0 || y<=0 || x>row || y>row){
			printf("The location failed!");
			break;
		}
		
		
		//bat dau bfs
		int first, last, position_x[row*column], position_y[row*column];
		for (int i=0; i<row; i++){
			for (int j=0; j<column; j++){
				if (land[i][j] == 1){
					check[i][j] = 1;
				}
				else if (land[i][j] == 0){
					check[i][j] = 0;
				}
				else{
					check[i][j] = -1;
				}
			}
		}
		
		if (land[x-1][y-1] == 1){
			check[x-1][y-1] = 0;
			position_x[0] = x-1;
			position_y[0] = y-1;
			first = -1;
			last = 0;
			
			while (first<last){
				first++;
				for (int i=position_x[first]-1; i<=position_x[first]+1; i++){
					for (int j=position_y[first]-1; j<=position_y[first]+1; j++){
						if (i>=0 && i<row && j>=0 && j<column){
							if (i!= position_x[first] || j!= position_y[first]){
								if (check[i][j] == 1){
									last++;
									position_x[last] = i;
									position_y[last] = j;
									check[i][j] = 0;
									printf("Point = %d %d\n", i, j);
								}
							}
						}
					}
				}
			}
		}
		else{
			last = -1;
		}
		
		
		printf("The acreage of area is: %d\n", last+1);
	} 
	
	
}
