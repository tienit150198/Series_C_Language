#include <stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	
	// cach 1
	int tong = 0;
	for(int i = 1 ; i <= n; i++){
		if(i % 2 == 0)
			tong += i;
	}
	printf("Tong = %d\n", tong);
	
	// cach 2:
	tong = 0;
	for(int i = 0 ; i <= n ; i+= 2)
		tong += i;
	
	printf("Tong = %d\n", tong);
	
	return 0;
}
