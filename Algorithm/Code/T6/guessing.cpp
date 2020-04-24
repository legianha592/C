#include <stdio.h>

using namespace std;

int first_guess, list_guess[10], list_big_and_small[10], count;
char string1[5], string2[5];

int main(){
	freopen("guessing.inp", "r", stdin);
	freopen("guessing.out", "w", stdout);
	
	while (true){
		scanf("%d", &first_guess);
		if (first_guess == 0){
			break;
		}
		
		count = 0;
		list_guess[0] = first_guess;
		while(true){
			scanf("%s %s", &string1, &string2);
			if (string1[0] == 'r'){
				break;
			}
			else{
				if (string2[0] == 'l'){
					list_big_and_small[count] = 0;
				}
				else{
					list_big_and_small[count] = 1;
				}
			}
			count++;
			scanf("%d", &list_guess[count]);
		}
		
		bool check = true;
		for (int i=0; i<count; i++){
			if (list_guess[i] < list_guess[count] && list_big_and_small[i] == 1){
				check = false;
				break;
			}
			if (list_guess[i] > list_guess[count] && list_big_and_small[i] == 0){
				check = false;
				break;
			}
		}
		if (check == true){
			printf("Stan may be honest.\n");
		}
		else{
			printf("Stan is dishonest.\n");
		}
	}
}
