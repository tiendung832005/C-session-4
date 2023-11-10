#include<stdio.h>
int main(){
	int number;
	printf ("NHap mot so nguyen: ");
	scanf("%d", &number);
	if(number % 3 == 0 && number % 5 == 0){
		printf("Chia het cho ca 3 va 5");
		
	}else {
		printf("Khong chia het cho 3 va 5");
	}
}
