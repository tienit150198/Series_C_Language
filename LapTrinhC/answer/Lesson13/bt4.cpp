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
	
	int a[n+1];
	nhapMang(a,n);
	printf("Mang truoc khi chen\n");
	xuatMang(a,n);
	
	int vitri, giatri;
	do{
		printf("\nNhap vi tri: ");
		scanf("%d", &vitri);
	}while(vitri < 0 || vitri > n);
	
	printf("Nhap gia tri can chen: ");
	scanf("%d", &giatri);
	// xoa vi tri
	
	for(int i = n ; i > vitri ; i--){
		a[i] = a[i - 1];
	}
	a[vitri] =  giatri;
	n++;
	printf("\nMang sau khi chen\n");
	xuatMang(a,n);
	
	
	return 0;
}
