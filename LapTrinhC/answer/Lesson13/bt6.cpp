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

bool kiemtrale1(int a[], int n){
	int sole = 0;
	for(int i = 0 ; i < n; i++){
		if(a[i] % 2)
			sole++;
	}
	return sole == n;
}

bool kiemtrale2(int a[], int n){
	bool flag = true;
	for(int i = 0 ; i < n; i++){
		if(a[i] % 2 == 0){
			flag = false;
		}
	}
	return flag;
}

bool kiemtrale3(int a[], int n){
	for(int i = 0 ; i < n; i++){
		if(a[i] % 2 == 0){
			return false;
		}
	}
	return true;
}


int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n];
	nhapMang(a,n);

	xuatMang(a,n);
	
	if(kiemtrale3(a,n)){
		printf("\nMang toan so le");
	}
	else{
		printf("\nMang khong phai toan so le");
	}
	
	
	
	return 0;
}
