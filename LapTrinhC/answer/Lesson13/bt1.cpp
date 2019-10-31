#include <stdio.h>

void nhapMang(int a[], int n){
	for(int i = 0 ; i < n; i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n){
	for(int i = 0 ; i < n; i++){
		printf("%-4d", a[i]);
	}
}

int tinhTong(int a[], int n){
	int tong = 0;
	for(int i = 0 ; i < n ;i++){
		tong += a[i];
	}
	
	return tong;
}

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n];
	
	nhapMang(a,n);
	xuatMang(a,n);
	
	int tong = tinhTong(a,n);
	
	printf("\nTong = %d", tong);
	
	return 0;
}
