#include <stdio.h>

using namespace std;

int test, direction_X, direction_Y;

void read_location(int x, int y){
	if (x==direction_X || y==direction_Y){
		printf("divisa\n");
	}
	else{
		if (x>direction_X){
			if (y>direction_Y){
				printf("NE\n");
			}
			else{
				printf("SE\n");
			}
		}
		else{
			if (y>direction_Y){
				printf("NO\n");
			}
			else{
				printf("SO\n");
			}
		}
	}
}

int main(){
	freopen("direction2.inp", "r", stdin);
	freopen("direction2.out", "w", stdout);
	
	while(true){
		scanf("%d", &test);
		if (test == 0){
			break;
		}
		scanf("%d %d", &direction_X, &direction_Y);
		for (int i=0; i<test; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			read_location(x, y);
		}
	}
}
