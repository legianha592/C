#include <stdio.h>

using namespace std;

int number_of_player, number_of_case;
float list_win[100], list_lost[100];

void reset_list(int number){
	for (int i=1; i<= number; i++){
		list_win[i] = 0;
		list_lost[i] = 0;
	}
}

void handle_result(int player1, char decision1[], int player2, char decision2[]){
	if (decision1[0] != decision2[0]){
		if (decision1[0] == 'r'){
			if (decision2[0] == 'p'){
				list_lost[player1] += 1;
				list_win[player2] += 1;
			}
			else{
				list_win[player1] += 1;
				list_lost[player2] += 1;
			}
		}
		else if(decision1[0] = 'p'){
			if (decision2[0] == 's'){
				list_lost[player1] += 1;
				list_win[player2] += 1;
			}
			else{
				list_win[player1] += 1;
				list_lost[player2] += 1;
			}		
		}
		else{
			if (decision2[0] == 'r'){
				list_lost[player1] += 1;
				list_win[player2] += 1;
			}
			else{
				list_win[player1] += 1;
				list_lost[player2] += 1;
			}
		}
	}
}

int main(){
	freopen("rockps.inp", "r", stdin);
	freopen("rockps.out", "w", stdout);
	
	while(true){
		scanf("%d", &number_of_player);
		if (number_of_player == 0){
			break;
		}
		scanf("%d", &number_of_case);
		
		reset_list(number_of_player);
		for (int i=0; i<number_of_case; i++){
			int player1, player2;
			char decision1[10], decision2[10];
			scanf("%d %s %d %s", &player1, &decision1, &player2, &decision2);
			handle_result(player1, decision1, player2, decision2);
		}
		
		for (int i=1; i<=number_of_player; i++){
			if (list_win[i] + list_lost[i] == 0){
				printf("-\n");
			}
			else{
				float ratio = list_win[i]/(list_win[i] + list_lost[i]);
				printf("%0.3f\n", ratio);
			}
		}
		printf("\n");
	}
}
