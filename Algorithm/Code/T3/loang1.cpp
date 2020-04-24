#include <stdio.h>

using namespace std;

void swift(int &x, int &y){
	int number = x;
	x = y;
	y = number;
}


int main(){
	int row, column;
	printf("Nhap so hang va so cot cua manh dat: ");
	scanf("%d %d", &row, &column);

	if (row>0 && column>0){
		int land[row][column], waiting_list_row[row*column], waiting_list_column[row*column], result[row*column], current_row, current_column;
		bool check[row][column];
		printf("Nhap so do manh dat:\n");
		for (int i=0; i<row; i++){
			for (int j=0; j<column; j++){
				scanf("%d", &land[i][j]);
			}
		}
		for (int i=0; i<row; i++){
			for (int j=0; j<column; j++){
				if (land[i][j] == 0){
					check[i][j] = true;
				}
				else{
					check[i][j] = false;
				}	
			}
		}

		for (int i=0; i<row*column; i++){
			waiting_list_row[i] = 0;
			waiting_list_column[i] = 0;
		}
		
		int count_result = 0;
		for (int i=0; i<row; i++){
			for (int j=0; j<column; j++){
				if (check[i][j] == true){
					//bat dau thuat toan bfs tai cac vi tri co dat
					check[i][j] = false;
					waiting_list_row[0] = i;
					waiting_list_column[0] = j;
					int count = 1;
					result[count_result] = 1;
					
					while (count>0){
						current_row = waiting_list_row[0];
						current_column = waiting_list_column[0];
						if (check[current_row][current_column+1] == true){
							waiting_list_row[count] = current_row;
							waiting_list_column[count] = current_column+1;
							count++;
							result[count_result] ++;
							check[current_row][current_column+1] = false;
						}
						if (check[current_row-1][current_column] == true){
							waiting_list_row[count] = current_row-1;
							waiting_list_column[count] = current_column;
							count++;
							result[count_result] ++;
							check[current_row-1][current_column] = false;
						}
						if (check[current_row+1][current_column] == true){
							waiting_list_row[count] = current_row+1;
							waiting_list_column[count] = current_column;
							count++;
							result[count_result] ++;
							check[current_row+1][current_column] = false;
						}
						for (int k=0; k<count; k++){
							waiting_list_row[k] = waiting_list_row[k+1];
							waiting_list_column[k] = waiting_list_column[k+1];
						}
						count--;
					}
					
					printf("test = %d %d\n", count_result, result[count_result]);
					for (int i1=0; i1<row; i1++){
						for (int j1=0; j1<column; j1++){
							if (check[i1][j1] == true){
								printf("T ");
							}
							else{
								printf("F ");
							}
						}
						printf("\n");
					}
					
					count_result++;
				}
			}
		}
		//thuat toan sap xep cac gia tri theo thu tu tang dan
//		bool check_arrange;
//		for (int i=0; i<count_result; i++){
//			check_arrange = false;
//			for (int j=0; j<count_result-i; j++){
//				if (result[j] > result[j+1]){
//					swift(result[j], result[j+1]);
//					check_arrange = true;
//				}
//			}
//			
//			if (check_arrange == false){
//				break;
//			}
//		}
		
		printf("So manh dat la: %d\n", count_result);
		printf("Dien tich cac manh dat la: ");
		for (int i=0; i<=count_result; i++){
			printf("%2d",result[i]);
		}
		
	}
}
