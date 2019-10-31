#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap n:");
	scanf("%d", &n);
	
	int a[n];
	
	// nhap mang
	for(int i = 0 ; i < n ;i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// xuat mang
	for(int i = 0 ; i < n ; i++){
		printf("%-4d", a[i]);
	}
	
	int tong = 0;
	// tinh tong
	for(int i = 0 ; i < n ; i++){
		tong += a[i];
	}
	
	printf("\nTong = %d", tong);

	return 0;
}
