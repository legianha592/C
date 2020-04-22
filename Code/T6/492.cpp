#include <stdio.h>

using namespace std;

char mau1[]="AEIOU", mau2[]="aeiou", letter1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", letter2[]="abcdefghijklmnopqrstuvwxyz";

bool check_letter(char a){
	for (int i=0; i<26; i++){
		if (a==letter1[i] || a==letter2[i]){
			return true;
		}
	}
	return false;
}

int check_length(char string[]){
	int count = 0;
	while(check_letter(string[count]) == true){
		count++;
	}
	return count;
}

bool check_vowel(char string[]){
	for (int i=0; i<5; i++){
		if (string[0] == mau1[i] || string[0] == mau2[i]){
			return true;
		}
	}
	return false;
}

void handle_not_vowel(char string[], int length){
	char character = string[0];
	printf(" ");
	for (int i=1; i<length; i++){
		printf("%c", string[i]);
	}
	printf("%c", character);
	printf("ay");
}

void handle_vowel(char string[], int length){
	printf(" ");
	for (int i=0; i<length; i++){
		printf("%c", string[i]);
	}
	printf("ay");
}

int main(){
	freopen("492.inp", "r", stdin);
	freopen("492.out", "w", stdout);
	
	char word[20];
	
	while(scanf("%s", &word)>0){
		int length = check_length(word);

		if (check_vowel(word) == false){
			handle_not_vowel(word, length);
		}
		else{
			handle_vowel(word, length);
		}			
	}
}
