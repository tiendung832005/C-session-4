#include <stdio.h>
int main(){
	int date, month, year;
    printf("Nhap vao Ngay: ");
	scanf("%d", &date);
	printf("Nhap vao Thang: ");
	scanf ("%d", &month);
	printf ("Nhap vao Nam: ");
	scanf ("%d", &year);
	if(year > 0){
		printf ("Nam hop le!");
		
	}
	if (1 <= month <= 12){
		printf("Thang hop le!");
	
	}
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (0<date<=31){
				printf ("Ngay hop le!");
			}
			else{
				printf ("Ngay khong hop le!");
			}
		break;
		case 2:
			if (0<date<=29){
				printf("Ngay hop le!");
			}
			else {
				printf ("Ngay khong hop le!");
				
			}
 		break;
		case 4: case 6: case 9: case 11:
			if (0<date<=30){
				printf("Ngay hop le!");
			}
			else{
				printf("Ngay khong hop le!");
			}
		break;
	}
	

}

