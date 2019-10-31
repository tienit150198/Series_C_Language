#include <stdio.h>

int main(){
	int x = 9;
	float res = (x - 2)*(4*x - 9) - 5 + (x - 2) / 2.0;	// ep kieu sang so thuc
//	float res = (x - 2)*(4*x - 9) - 5 + (x - 2) /(float) 2;	// ban cung co the ep theo kieu binh thuong
	
	printf("ket qua = %.2f", res);
	
	return 0;
}
