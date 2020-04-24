#include <stdio.h>

using namespace std;

int test_case, height, loop;

void draw_mountain(){
	for (int i=1; i<=height; i++){
		for (int j=0; j<i; j++){
			printf("%d",i);
		}
		printf("\n");
	}
	for (int i=height-1; i>=1; i--){
		for (int j=0; j<i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	freopen("488.inp", "r", stdin);
	freopen("488.out", "w", stdout);
	
	scanf("%d", &test_case);
	for (int number = 0; number<test_case; number++){
		scanf("%d %d", &height, &loop);
		for (int i=0; i<loop; i++){
			draw_mountain();
		}
	}
}
