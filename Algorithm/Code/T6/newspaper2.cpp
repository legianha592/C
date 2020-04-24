#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int test, number_of_letter;
float list_price[500], total_price;
char list_letter[500];

void check_letter(char letter){
	for (int i=0; i<number_of_letter; i++){
		if (letter == list_letter[i]){
			total_price += list_price[i];
//			printf("letter %c = %0.2f\n", letter, list_price[i]);
			break;
		}
	}
}

int main(){
	freopen("newspaper2.inp", "r", stdin);
	freopen("newspaper2.out", "w", stdout);
	
	scanf("%d", &test);
	for (int count_test=0; count_test<test; count_test++){
		scanf("%d", &number_of_letter);

		for (int i=0; i<number_of_letter; i++){
			char string[1];
			scanf("%s", &string);
			list_letter[i] = string[0];
			
			scanf("%f", &list_price[i]);
			list_price[i] /= 100;
//			printf("list price %d = %0.2f\n", i, list_price[i]);
		}
		
		total_price = 0;
		int line;
		scanf("%d", &line);
		
		//co ve nhu con tro scan tiep ngay sau vi tri cua line nen phai +1 dong
		for (int i=0; i<=line; i++){
			char string[500];
			cin.getline(string, 500);
			int length = strlen(string);
			for (int j=0; j<length; j++){
				check_letter(string[j]);
			}
//			cout << string;
//			printf("after line %d = %0.2f\n\n", i+1, total_price);
		}
		printf("%0.2f$\n", total_price);
	}
}
