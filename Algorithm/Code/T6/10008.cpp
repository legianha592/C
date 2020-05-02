#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char mau1[]="abcdefghijklmnopqrstuvwxyz", mau2[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int number, list_letter[26];

void check_letter(char letter){
	for (int i=0; i<26; i++){
		if (letter == mau1[i] || letter == mau2[i]){
			list_letter[i]++;
			break;
		}
	}
}

void swift_letter(char &a, char &b){
	char c = a;
	a = b;
	b = c;
}

void swift_number(int &a, int &b){
	char c = a;
	a = b;
	b = c;
}

void arrange_letter(){
	for (int i=25; i>0; i--){
		bool check = false;
		for (int j=0; j<i; j++){
			bool swift = false;
			if (list_letter[j] < list_letter[j+1]){
				swift = true;
			}
			else if (list_letter[j] == list_letter[j+1] && mau2[j] > mau2[j+1]){
				swift = true;
			}
			if (swift == true){
				swift_letter(mau2[j], mau2[j+1]);
				swift_number(list_letter[j], list_letter[j+1]);
				check = true;
			}
		}
		if (check == false){
			break;
		}
	}
}

int main(){
	freopen("10008.inp", "r", stdin);
	freopen("10008.out", "w", stdout);
	
	for (int i=0; i<26; i++){
		list_letter[i] = 0;
	}
	scanf("%d", &number);
	for (int i=0; i<=number; i++){
		int length;
		char str[200];
		cin.getline(str, 200);
		length = strlen(str);
		for (int j=0; j<length; j++){
			check_letter(str[j]);
		}
	}	
	arrange_letter();
	for (int i=0; i<26; i++){
		if (list_letter[i] > 0){
			printf("%c %d\n", mau2[i], list_letter[i]);
		}
		else{
			break;
		}
	}
}
