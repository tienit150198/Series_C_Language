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
	
	int phantuLonNhat = a[0];
	// tim phan tu lon nhat
	for(int i = 1 ; i < n ; i++){
		if(a[i] > phantuLonNhat)
			phantuLonNhat = a[i];
	}
	
	printf("\nPHan tu lon nhat = %d", phantuLonNhat);

	return 0;
}
