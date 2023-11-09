#include <stdio.h>
int main(){
	float html, css, java;
	printf("Diem html la: ");
	scanf ("%f", &html);
	printf("Diem css la: ");
	scanf ("%f", &css);
	printf("Diem java la: ");
	scanf ("%f", &java);
	float medium_score = (html + css + java) / 3;
	if(0 <= medium_score && medium_score < 5){
		printf("Ban xep loai Yeu");
	}
	else if(5 <= medium_score && medium_score < 7){ 
		printf("Ban xep loai trung binh");
	}
	else if (7 <= medium_score && medium_score < 8){
		printf("Ban xep loai kha");
	}
	else if (8 <= medium_score && medium_score < 9){
		printf("Ban xep loai gioi");
		
	}
	else{
		printf("Ban xep loai xuat sac");
	}
}
