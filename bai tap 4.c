#include<stdio.h>
int main(){
	int month, year;
	printf("nhap thang 1 den 12: ");
	scanf("%d", &month);
	printf ("Nhap vao nam ");
	scanf("%d", &year);
	switch (month){
		
		case 1:
		printf("Co 31 ngay");
		break;
		case 3:
		printf("Co 31 ngay");
		break;
		case 5:
		printf("Co 31 ngay");
		break;
		case 7:
		printf("Co 31 ngay");
		break;
		case 8:
		printf("Co 31 ngay");
		break;
		case 10:
		printf("Co 31 ngay");
		break;
		case 12:
		printf("Co 31 ngay");
		break;
		case 4:
		printf("Co 30 ngay");
		break;
		case 6:
		printf("Co 30 ngay");
		break;
		case 9:
		printf("Co 30 ngay");
		break;
		case 11:
		printf("Co 30 ngay");
		break;
		if (year % 4 == 0){
			printf("Thang 2 co 29 ngay");
		}
		else {
			printf("Thang 2 co 28 ngay");
		}
	
	}
		if (year % 4 == 0){
			printf("Thang 2 co 29 ngay");
		}
		else {
			printf("Thang 2 co 28 ngay");
		}
		
    
	
}
