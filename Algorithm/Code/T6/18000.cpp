#include <stdio.h>

using namespace std;

int test_case, data_set;

void handle_time_remaining(int total_data, int data_set, int data_5){
	if (data_5 == 0){
		printf("Time remaining: stalled\n");
	}
	else{
		int remain_data = data_set - total_data;
		int time = remain_data*5/data_5;
		if (time*data_5 < remain_data*5){
			time++;
		}
		printf("Time remaining: %d seconds\n", time);		
	}

}

int main(){
	freopen("18000.inp", "r", stdin);
	freopen("18000.out", "w", stdout);
	
	test_case = 0;
	while(scanf("%d", &data_set) > 0){
		if (data_set == 0){
			break;
		}
		test_case++;
		printf("Output for data set %d, %d bytes:\n", test_case, data_set);
		int total_data = 0, data_5 = 0, second = 0;
		while (true){
			int data;
			scanf("%d", &data);
			total_data += data;

			second++;
			data_5 += data;
			if (second%5 == 0){
				handle_time_remaining(total_data, data_set, data_5);
				data_5 = 0;
			}
			
			if (total_data == data_set){
				break;
			}
		}
		printf("Total time: %d seconds\n\n", second);
	}
}
