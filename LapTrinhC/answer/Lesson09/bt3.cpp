#include <stdio.h>

int main(){
	int a;
	
	printf("Nhap a: ");
	scanf("%d", &a);
	
	int tong = 0, giaithua = 1;
	
	// a, S(n) = 1! + 2! + 3! +...+ n!
	for(int i = 1 ; i <= a ; i++){
		giaithua *= i;
		tong += giaithua;
	}
	
	printf("Ket qua = %d\n", tong);
	
	// b,  S(n)= 1/2 + 1/3 + 1/4 +....+1/n.
	
	float tongB = 0;
	for(int i = 2 ; i <= a ; i++){
		tongB += 1 / (float)i;
	}
	
	printf("ket qua = %.2f", tongB);
	
	
	return 0;
}
