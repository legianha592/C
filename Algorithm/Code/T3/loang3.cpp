#include <stdio.h>

using namespace std;

int find_max(int a, int b){
	if (a>b){
		return a;
	}
	else if (b>a){
		return b;
	}
	else{
		return -1;
	}
}

int find_min(int a, int b){
	if (a>b){
		return b;
	}
	else if (b>a){
		return a;
	}
	else{
		return -1;
	}
}

int find_different_village(int village, int a, int b){
	if (village == a){
		return b;
	}
	else if (village == b){
		return a;
	}
	else{
		return -1;
	}
}

int main(){
	//Phan 1: tao ban do vung, tinh so vung va so manh dat moi vung
	
	int number_of_village, number_of_bridge;
	printf("Nhap so lang va so cay cau: ");
	scanf("%d %d", &number_of_village, &number_of_bridge);
	
	int map[number_of_village], village1, village2, number_of_connected_zone, number_of_alone_zone, connected_x[number_of_bridge], connected_y[number_of_bridge];
	for (int i=0; i<number_of_village; i++){
		map[i] = 0;
	}
	number_of_connected_zone = 0;
	number_of_alone_zone = 0;
	printf("Nhap cac cay cau: ");
	for (int i=0; i<number_of_bridge; i++){
		scanf("%d %d", &village1, &village2);
		connected_x[i] = village1;
		connected_y[i] = village2;
		if (map[village1 -1] == 0 && map[village2 -1]== 0){
			number_of_connected_zone++;
			map[village1 -1] = number_of_connected_zone;
			map[village2 -1] = number_of_connected_zone;
		}
		else if(map[village1 -1] == 0 || map[village2 -1] == 0){
			if (map[village1 -1] == 0){
				map[village1 -1] = map[village2 -1];
			}
			else{
				map[village2 -1] = map[village1 -1];
			}
		}
		else{
			if (map[village1 -1] != map[village2 -1]){
				int max = find_max(map[village1 -1], map[village2 -1]);
				int min = find_min(map[village1 -1], map[village2 -1]);
				for (int j=0; j<number_of_village; j++){
					if (map[j] == max){
						map[j] = min;
					}
					if (map[j] > max){
						map[j]--;
					}
				}
				number_of_connected_zone--;
			}
		}
	}
	int result[number_of_connected_zone];
	for (int i=0; i<number_of_connected_zone; i++){
		result[i] = 0;
	}
	for (int i=0; i<number_of_village; i++){
		if (map[i] != 0){
			result[map[i]-1]++;
		}
		else{
			number_of_alone_zone++;
		}
	}
	
//	printf("map = ");
//	for (int i=0; i<number_of_village; i++){
//		printf("%d", map[i]);
//	}
//	printf("\n");
	
	printf("So vung la: %d\n", number_of_connected_zone+number_of_alone_zone);
	printf("So luong cac manh dat trong vung: ");
		for (int i=0; i<number_of_connected_zone; i++){
			printf("%d ", result[i]);
		}
		for (int i=0; i<number_of_alone_zone; i++){
			printf("1 ");
		}
	
	//Phan 2: tim con duong dai nhat lan luot theo cac dinh
	int land_tree[number_of_village], waiting_list[number_of_village], max_bridge, counting_bridge, number_of_waiting_village;
	bool checked_bridge[number_of_bridge], checked_village[number_of_village];
	
	max_bridge = 0; //so cay cau lon nhat cua toan mang luoi
	for (int i=0; i<number_of_village; i++){
		counting_bridge = 0; //so cay cau lon nhat cua dinh thu i
		for (int j=0; j<number_of_bridge; j++){
			checked_bridge[j] = false;
		}
		for (int j=0; j<number_of_village; j++){
			checked_village[j] = false;
			waiting_list[j] = 0;
			land_tree[j] = -1;
		}
		waiting_list[0] = i+1;
		checked_village[i] = true;
		land_tree[i] = 0; //lang dang xet tro thanh vi tri so 0 de ve cay so do
		number_of_waiting_village = 1;
		
		//bat dau thuat toan bfs
		while (number_of_waiting_village>0){
			//tim cac cay cau co noi voi dinh waiting_list[0]
			for (int j=0; j<number_of_bridge; j++){
				if (checked_bridge[j] == false){ //neu cay cau chua duoc xet thi:
					int number = find_different_village(waiting_list[0], connected_x[j], connected_y[j]); //cau co chua lang dinh va lang dang xet hay khong?
					if (number != -1){
						checked_bridge[j] = true; //loai bo cay cau co chua lang dang xet ra khoi lan xet ke tiep
						if (checked_village[number-1] == false){ //neu lang dang xet chua duoc noi voi mang luoi thi:
							checked_village[number-1] = true; //cho lang dang xet vao danh sach da noi voi mang luoi
							waiting_list[number_of_waiting_village] = number; //cho lang dang xet vao danh sach cho xet dinh tiep theo
							number_of_waiting_village++; //tang so dinh cho xet len 1 don vi (la lang vua xet xong)
							land_tree[number-1] = land_tree[waiting_list[0]-1] +1; //lang dang xet tro thanh nhanh moi cua lang dinh
							if (land_tree[number-1] > counting_bridge){ //neu nhu nhanh moi lon hon so cay cau lon nhat cua dinh thu i thi
								counting_bridge = land_tree[number-1]; //update lai so cay cau lon nhat
							}
						}
					}
				}
			}
			
//			printf("\nbridge = ");
//			for (int j=0; j<number_of_bridge; j++){
//				if (checked_bridge[j] == true){
//					printf("T ");
//				}
//				else{
//					printf("F ");
//				}
//			}
//			printf("\nmap = ");
//			for (int j=0; j<number_of_village; j++){
//				printf("%d ",land_tree[j]);
//			}
//			printf("\n");

			//sau khi da cho cac lang dang xet vao danh sach dinh cho => loai bo dinh waiting_list[0] ra khoi danh sach cho
			for (int j=0; j<number_of_waiting_village; j++){
				waiting_list[j] = waiting_list[j+1];
			}
			number_of_waiting_village--;
		}
		
		if (counting_bridge > max_bridge){// neu nhu so cau toi da cua dinh i dang lon hon so cau toi da cua cac dinh da xet thi gan lai
			max_bridge = counting_bridge;
		}
		printf("\nSo cay cau lon nhat cua vung thu %d la: %d", i+1, counting_bridge);
	}
	//sau khi xet tat ca cac dinh, dua ra ket qua cuoi cung
	printf("\nSo cay cau lon nhat la: %d", max_bridge);
	
}
