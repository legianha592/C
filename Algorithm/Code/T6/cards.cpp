#include <stdio.h>

using namespace std;

int card;

int main(){
	freopen("cards.inp", "r", stdin);
	freopen("cards.out", "w", stdout);
	
	while(true){
		scanf("%d", &card);
		if (card == 0){
			break;
		}
		int map[card], count = 0, position = 0;
		bool check = false;
		for (int i=0; i<card; i++){
			map[i] = 1;
		}
		while(count<card-1){
			if (map[position] == 1){
				check = !check;
				if (check == true){
					map[position] = 0;
					count++;
				}
			}
			position++;
			if (position==card){
				position = 0;
			}
		}
		for (int i=0; i<card; i++){
			if (map[i] == 1){
				printf("%d\n", i+1);
				break;
			}
		}
	}
}
