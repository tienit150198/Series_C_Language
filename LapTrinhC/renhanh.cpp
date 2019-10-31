#include <stdio.h>
int main(){
	int tuoi;
	printf("Nhap vao tuoi cua ban: ");
	scanf("%d", &tuoi);
/*	if(tuoi > 40){
		printf("Nguoi gia");
	}
	else if(tuoi >= 18){
		printf("Truong thanh");
	}
	else
		printf("Tre em");*/
	 
	tuoi >= 18 ? printf("Truong thanh") : printf("Tre em");
	return 0;
}
