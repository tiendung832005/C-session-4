#include <stdio.h>
int main(){
	//khai bao
	int number;
	printf("Nhap so can kiem tra: ");
	scanf("%d", &number);
	// kiem tra so chan le
	if (number % 2 == 0){
		printf("Day la so chan");
	}
	else{
		printf ("Day la so le");
	}
}
