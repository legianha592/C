#include <stdio.h>

using namespace std;

int main(){
	int number_of_node, starter;
	printf("Input number of nodes: ");
	scanf("%d", &number_of_node);
	
	int map[number_of_node][number_of_node], gen[number_of_node];
	printf("Input the map:\n");
	for (int i=0; i<number_of_node; i++){
		for (int j=0; j<number_of_node; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	while(true){
		printf("Input the starter: ");
		scanf("%d",&starter);
		if (starter == 0){
			break;
		}
		
		for (int i=0; i<number_of_node; i++){
			if (i == starter-1){
				gen[i] = 0;
			}
			else{
				gen[i] = -1;
			}
		}

		int first,last,queue[number_of_node],max_distance;
		first = -1;
		last = 0;
		max_distance = 0;
		queue[0] = starter-1;
		while(first<last){
			first++;
			for (int i=0; i<number_of_node; i++){
				if (map[queue[first]][i] != 0 && gen[i] == -1){
					gen[i] = gen[queue[first]] + map[queue[first]][i];
					last++;
					queue[last] = i;
				} 
			}
		}
		
		for (int i=0; i<number_of_node; i++){
			if (gen[i] > max_distance){
				max_distance = gen[i];
			}
		}
		printf("Max distance is %d\n",max_distance);
	}
	
}
