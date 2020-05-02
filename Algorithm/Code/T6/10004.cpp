#include <stdio.h>

using namespace std;

int node, line, map[200], list_node1[200], list_node2[200], list_check_line[200];
bool checked[200], can_draw;

int different_node (int a, int b, int current_node){
	if (a == current_node){
		return b;
	}
	return a;
}

bool check_all_line(){
	for (int i=0; i<line; i++){
		if (list_check_line[i] == false){
			return false;
		}
	}
	return true;
}

int main(){
	freopen("10004.inp", "r", stdin);
	freopen("10004.out", "w", stdout);
	
	while(true){
		scanf("%d", &node);
		if (node == 0){
			break;
		}
		scanf("%d", &line);
		
		for (int i=0; i<node; i++){
			map[i] = -1;
		}
		for (int i=0; i<line; i++){
			scanf("%d %d", &list_node1[i], &list_node2[i]);
			list_check_line[i] = false;
		}
		
		int queue[200], first = -1, last = 0;
		map[0] = 0;
		queue[0] = 0;
		can_draw = true;
		while(check_all_line() == false){
			first++;
			for (int i=0; i<line; i++){
				if (list_node1[i] == queue[first] || list_node2[i] == queue[first]){
					list_check_line[i] = true;
					int current_node = different_node(list_node1[i], list_node2[i], queue[first]);
					last++;
					queue[last] = current_node;
					if (map[current_node] == -1){
						if (map[queue[first]] == 0){
							map[current_node] = 1;
						}
						else{
							map[current_node] = 0;
						}
					}
					else{
						if (map[current_node] == map[queue[first]]){
							can_draw = false;
							break;
						}
					}
				}
			}
			if (can_draw == false){
				break;
			}
		}
		if (can_draw == true){
			printf("BICOLORABLE\n");
		}
		else{
			printf("NOT BICOLORABLE\n");
		}
	}
}
