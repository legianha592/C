#include <stdio.h>
#include <cmath>

using namespace std;

bool check_map;
char map[8][8];
int checked;

bool check_inside(int i, int j){
	if (i>7 || i<0){
		return false;
	}
	if (j>7 || j<0){
		return false;
	}
	return true;
}

void check_pawn(int type, int pos_i, int pos_j){
	//check black
	if (type == -1){
		if (check_inside(pos_i+1, pos_j-1) == true){
			if (map[pos_i+1][pos_j-1] == 'K'){
				checked = -1;
			}
		}
		if (checked == 0){
			if (check_inside(pos_i+1, pos_j+1) == true){
				if (map[pos_i+1][pos_j+1] == 'K'){
					checked = -1;
				}
			}
		}
	}
	//check white
	if (type == 1 && checked == 0){
		if (check_inside(pos_i-1, pos_j-1) == true){
			if (map[pos_i-1][pos_j-1] == 'k'){
				checked = 1;
			}
		}
		if (checked == 0){
			if (check_inside(pos_i-1, pos_j+1) == true){
				if (map[pos_i-1][pos_j+1] == 'k'){
					checked = 1;
				}
			}
		}		
	}
	
//	if (checked == 1){
//		printf("white pawn checked\n");
//	}
//	if (checked == -1){
//		printf("black pawn checked\n");
//	}
}

void check_rook(int type, int pos_i, int pos_j){
	int i=pos_i-1;
	while(true){
		if (check_inside(i, pos_j) == false){
			break;
		}
		if (map[i][pos_j] != '.'){
			if (type == -1 && map[i][pos_j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][pos_j] == 'k'){
				checked = 1;
			}
			break;
		}
		i--;
	}
	
	i=pos_i+1;
	while(true){
		if (check_inside(i, pos_j) == false){
			break;
		}
		if (map[i][pos_j] != '.'){
			if (type == -1 && map[i][pos_j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][pos_j] == 'k'){
				checked = 1;
			}
			break;
		}
		i++;
	}
	
	int j=pos_j-1;
	while(true){
		if (check_inside(pos_i, j) == false){
			break;
		}
		if (map[pos_i][j] != '.'){
			if (type == -1 && map[pos_i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[pos_i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		j--;
	}
	
	j=pos_j+1;
	while(true){
		if (check_inside(pos_i, j) == false){
			break;
		}
		if (map[pos_i][j] != '.'){
			if (type == -1 && map[pos_i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[pos_i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		j++;
	}
	
//	if (checked == 1){
//		printf("white rook checked\n");
//	}
//	if (checked == -1){
//		printf("black rook checked\n");
//	}
}

void check_bishop(int type, int pos_i, int pos_j){
	int i=pos_i+1, j= pos_j+1;
	while(true){
		if (check_inside(i, j) == false){
			break;
		}
		if (map[i][j] != '.'){
			if (type == -1 && map[i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		i++;
		j++;
	}
	
	i=pos_i+1;
	j=pos_j-1;
	while(true){
		if (check_inside(i, j) == false){
			break;
		}
		if (map[i][j] != '.'){
			if (type == -1 && map[i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		i++;
		j--;
	}

	i=pos_i-1;
	j=pos_j+1;
	while(true){
		if (check_inside(i, j) == false){
			break;
		}
		if (map[i][j] != '.'){
			if (type == -1 && map[i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		i--;
		j++;
	}

	i=pos_i-1;
	j=pos_j-1;
	while(true){
		if (check_inside(i, j) == false){
			break;
		}
		if (map[i][j] != '.'){
			if (type == -1 && map[i][j] == 'K'){
				checked = -1;
			}
			if (type == 1 && map[i][j] == 'k'){
				checked = 1;
			}
			break;
		}
		i--;
		j--;
	}

//	if (checked == 1){
//		printf("white bishop checked\n");
//	}
//	if (checked == -1){
//		printf("black bishop checked\n");
//	}
}

void check_queen(int type, int pos_i, int pos_j){
	check_rook(type, pos_i, pos_j);
	if (checked == 0){
		check_bishop(type, pos_i, pos_j);		
	}
	
//	if (checked == 1){
//		printf("white queen checked\n");
//	}
//	if (checked == -1){
//		printf("black queen checked\n");
//	}	
}

void check_knight(int type, int pos_i, int pos_j){
	bool check = false;
	for (int i=-2; i<=2; i++){
		for (int j=-2; j<=2; j++){
			if (i != 0 && abs(i)+abs(j) == 3){
				if (check_inside(pos_i+i, pos_j+j) == true){
					if (type == -1 && map[pos_i+i][pos_j+j] == 'K'){
						checked = -1;
					}
					if (type == 1 && map[pos_i+i][pos_j+j] == 'k'){
						checked = 1;
					}
					if(checked != 0){
						check = true;
						break;
					}					
				}
			}
		}
		if (check == true){
			break;
		}
	}
	
//	if (checked == 1){
//		printf("white knight checked\n");
//	}
//	if (checked == -1){
//		printf("black knight checked\n");
//	}	
}

void check_chess(char chess, int pos_i, int pos_j){
	//black chess
	if (chess == 'p'){
		check_pawn(-1, pos_i, pos_j);
	}
	if (chess == 'r'){
		check_rook(-1, pos_i, pos_j);
	}
	if (chess == 'b'){
		check_bishop(-1, pos_i, pos_j);
	}
	if (chess == 'q'){
		check_queen(-1, pos_i, pos_j);
	}
	if (chess == 'n'){
		check_knight(-1, pos_i, pos_j);
	}
	//white chess
	if (chess == 'P'){
		check_pawn(1, pos_i, pos_j);
	}
	if (chess == 'R'){
		check_rook(1, pos_i, pos_j);
	}
	if (chess == 'B'){
		check_bishop(1, pos_i, pos_j);
	}
	if (chess == 'Q'){
		check_queen(1, pos_i, pos_j);
	}
	if (chess == 'N'){
		check_knight(1, pos_i, pos_j);
	}
}

int main(){
	freopen("incheck.inp", "r", stdin);
	freopen("incheck.out", "w", stdout);
	
	int count = 1;
	while(true){
		check_map = false;
		for (int i=0; i<8; i++){
			char string[8];
			scanf("%s", &string);
			for (int j=0; j<8; j++){
				map[i][j] = string[j];
				if (string[j] != '.'){
					check_map = true;
				}
			}
		}
//		printf("map = \n");
//		for (int i=0; i<8; i++){
//			for (int j=0; j<8; j++){
//				printf("%c", map[i][j]);
//			}
//			printf("\n");
//		}
		if (check_map == false){
			break;
		}
		
		checked = 0;
		for (int i=0; i<8; i++){
			for (int j=0; j<8; j++){
				if (map[i][j] != '.'){
					check_chess(map[i][j], i, j);
					if (checked != 0){
						break;
					}
				}
			}
			if (checked != 0){
				break;
			}
		}
		if (checked == 1){
			printf("Game #%d: black king is in check.\n", count);			
		}
		else if (checked == -1){
			printf("Game #%d: white king is in check.\n", count);
		}
		else{
			printf("Game #%d: no king is in check.\n", count);
		}
		count++;
	}
}
