#include <stdio.h>
#include <math.h>

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

bool kiemtraSNT(int a){
	if(a < 2)
		return false;
	int isSqrt = sqrt(a);
	
	for(int i = 2 ; i <= isSqrt ; i++)
		if(a % i == 0)
			return false;
	return true;
}

int demSNT(int a[], int n){
	int dem = 0;
	for(int i = 0 ; i < n; i++)
		if(kiemtraSNT(a[i]))
			dem++;
			
	return dem;
}

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n];
	
	nhapMang(a,n);
	xuatMang(a,n);
	
	int dem = demSNT(a, n);
	
	printf("\nMang co tat ca %d so nguyen to", dem);
	
	
	return 0;
}
