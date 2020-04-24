#include <stdio.h>

using namespace std;

char mau[]="0123456789", phay[]=".";


int convert_char_to_int(char a){
	int num;
	
	for (int i=0; i<10; i++){
		if (a==mau[i]){
			num=i;
			break;
		}
	}
	

	return num;
}

char convert_int_to_char(int a){
	char letter;
	
	for (int i=0; i<10; i++){
		if (a==i){
			letter=mau[i];
			break;
		}
	}
	
	return letter;
}

int tich(char a, char b){
	int num1,num2,tich;
	
	num1 = convert_char_to_int(a);
	num2 = convert_char_to_int(b);
	tich = num1*num2;
	
	return tich;
}	

int tong(char a, char b){
	int num1,num2,tong;
	
	num1 = convert_char_to_int(a);
	num2 = convert_char_to_int(b);
	tong = num1+num2;
	
	return tong;
}

char nguyen(int a){
	char ng;
	ng = convert_int_to_char(a/10);
	
	return ng;
}

char du(int a){
	char d;
	d = convert_int_to_char(a%10);
	
	return d;
}

bool check_number(char a){
	bool kt=false;
	
	for (int i=0; i<10; i++){
			if (a==mau[i]){
				kt=true;
				break;
			}
		}
	
	return kt;
}

bool check_point(char a){
	bool kt=false;
	if (a==phay[0]){
		kt=true;
	}
	
	return kt;
}

bool check_zero(char a){
	bool kt=false;
	if (a==mau[0]){
		kt=true;
	}
	return kt;	
}




int main(){

	char num[6],thuaso1[350],thuaso2[6],tichchuso[2],ketqua[350];
	int loop, point, before_point, after_point, letter_number;
	
	freopen("expon2.txt","r",stdin);
	freopen("expon2.out","w",stdout);
	while(scanf("%s %d",&num,&loop) > 0){
		//mot so truong hop dac biet
		if (loop == 0){
			printf("Ket qua = 1");
			return 0;
		}
		if (loop == 1){
			printf("Ket qua = ");
			for (int i=0; i<6; i++){
				if ((check_number(num[i])!=false) || (check_point(num[i])!= false)){
					printf("%c",num[i]);
				}
				else{
					break;
				}
			}
			return 0;
		}
		
		
		//gan cac vung nho bang 0;
		for (int i=0; i<350; i++){
			thuaso1[i]='0';
		}
		for (int i=0; i<6; i++){
			thuaso2[i]='0';
		}
	
		
		
		//xu li so nhap vao => tim vi tri dau phay va so chu so cua so do
		point=0;
		letter_number=6;
		for (int i=0; i<6; i++){
			if (check_point(num[i])==true){
				point = i;
			}
			if ((check_number(num[i])==false) && (check_point(num[i])== false)){
				letter_number = i;
				break;
			}
		}
	//	printf("point = %d %d %d", point, letter_number, loop);
	
	
	
		
		//gan so da nhap vao thua so 2
		int count = 5;
		for (int i=letter_number-1; i>=0; i--){
			if (check_number(num[i])==true){
				thuaso2[count] = num[i];
				count--;
			}
		}
	//	for (int i=0; i<6; i++){
	//		printf("Thua so thu %d: %c\n",i,thuaso2[i]);
	//	}
	
	
		//gan so da nhap vao thua so 1
		for (int i=5; i>=0; i--){
			thuaso1[349-5+i] = thuaso2[i];
		}
	//	for (int i=0; i<350; i++){
	//		printf("Thua so thu %d: %c\n",i,thuaso1[i]);
	//	}
		
		
		//thiet lap so vong
		
		for (int k=0; k<loop-1; k++){
			//reset vung ket qua
			for (int i=0; i<350; i++){
				ketqua[i]='0';
			}
			
			//tinh tich cua thua so 1 va thua so 2
			int count1, count2, mul_letter, add_letter_nguyen, add_letter_du, maximum_letter;
			for (int i=0; i<350; i++){
				if (check_zero(thuaso1[i])==false){
					maximum_letter = i;
					break;
				}
			}
		
		
			
			
			int position=0;
			for (int j=5; j>=0; j--){
				
				for (int i=349; i>=maximum_letter; i--){
					position = 349 - ((5-j) + (349-i));
					
					mul_letter = tich(thuaso2[j], thuaso1[i]);
					tichchuso[0] = nguyen(mul_letter);
					tichchuso[1] = du(mul_letter);
					
					add_letter_du = tong(tichchuso[1], ketqua[position]);
		
					ketqua[position] = du(add_letter_du);
					if (add_letter_du<10){
						add_letter_nguyen = tong(tichchuso[0],ketqua[position-1]);
					}
					else{
						add_letter_nguyen = tong(tichchuso[0],ketqua[position-1])+1;
					}
					
					ketqua[position-1] = du(add_letter_nguyen);
					if (add_letter_nguyen>=10){
						count = 2;
						while(ketqua[position-count] == '9'){
							ketqua[position-count] = '0';
							count++;
						}
						ketqua[position-count] = convert_int_to_char(tong(ketqua[position-count],'1'));
					}

				}
			}
			
		
		
			//gan ket qua cho thua so 1
			for (int i=0; i<350; i++){
				if (check_zero(ketqua[i])==false){
					maximum_letter = i;
					break;
				}
			}
			for (int i=maximum_letter; i<350; i++){
				thuaso1[i]=ketqua[i];
			}		
			
		}
			//tinh vi tri cua dau thap phan neu co
			point = 0;
			for (int i=5; i>=0; i--){
				if (check_point(num[i])==true){
					point = 5-i;
					break;
				}
			}
			
			before_point = 0;
			for (int i=0; i<350-point; i++){
				if (check_zero(ketqua[i])== false){
					before_point = i;
					break;
				}					
			}
			after_point = 350-point;
			if (point>0){
				point *= loop;

				for (int i=349; i>=350-point; i--){
					if (check_zero(ketqua[i])== false){
						after_point = i;
						break;
					}
				}	
			}
			printf("after = %d\n",after_point);
		
			// hien thi ket qua cuoi cung

			printf("ket qua = ");
			for (int i=before_point; i<350-point; i++){
				printf("%c",ketqua[i]);
			}
			if (after_point != 350-point){
				printf(".");
				for (int i=350-point; i<=after_point; i++){
					printf("%c",ketqua[i]);
				}
			}
			printf("\n");
				
	}
	

}
