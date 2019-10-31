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

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n];
	nhapMang(a,n);
	printf("Mang truoc khi xoa\n");
	xuatMang(a,n);
	
	int vitri;
	do{
		printf("\nNhap vi tri: ");
		scanf("%d", &vitri);
	}while(vitri < 0 || vitri > n);
	
	// xoa vi tri
	
	for(int i = vitri ; i < n - 1 ; i++){
		a[i] = a[i + 1];
	}
	n--;
	printf("\nMang sau khi xoa\n");
	xuatMang(a,n);
	
	
	return 0;
}
