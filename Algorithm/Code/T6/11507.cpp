#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	freopen("11507.inp", "r", stdin);
	freopen("11507.out", "w", stdout);
	
	int number_of_book;
	while (scanf("%d", &number_of_book)>0){
		int delta, total, money, book1, book2, list_book[number_of_book];
		for (int i=0; i<number_of_book; i++){
			scanf("%d", &list_book[i]);
		}
		scanf("%d", &money);
		
		delta = money;
		total = 0;
		for (int i=0; i<number_of_book-1; i++){
			for (int j=i+1; j<number_of_book; j++){
				int sum = list_book[i] + list_book[j];
				if (sum == total){
					int sub = abs(list_book[i] - list_book[j]);
					if (sub < delta){
						delta = sub;
						book1 = list_book[i];
						book2 = list_book[j];
					}
				}
				if (sum>total && sum<=money){
					total = sum;
					delta = abs(list_book[i] - list_book[j]);
					book1 = list_book[i];
					book2 = list_book[j];
				}
			}
		}
		
		printf("Peter should buy books whose prices are %d and %d.\n\n", book1, book2);
	}
}
