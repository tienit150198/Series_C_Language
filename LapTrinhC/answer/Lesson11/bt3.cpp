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
	
	printf("Mang truoc khi xoa\n");
	// xuat mang
	for(int i = 0 ; i < n ; i++){
		printf("%-4d", a[i]);
	}
	
	// xoa phan tu dau tien ra khoi mang
	for(int i = 0 ; i < n - 1 ; i++){
		a[i] = a[i + 1];
	}
	n--;
	
	printf("\nMang sau khi xoa\n");
	// xuat mang
	for(int i = 0 ; i < n ; i++){
		printf("%-4d", a[i]);
	}

	return 0;
}
