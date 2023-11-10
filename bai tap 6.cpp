#include<stdio.h>
int main(){
	int number1, number2, number3;
	printf ("Nhap vao 3 so: ");
	scanf ("%d%d%d", &number1, &number2, &number3);
	if (number1<number2<number3 && number1<number3<number2 && number2<number1<number3 && number2<number3<number1 && number3<number2<number1 && number3<number1<number2){
		printf ("So lon nhat la %d So be nhat la %d So con lai &d", number1, number2, number3);
		
	}
	
}
