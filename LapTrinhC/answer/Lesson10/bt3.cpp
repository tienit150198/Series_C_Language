#include <stdio.h>

int tinhMu(int x, int n){
	int kq = 1;
	
	for(int i = 1 ; i <= n ; i++)
		kq *= x;
	
	return kq;
}

int main(){
	
	int x,n;
	printf("Nhap x - n: ");
	scanf("%d %d", &x, &n);
	
	printf("ket qua = %d", tinhMu(x,n));
	
	return 0;
}
