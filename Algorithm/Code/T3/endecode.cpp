#include <stdio.h>
#include <cstring>

using namespace std;

char mau[] = "0123456789", maukitu1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", maukitu2[] = "abcdefghijklmnopqrstuvxyz", maukitu3[] = " !,.:;?";
int mauso1[26], mauso2[26], mauso3[7] = {32,33,44,46,58,59,63};

bool check_kind_of_number (char a){
	bool kt = false;
	for (int i=0; i<10; i++){
		if (a==mau[i]){
			kt = true;
			break;
		}
	}
	return kt;
}

int switch_number_letter (int a){
	int array[3], number;
	for (int i=0; i<3; i++){
		array[i] = a%10;
		a=a/10;
	}
	number = array[0]*100+array[1]*10+array[2];
	return number;	
}

int search_number_from_letter (char a){
	for (int i=0; i<26; i++){
		if (maukitu1[i] == a){
			return mauso1[i];
		}
		if (maukitu2[i] == a){
			return mauso2[i];		
		}
		if (maukitu3[i] == a){
			return mauso3[i];
		}
	}
}

int main(){
	char mang[200];
	for (int i=0; i<26; i++){
		mauso1[i] = 65+i;
		mauso2[i] = 97+i;
	}
	printf("Nhap mang: ");
	scanf("%s", &mang);
	printf("Ket qua: ");
	if (check_kind_of_number(mang[0]) == false){
		for (int i=strlen(mang)-1; i>=0; i--){
			printf("%d", switch_number_letter(search_number_from_letter(mang[i])));
		}	
	}
}
