#include <stdio.h>

using namespace std;

int day, number_of_work, prev_hour, prev_min, next_hour, next_min, start_hour, start_min;
char mau[]="0123456789";

int find_number(char a){
	for (int i=0; i<10; i++){
		if (a==mau[i]){
			return i;
		}
	}
	return -1;
}

void convert_prev_time (char string[]){
	prev_hour = 10 + find_number(string[1]);
	prev_min = 10*find_number(string[3]) + find_number(string[4]);
}

void convert_next_time(char string[]){
	next_hour = 10 + find_number(string[1]);
	next_min = 10*find_number(string[3]) + find_number(string[4]);
}

int main(){
	freopen("longnap.inp", "r", stdin);
	freopen("longnap.out", "w", stdout);
	
	day = 0;
	char string_number[20];
	while(scanf("%s", &string_number) > 0){
		if (find_number(string_number[0]) > 0){
			day++;
			number_of_work = find_number(string_number[0]);
			
			prev_hour = 10, prev_min = 0;
			int count = 0, delta_time = 0;
			while(count<number_of_work){
				char string1[20];
				scanf("%s", &string1);
				if (string1[0] == '1'){
					count++;
					convert_next_time(string1);
					int time;
					if (next_min>prev_min){
						time = (next_hour-prev_hour)*60 + (next_min-prev_min);
					}
					else{
						time = (next_hour-prev_hour-1)*60 + (60+next_min-prev_min);
					}
					if (time>delta_time){
						delta_time = time;
						start_hour = prev_hour;
						start_min = prev_min;
					}
					
					char string2[5];
					scanf("%s", &string2);
					convert_prev_time(string2);
				}
			}
			
			next_hour = 18, next_min = 0;
			int time;
			if (next_min>prev_min){
				time = (next_hour-prev_hour)*60 + (next_min-prev_min);
			}
			else{
				time = (next_hour-prev_hour-1)*60 + (60+next_min-prev_min);
			}
			if (time>delta_time){
				delta_time = time;
				start_hour = prev_hour;
				start_min = prev_min;
			}	
			
			int hour = delta_time/60;
			int min = delta_time%60;
			if (hour == 0){
				if (start_min<10){
					printf("Day #%d: the longest nap starts at %d:0%d and will last for %d minutes.\n", day, start_hour, start_min, min);					
				}
				else{
					printf("Day #%d: the longest nap starts at %d:%d and will last for %d minutes.\n", day, start_hour, start_min, min);					
				}
			}
			else{
				if (start_min<10){
					printf("Day #%d: the longest nap starts at %d:0%d and will last for %d hours and %d minutes.\n", day, start_hour, start_min, hour, min);				
				}
				else{
					printf("Day #%d: the longest nap starts at %d:%d and will last for %d hours and %d minutes.\n", day, start_hour, start_min, hour, min);				
				}

			}
	
		}
	}
}
