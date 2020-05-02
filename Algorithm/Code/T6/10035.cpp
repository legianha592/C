#include <stdio.h>

using namespace std;

int numb1, numb2, count, total, remember;

int main(){
	freopen("10035.inp", "r", stdin);
	freopen("10035.out", "w", stdout);
	
	while(true){
		scanf("%d %d", &numb1, &numb2);
		if (numb1 == 0 || numb2 == 0){
			break;
		}
		count = 0;
		remember = 0;
		while (numb1>0 && numb2>0){
			total = numb1%10 + numb2%10 + remember;
			if (total>=10){
				count++;
				remember = 1;
			}
			else{
				remember = 0;
			}
			numb1 /= 10;
			numb2 /= 10;
		}
		if (count == 0){
			printf("No carry operation.\n");
		}
		else if (count == 1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", count);
		}
	}
}
