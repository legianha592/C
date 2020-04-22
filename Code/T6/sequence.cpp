#include <stdio.h>

using namespace std;

int test, length, max[3];

void swift(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}


void arrange_max(){
	for (int i=2; i>0; i--){
		bool check = false;
		for (int j=0; j<i; j++){
			if (max[j]>max[j+1]){
				swift(max[j], max[j+1]);
				check = true;
			}
		}
		if (check == false){
			break;
		}
	}
}

void handle_max(int numb){
	if (numb>max[0]){
		max[0] = numb;
		arrange_max();
	}
}

int main(){
	freopen("sequence.inp", "r", stdin);
	freopen("sequence.out", "w", stdout);
	
	scanf("%d", &test);
	for (int count_test = 0; count_test<test; count_test++){
		scanf("%d", &length);
		int list[length];
		
		for (int i=0; i<length; i++){
			scanf("%d", &list[i]);
		}
		
		for (int i=0; i<3; i++){
			max[i] = list[i];
		}
		arrange_max();
		for (int i=3; i<length; i++){
			handle_max(list[i]);
		}
		int result = max[0] + 2*max[1] + 3*max[2];
		printf("%d", result);
	}
	
}
