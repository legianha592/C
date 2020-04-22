#include <stdio.h>

using namespace std;

int N, k, m;

int main(){
	freopen("dqueue.inp", "r", stdin);
	freopen("dqueue.out", "w", stdout);
	
	while (true){
		scanf("%d %d %d", &N, &k, &m);
		if (N == 0){
			break;
		}
		
		int list_people[N+1], total, first, second;
		for (int i=1; i<=N; i++){
			list_people[i] = 1;
		}
		total = N;
		first = 1;
		second = N;
		while(true){
			if (total<=0){
				break;
			}
			int count = 1;
			while(count<k){
				first++;
				if (first>N){
					first = 1;
				}
				if (list_people[first] == 1){
					count++;
				}
			}
			printf("%3d", first);
			total--;
			
			if (total<=0){
				break;
			}
			count = 1;
			while (count<m){
				second--;
				if (second<1){
					second = N;
				}
				if (list_people[second] == 1){
					count++;
				}
			}
			if (second != first){
				printf("%3d", second);
				total--;	
			}

			
			if (total>0){
				printf(",");
			}
			list_people[first] = 0;
			list_people[second] = 0;
			while(true){
				first++;
				if (first>N){
					first=1;
				}
				if (list_people[first] == 1){
					break;
				}
			}
			while(true){
				second--;
				if(second<1){
					second=N;
				}
				if (list_people[second] == 1){
					break;
				}
			}
		}
	}
}
