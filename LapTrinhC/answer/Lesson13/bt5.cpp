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

int timPhanTu(int a[], int n , int giatri){
	for(int i = 0 ; i < n ; i++)
		if(a[i] == giatri)
			return i;
			
	return -1;
}

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n+1];
	nhapMang(a,n);
	xuatMang(a,n);
	
	int giatri;
	printf("\nNhap gia tri can tim: ");
	scanf("%d", &giatri);
	
	int vitri = timPhanTu(a,n,giatri);
	if(vitri != -1){
		printf("Phan tu tai vi tri: %d", vitri);
	}
	else{
		printf("khong tim thay");
	}
	
	
	
	
	return 0;
}
