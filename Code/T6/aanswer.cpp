#include <stdio.h>

using namespace std;

int main(){
	freopen("aanswer.inp", "r", stdin);
	freopen("aanswer.out", "w", stdout);
	
	int test_case, number;
	scanf("%d", &test_case);
	for (int i=0; i<test_case; i++){
		scanf("%d", &number);
		number = ((number*63+7492)*5-498)/10;
		if (number<0){
			number = -number;
		}
		int mod = number%10;
		printf("%d\n", mod);
	}
}
