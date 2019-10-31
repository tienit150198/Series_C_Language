#include <stdio.h>

int tinhTong(int a, int b){
	return (a + b);
}

int main(){
	
	int a, b, c;
	printf("Nhap a - b - c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("ket qua = %d", tinhTong(a, tinhTong(b, c)));
	
	return 0;
}
