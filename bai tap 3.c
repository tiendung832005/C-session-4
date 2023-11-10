#include <stdio.h>
int main(){
	int new, old;
	printf ("Nhap vao so dien MOI va CU: ");
	scanf ("%d%d", &new, &old);
	int electro = new - old;
	printf ("So dien cua ban la: %d\n", electro);
	if (0 <= electro < 50){
		printf("Gia dien la: 10.000 VND");
	}
	else if (50 <= electro < 100){
		printf("Gia dien la: 15.000 VND");
	}
	else if (100 <= electro < 150){
		printf("Gia dien la: 20.000 VND");
	}
	else if (150 <= electro < 200){
		printf("Gia dien la: 25.000 VND");
	}
	else if (200 <= electro < 250){
		printf("Gia dien la: 30.000 VND");
	}
}
